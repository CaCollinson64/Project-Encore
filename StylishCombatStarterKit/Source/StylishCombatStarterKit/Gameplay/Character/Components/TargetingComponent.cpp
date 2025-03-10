#include "TargetingComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"

// Sets default values for this component's properties
UTargetingComponent::UTargetingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame. You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	CurrentTarget = nullptr;
}

// Called when the game starts
void UTargetingComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UTargetingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(inputBasedSelection)
	{
		UpdateEnemyBasedOnInput();
	}
	else
	{
		UpdateClosestEnemy();
	}
}

void UTargetingComponent::IdentifyEnemies()
{
	if (!Owner) return;

	FVector PlayerLocation = Owner->GetActorLocation();
	TArray<FHitResult> HitResults;

	FCollisionShape Sphere = FCollisionShape::MakeSphere(TraceRadius);
	bool bHit = GetWorld()->SweepMultiByChannel(
		HitResults,
		PlayerLocation,
		PlayerLocation,
		FQuat::Identity,
		TraceChannel,
		Sphere
	);

	IdentifiedEnemies.Empty();

	for (const FHitResult& Hit : HitResults)
	{
		AActor* HitActor = Hit.GetActor();
		if (HitActor && HitActor->IsA(EnemyClass))
		{
			float Distance = FVector::Dist(PlayerLocation, HitActor->GetActorLocation());
			if (Distance <= MaxDistance)
			{
				IdentifiedEnemies.Add(HitActor);
			}
		}
	}

	// Debug
	//DrawDebugSphere(GetWorld(), PlayerLocation, TraceRadius, 50, FColor::Green, false, 2.0f);
}

void UTargetingComponent::UpdateClosestEnemy()
{

	FVector PlayerLocation = Owner->GetActorLocation();
	
	float ClosestDistanceSq = FLT_MAX;
	CurrentTarget = nullptr;

	for (int32 i = IdentifiedEnemies.Num() - 1; i >= 0; --i)
	{
		AActor* Enemy = IdentifiedEnemies[i];
		if (!Enemy || FVector::Dist(PlayerLocation, Enemy->GetActorLocation()) > MaxDistance)
		{
			IdentifiedEnemies.RemoveAt(i);
			continue;
		}

		float DistanceSq = FVector::DistSquared(PlayerLocation, Enemy->GetActorLocation());
		if (DistanceSq < ClosestDistanceSq)
		{
			ClosestDistanceSq = DistanceSq;
			CurrentTarget = Enemy;
		}
	}

	// Debug
	if (CurrentTarget)
	{
		DrawDebugLine(GetWorld(), PlayerLocation, CurrentTarget->GetActorLocation(), FColor::Red, false, 0.1f, 0, 2.0f);
	}
}

void UTargetingComponent::UpdateEnemyBasedOnInput()
{
	if (!Owner) return;

	const FVector PlayerInputDirection = GetPlayerInputDirection();
/*
	if(CurrentTarget)
	{
		float ClosestDistanceSq = FLT_MAX;

		FVector PlayerLocation = Owner->GetActorLocation();
	
		float DistanceSq = FVector::DistSquared(PlayerLocation, CurrentTarget->GetActorLocation());
		if (DistanceSq > ClosestDistanceSq)
		{
			CurrentTarget = nullptr;
		}
	}
	*/
	

	if (PlayerInputDirection.IsZero())
	{
		UpdateClosestEnemy();
		return;
	}
	FVector PlayerLocation = Owner->GetActorLocation();
	FVector PlayerForward = Owner->GetActorForwardVector();

	for (int32 i = IdentifiedEnemies.Num() - 1; i >= 0; --i)
	{
		AActor* Enemy = IdentifiedEnemies[i];
		if (!Enemy) continue;

		if (!Enemy || FVector::Dist(PlayerLocation, Enemy->GetActorLocation()) > MaxDistance)
		{
			IdentifiedEnemies.RemoveAt(i);
			continue;
		}
		
		FVector EnemyDirection = (Enemy->GetActorLocation() - PlayerLocation).GetSafeNormal();
		if (IsDirectionMatching(EnemyDirection, PlayerInputDirection))
		{
			CurrentTarget = Enemy;
			// Debug
			DrawDebugLine(GetWorld(), PlayerLocation, CurrentTarget->GetActorLocation(), FColor::Blue, false, 0.1f, 0, 2.0f);
			return;
		}
	}
}

FVector UTargetingComponent::GetPlayerInputDirection() const
{
	return InputDirection;
}

bool UTargetingComponent::IsDirectionMatching(FVector EnemyDirection, FVector PlayerInputDirection) const
{
	const float DotThreshold = 0.8f; // Adjust threshold as needed for sensitivity
	float DotProduct = FVector::DotProduct(EnemyDirection, PlayerInputDirection);
	return DotProduct > DotThreshold;
}
