// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilitySubsystem.h"

// Sets default values for this component's properties
UAbilitySubsystem::UAbilitySubsystem()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.
    PrimaryComponentTick.bCanEverTick = true;

    CharacterAttributes = CreateDefaultSubobject<UStandardAttributeSet>(TEXT("CharacterAttributeSet"));
}

// Called when the game starts
void UAbilitySubsystem::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void UAbilitySubsystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UAbilitySubsystem::SetupAbilities()
{
    for (auto Handle : InitialAbilitiesHandles)
    {
        ClearAbility(Handle);
    }
    InitialAbilitiesHandles.Empty(); // Clear the list after removing abilities

    InitialAbilitiesHandles.Empty();
    if (IsValid(AbilitySet))
    {
        InitialAbilitiesHandles.Append(AbilitySet->GrantAbilities(this));
    }

    if (IsValid(AdvancedAbilitySet))
    {
        InitialAbilitiesHandles.Append(AdvancedAbilitySet->GrantAbilities(this));
    }
}

void UAbilitySubsystem::SetupEffects()
{
    if (IsValid(InitialGameplayEffect))
    {
        ApplyGameplayEffectToSelf(InitialGameplayEffect->GetDefaultObject<UGameplayEffect>(), 0.f, MakeEffectContext());
    }

    // binding functions
    GetGameplayAttributeValueChangeDelegate(UStandardAttributeSet::GetHealthAttribute()).AddUObject(this, &ThisClass::OnHealthAttributeChanged);
}

void UAbilitySubsystem::OnHealthAttributeChanged(const FOnAttributeChangeData& OnAttributeChangeData)
{
    if (FMath::IsNearlyEqual(OnAttributeChangeData.NewValue, 0.f) && OnAttributeChangeData.OldValue > 0)
    {
        // TODO: kill player
    }
}

void UAbilitySubsystem::StartAbilityByInput(EAbilityInput AbilityInput)
{
        AbilityLocalInputPressed(static_cast<int32>(AbilityInput));
}

UEncoreAbilities* UAbilitySubsystem::GetAbilityByInput(EAbilityInput AbilityInput)
{
    TArray<UGameplayAbility*> ActiveAbilities;
    GetActiveAbilitiesWithInputID(static_cast<int32>(AbilityInput), ActiveAbilities);

    for (UGameplayAbility* ActiveAbility : ActiveAbilities)
    {
        if (ActiveAbility)
        {
            return Cast<UEncoreAbilities>(ActiveAbility);
        }
    }
    return nullptr;
}

void UAbilitySubsystem::TickAbilityByClass(TSubclassOf<UEncoreAbilities> AbilityClass, float DeltaTime)
{
    UEncoreAbilities* Ability = GetAbilityByClass(AbilityClass);
    if (Ability)
    {
            Ability->TickAbility(DeltaTime);
    }
}


void UAbilitySubsystem::GetActiveAbilitiesWithInputID(int32 InputID, TArray<UGameplayAbility*>& ActiveAbilities) const
{
    for (const FGameplayAbilitySpec& Spec : GetActivatableAbilities())
    {
        if (Spec.InputID == InputID && Spec.IsActive())
        {
            ActiveAbilities.Add(Spec.Ability);
        }
    }
}

void UAbilitySubsystem::EndAbilityEarlyByInput(EAbilityInput AbilityInput)
{
    for (FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
    {
        if (Spec.InputID == static_cast<int32>(AbilityInput))
        {
            if(CurrentAbility)
            {
                if (Spec.Ability.Get()->AbilityTags == CurrentAbility->AbilityTags && CurrentAbility)
                {
                    CurrentAbility->OnRelease();
                }
            }
        }
    }
}

void UAbilitySubsystem::EndCurrentAbility(EAbilityInput AbilityInput)
{
    for (FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
    {
            if(CurrentAbility)
            {
                if (Spec.Ability.Get()->AbilityTags == CurrentAbility->AbilityTags && CurrentAbility)
                {
                    CurrentAbility->OnInterrupt();
                }
            }
    }
}


void UAbilitySubsystem::EndAbilityByInput(EAbilityInput AbilityInput)
{
    AbilityLocalInputReleased(static_cast<int32>(AbilityInput));

    TArray<UGameplayAbility*> ActiveAbilities;
    GetActiveAbilitiesWithInputID(static_cast<int32>(AbilityInput), ActiveAbilities);

    for (UGameplayAbility* ActiveAbility : ActiveAbilities)
    {
        if (ActiveAbility)
        {
            CancelAbility(ActiveAbility);
        }
    }
}

// New helper functions
bool UAbilitySubsystem::IsAbilityActive(EAbilityInput AbilityInput)
{
    TArray<UGameplayAbility*> ActiveAbilities;
    GetActiveAbilitiesWithInputID(static_cast<int32>(AbilityInput), ActiveAbilities);
    return ActiveAbilities.Num() > 0;
}

void UAbilitySubsystem::CancelAllAbilities()
{
    TArray<FGameplayAbilitySpec> ActivAbilities = GetActivatableAbilities();
    for (const FGameplayAbilitySpec& Spec : ActivAbilities)
    {
        if (Spec.IsActive())
        {
            CancelAbility(Spec.Ability);
        }
    }
}

void UAbilitySubsystem::ApplyGameplayEffectToOwner(TSubclassOf<UGameplayEffect> EffectClass, float Level)
{
    if (EffectClass)
    {
        ApplyGameplayEffectToSelf(EffectClass->GetDefaultObject<UGameplayEffect>(), Level, MakeEffectContext());
    }
}

bool UAbilitySubsystem::CanActivateAbilityByInput(EAbilityInput AbilityInput)
{
    TArray<UGameplayAbility*> ActivatableAbility;
    GetActiveAbilitiesWithInputID(static_cast<int32>(AbilityInput), ActivatableAbility);

    for (UGameplayAbility* Ability : ActivatableAbility)
    {
        if (Ability && Ability->CanActivateAbility(Ability->GetCurrentAbilitySpecHandle(), nullptr, nullptr))
        {
            return true;
        }
    }
    return false;
}

UEncoreAbilities* UAbilitySubsystem::GetAbilityByClass(TSubclassOf<UGameplayAbility> AbilityClass)
{
    // Loop through the initial handles
    for (const FGameplayAbilitySpecHandle& Handle : InitialAbilitiesHandles)
    {
        // Get the spec associated with this handle
        const FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(Handle);
        
        // Ensure the spec is valid and check the ability's class
        if (AbilitySpec && AbilitySpec->Ability && AbilitySpec->Ability->GetClass()->IsChildOf(AbilityClass))
        {
            // Cast to UBulldogAbilities and return if successful
            return Cast<UEncoreAbilities>(AbilitySpec->Ability);
        }
    }

    // Return nullptr if no matching ability is found
    return nullptr;
}
