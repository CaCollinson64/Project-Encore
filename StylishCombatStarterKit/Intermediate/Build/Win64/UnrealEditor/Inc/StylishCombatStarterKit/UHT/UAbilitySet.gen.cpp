// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Abilities/UAbilitySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAbilitySet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UAbilitySet();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UAbilitySet_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UEncoreAbilities_NoRegister();
STYLISHCOMBATSTARTERKIT_API UEnum* Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAbilitySetItem();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Enum EAbilityInput
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityInput;
static UEnum* EAbilityInput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityInput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput, (UObject*)Z_Construct_UPackage__Script_StylishCombatStarterKit(), TEXT("EAbilityInput"));
	}
	return Z_Registration_Info_UEnum_EAbilityInput.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UEnum* StaticEnum<EAbilityInput>()
{
	return EAbilityInput_StaticEnum();
}
struct Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ability1.DisplayName", "Ability1" },
		{ "Ability1.Name", "EAbilityInput::Ability1" },
		{ "Ability1.ToolTip", "Ability1 input" },
		{ "Ability2.DisplayName", "Ability2" },
		{ "Ability2.Name", "EAbilityInput::Ability2" },
		{ "Ability2.ToolTip", "Ability2 input" },
		{ "BlueprintType", "true" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "EAbilityInput::Jump" },
		{ "Jump.ToolTip", "Jump ability input" },
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/UAbilitySet.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAbilityInput::None" },
		{ "None.ToolTip", "No ability input assigned" },
		{ "PrimaryAttack.DisplayName", "Primary Attack" },
		{ "PrimaryAttack.Name", "EAbilityInput::PrimaryAttack" },
		{ "PrimaryAttack.ToolTip", "Primary attack input eg. Shard Attack" },
		{ "PrimaryAttackHeavy.DisplayName", "Primary Attack Heavy" },
		{ "PrimaryAttackHeavy.Name", "EAbilityInput::PrimaryAttackHeavy" },
		{ "PrimaryAttackHeavy.ToolTip", "Heavy Primary Attack eg. Shard Beam" },
		{ "PrimaryAttackL.DisplayName", "Primary Attack L" },
		{ "PrimaryAttackL.Name", "EAbilityInput::PrimaryAttackL" },
		{ "PrimaryAttackL.ToolTip", "Primary attack input for hands eg. Shard Attack Left / Right" },
		{ "PrimaryAttackR.DisplayName", "Primary Attack R" },
		{ "PrimaryAttackR.Name", "EAbilityInput::PrimaryAttackR" },
		{ "PrimaryAttackR.ToolTip", "Primary attack input for hands eg. Shard Attack Left / Right" },
		{ "SecondaryAbility.DisplayName", "Secondary Ability" },
		{ "SecondaryAbility.Name", "EAbilityInput::SecondaryAbility" },
		{ "SecondaryAbility.ToolTip", "Secondary Ability input" },
		{ "SpecialAbility.DisplayName", "Special Ability" },
		{ "SpecialAbility.Name", "EAbilityInput::SpecialAbility" },
		{ "SpecialAbility.ToolTip", "Special Ability input eg. Cold Front" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityInput::None", (int64)EAbilityInput::None },
		{ "EAbilityInput::Jump", (int64)EAbilityInput::Jump },
		{ "EAbilityInput::PrimaryAttack", (int64)EAbilityInput::PrimaryAttack },
		{ "EAbilityInput::PrimaryAttackL", (int64)EAbilityInput::PrimaryAttackL },
		{ "EAbilityInput::PrimaryAttackR", (int64)EAbilityInput::PrimaryAttackR },
		{ "EAbilityInput::PrimaryAttackHeavy", (int64)EAbilityInput::PrimaryAttackHeavy },
		{ "EAbilityInput::SecondaryAbility", (int64)EAbilityInput::SecondaryAbility },
		{ "EAbilityInput::SpecialAbility", (int64)EAbilityInput::SpecialAbility },
		{ "EAbilityInput::Ability1", (int64)EAbilityInput::Ability1 },
		{ "EAbilityInput::Ability2", (int64)EAbilityInput::Ability2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
	nullptr,
	"EAbilityInput",
	"EAbilityInput",
	Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput()
{
	if (!Z_Registration_Info_UEnum_EAbilityInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityInput.InnerSingleton, Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityInput.InnerSingleton;
}
// End Enum EAbilityInput

// Begin ScriptStruct FAbilitySetItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilitySetItem;
class UScriptStruct* FAbilitySetItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilitySetItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilitySetItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilitySetItem, (UObject*)Z_Construct_UPackage__Script_StylishCombatStarterKit(), TEXT("AbilitySetItem"));
	}
	return Z_Registration_Info_UScriptStruct_AbilitySetItem.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UScriptStruct* StaticStruct<FAbilitySetItem>()
{
	return FAbilitySetItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilitySetItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/UAbilitySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbility_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/UAbilitySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/UAbilitySet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayAbility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputKey_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilitySetItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAbilitySetItem_Statics::NewProp_GameplayAbility = { "GameplayAbility", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilitySetItem, GameplayAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UEncoreAbilities_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbility_MetaData), NewProp_GameplayAbility_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbilitySetItem_Statics::NewProp_InputKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbilitySetItem_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilitySetItem, InputKey), Z_Construct_UEnum_StylishCombatStarterKit_EAbilityInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputKey_MetaData), NewProp_InputKey_MetaData) }; // 2614914455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilitySetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilitySetItem_Statics::NewProp_GameplayAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilitySetItem_Statics::NewProp_InputKey_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilitySetItem_Statics::NewProp_InputKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitySetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilitySetItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
	nullptr,
	&NewStructOps,
	"AbilitySetItem",
	Z_Construct_UScriptStruct_FAbilitySetItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitySetItem_Statics::PropPointers),
	sizeof(FAbilitySetItem),
	alignof(FAbilitySetItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilitySetItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilitySetItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilitySetItem()
{
	if (!Z_Registration_Info_UScriptStruct_AbilitySetItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilitySetItem.InnerSingleton, Z_Construct_UScriptStruct_FAbilitySetItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilitySetItem.InnerSingleton;
}
// End ScriptStruct FAbilitySetItem

// Begin Class UAbilitySet Function GetAllActiveAbilities
struct Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics
{
	struct AbilitySet_eventGetAllActiveAbilities_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		TArray<UGameplayAbility*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Helper function to retrieve all currently granted abilities */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/UAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to retrieve all currently granted abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySet_eventGetAllActiveAbilities_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySet_eventGetAllActiveAbilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySet, nullptr, "GetAllActiveAbilities", nullptr, nullptr, Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::AbilitySet_eventGetAllActiveAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::AbilitySet_eventGetAllActiveAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitySet::execGetAllActiveAbilities)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UGameplayAbility*>*)Z_Param__Result=P_THIS->GetAllActiveAbilities(Z_Param_AbilitySystemComponent);
	P_NATIVE_END;
}
// End Class UAbilitySet Function GetAllActiveAbilities

