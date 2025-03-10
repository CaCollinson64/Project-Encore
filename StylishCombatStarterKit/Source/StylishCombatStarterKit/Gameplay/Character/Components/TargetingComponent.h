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
	// Sets default values for this component's properties
	UTargetingComponent();

	UFUNCTION(BlueprintImplementableEvent, Category = "Targeting")
	void HandleGettingTargeted(bool bTarget);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Selection")
	bool bIsEnemy = false;
	
	UPROPERTY(EditAnywhere, Category = "Enemy Selection")
	bool inputBasedSelection = false;
	
	UPROPERTY(EditAnywhere, Category = "Enemy Selection")
	float TraceRadius = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "Enemy Selection")
	float MaxDistance = 1500.0f;

	UPROPERTY(EditAnywhere, Category = "Enemy Selection")
	TSubclassOf<AActor> EnemyClass;

	UPROPERTY(EditAnywhere, Category = "Enemy Selection")
	TEnumAsByte<ECollisionChannel> TraceChannel;

	UFUNCTION(BlueprintCallable)
	void IdentifyEnemies();
	void SetEnemyGettingTargeted(AActor* Target, bool bTarget);

	UPROPERTY()
	AActor* CurrentTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	FVector InputDirection;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	void UpdateClosestEnemy();
	TArray<AActor*> IdentifiedEnemies;
	
	void UpdateEnemyBasedOnInput();
	FVector GetPlayerInputDirection() const;
	bool IsDirectionMatching(FVector EnemyDirection, FVector PlayerInputDirection) const;
};
