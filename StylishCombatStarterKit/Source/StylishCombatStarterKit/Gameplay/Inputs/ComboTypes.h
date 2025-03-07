#pragma once

#include "CoreMinimal.h"
#include "StylishCombatStarterKit/Gameplay/Abilities/EncoreAbilities.h"
#include "ComboTypes.generated.h"


/**
 * Enum to classify input or attack type.
 * Could be extended to contain "Light", "Heavy", "Special", "Aerial", etc.
 */
UENUM(BlueprintType)
enum class EComboInputType : uint8
{
	Light UMETA(DisplayName="Light"),
	Heavy UMETA(DisplayName="Heavy"),
	Special UMETA(DisplayName="Special"),
	Aerial UMETA(DisplayName="Aerial"),
	// etc...
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
	EComboInputType InputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Animation")
	UAnimMontage* AnimationMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Animation")
	FName StartSectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Animation")
	float PlayRate;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combo|Steps")
	TArray<FComboStep> Steps;
};
