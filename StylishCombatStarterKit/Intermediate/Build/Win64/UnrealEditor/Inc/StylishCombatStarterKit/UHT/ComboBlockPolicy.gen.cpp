// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/ComboPolicies/ComboBlockPolicy.h"
#include "StylishCombatStarterKit/Gameplay/Character/Inputs/ComboTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBlockPolicy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboBlockPolicy();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboBlockPolicy_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UPolicyBase();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FComboStep();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UComboBlockPolicy Function BlockControls
struct ComboBlockPolicy_eventBlockControls_Parms
{
	FComboStep ComboChain;
	AActor* TargetActor;
};
static const FName NAME_UComboBlockPolicy_BlockControls = FName(TEXT("BlockControls"));
void UComboBlockPolicy::BlockControls(FComboStep const& ComboChain, AActor* TargetActor)
{
	ComboBlockPolicy_eventBlockControls_Parms Parms;
	Parms.ComboChain=ComboChain;
	Parms.TargetActor=TargetActor;
	UFunction* Func = FindFunctionChecked(NAME_UComboBlockPolicy_BlockControls);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/ComboBlockPolicy.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::NewProp_ComboChain = { "ComboChain", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBlockPolicy_eventBlockControls_Parms, ComboChain), Z_Construct_UScriptStruct_FComboStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboChain_MetaData), NewProp_ComboChain_MetaData) }; // 1049137089
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBlockPolicy_eventBlockControls_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::NewProp_ComboChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBlockPolicy, nullptr, "BlockControls", nullptr, nullptr, Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::PropPointers), sizeof(ComboBlockPolicy_eventBlockControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::Function_MetaDataParams) };
static_assert(sizeof(ComboBlockPolicy_eventBlockControls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBlockPolicy_BlockControls()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBlockPolicy_BlockControls_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UComboBlockPolicy Function BlockControls

// Begin Class UComboBlockPolicy Function UnblockControls
struct ComboBlockPolicy_eventUnblockControls_Parms
{
	FComboStep ComboChain;
	AActor* TargetActor;
};
static const FName NAME_UComboBlockPolicy_UnblockControls = FName(TEXT("UnblockControls"));
void UComboBlockPolicy::UnblockControls(FComboStep const& ComboChain, AActor* TargetActor)
{
	ComboBlockPolicy_eventUnblockControls_Parms Parms;
	Parms.ComboChain=ComboChain;
	Parms.TargetActor=TargetActor;
	UFunction* Func = FindFunctionChecked(NAME_UComboBlockPolicy_UnblockControls);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/ComboBlockPolicy.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::NewProp_ComboChain = { "ComboChain", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBlockPolicy_eventUnblockControls_Parms, ComboChain), Z_Construct_UScriptStruct_FComboStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboChain_MetaData), NewProp_ComboChain_MetaData) }; // 1049137089
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboBlockPolicy_eventUnblockControls_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::NewProp_ComboChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBlockPolicy, nullptr, "UnblockControls", nullptr, nullptr, Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::PropPointers), sizeof(ComboBlockPolicy_eventUnblockControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::Function_MetaDataParams) };
static_assert(sizeof(ComboBlockPolicy_eventUnblockControls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboBlockPolicy_UnblockControls()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboBlockPolicy_UnblockControls_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UComboBlockPolicy Function UnblockControls

// Begin Class UComboBlockPolicy
void UComboBlockPolicy::StaticRegisterNativesUComboBlockPolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboBlockPolicy);
UClass* Z_Construct_UClass_UComboBlockPolicy_NoRegister()
{
	return UComboBlockPolicy::StaticClass();
}
struct Z_Construct_UClass_UComboBlockPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gameplay/Character/Components/ComboPolicies/ComboBlockPolicy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/ComboBlockPolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboBlockPolicy_BlockControls, "BlockControls" }, // 3067989998
		{ &Z_Construct_UFunction_UComboBlockPolicy_UnblockControls, "UnblockControls" }, // 2603560819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBlockPolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UComboBlockPolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPolicyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBlockPolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboBlockPolicy_Statics::ClassParams = {
	&UComboBlockPolicy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBlockPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboBlockPolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboBlockPolicy()
{
	if (!Z_Registration_Info_UClass_UComboBlockPolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboBlockPolicy.OuterSingleton, Z_Construct_UClass_UComboBlockPolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboBlockPolicy.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UComboBlockPolicy>()
{
	return UComboBlockPolicy::StaticClass();
}
UComboBlockPolicy::UComboBlockPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBlockPolicy);
UComboBlockPolicy::~UComboBlockPolicy() {}
// End Class UComboBlockPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboBlockPolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboBlockPolicy, UComboBlockPolicy::StaticClass, TEXT("UComboBlockPolicy"), &Z_Registration_Info_UClass_UComboBlockPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboBlockPolicy), 2720175100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboBlockPolicy_h_3135317501(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboBlockPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboBlockPolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
