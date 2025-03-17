// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "Engine/DataAsset.h"
#include "StylishCombatStarterKit/Gameplay/Character/Inputs/ComboTypes.h"
#include "CharacterProfile.generated.h"


USTRUCT(Blueprintable, BlueprintType)
struct FHitReaction
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Reaction")
	UAnimMontage* HitReactionMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Reaction")
	float inPlayRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Reaction")
	FName SectionName;
};

/**
 * UCharacterProfile holds configuration data for a character's properties and combo system.
 * This data asset is used to define character-specific settings such as name, description,
 * input-to-action mapping, combo chains, and hit reaction registers.
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

	UFUNCTION(BlueprintCallable, Category = "Combo")
	TArray<FString> GetHitRegisterKeys()
	{
		TArray<FString> outKeys;
		HitRegister.GetKeys(outKeys);
		return outKeys;
	}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit")
	TMap<FString, FHitReaction> HitRegister;
};
