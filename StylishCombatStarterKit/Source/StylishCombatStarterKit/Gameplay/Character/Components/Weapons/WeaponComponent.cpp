#include "WeaponComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	// Default socket names (adjust as needed or override in Blueprint)
	HandSocketName = TEXT("HandSocket");
	BackSocketName = TEXT("BackSocket");

	bDebugLineTrace = false;
	bInfiniteAmmo = true;
}

// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// Spawn the weapon if a valid class has been set
	if (WeaponClass)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();
		SpawnParams.Instigator = GetOwner()->GetInstigator();

		CurrentWeapon = GetWorld()->SpawnActor<AWeaponActor>(WeaponClass, SpawnParams);

		if (CurrentWeapon)
		{
			// Begin with equipping the weapon (which may play an equip montage or timer delay)
			EquipInHand();
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Weapon spawned; equipping..."));
			}
		}
		else
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to spawn weapon"));
			}
		}
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("WeaponClass is not set"));
		}
	}
}

// Called every frame
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// Additional per-frame logic if needed
}

void UWeaponComponent::AttachWeaponToSocket(FName SocketName)
{
	if (!CurrentWeapon) return;

	// Get the owner's skeletal mesh to attach the weapon
	USkeletalMeshComponent* OwnerMesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
	if (OwnerMesh)
	{
		CurrentWeapon->AttachToComponent(OwnerMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
	}
	else
	{
		if (GEngine)
		{
			FString Msg = FString::Printf(TEXT("Owner skeletal mesh not found, cannot attach weapon to socket: %s"), *SocketName.ToString());
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Msg);
		}
	}
}

void UWeaponComponent::EquipInHand()
{
	if (!CurrentWeapon) return;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Equipping weapon..."));
	}

	USkeletalMeshComponent* OwnerMesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
	float Delay = 1.0f;
	if (EquippingMontage && OwnerMesh && OwnerMesh->GetAnimInstance())
	{
		Delay = OwnerMesh->GetAnimInstance()->Montage_Play(EquippingMontage, 1.0f);
	}

	GetWorld()->GetTimerManager().SetTimer(EquipTimerHandle, this, &UWeaponComponent::FinishEquip, Delay, false);
}

void UWeaponComponent::FinishEquip()
{
	if (CurrentWeapon)
	{
		AttachWeaponToSocket(HandSocketName);
		CurrentWeapon->SetActorHiddenInGame(false);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Weapon equipped in hand"));
		}
	}
}

void UWeaponComponent::UnequipWeapon()
{
	if (!CurrentWeapon) return;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Unequipping weapon..."));
	}

	USkeletalMeshComponent* OwnerMesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
	float Delay = 1.0f;
	if (UnequippingMontage && OwnerMesh && OwnerMesh->GetAnimInstance())
	{
		Delay = OwnerMesh->GetAnimInstance()->Montage_Play(UnequippingMontage, 1.0f);
	}

	GetWorld()->GetTimerManager().SetTimer(UnequipTimerHandle, this, &UWeaponComponent::FinishUnequip, Delay, false);
}

void UWeaponComponent::FinishUnequip()
{
	if (!CurrentWeapon) return;

	USkeletalMeshComponent* OwnerMesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
	if (OwnerMesh && OwnerMesh->DoesSocketExist(BackSocketName))
	{
		AttachWeaponToSocket(BackSocketName);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Weapon unequipped to back"));
		}
	}
	else
	{
		CurrentWeapon->SetActorHiddenInGame(true);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Back socket not found. Weapon hidden"));
		}
	}
}

void UWeaponComponent::Shoot()
{
	if (!CurrentWeapon) return;

	// If ammo is not infinite, check and decrease bullet count
	if (!bInfiniteAmmo)
	{
		if (CurrentWeapon->CurrentBullets <= 0)
		{
			if (CurrentWeapon->GunStats.bAutoReload)
			{
				Reload();
			}
			return;
		}
		else
		{
			CurrentWeapon->CurrentBullets--;
		}
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, TEXT("Shooting weapon..."));
	}

	USkeletalMeshComponent* OwnerMesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
	float Delay = 0.0f;
	if (ShootingMontage && OwnerMesh && OwnerMesh->GetAnimInstance())
	{
		Delay = OwnerMesh->GetAnimInstance()->Montage_Play(ShootingMontage, 1.0f);
	}

	// For this example, we call FinishShoot immediately (or you could use a timer with Delay)
	FinishShoot();
}

void UWeaponComponent::FinishShoot()
{
	if (!CurrentWeapon) return;

	APlayerController* PC = Cast<APlayerController>(GetOwner()->GetInstigatorController());
	if (PC && CurrentWeapon->MuzzlePoint)
	{
		// Use the MuzzlePoint location as the start
		FVector Start = CurrentWeapon->MuzzlePoint->GetComponentLocation();
		FVector End = Start;

		// Get the center of the screen world direction
		FVector WorldLocation, WorldDirection;
		int32 ViewportSizeX, ViewportSizeY;
		PC->GetViewportSize(ViewportSizeX, ViewportSizeY);
		FVector2D ScreenCenter(ViewportSizeX / 2.f, ViewportSizeY / 2.f);
		if (PC->DeprojectScreenPositionToWorld(ScreenCenter.X, ScreenCenter.Y, WorldLocation, WorldDirection))
		{
			End = Start + (WorldDirection * CurrentWeapon->GunStats.Range);
		}

		FHitResult HitResult;
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(GetOwner());
		QueryParams.AddIgnoredActor(CurrentWeapon);

		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, QueryParams);

		if (bDebugLineTrace)
		{
			DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f, 0, 1.0f);
		}

		if (bHit)
		{
			Hit(HitResult);
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, TEXT("Line trace hit something!"));
			}
		}
		else
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, TEXT("Line trace did not hit any target."));
			}
		}

		// Trigger the blueprint shoot effects on the weapon actor
		CurrentWeapon->ShootEffects();
	}
}

void UWeaponComponent::Reload()
{
	if (!CurrentWeapon) return;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Reloading weapon..."));
	}

	USkeletalMeshComponent* OwnerMesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
	float Delay = CurrentWeapon->GunStats.ReloadTime;
	if (ReloadingMontage && OwnerMesh && OwnerMesh->GetAnimInstance())
	{
		Delay = OwnerMesh->GetAnimInstance()->Montage_Play(ReloadingMontage, 1.0f);
	}

	GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &UWeaponComponent::FinishReload, Delay, false);
}

void UWeaponComponent::FinishReload()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Weapon reloaded"));
	}

	// Refill magazine
	if (CurrentWeapon)
	{
		CurrentWeapon->CurrentBullets = CurrentWeapon->GunStats.MagazineSize;
	}
}
