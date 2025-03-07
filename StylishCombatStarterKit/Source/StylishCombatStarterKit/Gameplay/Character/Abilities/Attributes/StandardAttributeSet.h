#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "AttributeHelpers.h"
#include "StandardAttributeSet.generated.h"

UCLASS()
class STYLISHCOMBATSTARTERKIT_API UStandardAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:

	// Health and Max Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", ReplicatedUsing=OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, Health)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, MaxHealth)

	// Stamina and Max Stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, Stamina)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, MaxStamina)

	// Defense (reduces incoming damage)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData Defense;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, Defense)

	// Speed (affects movement speed)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData Speed;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, Speed)

	// Critical Hit Chance (probability of critical hit)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData CritChance;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, CritChance)

	// Critical Hit Damage (bonus damage from crits)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData CritDamage;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, CritDamage)

	// Cooldown Reduction (reduces ability cooldowns)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData CooldownReduction;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, CooldownReduction)

	// Energy (for non-mana abilities)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FGameplayAttributeData Energy;
	ATTRIBUTE_ACCESSORS(UStandardAttributeSet, Energy)

	UStandardAttributeSet();

	// Function to clamp values like Health and Stamina
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	// Function to apply health modification or handle attribute logic after effects are executed
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	// TODO: Replicate other variables if needed - Guneet
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& PreviousHealth) const;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
