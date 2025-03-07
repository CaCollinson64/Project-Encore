#include "ComboChainComponent.h"
#include "CharacterProfile.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "AbilitySystemComponent.h"
#include "StylishCombatStarterKit/Gameplay/Abilities/AbilitySubsystem.h"

UComboChainComponent::UComboChainComponent()
{
	PrimaryComponentTick.bCanEverTick = bEnableTick;
}

void UComboChainComponent::FindOwner()
{
	Super::FindOwner();
	OwnerAbilitySystem = Cast<UAbilitySubsystem>(Owner->GetComponentByClass(UAbilitySubsystem::StaticClass()));
	OwnerHitComponent = Cast<UHitComponent>(Owner->GetComponentByClass(UHitComponent::StaticClass()));
}

void UComboChainComponent::BeginPlay()
{
	Super::BeginPlay();

	// Copy combos from the assigned CharacterProfile into local array
	if (CharacterProfile)
	{
		ComboChains = CharacterProfile->ComboChains;
	}
}

void UComboChainComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// If we have a valid chain & step, watch for AttackDuration expiration
	if (CurrentChainIndex >= 0 && CurrentChainIndex < ComboChains.Num() &&
		CurrentStepIndex >= 0 && CurrentStepIndex < ComboChains[CurrentChainIndex].Steps.Num())
	{
		const FComboStep& CurrentStep = ComboChains[CurrentChainIndex].Steps[CurrentStepIndex];
		float Elapsed = GetWorld()->GetTimeSeconds() - StepStartTime;
		
		if (Elapsed >= CurrentStep.AttackDuration)
		{
			// This step’s "locked" portion is done; we can call OnStepFinished
			OnStepFinished(CurrentStep);
		}
	}
}

void UComboChainComponent::OnComboInput(EComboInputType InputType)
{
	// If we're not currently in a chain, try to start one whose first step matches the input
	if (CurrentChainIndex == -1)
	{
		for (int32 i = 0; i < ComboChains.Num(); i++)
		{
			if (ComboChains[i].Steps.Num() > 0)
			{
				const FComboStep& FirstStep = ComboChains[i].Steps[0];
				if (FirstStep.InputType == InputType)
				{
					StartChain(i, 0);
					return;
				}
			}
		}
	}
	else
	{
		// If we’re mid-chain, see if we can go to the next step
		if (!IsWithinComboWindow())
		{
			// The combo input was too late
			ResetCombo();
			return;
		}

		// Attempt to move to the next step in the chain
		const FComboChain& Chain = ComboChains[CurrentChainIndex];
		int32 NextStepIndex = CurrentStepIndex + 1;

		if (Chain.Steps.IsValidIndex(NextStepIndex))
		{
			// If the next step’s input type matches the pressed input, continue
			const FComboStep& NextStep = Chain.Steps[NextStepIndex];
			if (NextStep.InputType == InputType)
			{
				StartComboStep(NextStepIndex);
			}
			else
			{
				ResetCombo();
			}
		}
		else
		{
			// No more steps in this chain
			ResetCombo();
		}
	}
}

void UComboChainComponent::ResetCombo()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ResetCombo"));
	CurrentChainIndex = -1;
	CurrentStepIndex = -1;
}

void UComboChainComponent::TriggerExit()
{
	if (CurrentChainIndex < 0 || CurrentStepIndex < 0)
		return;

	const FComboStep& Step = ComboChains[CurrentChainIndex].Steps[CurrentStepIndex];

	// If we're mid-chain, see if we can go to the next step
	if (!Step.bCanEndComboInputReleased)
		return;

	if (Step.bStopExecutionWithInputCancelled)
	{
		if (Step.ExecutionType == EComboExecutionType::AnimationMontageBased)
		{
			StopMontage(Step.AnimationMontage);
		}
		else if (Step.ExecutionType == EComboExecutionType::AbilityBased)
		{
			auto LoadedAbility = Cast<UEncoreAbilities>(Step.Ability.LoadSynchronous());
			if (Owner && OwnerAbilitySystem && Step.Ability)
			{
				OwnerAbilitySystem->CancelAbility(LoadedAbility);
			}
		}
	}


	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("TriggerExit"));
	ResetCombo();
}

void UComboChainComponent::StartChain(int32 ChainIndex, int32 StepIndex)
{
	CurrentChainIndex = ChainIndex;
	StartComboStep(StepIndex);
}

void UComboChainComponent::StartComboStep(int32 StepIndex)
{
	if (Owner == nullptr) return;

	CurrentStepIndex = StepIndex;
	StepStartTime = GetWorld()->GetTimeSeconds();

	const FComboStep& StepData = ComboChains[CurrentChainIndex].Steps[StepIndex];

	// Shut down the combo if you haven't unlocked it yet.
	if (CharacterRank < StepData.UnlockAtRank) return;
	
	// 1) Movement / effects
	ApplyComboStepEffects(StepData);

	// 2) Possibly play an animation montage
	//    (You can do that in your character or here, using an AnimInstance + Montage.)
	OwnerHitComponent->bInvincible = StepData.bGrantsIFrames;

	if (StepData.ExecutionType == EComboExecutionType::AnimationMontageBased)
	{
		PlayAnimMontage(StepData.AnimationMontage, StepData.PlayRate, StepData.StartSectionName);
	}
	else if (StepData.ExecutionType == EComboExecutionType::AbilityBased)
	{
		auto LoadedAbility = StepData.Ability.LoadSynchronous();
		if (Owner && OwnerAbilitySystem && StepData.Ability)
		{
			// We "give" the ability (create a Spec) to the subsystem, then activate it
			FGameplayAbilitySpec AbilitySpec(LoadedAbility, 1, INDEX_NONE, this);
			FGameplayAbilitySpecHandle SpecHandle = OwnerAbilitySystem->GiveAbility(AbilitySpec);
			OwnerAbilitySystem->TryActivateAbility(SpecHandle);
		}
	}
}

void UComboChainComponent::OnStepFinished(const FComboStep& FinishedStep)
{
	// Called once the AttackDuration is reached.
	// If you want the player to remain "ready for next input" until ComboWindow ends,
	// you can do nothing here. Alternatively, you can auto ResetCombo if you prefer.
	// 
	// For simplicity, we’ll do nothing—allowing the user to press input if within the window.
	// But if we want to forcibly end the chain, uncomment:
	//ResetCombo();
}

bool UComboChainComponent::IsWithinComboWindow() const
{
	if (CurrentChainIndex < 0 || CurrentStepIndex < 0)
		return false;

	const FComboStep& Step = ComboChains[CurrentChainIndex].Steps[CurrentStepIndex];
	float Elapsed = GetWorld()->GetTimeSeconds() - StepStartTime;
	return (Elapsed <= Step.ComboWindow);
}

void UComboChainComponent::ApplyComboStepEffects(const FComboStep& Step)
{
	// 2) I-frames
	if (Step.bGrantsIFrames)
	{
		// e.g. set "bIsInvincible = true" on the character, 
		// and use a timer or OnStepFinished to turn it off
	}

	// 3) If you want quick "fake" damage logic, do a trace or notify. 
	//    But real combos often rely on animation notifies or collision triggers.
}
