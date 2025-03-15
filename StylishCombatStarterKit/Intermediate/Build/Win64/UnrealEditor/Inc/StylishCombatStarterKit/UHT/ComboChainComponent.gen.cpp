// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/ComboChainComponent.h"
#include "StylishCombatStarterKit/Gameplay/Character/Inputs/ComboTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboChainComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UAbilitySubsystem_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UCharacterProfile_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboChainComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboChainComponent_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UHitComponent_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UInteroperableComponent();
STYLISHCOMBATSTARTERKIT_API UEnum* Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FComboChain();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UComboChainComponent Function OnComboInput
struct Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics
{
	struct ComboChainComponent_eventOnComboInput_Parms
	{
		EComboInputType InputType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called by the Character whenever a combo input occurs. E.g. Light, Heavy, etc. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by the Character whenever a combo input occurs. E.g. Light, Heavy, etc." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboChainComponent_eventOnComboInput_Parms, InputType), Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType, METADATA_PARAMS(0, nullptr) }; // 3934570452
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::NewProp_InputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::NewProp_InputType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboChainComponent, nullptr, "OnComboInput", nullptr, nullptr, Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::ComboChainComponent_eventOnComboInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::ComboChainComponent_eventOnComboInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboChainComponent_OnComboInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboChainComponent_OnComboInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboChainComponent::execOnComboInput)
{
	P_GET_ENUM(EComboInputType,Z_Param_InputType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnComboInput(EComboInputType(Z_Param_InputType));
	P_NATIVE_END;
}
// End Class UComboChainComponent Function OnComboInput

// Begin Class UComboChainComponent Function ResetCombo
struct Z_Construct_UFunction_UComboChainComponent_ResetCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop the current combo outright (e.g. player is hit or time expires). */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the current combo outright (e.g. player is hit or time expires)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboChainComponent_ResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboChainComponent, nullptr, "ResetCombo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboChainComponent_ResetCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboChainComponent_ResetCombo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UComboChainComponent_ResetCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboChainComponent_ResetCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboChainComponent::execResetCombo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCombo();
	P_NATIVE_END;
}
// End Class UComboChainComponent Function ResetCombo

// Begin Class UComboChainComponent Function TriggerExit
struct Z_Construct_UFunction_UComboChainComponent_TriggerExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboChainComponent_TriggerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboChainComponent, nullptr, "TriggerExit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboChainComponent_TriggerExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboChainComponent_TriggerExit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UComboChainComponent_TriggerExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboChainComponent_TriggerExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComboChainComponent::execTriggerExit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerExit();
	P_NATIVE_END;
}
// End Class UComboChainComponent Function TriggerExit

