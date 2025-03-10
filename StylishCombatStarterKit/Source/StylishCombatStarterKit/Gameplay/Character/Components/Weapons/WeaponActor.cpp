#include "WeaponActor.h"
#include "Engine/Engine.h"
#include "Components/SceneComponent.h"

// Sets default values
AWeaponActor::AWeaponActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// Set default gun stats
	GunStats.Range = 1000.0f;
	GunStats.Damage = 25.0f;
	GunStats.FireRate = 0.2f;
	GunStats.ReloadTime = 2.0f;
	GunStats.MagazineSize = 30;
	GunStats.bAutoReload = true;

	// Create a default root component if none exists
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
	}

	// Create the muzzle point component and attach it to the default root
	MuzzlePoint = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzlePoint"));
	MuzzlePoint->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AWeaponActor::BeginPlay()
{
	Super::BeginPlay();

	// Initialize the current bullet count to the magazine size
	CurrentBullets = GunStats.MagazineSize;

	// Print a debug message indicating that the weapon is ready
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("WeaponActor spawned and ready"));
	}
}

// Called every frame
void AWeaponActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
