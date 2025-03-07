// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteroperableComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), BlueprintType, Blueprintable)
class STYLISHCOMBATSTARTERKIT_API UInteroperableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInteroperableComponent();
	
	UPROPERTY()
	AActor* Owner;
	
	UPROPERTY()
	USkeletalMeshComponent* OwnerMesh;

	virtual void FindOwner();
	
	UFUNCTION(BlueprintCallable)
	virtual bool CheckValidOwner();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	void StopMontage(UAnimMontage* AnimMontage);
	float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);
};
