// Copyright Epic Games, Inc. All Rights Reserved.

#include "BaseCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Net/UnrealNetwork.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/Fighting/ComboChainComponent.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ATP_ThirdPersonCharacter

void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	if(HasAuthority())
	{
		if(IsValid(AbilitySubsystem) == false || IsValid(AbilitySubsystem->CharacterAttributes) == false ) return;

		AbilitySubsystem->SetupAbilities();
		AbilitySubsystem->SetupEffects();
	}
}

void ABaseCharacter::AbilityInputBindingPressedHandler(EAbilityInput AbilityInput)
{
	AbilitySubsystem->StartAbilityByInput(AbilityInput);
}

void ABaseCharacter::AbilityInputBindingReleasedHandler(EAbilityInput AbilityInput)
{
	AbilitySubsystem->EndAbilityByInput(AbilityInput);
}

void ABaseCharacter::AbilityInputBindingEndHandler(EAbilityInput abilityInput)
{
	AbilitySubsystem->EndAbilityByInput(abilityInput);
}

void ABaseCharacter::AbilityInputBindingEarlyEndHandler(EAbilityInput abilityInput)
{
	AbilitySubsystem->EndAbilityEarlyByInput(abilityInput);
} 


ABaseCharacter::ABaseCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate
	AbilitySubsystem = CreateDefaultSubobject<UAbilitySubsystem>(TEXT("AbilitySystem"));

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create the DodgeComponent
	DodgeComponent = CreateDefaultSubobject<UDodgeComponent>(TEXT("DodgeComponent"));
	ComboChainComp   = CreateDefaultSubobject<UComboChainComponent>(TEXT("ComboChainComponent"));

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABaseCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ABaseCharacter::StartJumping);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABaseCharacter::Move);

		
		// Bind the Dodge input
		if (DodgeAction)
		{
			// Typically, dodge triggers the moment you press the button 
			// so we use ETriggerEvent::Started or Completed.
			EnhancedInputComponent->BindAction(DodgeAction, ETriggerEvent::Started, this, &ABaseCharacter::HandleDodge);
		}
		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABaseCharacter::Look);
		for (const auto binding : AbilitySubsystem->AbilitiesInputBindings.Bindings)
		{
			switch (binding.Value.InputType)
			{
			case EInputType::IT_StartRelease:
				{
					EnhancedInputComponent->BindAction(binding.Value.InputAction, ETriggerEvent::Started, this, &ABaseCharacter::AbilityInputBindingPressedHandler, binding.Key);
					EnhancedInputComponent->BindAction(binding.Value.InputAction, ETriggerEvent::Completed, this, &ABaseCharacter::AbilityInputBindingEarlyEndHandler, binding.Key);
					EnhancedInputComponent->BindAction(binding.Value.InputAction, ETriggerEvent::Canceled, this, &ABaseCharacter::AbilityInputBindingEarlyEndHandler, binding.Key);
					break;
				}
			case EInputType::IT_Released:
				{
					EnhancedInputComponent->BindAction(binding.Value.InputAction, ETriggerEvent::Completed, this, &ABaseCharacter::AbilityInputBindingPressedHandler, binding.Key);
					break;
				}
			case EInputType::IT_Started:
				{
					EnhancedInputComponent->BindAction(binding.Value.InputAction, ETriggerEvent::Started, this, &ABaseCharacter::AbilityInputBindingPressedHandler, binding.Key);
					break;
				}
			case EInputType::IT_Triggered:
				{
					EnhancedInputComponent->BindAction(binding.Value.InputAction, ETriggerEvent::Triggered, this, &ABaseCharacter::AbilityInputBindingPressedHandler, binding.Key);
					break;
				}
			default: ;
			}


		}

					
		// --- NEW: Bind combos from the CharacterProfile (if any) ---
		BindComboInputsFromProfile(EnhancedInputComponent);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ABaseCharacter::StartJumping()
{
	if (!bCanJump) return;
	Jump();
}

void ABaseCharacter::HandleDodge()
{
	if (!DodgeComponent) return;

	// Get movement input to decide a dodge direction
	// (Alternatively, just dodge in the direction the character is facing.)
	FVector DodgeDir = GetActorForwardVector(); // default forward

	// If you want directional dodge from stick input, gather it:
	if (Controller && GetCharacterMovement())
	{
		// For example, you might use your MoveAction's Vector2D or store 
		// the last movement input. Here's a quick snippet:
		
		const FVector InputVector = GetLastMovementInputVector();
		if (!InputVector.IsNearlyZero())
		{
			DodgeDir = InputVector.GetSafeNormal();
		}
	}

	// Pass the direction to the DodgeComponent
	DodgeComponent->Dodge(DodgeDir);
}

void ABaseCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
		
		FVector InputDirection = (ForwardDirection * MovementVector.Y) + (RightDirection * MovementVector.X);
		InputDirection.Normalize();
		SetInputForTargeting(InputDirection);
		
	}
}

void ABaseCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X * CameraSensitivity);
		AddControllerPitchInput(LookAxisVector.Y * CameraSensitivity);
	}
}

void ABaseCharacter::BindComboInputsFromProfile(UEnhancedInputComponent* EnhancedInputComp)
{
	// If we have a ComboChainComp, see if it has a CharacterProfile
	if (ComboChainComp && ComboChainComp->CharacterProfile)
	{
		UCharacterProfile* Profile = ComboChainComp->CharacterProfile;
		
		// For each entry in InputRegister (which maps EComboInputType -> UInputAction)
		for (const TPair<EComboInputType, UInputAction*>& Pair : Profile->InputRegister)
		{
			if (Pair.Value) // ensure it’s not null
			{
				// We'll bind to ETriggerEvent::Started for a typical "press"
				EnhancedInputComp->BindAction(
					Pair.Value,
					ETriggerEvent::Started,
					this,
					&ABaseCharacter::OnComboActionTriggered,
					Pair.Key // pass the EComboInputType as a payload
				);

				EnhancedInputComp->BindAction(
				Pair.Value,
				ETriggerEvent::Completed,
				this,
				&ABaseCharacter::OnComboActionCompleted,
				Pair.Key // pass the EComboInputType as a payload
			);
			}
		}
	}
}

void ABaseCharacter::OnComboActionTriggered(EComboInputType InputType)
{
	// Pass the input to the ComboChainComp
	if (ComboChainComp)
	{
		ComboChainComp->OnComboInput(InputType);
	}
}

void ABaseCharacter::OnComboActionCompleted(EComboInputType InputType)
{
	// Pass the input to the ComboChainComp
	if (ComboChainComp)
	{
		ComboChainComp->TriggerExit();
	}
}
