// Fill out your copyright notice in the Description page of Project Settings.


#include "EncoreAbilities.h"

#include "StylishCombatStarterKit/Gameplay/Character/BaseCharacter/BaseCharacter.h"


void UEncoreAbilities::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                       const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                       const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	auto player = Cast<ABaseCharacter>(GetOwningActorFromActorInfo());
	player->AbilitySubsystem->CurrentAbility = this;
}
