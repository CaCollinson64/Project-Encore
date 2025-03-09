// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PolicyBase.h"
#include "StylishCombatStarterKit/Gameplay/Character/Inputs/ComboTypes.h"
#include "UObject/Object.h"
#include "ComboEndPolicy.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class STYLISHCOMBATSTARTERKIT_API UComboEndPolicy : public UPolicyBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Combo")
	void EndCombo(const FComboStep& ComboChain, AActor* TargetActor);
};
