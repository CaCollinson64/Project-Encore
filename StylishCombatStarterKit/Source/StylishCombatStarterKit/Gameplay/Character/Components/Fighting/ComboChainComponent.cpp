#include "ComboChainComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "AbilitySystemComponent.h"
#include "ComboPolicies/ComboBlockPolicy.h"
#include "ComboPolicies/ComboStartPolicy.h"
#include "ComboPolicies/ComboValidationPolicy.h"
#include "StylishCombatStarterKit/Gameplay/Character/Abilities/AbilitySubsystem.h"

UComboChainComponent::UComboChainComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UComboChainComponent::FindOwner()
{
	Super::FindOwner();
	OwnerAbilitySystem = Cast<UAbilitySubsystem>(Owner->GetComponentByClass(UAbilitySubsystem::StaticClass()));
	OwnerMovementComponent = Cast<UCharacterMovementComponent>(Owner->GetComponentByClass(UCharacterMovementComponent::StaticClass()));
	OwnerTargetingComponent= Cast<UTargetingComponent>(Owner->GetComponentByClass(UTargetingComponent::StaticClass()));
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

	if (bIsGettingHit) return;
	SnappingLogic();

	if (bCheckValidation)
	{
		if (!ValidationCheck(CurrentChainIndex, CurrentStepIndex))
		{
			bCheckValidation = false;
			const FComboStep& Step = ComboChains[CurrentChainIndex].Steps[CurrentStepIndex];

			// If we're mid-chain, see if we can go to the next step
			if (Step.bForceEndPolicyWithValidation)
			{
				for (auto endPolicy : Step.EndPolicies)
				{
					if (endPolicy)
					{
						endPolicy->ExecuteCombo(Step, Owner);
					}
				}

				ResetCombo();
			}
		}
	}
}

void UComboChainComponent::OnComboInput(EComboInputType InputType)
{
	if (bIsGettingHit) return;
	
	// If we're not currently in a chain, try to start one whose first step matches the input
	if (CurrentChainIndex == -1)
	{
		for (int32 i = 0; i < ComboChains.Num(); i++)
		{
			if (ComboChains[i].Steps.Num() > 0)
			{
				const FComboStep& FirstStep = ComboChains[i].Steps[0];
				if (FirstStep.InputType == InputType && ValidationCheck(i, 0))
				{
					bOnce = false;
					StartChain(i, 0);
					return;
				}
			}
		}
	}
	else
	{
		const FComboStep& Step = ComboChains[CurrentChainIndex].Steps[CurrentStepIndex];
		float Elapsed = GetWorld()->GetTimeSeconds() - StepStartTime;
		
		if (Elapsed <= Step.AttackDuration)
			return;
		
		// If we’re mid-chain, see if we can go to the next step
		if (!IsWithinComboWindow())
		{
			// The combo input was too late
			ResetCombo();
			OnComboInput(InputType);
			return;
		}

		bOnce = false;
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


void UComboChainComponent::ExecuteHitOnEnemy()
{
	if (CurrentChainIndex < 0 || CurrentStepIndex < 0)
		return;

	FComboStep& Step = ComboChains[CurrentChainIndex].Steps[CurrentStepIndex];

	if (Defender)
	{
		auto FighterComponent = Cast<UComboChainComponent>(Defender->GetComponentByClass(StaticClass()));
		FighterComponent->ReleaseHitOnEnemy();
	}
	
	Defender = OwnerTargetingComponent->CurrentTarget;
	if (Defender == nullptr) return;

	auto FighterComponent = Cast<UComboChainComponent>(Defender->GetComponentByClass(StaticClass()));
	FighterComponent->PlayHitAnimation(Step);
}

void UComboChainComponent::ReleaseHitOnEnemy()
{
	if (Defender == nullptr) return;

	auto FighterComponent = Cast<UComboChainComponent>(Defender->GetComponentByClass(StaticClass()));
	FighterComponent->StopHitAnimation();
	Defender = nullptr;
}

void UComboChainComponent::PlayHitAnimation(FComboStep& Step)
{
	if (!CharacterProfile->HitRegister.Contains(Step.HitSetup)) return;
	
	const FHitReaction& Reaction = CharacterProfile->HitRegister[Step.HitSetup];
	bIsGettingHit = true;
	
	PlayAnimMontage(Reaction.HitReactionMontage, Reaction.inPlayRate, Reaction.SectionName);
}

void UComboChainComponent::StopHitAnimation()
{
	bIsGettingHit = false;
}

void UComboChainComponent::TriggerExit()
{
	if (CurrentChainIndex < 0 || CurrentStepIndex < 0)
		return;

	const FComboStep& Step = ComboChains[CurrentChainIndex].Steps[CurrentStepIndex];

	// If we're mid-chain, see if we can go to the next step
	if (!Step.bCanEndComboInputReleased || bOnce)
		return;

	bOnce = true;
	bCheckValidation = false;
	StepStartTime = GetWorld()->GetTimeSeconds();

	for (auto endPolicy : Step.EndPolicies)
	{
		if (endPolicy)
		{
			endPolicy->ExecuteCombo(Step, Owner);
		}
	}
}

void UComboChainComponent::StartChain(int32 ChainIndex, int32 StepIndex)
{
	bOnce = false;
	CurrentChainIndex = ChainIndex;
	StartComboStep(StepIndex);
}

bool UComboChainComponent::ValidationCheck(int32 ChainIndex, int32 StepIndex)
{
	if (ChainIndex < 0 || StepIndex < 0) return true;
	
	const FComboStep& StepData = ComboChains[ChainIndex].Steps[StepIndex];

	bool bStartExecution = true;
	for (auto ValPolicy : StepData.ValidationPolicies)
	{
		if (!ValPolicy->CanExecuteCombo(StepData, Owner))
		{
			bStartExecution = false;
			break;
		}
	}
	
	if (!bStartExecution)
	{
		return false;
	}

	return true;
}

void UComboChainComponent::StartComboStep(int32 StepIndex)
{
	if (bIsGettingHit) return;
	if (Owner == nullptr) return;
	bOnce = false;

	CurrentStepIndex = StepIndex;
	const FComboStep& StepData = ComboChains[CurrentChainIndex].Steps[StepIndex];

	StepStartTime = GetWorld()->GetTimeSeconds();

	// Shut down the combo if you haven't unlocked it yet.
	if (CharacterRank < StepData.UnlockAtRank) return;
	
	// 1) Movement / effects
	ApplyComboStepEffects(StepData);

	// 2) Possibly play an animation montage
	//    (You can do that in your character or here, using an AnimInstance + Montage.)
	bInvincible = StepData.bGrantsIFrames;

	for (auto ValPolicy : StepData.InputOverridePolicies)
	{
		ValPolicy->BlockControls(StepData, Owner);
	}

	for (auto startPolicy : StepData.StartPolicies)
	{
		if (startPolicy)
		{
			startPolicy->ExecuteCombo(StepData, Owner);
		}
	}

	bCheckValidation = true;
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
