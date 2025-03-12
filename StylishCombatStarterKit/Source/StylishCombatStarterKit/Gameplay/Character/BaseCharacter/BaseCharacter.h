// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "StylishCombatStarterKit/Gameplay/Character/Abilities/AbilitySubsystem.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/DodgeComponent.h"
#include "BaseCharacter.generated.h"

enum class EComboInputType : uint8;
class UComboChainComponent;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class STYLISHCOMBATSTARTERKIT_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
	bool bCanJump = true;

	UFUNCTION(BlueprintCallable)
	void StartJumping();
	
	UFUNCTION(BlueprintImplementableEvent, Category="Targeting")
	void SetInputForTargeting(FVector Input);	
	/** Our custom Dodge Component. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UDodgeComponent* DodgeComponent;

	/** The InputAction for dodging (assigned in Blueprint or DataAsset). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input")
	UInputAction* DodgeAction;

	// Input handler for dodge
	void HandleDodge();

	virtual void BeginPlay() override;
	void AbilityInputBindingPressedHandler(EAbilityInput abilityInput);
	void AbilityInputBindingReleasedHandler(EAbilityInput abilityInput);
	void AbilityInputBindingEndHandler(EAbilityInput abilityInput);
	void AbilityInputBindingEarlyEndHandler(EAbilityInput abilityInput);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
	UAbilitySubsystem* AbilitySubsystem;

	// Override GetLifetimeReplicatedProps
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/** Our new Combo Component. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UComboChainComponent* ComboChainComp;
	// --- COMBO BINDING ---
	/** Called when we want to pass a combo input to the ComboChainComponent. */
	void OnComboActionTriggered(EComboInputType InputType);
	void OnComboActionCompleted(EComboInputType InputType);

private:
	/** Helper to bind all the combos from the CharacterProfile to input. */
	void BindComboInputsFromProfile(UEnhancedInputComponent* EnhancedInputComp);

public:
	ABaseCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:

	virtual void NotifyControllerChanged() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
};

