#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "WeaponActor.generated.h"

/** Structure to hold all gun related stats */
USTRUCT(BlueprintType)
struct FGunStats
{
	GENERATED_BODY()

public:
	/** How far the gun can shoot (line trace distance) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gun Stats")
	float Range;

	/** Damage per shot */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gun Stats")
	float Damage;

	/** Time between shots */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gun Stats")
	float FireRate;

	/** Time required to reload */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gun Stats")
	float ReloadTime;

	/** Magazine size (number of bullets) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gun Stats")
	int32 MagazineSize;

	/** Enable auto reload */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gun Stats")
	bool bAutoReload;
};

UCLASS()
class STYLISHCOMBATSTARTERKIT_API AWeaponActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AWeaponActor();

	/** Gun stats structure instance that can be edited in Blueprints */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Gun Stats")
	FGunStats GunStats;

	/** Current number of bullets in the magazine */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Weapon")
	int32 CurrentBullets;

	/** Muzzle point scene component (child of the default root) used as the start for line traces */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Weapon")
	USceneComponent* MuzzlePoint;

	/**
	 * Blueprint implementable event to trigger shoot effects (such as muzzle flash and sound).
	 * Implement this event in Blueprint for your weapon.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category="Weapon")
	void ShootEffects();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
