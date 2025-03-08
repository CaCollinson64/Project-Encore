// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComboBlockPolicy.generated.h"

struct FComboStep;
/**
 * 
 */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class STYLISHCOMBATSTARTERKIT_API UComboBlockPolicy : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Combo")
	void BlockControls(const FComboStep& ComboChain, AActor* TargetActor);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Combo")
	void UnblockControls(const FComboStep& ComboChain, AActor* TargetActor); 
};
