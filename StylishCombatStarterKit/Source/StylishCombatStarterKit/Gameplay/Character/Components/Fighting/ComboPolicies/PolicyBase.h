// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolicyBase.generated.h"

/**
 * 
 */
UCLASS()
class STYLISHCOMBATSTARTERKIT_API UPolicyBase : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	void StopMontage(USkeletalMeshComponent* OwnerMesh, UAnimMontage* AnimMontage)
	{
		UAnimInstance * AnimInstance = (OwnerMesh)? OwnerMesh->GetAnimInstance() : nullptr; 
		UAnimMontage * MontageToStop = AnimMontage;
		bool bShouldStopMontage =  AnimInstance && MontageToStop && !AnimInstance->Montage_GetIsStopped(MontageToStop);

		if ( bShouldStopMontage )
		{
			AnimInstance->Montage_Stop(MontageToStop->BlendOut.GetBlendTime(), MontageToStop);
		}
	}

	UFUNCTION(BlueprintCallable)
	float PlayAnimMontage(USkeletalMeshComponent* OwnerMesh, class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
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

};