// Begin Class UComboChainComponent
void UComboChainComponent::StaticRegisterNativesUComboChainComponent()
{
	UClass* Class = UComboChainComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnComboInput", &UComboChainComponent::execOnComboInput },
		{ "ResetCombo", &UComboChainComponent::execResetCombo },
		{ "TriggerExit", &UComboChainComponent::execTriggerExit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboChainComponent);
UClass* Z_Construct_UClass_UComboChainComponent_NoRegister()
{
	return UComboChainComponent::StaticClass();
}
struct Z_Construct_UClass_UComboChainComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UComboChainComponent\n *\n * Attaches to a Character to manage multiple combo chains,\n * track current steps, and activate abilities from each step.\n */" },
#endif
		{ "IncludePath", "Gameplay/Character/Components/ComboChainComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UComboChainComponent\n\nAttaches to a Character to manage multiple combo chains,\ntrack current steps, and activate abilities from each step." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerHitComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRank_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterProfile_MetaData[] = {
		{ "Category", "Combo|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DataAsset that defines the combos and input mapping. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset that defines the combos and input mapping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTick_MetaData[] = {
		{ "Category", "Combo|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, we\xe2\x80\x99ll do time-based checks in Tick(). */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, we\xe2\x80\x99ll do time-based checks in Tick()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboChains_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combo|Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All combos we\xe2\x80\x99re using, copied from CharacterProfile->ComboChains at runtime. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboChainComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All combos we\xe2\x80\x99re using, copied from CharacterProfile->ComboChains at runtime." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAbilitySystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerHitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMovementComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterRank;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterProfile;
	static void NewProp_bEnableTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTick;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboChains_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboChains;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboChainComponent_OnComboInput, "OnComboInput" }, // 1334112177
		{ &Z_Construct_UFunction_UComboChainComponent_ResetCombo, "ResetCombo" }, // 1585139904
		{ &Z_Construct_UFunction_UComboChainComponent_TriggerExit, "TriggerExit" }, // 1819299838
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboChainComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComboChainComponent_Statics::NewProp_OwnerAbilitySystem = { "OwnerAbilitySystem", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboChainComponent, OwnerAbilitySystem), Z_Construct_UClass_UAbilitySubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerAbilitySystem_MetaData), NewProp_OwnerAbilitySystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComboChainComponent_Statics::NewProp_OwnerHitComponent = { "OwnerHitComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboChainComponent, OwnerHitComponent), Z_Construct_UClass_UHitComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerHitComponent_MetaData), NewProp_OwnerHitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComboChainComponent_Statics::NewProp_OwnerMovementComponent = { "OwnerMovementComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboChainComponent, OwnerMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMovementComponent_MetaData), NewProp_OwnerMovementComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UComboChainComponent_Statics::NewProp_CharacterRank = { "CharacterRank", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboChainComponent, CharacterRank), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRank_MetaData), NewProp_CharacterRank_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComboChainComponent_Statics::NewProp_CharacterProfile = { "CharacterProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboChainComponent, CharacterProfile), Z_Construct_UClass_UCharacterProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterProfile_MetaData), NewProp_CharacterProfile_MetaData) };
void Z_Construct_UClass_UComboChainComponent_Statics::NewProp_bEnableTick_SetBit(void* Obj)
{
	((UComboChainComponent*)Obj)->bEnableTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboChainComponent_Statics::NewProp_bEnableTick = { "bEnableTick", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboChainComponent), &Z_Construct_UClass_UComboChainComponent_Statics::NewProp_bEnableTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTick_MetaData), NewProp_bEnableTick_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboChainComponent_Statics::NewProp_ComboChains_Inner = { "ComboChains", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComboChain, METADATA_PARAMS(0, nullptr) }; // 1083968843
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboChainComponent_Statics::NewProp_ComboChains = { "ComboChains", nullptr, (EPropertyFlags)0x0020088000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboChainComponent, ComboChains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboChains_MetaData), NewProp_ComboChains_MetaData) }; // 1083968843
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboChainComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboChainComponent_Statics::NewProp_OwnerAbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboChainComponent_Statics::NewProp_OwnerHitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboChainComponent_Statics::NewProp_OwnerMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboChainComponent_Statics::NewProp_CharacterRank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboChainComponent_Statics::NewProp_CharacterProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboChainComponent_Statics::NewProp_bEnableTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboChainComponent_Statics::NewProp_ComboChains_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboChainComponent_Statics::NewProp_ComboChains,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboChainComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComboChainComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteroperableComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboChainComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboChainComponent_Statics::ClassParams = {
	&UComboChainComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UComboChainComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UComboChainComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboChainComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboChainComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboChainComponent()
{
	if (!Z_Registration_Info_UClass_UComboChainComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboChainComponent.OuterSingleton, Z_Construct_UClass_UComboChainComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboChainComponent.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UComboChainComponent>()
{
	return UComboChainComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboChainComponent);
UComboChainComponent::~UComboChainComponent() {}
// End Class UComboChainComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboChainComponent, UComboChainComponent::StaticClass, TEXT("UComboChainComponent"), &Z_Registration_Info_UClass_UComboChainComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboChainComponent), 983156900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_1841618673(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