// Begin Class UAbilitySet Function GetAllGrantedAbilities
struct Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics
{
	struct AbilitySet_eventGetAllGrantedAbilities_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		TArray<UGameplayAbility*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Helper function to retrieve all currently granted abilities */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/UAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to retrieve all currently granted abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySet_eventGetAllGrantedAbilities_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySet_eventGetAllGrantedAbilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySet, nullptr, "GetAllGrantedAbilities", nullptr, nullptr, Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::AbilitySet_eventGetAllGrantedAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::AbilitySet_eventGetAllGrantedAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilitySet::execGetAllGrantedAbilities)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UGameplayAbility*>*)Z_Param__Result=P_THIS->GetAllGrantedAbilities(Z_Param_AbilitySystemComponent);
	P_NATIVE_END;
}
// End Class UAbilitySet Function GetAllGrantedAbilities

// Begin Class UAbilitySet
void UAbilitySet::StaticRegisterNativesUAbilitySet()
{
	UClass* Class = UAbilitySet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllActiveAbilities", &UAbilitySet::execGetAllActiveAbilities },
		{ "GetAllGrantedAbilities", &UAbilitySet::execGetAllGrantedAbilities },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySet);
UClass* Z_Construct_UClass_UAbilitySet_NoRegister()
{
	return UAbilitySet::StaticClass();
}
struct Z_Construct_UClass_UAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Gameplay/Character/Abilities/UAbilitySet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/UAbilitySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySetItems_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/UAbilitySet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySetItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySetItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitySet_GetAllActiveAbilities, "GetAllActiveAbilities" }, // 526943178
		{ &Z_Construct_UFunction_UAbilitySet_GetAllGrantedAbilities, "GetAllGrantedAbilities" }, // 2588760721
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySet_Statics::NewProp_AbilitySetItems_Inner = { "AbilitySetItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAbilitySetItem, METADATA_PARAMS(0, nullptr) }; // 1176146199
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitySet_Statics::NewProp_AbilitySetItems = { "AbilitySetItems", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySet, AbilitySetItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySetItems_MetaData), NewProp_AbilitySetItems_MetaData) }; // 1176146199
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySet_Statics::NewProp_AbilitySetItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySet_Statics::NewProp_AbilitySetItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilitySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySet_Statics::ClassParams = {
	&UAbilitySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilitySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilitySet()
{
	if (!Z_Registration_Info_UClass_UAbilitySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitySet.OuterSingleton, Z_Construct_UClass_UAbilitySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilitySet.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UAbilitySet>()
{
	return UAbilitySet::StaticClass();
}
UAbilitySet::UAbilitySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySet);
UAbilitySet::~UAbilitySet() {}
// End Class UAbilitySet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAbilityInput_StaticEnum, TEXT("EAbilityInput"), &Z_Registration_Info_UEnum_EAbilityInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2614914455U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilitySetItem::StaticStruct, Z_Construct_UScriptStruct_FAbilitySetItem_Statics::NewStructOps, TEXT("AbilitySetItem"), &Z_Registration_Info_UScriptStruct_AbilitySetItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilitySetItem), 1176146199U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitySet, UAbilitySet::StaticClass, TEXT("UAbilitySet"), &Z_Registration_Info_UClass_UAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySet), 146505028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_2185705983(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
