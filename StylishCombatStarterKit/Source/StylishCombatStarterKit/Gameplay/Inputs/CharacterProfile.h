// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ComboTypes.h"
#include "InputAction.h"
#include "Engine/DataAsset.h"
#include "CharacterProfile.generated.h"


/**
 * 
 */
UCLASS()
class STYLISHCOMBATSTARTERKIT_API UCharacterProfile : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Properties")
	FName CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Properties", meta=(MultiLine = true))
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo")
	TMap<EComboInputType, UInputAction*> InputRegister;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combo", meta=(TitleProperty="ChainName"))
	TArray<FComboChain> ComboChains;
};
