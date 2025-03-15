// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/ComboPolicies/ComboStartPolicy.h"
#include "StylishCombatStarterKit/Gameplay/Character/Inputs/ComboTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboStartPolicy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboPolicy();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboPolicy_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UPolicyBase();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FComboStep();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UComboPolicy Function ExecuteCombo
struct ComboPolicy_eventExecuteCombo_Parms
{
	FComboStep ComboChain;
	AActor* TargetActor;
};
static const FName NAME_UComboPolicy_ExecuteCombo = FName(TEXT("ExecuteCombo"));
void UComboPolicy::ExecuteCombo(FComboStep const& ComboChain, AActor* TargetActor)
{
	ComboPolicy_eventExecuteCombo_Parms Parms;
	Parms.ComboChain=ComboChain;
	Parms.TargetActor=TargetActor;
	UFunction* Func = FindFunctionChecked(NAME_UComboPolicy_ExecuteCombo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/ComboStartPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboChain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboChain;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::NewProp_ComboChain = { "ComboChain", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboPolicy_eventExecuteCombo_Parms, ComboChain), Z_Construct_UScriptStruct_FComboStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboChain_MetaData), NewProp_ComboChain_MetaData) }; // 1049137089
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboPolicy_eventExecuteCombo_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::NewProp_ComboChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboPolicy, nullptr, "ExecuteCombo", nullptr, nullptr, Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::PropPointers), sizeof(ComboPolicy_eventExecuteCombo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::Function_MetaDataParams) };
static_assert(sizeof(ComboPolicy_eventExecuteCombo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboPolicy_ExecuteCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboPolicy_ExecuteCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UComboPolicy Function ExecuteCombo

// Begin Class UComboPolicy
void UComboPolicy::StaticRegisterNativesUComboPolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboPolicy);
UClass* Z_Construct_UClass_UComboPolicy_NoRegister()
{
	return UComboPolicy::StaticClass();
}
struct Z_Construct_UClass_UComboPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gameplay/Character/Components/ComboPolicies/ComboStartPolicy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/ComboStartPolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboPolicy_ExecuteCombo, "ExecuteCombo" }, // 3553779623
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboPolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UComboPolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPolicyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboPolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboPolicy_Statics::ClassParams = {
	&UComboPolicy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboPolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboPolicy()
{
	if (!Z_Registration_Info_UClass_UComboPolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboPolicy.OuterSingleton, Z_Construct_UClass_UComboPolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboPolicy.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UComboPolicy>()
{
	return UComboPolicy::StaticClass();
}
UComboPolicy::UComboPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboPolicy);
UComboPolicy::~UComboPolicy() {}
// End Class UComboPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboStartPolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboPolicy, UComboPolicy::StaticClass, TEXT("UComboPolicy"), &Z_Registration_Info_UClass_UComboPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboPolicy), 2781321941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboStartPolicy_h_1611829182(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboStartPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboStartPolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
