#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "UAbilitySet.h"
#include "Attributes/StandardAttributeSet.h"
#include "AbilitySubsystem.generated.h"

enum class EAbilityInput : uint8;

UENUM(BlueprintType)
enum class EInputType : uint8
{
    IT_None UMETA(DisplayName = "None"),
    IT_StartRelease UMETA(DisplayName = "Start&Release"),
    IT_Started UMETA(DisplayName = "Started"),
    IT_Triggered UMETA(DisplayName = "Triggered"),
    IT_Released UMETA(DisplayName = "Released")
};

USTRUCT()
struct FAbilityInputToInputActionBindings
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly)
    UInputAction* InputAction;

    UPROPERTY(EditDefaultsOnly)
    EInputType InputType;
};

USTRUCT()
struct FAbilityInputBindings
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, Category=Input)
    TMap<EAbilityInput, FAbilityInputToInputActionBindings> Bindings;
};

UCLASS(ClassGroup = (Custom), Blueprintable)
class STYLISHCOMBATSTARTERKIT_API UAbilitySubsystem : public UAbilitySystemComponent
{
public:
    GENERATED_BODY()

    // Sets default values for this component's properties
    UAbilitySubsystem();

    
    UEncoreAbilities* CurrentAbility;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability System|Game State")
    EAbilityInput AbilityState;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability System|Game State")
    EInputType InputState;

    /* GAMEPLAY EFFECTS */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability System|Abilities")
    UAbilitySet* AbilitySet;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability System|Abilities")
    UAbilitySet* AdvancedAbilitySet;

    UPROPERTY(EditDefaultsOnly, Category = "Ability System|Gameplay Effect")
    TSubclassOf<UGameplayEffect> InitialGameplayEffect;

    TArray<FGameplayAbilitySpecHandle> InitialAbilitiesHandles;

    UPROPERTY(EditDefaultsOnly, Category = "Ability System|Input")
    FAbilityInputBindings AbilitiesInputBindings;

    UPROPERTY(EditAnywhere, Category = "Ability System|Attributes")
    UStandardAttributeSet* CharacterAttributes = { nullptr };

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintCallable, Category = "Input")
    void GetActiveAbilitiesWithInputID(int32 InputID, TArray<UGameplayAbility*>& ActiveAbilities) const;

    UFUNCTION(BlueprintCallable, Category = "Input")
    void EndAbilityEarlyByInput(EAbilityInput AbilityInput);

        UFUNCTION(BlueprintCallable, Category = "Input")
    void EndCurrentAbility(EAbilityInput AbilityInput);

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void StartAbilityByInput(EAbilityInput AbilityInput);

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    UEncoreAbilities* GetAbilityByInput(EAbilityInput AbilityInput);

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void TickAbilityByClass(TSubclassOf<UEncoreAbilities> AbilityClass, float DeltaTime);

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void EndAbilityByInput(EAbilityInput AbilityInput);

    UFUNCTION(BlueprintCallable, Category = "Ability")
    void SetupAbilities();

    UFUNCTION(BlueprintCallable, Category = "Ability")
    void SetupEffects();

    // New helper functions
    UFUNCTION(BlueprintCallable, Category = "Abilities")
    bool IsAbilityActive(EAbilityInput AbilityInput);

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void CancelAllAbilities();

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void ApplyGameplayEffectToOwner(TSubclassOf<UGameplayEffect> EffectClass, float Level);

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    bool CanActivateAbilityByInput(EAbilityInput AbilityInput);

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    UEncoreAbilities* GetAbilityByClass(TSubclassOf<UGameplayAbility> AbilityClass);

protected:
    void OnHealthAttributeChanged(const FOnAttributeChangeData& OnAttributeChangeData);
};
