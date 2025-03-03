// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Abilities/GameplayAbility.h"            
#include "AbilitySystemComponent.h"              
#include "EncoreAbilities.h"
#include "GameplayAbilitySpec.h"             
#include "UAbilitySet.generated.h"

UENUM(BlueprintType)
enum class EAbilityInput : uint8
{
	None UMETA(DisplayName = "None", ToolTip = "No ability input assigned"),
	Jump UMETA(DisplayName = "Jump", ToolTip = "Jump ability input"),
	PrimaryAttack UMETA(DisplayName = "Primary Attack", ToolTip = "Primary attack input eg. Shard Attack"),
	PrimaryAttackL UMETA(DisplayName = "Primary Attack L", ToolTip = "Primary attack input for hands eg. Shard Attack Left / Right"),
	PrimaryAttackR UMETA(DisplayName = "Primary Attack R", ToolTip = "Primary attack input for hands eg. Shard Attack Left / Right"),
	PrimaryAttackHeavy UMETA(DisplayName = "Primary Attack Heavy", ToolTip = "Heavy Primary Attack eg. Shard Beam"),
	SecondaryAbility UMETA(DisplayName = "Secondary Ability", ToolTip = "Secondary Ability input"),
	SpecialAbility UMETA(DisplayName = "Special Ability", ToolTip = "Special Ability input eg. Cold Front"),
	Ability1 UMETA(DisplayName = "Ability1", ToolTip = "Ability1 input"),
	Ability2 UMETA(DisplayName = "Ability2", ToolTip = "Ability2 input")
};


USTRUCT()
struct FAbilitySetItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	TSubclassOf<UEncoreAbilities> GameplayAbility;

	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	EAbilityInput InputKey;
};     


UCLASS(Blueprintable)
class STYLISHCOMBATSTARTERKIT_API UAbilitySet : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	TArray<FAbilitySetItem> AbilitySetItems;

	TArray<FGameplayAbilitySpecHandle> GrantAbilities(UAbilitySystemComponent* AbilitySystemComponent) const;

	/** Helper function to retrieve all currently granted abilities */
	UFUNCTION(BlueprintCallable)
	TArray<UGameplayAbility*> GetAllGrantedAbilities(UAbilitySystemComponent* AbilitySystemComponent) const;
	/** Helper function to retrieve all currently granted abilities */
	
	UFUNCTION(BlueprintCallable)
	TArray<UGameplayAbility*> GetAllActiveAbilities(UAbilitySystemComponent* AbilitySystemComponent) const;
};

inline TArray<FGameplayAbilitySpecHandle> UAbilitySet::GrantAbilities(
	UAbilitySystemComponent* AbilitySystemComponent) const
{
	check(AbilitySystemComponent);

	TArray<FGameplayAbilitySpecHandle> handles;
	handles.Reserve(AbilitySetItems.Num());

	for (const auto& abilitySetItem : AbilitySetItems)
	{
		handles.AddUnique(AbilitySystemComponent->GiveAbility(
			FGameplayAbilitySpec(
				abilitySetItem.GameplayAbility,
				0,
				static_cast<uint32>(abilitySetItem.InputKey)
			)
		));
	}

	return handles;
}

/** Helper function to retrieve all currently granted abilities */
inline TArray<UGameplayAbility*> UAbilitySet::GetAllGrantedAbilities(UAbilitySystemComponent* AbilitySystemComponent) const
{
	TArray<UGameplayAbility*> GrantedAbilities;

	// Loop through all ability specs in the component
	for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
	{
		// If the spec has a valid ability instance, add it to the array
		if (Spec.Ability)
		{
			GrantedAbilities.Add(Spec.Ability);
		}
	}

	return GrantedAbilities;
}

/** Helper function to retrieve all currently granted abilities */
inline TArray<UGameplayAbility*> UAbilitySet::GetAllActiveAbilities(UAbilitySystemComponent* AbilitySystemComponent) const
{
	TArray<UGameplayAbility*> GrantedAbilities;

	// Loop through all ability specs in the component
	for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
	{
		// If the spec has a valid ability instance, add it to the array
		if (Spec.Ability->IsActive())
		{
			GrantedAbilities.Add(Spec.Ability);
		}
	}

	return GrantedAbilities;
}
