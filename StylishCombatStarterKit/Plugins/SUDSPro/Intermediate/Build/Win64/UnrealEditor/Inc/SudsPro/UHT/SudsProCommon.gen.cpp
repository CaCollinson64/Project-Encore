// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/SudsProCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProCommon() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCommon();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCommon_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Class USudsProCommon
void USudsProCommon::StaticRegisterNativesUSudsProCommon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProCommon);
UClass* Z_Construct_UClass_USudsProCommon_NoRegister()
{
	return USudsProCommon::StaticClass();
}
struct Z_Construct_UClass_USudsProCommon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SudsProCommon.h" },
		{ "ModuleRelativePath", "Public/SudsProCommon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProCommon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProCommon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProCommon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProCommon_Statics::ClassParams = {
	&USudsProCommon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProCommon_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProCommon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProCommon()
{
	if (!Z_Registration_Info_UClass_USudsProCommon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProCommon.OuterSingleton, Z_Construct_UClass_USudsProCommon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProCommon.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProCommon>()
{
	return USudsProCommon::StaticClass();
}
USudsProCommon::USudsProCommon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProCommon);
USudsProCommon::~USudsProCommon() {}
// End Class USudsProCommon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProCommon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProCommon, USudsProCommon::StaticClass, TEXT("USudsProCommon"), &Z_Registration_Info_UClass_USudsProCommon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProCommon), 2653791415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProCommon_h_739446874(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProCommon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProCommon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
