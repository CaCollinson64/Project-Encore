// Fill out your copyright notice in the Description page of Project Settings.


#include "HitComponent.h"

// Sets default values for this component's properties
UHitComponent::UHitComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UHitComponent::PerformHitAnimation(bool bOverrideHitAnimation,
	UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
	if (!CheckValidOwner()) return;
	if (bIsPerformingHitAnimation && !bOverrideHitAnimation) return;
	
	bIsPerformingHitAnimation = true;
	PlayAnimMontage(AnimMontage, InPlayRate, StartSectionName);
}

void UHitComponent::SetStunCharacter(bool StunCharacter)
{
	bStunCharacter = StunCharacter;
}

void UHitComponent::ReduceHealth(float damage)
{
	Health -= damage;

	if (Health <= 0.0f)
	{
		Death();
	}
}

void UHitComponent::Death_Implementation()
{
	
}

// Called when the game starts
void UHitComponent::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UHitComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

