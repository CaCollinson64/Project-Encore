// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboChainComponent.h"


void UComboChainComponent::PerformHitAnimation(bool bOverrideHitAnimation,
	UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
	if (!CheckValidOwner()) return;
	if (bIsPerformingHitAnimation && !bOverrideHitAnimation) return;
	
	bIsPerformingHitAnimation = true;
	PlayAnimMontage(AnimMontage, InPlayRate, StartSectionName);
}

void UComboChainComponent::SetStunCharacter(bool StunCharacter)
{
	bStunCharacter = StunCharacter;
}

void UComboChainComponent::ReduceHealth(float damage)
{
	Health -= damage;

	if (Health <= 0.0f)
	{
		Death();
	}
}

void UComboChainComponent::Death_Implementation()
{
	
}

void UComboChainComponent::SnappingLogic()
{
	if(!bIsSnapping) return;
	if (!Owner) return;
	if (!OwnerTargetingComponent) return;

	OwnerMovementComponent->StopMovementImmediately();
	
	if (const AActor* Target = OwnerTargetingComponent->CurrentTarget)
	{
		if (Target->GetDistanceTo(Owner) >= SnappingRadius) return;
		const FVector TargetLocation = Target->GetActorLocation();
		const FVector CurrentLocation = Owner->GetActorLocation();
		const FRotator CharacterRotation = Owner->GetActorRotation();

		// Calculate direction to the target
		const FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();
		
		// Rotate towards the target
		const FRotator TargetRotation = Direction.Rotation();
		FRotator InterpolatedRotation = FMath::RInterpTo(Owner->GetActorRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), RotationSnapSpeed);
		InterpolatedRotation.Pitch = CharacterRotation.Pitch;
		InterpolatedRotation.Roll = CharacterRotation.Roll;

		Owner->SetActorRotation(InterpolatedRotation);
		
		//If already close don't snap
		if(FVector::Dist(Target->GetActorLocation(), Owner->GetActorLocation()) < OffsetDistance + 20) return;
		
		//PerformGroundCheck();
		
		// Calculate the new location with offset
		const FVector InterpolatedLocation = FMath::VInterpTo(CurrentLocation, TargetLocation - Direction * OffsetDistance, GetWorld()->GetDeltaSeconds(), SnapSpeed);
		Owner->SetActorLocation(InterpolatedLocation, false, nullptr, ETeleportType::TeleportPhysics);
		
	}
	else
	{
		const FVector CurrentLocation = Owner->GetActorLocation();
		const FRotator CharacterRotation = Owner->GetActorRotation();
		
		// Calculate direction to move forward
		const FVector Direction = Owner->GetActorForwardVector();

		// Rotate towards the forward direction
		const FRotator TargetRotation = Direction.Rotation();
		FRotator InterpolatedRotation = FMath::RInterpTo(Owner->GetActorRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), RotationSnapSpeed);
		InterpolatedRotation.Pitch = CharacterRotation.Pitch;
		InterpolatedRotation.Roll = CharacterRotation.Roll;

		Owner->SetActorRotation(InterpolatedRotation);
		
		// Calculate the new location with a slight forward movement
		const FVector InterpolatedLocation = CurrentLocation + (Direction * 100.0f * GetWorld()->GetDeltaSeconds());
		Owner->SetActorLocation(InterpolatedLocation, false, nullptr, ETeleportType::TeleportPhysics);
	}
}

