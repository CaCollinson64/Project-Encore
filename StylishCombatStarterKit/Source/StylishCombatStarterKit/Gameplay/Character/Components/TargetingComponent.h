#pragma once

#include "CoreMinimal.h"
#include "BaseClasses/InteroperableComponent.h"
#include "TargetingComponent.generated.h"

/** Enum to select how targets are chosen */
UENUM(BlueprintType)
enum class ETargetSelectionMethod : uint8
{
	SingleTarget      UMETA(DisplayName = "Single Target"),
	MultiTarget       UMETA(DisplayName = "Multi Target")
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class STYLISHCOMBATSTARTERKIT_API UTargetingComponent : public UInteroperableComponent
{
	GENERATED_BODY()

public:
	UTargetingComponent();

	// Only use if this character is the player
	UPROPERTY()
	USceneComponent* Camera;
	
	/** Array of soft classes for valid targets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	TArray<TSoftClassPtr<AActor>> TargetableClasses;

	/** Maximum distance to consider a target valid */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float TargetingRange = 1000.f;

	/** Field of view (in degrees) to consider a target “in front” */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float FieldOfView = 45.f;

	/** Maximum number of targets for multi-target mode */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	int32 MaxTargets = 3;

	/** Target selection mode */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	ETargetSelectionMethod TargetSelectionMethod = ETargetSelectionMethod::SingleTarget;

	/** Finds valid targets based on criteria */
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	TArray<AActor*> FindTargets();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction) override;
};
