#pragma once

#include "CoreMinimal.h"
#include "StylishCombatStarterKit/Gameplay/Character/Abilities/EncoreAbilities.h"
#include "ComboTypes.generated.h"


UENUM()
enum class EComboExecutionType : uint8
{
	None UMETA(DisplayName="None"),
	AnimationMontageBased UMETA(DisplayName="Animation Montage Based"),
	AbilityBased UMETA(DisplayName="Ability Based"),
};

/**
 * Enum to classify input or attack type.
 * Could be extended to contain "Light", "Heavy", "Special", "Aerial", etc.
 */
UENUM(BlueprintType)
enum class EComboInputType : uint8
{
	None UMETA(DisplayName="None"),
	Light UMETA(DisplayName="Light"),
	Heavy UMETA(DisplayName="Heavy"),
	Ranged UMETA(DisplayName="Ranged"),
	Special1 UMETA(DisplayName="Special 1"),
	Special2 UMETA(DisplayName="Special 2"),
	Jump UMETA(DisplayName="Jump / In Air"),
};

/**
 * Struct describing a single step (or node) in a combo chain.
 */
USTRUCT(BlueprintType)
struct FComboStep
{
	GENERATED_BODY()

	/** The input required to continue to this step from the previous step (e.g., Light, Heavy). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Input")
	EComboInputType InputType = EComboInputType::None;

	// This will cancel the montage and END animation (Used for blocking attacks type of animations)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Input")
	bool bCanEndComboInputReleased = false;

	// This will cancel the montage and END animation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Input", meta=(EditConditionHides, EditCondition="bCanEndComboInputReleased"))
	bool bStopExecutionWithInputCancelled = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Execution")
	EComboExecutionType ExecutionType = EComboExecutionType::None;

	UPROPERTY(VisibleAnywhere, Category="Combo|Execution", meta=(EditConditionHides, EditCondition="ExecutionType==EComboExecutionType::None"))
	FString ExecutionType_ToolTip = "No Execution type is selected!";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Execution", meta=(EditConditionHides, EditCondition="ExecutionType==EComboExecutionType::AbilityBased"))
	TSoftClassPtr<UEncoreAbilities> Ability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Execution", meta=(EditConditionHides, EditCondition="ExecutionType==EComboExecutionType::AnimationMontageBased"))
	UAnimMontage* AnimationMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Execution", meta=(EditConditionHides, EditCondition="ExecutionType==EComboExecutionType::AnimationMontageBased"))
	FName StartSectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Execution", meta=(EditConditionHides, EditCondition="ExecutionType==EComboExecutionType::AnimationMontageBased"))
	float PlayRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Rank")
	int UnlockAtRank = 0;

	/** How long after we start this step the player can press the next input to continue. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Timing")
	float ComboWindow = 0.5f;

	/** Overall duration of this attack or how long we 'lock' the player. (Could tie to anim length.) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Timing")
	float AttackDuration = 0.7f;

	/** Damage inflicted by this step. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Damage")
	float AttackDamage = 10.f;

	/** Stun time inflicted on the enemy, if applicable. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Damage")
	float AttackStunTime = 0.3f;

	/** Whether this step grants i-frames (invincibility) to the player. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Advanced")
	bool bGrantsIFrames = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Hit")
	bool bSetHitAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Hit", meta=(EditConditionHides, EditCondition="bSetHitAnimation"))
	UAnimMontage* HitMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Hit", meta=(EditConditionHides, EditCondition="bSetHitAnimation"))
	FName HitStartSectionName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Hit", meta=(EditConditionHides, EditCondition="bSetHitAnimation"))
	float HitPlayRate = 1.0f;
};

/**
 * A single combo chain might be an array of multiple FComboSteps.
 */
USTRUCT(BlueprintType)
struct FComboChain
{
	GENERATED_BODY()

	/** Name of this combo chain (e.g. "GroundLightCombo," "AerialHeavyCombo"). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|General")
	FName ChainName;

	/** Steps that define this combo chain. Each step can branch to another via NextStepsByInput. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Steps", meta=(TitleProperty="InputType"))
	TArray<FComboStep> Steps;
};
