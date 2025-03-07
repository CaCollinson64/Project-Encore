// Fill out your copyright notice in the Description page of Project Settings.


#include "InteroperableComponent.h"


// Sets default values for this component's properties
UInteroperableComponent::UInteroperableComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UInteroperableComponent::FindOwner()
{
	Owner = GetOwner();
	OwnerMesh = Cast<USkeletalMeshComponent>(GetOwner()->GetComponentByClass(USkeletalMeshComponent::StaticClass()));
}

bool UInteroperableComponent::CheckValidOwner()
{
	if (OwnerMesh == nullptr || Owner == nullptr) return false;

	return true;
}

// Called when the game starts
void UInteroperableComponent::BeginPlay()
{
	Super::BeginPlay();
	FindOwner();
}


// Called when the game starts
void UInteroperableComponent::StopMontage(UAnimMontage* AnimMontage)
{
	if (!CheckValidOwner()) return;

	UAnimInstance * AnimInstance = (OwnerMesh)? OwnerMesh->GetAnimInstance() : nullptr; 
	UAnimMontage * MontageToStop = AnimMontage;
	bool bShouldStopMontage =  AnimInstance && MontageToStop && !AnimInstance->Montage_GetIsStopped(MontageToStop);

	if ( bShouldStopMontage )
	{
		AnimInstance->Montage_Stop(MontageToStop->BlendOut.GetBlendTime(), MontageToStop);
	}
}

float UInteroperableComponent::PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
	UAnimInstance * AnimInstance = (OwnerMesh)? OwnerMesh->GetAnimInstance() : nullptr; 
	if( AnimMontage && AnimInstance )
	{
		float const Duration = AnimInstance->Montage_Play(AnimMontage, InPlayRate);

		if (Duration > 0.f)
		{
			// Start at a given Section.
			if( StartSectionName != NAME_None )
			{
				AnimInstance->Montage_JumpToSection(StartSectionName, AnimMontage);
			}

			return Duration;
		}
	}	

	return 0.f;
}

