// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComboHitPolicy.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class STYLISHCOMBATSTARTERKIT_API UComboHitPolicy : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Combo")
	void HitComponent(const FComboStep& ComboChain, AActor* TargetActor);
};
