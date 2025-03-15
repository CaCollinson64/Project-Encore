// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/ComboPolicies/ComboValidationPolicy.h"
#include "StylishCombatStarterKit/Gameplay/Character/Inputs/ComboTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboValidationPolicy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboValidationPolicy();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboValidationPolicy_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UPolicyBase();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FComboStep();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UComboValidationPolicy Function CanExecuteCombo
struct ComboValidationPolicy_eventCanExecuteCombo_Parms
{
	FComboStep ComboChain;
	AActor* TargetActor;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ComboValidationPolicy_eventCanExecuteCombo_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UComboValidationPolicy_CanExecuteCombo = FName(TEXT("CanExecuteCombo"));
bool UComboValidationPolicy::CanExecuteCombo(FComboStep const& ComboChain, AActor* TargetActor)
{
	ComboValidationPolicy_eventCanExecuteCombo_Parms Parms;
	Parms.ComboChain=ComboChain;
	Parms.TargetActor=TargetActor;
	UFunction* Func = FindFunctionChecked(NAME_UComboValidationPolicy_CanExecuteCombo);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/ComboValidationPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboChain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboChain;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::NewProp_ComboChain = { "ComboChain", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboValidationPolicy_eventCanExecuteCombo_Parms, ComboChain), Z_Construct_UScriptStruct_FComboStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboChain_MetaData), NewProp_ComboChain_MetaData) }; // 1049137089
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboValidationPolicy_eventCanExecuteCombo_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ComboValidationPolicy_eventCanExecuteCombo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboValidationPolicy_eventCanExecuteCombo_Parms), &Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::NewProp_ComboChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboValidationPolicy, nullptr, "CanExecuteCombo", nullptr, nullptr, Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::PropPointers), sizeof(ComboValidationPolicy_eventCanExecuteCombo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::Function_MetaDataParams) };
static_assert(sizeof(ComboValidationPolicy_eventCanExecuteCombo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UComboValidationPolicy Function CanExecuteCombo

// Begin Class UComboValidationPolicy
void UComboValidationPolicy::StaticRegisterNativesUComboValidationPolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboValidationPolicy);
UClass* Z_Construct_UClass_UComboValidationPolicy_NoRegister()
{
	return UComboValidationPolicy::StaticClass();
}
struct Z_Construct_UClass_UComboValidationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gameplay/Character/Components/ComboPolicies/ComboValidationPolicy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/ComboValidationPolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboValidationPolicy_CanExecuteCombo, "CanExecuteCombo" }, // 3510260286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboValidationPolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UComboValidationPolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPolicyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboValidationPolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboValidationPolicy_Statics::ClassParams = {
	&UComboValidationPolicy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboValidationPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboValidationPolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboValidationPolicy()
{
	if (!Z_Registration_Info_UClass_UComboValidationPolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboValidationPolicy.OuterSingleton, Z_Construct_UClass_UComboValidationPolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboValidationPolicy.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UComboValidationPolicy>()
{
	return UComboValidationPolicy::StaticClass();
}
UComboValidationPolicy::UComboValidationPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboValidationPolicy);
UComboValidationPolicy::~UComboValidationPolicy() {}
// End Class UComboValidationPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboValidationPolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboValidationPolicy, UComboValidationPolicy::StaticClass, TEXT("UComboValidationPolicy"), &Z_Registration_Info_UClass_UComboValidationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboValidationPolicy), 2804569970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboValidationPolicy_h_1935742580(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboValidationPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_ComboValidationPolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
