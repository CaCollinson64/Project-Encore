// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/Fighting/ComboPolicies/ComboHitPolicy.h"
#include "StylishCombatStarterKit/Gameplay/Character/Inputs/ComboTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboHitPolicy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboHitPolicy();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboHitPolicy_NoRegister();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FComboStep();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UComboHitPolicy Function HitComponent
struct ComboHitPolicy_eventHitComponent_Parms
{
	FComboStep ComboChain;
	AActor* TargetActor;
};
static const FName NAME_UComboHitPolicy_HitComponent = FName(TEXT("HitComponent"));
void UComboHitPolicy::HitComponent(FComboStep const& ComboChain, AActor* TargetActor)
{
	ComboHitPolicy_eventHitComponent_Parms Parms;
	Parms.ComboChain=ComboChain;
	Parms.TargetActor=TargetActor;
	UFunction* Func = FindFunctionChecked(NAME_UComboHitPolicy_HitComponent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/Fighting/ComboPolicies/ComboHitPolicy.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::NewProp_ComboChain = { "ComboChain", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboHitPolicy_eventHitComponent_Parms, ComboChain), Z_Construct_UScriptStruct_FComboStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboChain_MetaData), NewProp_ComboChain_MetaData) }; // 3934841171
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboHitPolicy_eventHitComponent_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::NewProp_ComboChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboHitPolicy, nullptr, "HitComponent", nullptr, nullptr, Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::PropPointers), sizeof(ComboHitPolicy_eventHitComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(ComboHitPolicy_eventHitComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComboHitPolicy_HitComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboHitPolicy_HitComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UComboHitPolicy Function HitComponent

// Begin Class UComboHitPolicy
void UComboHitPolicy::StaticRegisterNativesUComboHitPolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboHitPolicy);
UClass* Z_Construct_UClass_UComboHitPolicy_NoRegister()
{
	return UComboHitPolicy::StaticClass();
}
struct Z_Construct_UClass_UComboHitPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gameplay/Character/Components/Fighting/ComboPolicies/ComboHitPolicy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/Fighting/ComboPolicies/ComboHitPolicy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboHitPolicy_HitComponent, "HitComponent" }, // 1506845454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboHitPolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UComboHitPolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboHitPolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboHitPolicy_Statics::ClassParams = {
	&UComboHitPolicy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboHitPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboHitPolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboHitPolicy()
{
	if (!Z_Registration_Info_UClass_UComboHitPolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboHitPolicy.OuterSingleton, Z_Construct_UClass_UComboHitPolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboHitPolicy.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UComboHitPolicy>()
{
	return UComboHitPolicy::StaticClass();
}
UComboHitPolicy::UComboHitPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboHitPolicy);
UComboHitPolicy::~UComboHitPolicy() {}
// End Class UComboHitPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboHitPolicy, UComboHitPolicy::StaticClass, TEXT("UComboHitPolicy"), &Z_Registration_Info_UClass_UComboHitPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboHitPolicy), 2236852400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_2318927889(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
