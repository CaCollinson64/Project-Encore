// Fill out your copyright notice in the Description page of Project Settings.


#include "StandardAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"

UStandardAttributeSet::UStandardAttributeSet(): Health(100.f), MaxHealth(100.f), Stamina(100.f), MaxStamina(100.f), 
                                                Defense(10.f), Speed(1.f), CritChance(0.1f), CritDamage(1.5f),
                                                CooldownReduction(0.f), Energy(100.f)
{
	
}

void UStandardAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	// Clamping Health and Stamina within their max values
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	else if (Attribute == GetStaminaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxStamina());
	}
}

void UStandardAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	// If health has changed, make sure it doesn't exceed MaxHealth or go below 0
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		Health.SetCurrentValue(FMath::Clamp(Health.GetCurrentValue(), 0.0f, GetMaxHealth()));
	}
}

void UStandardAttributeSet::OnRep_Health(const FGameplayAttributeData& PreviousHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UStandardAttributeSet, Health, PreviousHealth);
}

void UStandardAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UStandardAttributeSet, Health);
}
