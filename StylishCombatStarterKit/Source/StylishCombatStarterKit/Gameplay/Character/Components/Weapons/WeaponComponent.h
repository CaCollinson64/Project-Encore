#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponActor.h" // For the weapon actor pointer and gun stats
#include "WeaponComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) , Blueprintable, BlueprintType)
class STYLISHCOMBATSTARTERKIT_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/** The spawned weapon actor instance */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Weapon")
	AWeaponActor* CurrentWeapon;

	/** Timer handle for reloading delay */
	FTimerHandle ReloadTimerHandle;

	/** Timer handle for equipping delay */
	FTimerHandle EquipTimerHandle;

	/** Timer handle for unequipping delay */
	FTimerHandle UnequipTimerHandle;

	/** Timer handle for shooting delay */
	FTimerHandle ShootTimerHandle;

	/** Helper function to attach the weapon to a specified socket */
	void AttachWeaponToSocket(FName SocketName);

	/** Callback after equip delay finishes */
	void FinishEquip();

	/** Callback after unequip delay finishes */
	void FinishUnequip();

	/** Callback after shooting delay finishes */
	void FinishShoot();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Soft reference to the weapon class to spawn (set this in Blueprint) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Weapon")
	TSubclassOf<AWeaponActor> WeaponClass;

	/** Socket name for equipping the weapon in hand */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Weapon")
	FName HandSocketName;

	/** Socket name for unequipping (attaching to back). If missing, the weapon will be hidden */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Weapon")
	FName BackSocketName;

	/** Montage for equipping the weapon */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Weapon|Montages")
	UAnimMontage* EquippingMontage;

	/** Montage for unequipping the weapon */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Weapon|Montages")
	UAnimMontage* UnequippingMontage;

	/** Montage for shooting */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Weapon|Montages")
	UAnimMontage* ShootingMontage;

	/** Montage for reloading */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Weapon|Montages")
	UAnimMontage* ReloadingMontage;

	/** Equips the weapon in the hand socket (with montage or timer delay) */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void EquipInHand();

	/** Unequips the weapon to the back socket or hides it if none exists (with montage or timer delay) */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void UnequipWeapon();

	/** Fires the weapon using a shooting montage or timer delay */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void Shoot();

	/** Initiates the reload process using a montage or timer delay */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void Reload();
	void FinishReload();

	/**
	 * Blueprint implementable event to handle hit logic when a line trace detects an impact.
	 * @param HitResult - The result data from the line trace.
	 */
	UFUNCTION(BlueprintImplementableEvent, Category="Weapon")
	void Hit(const FHitResult& HitResult);

	/** Toggle debug line trace drawing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
	bool bDebugLineTrace;

	/** If true, the ammo is infinite (magazine count is not decremented) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
	bool bInfiniteAmmo;
};
