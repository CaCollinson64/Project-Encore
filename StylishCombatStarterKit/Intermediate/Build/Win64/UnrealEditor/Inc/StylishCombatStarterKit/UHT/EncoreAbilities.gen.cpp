// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Abilities/EncoreAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEncoreAbilities() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UEncoreAbilities();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UEncoreAbilities_NoRegister();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UEncoreAbilities Function OnInterrupt
static const FName NAME_UEncoreAbilities_OnInterrupt = FName(TEXT("OnInterrupt"));
void UEncoreAbilities::OnInterrupt()
{
	UFunction* Func = FindFunctionChecked(NAME_UEncoreAbilities_OnInterrupt);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UEncoreAbilities_OnInterrupt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/EncoreAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEncoreAbilities_OnInterrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEncoreAbilities, nullptr, "OnInterrupt", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncoreAbilities_OnInterrupt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEncoreAbilities_OnInterrupt_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEncoreAbilities_OnInterrupt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEncoreAbilities_OnInterrupt_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEncoreAbilities Function OnInterrupt

// Begin Class UEncoreAbilities Function OnRelease
static const FName NAME_UEncoreAbilities_OnRelease = FName(TEXT("OnRelease"));
void UEncoreAbilities::OnRelease()
{
	UFunction* Func = FindFunctionChecked(NAME_UEncoreAbilities_OnRelease);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UEncoreAbilities_OnRelease_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/EncoreAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEncoreAbilities_OnRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEncoreAbilities, nullptr, "OnRelease", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncoreAbilities_OnRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEncoreAbilities_OnRelease_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEncoreAbilities_OnRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEncoreAbilities_OnRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEncoreAbilities Function OnRelease

// Begin Class UEncoreAbilities Function TickAbility
struct EncoreAbilities_eventTickAbility_Parms
{
	float DeltaSeconds;
};
static const FName NAME_UEncoreAbilities_TickAbility = FName(TEXT("TickAbility"));
void UEncoreAbilities::TickAbility(float DeltaSeconds)
{
	EncoreAbilities_eventTickAbility_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	UFunction* Func = FindFunctionChecked(NAME_UEncoreAbilities_TickAbility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/EncoreAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EncoreAbilities_eventTickAbility_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEncoreAbilities, nullptr, "TickAbility", nullptr, nullptr, Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::PropPointers), sizeof(EncoreAbilities_eventTickAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(EncoreAbilities_eventTickAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEncoreAbilities_TickAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEncoreAbilities_TickAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEncoreAbilities Function TickAbility

// Begin Class UEncoreAbilities
void UEncoreAbilities::StaticRegisterNativesUEncoreAbilities()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEncoreAbilities);
UClass* Z_Construct_UClass_UEncoreAbilities_NoRegister()
{
	return UEncoreAbilities::StaticClass();
}
struct Z_Construct_UClass_UEncoreAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Gameplay/Character/Abilities/EncoreAbilities.h" },
		{ "ModuleRelativePath", "Gameplay/Character/Abilities/EncoreAbilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEncoreAbilities_OnInterrupt, "OnInterrupt" }, // 2866634618
		{ &Z_Construct_UFunction_UEncoreAbilities_OnRelease, "OnRelease" }, // 201807155
		{ &Z_Construct_UFunction_UEncoreAbilities_TickAbility, "TickAbility" }, // 2775914055
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEncoreAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEncoreAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEncoreAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEncoreAbilities_Statics::ClassParams = {
	&UEncoreAbilities::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEncoreAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UEncoreAbilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEncoreAbilities()
{
	if (!Z_Registration_Info_UClass_UEncoreAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEncoreAbilities.OuterSingleton, Z_Construct_UClass_UEncoreAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEncoreAbilities.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UEncoreAbilities>()
{
	return UEncoreAbilities::StaticClass();
}
UEncoreAbilities::UEncoreAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEncoreAbilities);
UEncoreAbilities::~UEncoreAbilities() {}
// End Class UEncoreAbilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_EncoreAbilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEncoreAbilities, UEncoreAbilities::StaticClass, TEXT("UEncoreAbilities"), &Z_Registration_Info_UClass_UEncoreAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEncoreAbilities), 4268211294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_EncoreAbilities_h_2099856970(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_EncoreAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_EncoreAbilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
