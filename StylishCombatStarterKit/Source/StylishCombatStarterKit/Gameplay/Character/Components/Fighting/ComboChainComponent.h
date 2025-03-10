#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../BaseClasses/InteroperableComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/TargetingComponent.h"
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

	UPROPERTY(BlueprintReadWrite, Category="Combo")
	bool bIsSnapping;
	
	UPROPERTY()
	UAbilitySubsystem* OwnerAbilitySystem;

	UPROPERTY()
	UCharacterMovementComponent* OwnerMovementComponent;
	
	UPROPERTY()
	UTargetingComponent* OwnerTargetingComponent;

	/** Called by the Character whenever a combo input occurs. E.g. Light, Heavy, etc. */
	UFUNCTION(BlueprintCallable, Category="Combo")
	void OnComboInput(EComboInputType InputType);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Settings")
	int CharacterRank;

	/** Stop the current combo outright (e.g. player is hit or time expires). */
	UFUNCTION(BlueprintCallable, Category="Combo")
	void ResetCombo();

	float PlayedAtTime;
	float WaitSeconds;
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
	bool ValidationCheck(int32 ChainIndex, int32 StepIndex);

	bool bOnce = false;

	bool bCheckValidation;
	/** Enter a new step in the chain (play anim, do movement, call ability, etc.). */
	void StartComboStep(int32 StepIndex);

	/** Check if we’re still within the current step’s combo window. */
	bool IsWithinComboWindow() const;

	/** Called when AttackDuration elapses for the current step. */
	void OnStepFinished(const FComboStep& FinishedStep);

	/** Movement override, i-frames, quick damage checks, etc. */
	void ApplyComboStepEffects(const FComboStep& Step);


	/////////////// HIT COMPONENT

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	float Health = 100.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	bool bInvincible = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	bool bStunCharacter = false;

	UFUNCTION( BlueprintCallable )
	void PerformHitAnimation(bool bOverrideHitAnimation, UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);

	UFUNCTION( BlueprintCallable )
	void SetStunCharacter(bool StunCharacter);
	void ReduceHealth(float damage);
	void SnappingLogic();
 
	UPROPERTY(EditAnywhere, Category = "Snapping")
	float SnapSpeed = 10.0f;

	UPROPERTY(EditAnywhere, Category = "Snapping")
	float SnappingRadius = 250.0f;

	UPROPERTY(EditAnywhere, Category = "Snapping")
	float RotationSnapSpeed = 10.0f;
	
	UPROPERTY(EditAnywhere, Category = "Snapping")
	float OffsetDistance = 100.0f;

	UFUNCTION( BlueprintNativeEvent )
	void Death();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Hit")
	bool bIsPerformingHitAnimation = false;
};
