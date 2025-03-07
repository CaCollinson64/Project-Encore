#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DodgeComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class STYLISHCOMBATSTARTERKIT_API UDodgeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDodgeComponent();

	/**
	 * Called to perform a dodge in the given direction.
	 */
	void Dodge(const FVector& DodgeDirection);

protected:
	/** How strong the dash/roll impulse is. Tweak to your liking. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dodge")
	float DodgeStrength = 1000.0f;

	/** How long the dodge lasts before friction gets restored. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dodge")
	float DodgeDuration = 0.4f;

	/**
	 * Original friction values so we can restore them after the dodge.
	 * We'll store them at runtime in PerformDodge().
	 */
	float OriginalBrakingFrictionFactor;
	float OriginalGroundFriction;

	void PerformDodge(const FVector& InDirection);
	void EndDodge();
};
