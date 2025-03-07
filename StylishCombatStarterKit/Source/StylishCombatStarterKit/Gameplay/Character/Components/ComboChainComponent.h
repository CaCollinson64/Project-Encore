#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitComponent.h"
#include "BaseClasses/InteroperableComponent.h"
#include "StylishCombatStarterKit/Gameplay/Character/Profile/CharacterProfile.h"
#include "ComboChainComponent.generated.h"


class UAbilitySubsystem;
/**
 * UComboChainComponent
 *
 * Attaches to a Character to manage multiple combo chains,
 * track current steps, and activate abilities from each step.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), BlueprintType, Blueprintable)
class STYLISHCOMBATSTARTERKIT_API UComboChainComponent : public UInteroperableComponent
{
	GENERATED_BODY()

public:	
	UComboChainComponent();

	virtual void FindOwner() override;
	
	UPROPERTY()
	UAbilitySubsystem* OwnerAbilitySystem;

	UPROPERTY()
	UHitComponent* OwnerHitComponent;
	
	/** Called by the Character whenever a combo input occurs. E.g. Light, Heavy, etc. */
	UFUNCTION(BlueprintCallable, Category="Combo")
	void OnComboInput(EComboInputType InputType);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Settings")
	int CharacterRank;

	/** Stop the current combo outright (e.g. player is hit or time expires). */
	UFUNCTION(BlueprintCallable, Category="Combo")
	void ResetCombo();

	UFUNCTION(BlueprintCallable, Category="Combo")
	void TriggerExit();
	/** DataAsset that defines the combos and input mapping. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Settings")
	UCharacterProfile* CharacterProfile;

protected:
	// Optional: if we want to do time-based checks (AttackDuration, ComboWindow) each frame.
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void BeginPlay() override;

protected:


	/** If true, we’ll do time-based checks in Tick(). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Settings")
	bool bEnableTick = false;

	/** All combos we’re using, copied from CharacterProfile->ComboChains at runtime. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Combo|Runtime", meta=(AllowPrivateAccess="true"))
	TArray<FComboChain> ComboChains;

	/** Index of the active chain, or -1 if none. */
	int32 CurrentChainIndex = -1;

	/** Index of the current step in that chain, or -1 if none. */
	int32 CurrentStepIndex = -1;

	/** Time we started the current combo step. */
	float StepStartTime = 0.f;

	/** Start the specified chain at a given step. */
	void StartChain(int32 ChainIndex, int32 StepIndex);

	/** Enter a new step in the chain (play anim, do movement, call ability, etc.). */
	void StartComboStep(int32 StepIndex);

	/** Check if we’re still within the current step’s combo window. */
	bool IsWithinComboWindow() const;

	/** Called when AttackDuration elapses for the current step. */
	void OnStepFinished(const FComboStep& FinishedStep);

	/** Movement override, i-frames, quick damage checks, etc. */
	void ApplyComboStepEffects(const FComboStep& Step);
};
