// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteroperableComponent.h"
#include "Components/ActorComponent.h"
#include "HitComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class STYLISHCOMBATSTARTERKIT_API UHitComponent : public UInteroperableComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHitComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	float Health = 100.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	bool bInvincible = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health")
	bool bStunCharacter = false;

	UFUNCTION( BlueprintCallable )
	void PerformHitAnimation(bool bOverrideHitAnimation, UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);

	UFUNCTION( BlueprintCallable )
	void SetStunCharacter(bool StunCharacter);
	void ReduceHealth(float damage);

	UFUNCTION( BlueprintNativeEvent )
	virtual void Death();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Hit")
	bool bIsPerformingHitAnimation = false;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
