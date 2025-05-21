// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Private/Extensions/SudsProCameraModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProCameraModifier() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCameraModifier();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCameraModifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Class USudsProCameraModifier
void USudsProCameraModifier::StaticRegisterNativesUSudsProCameraModifier()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProCameraModifier);
UClass* Z_Construct_UClass_USudsProCameraModifier_NoRegister()
{
	return USudsProCameraModifier::StaticClass();
}
struct Z_Construct_UClass_USudsProCameraModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// Camera modifier that applies supplemental animation\n/// There is only one instance of this; all camera effects are applied by this one instance\n" },
		{ "IncludePath", "Extensions/SudsProCameraModifier.h" },
		{ "ModuleRelativePath", "Private/Extensions/SudsProCameraModifier.h" },
		{ "ToolTip", "Camera modifier that applies supplemental animation\nThere is only one instance of this; all camera effects are applied by this one instance" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProCameraModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProCameraModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProCameraModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProCameraModifier_Statics::ClassParams = {
	&USudsProCameraModifier::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProCameraModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProCameraModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProCameraModifier()
{
	if (!Z_Registration_Info_UClass_USudsProCameraModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProCameraModifier.OuterSingleton, Z_Construct_UClass_USudsProCameraModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProCameraModifier.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProCameraModifier>()
{
	return USudsProCameraModifier::StaticClass();
}
USudsProCameraModifier::USudsProCameraModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProCameraModifier);
USudsProCameraModifier::~USudsProCameraModifier() {}
// End Class USudsProCameraModifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Private_Extensions_SudsProCameraModifier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProCameraModifier, USudsProCameraModifier::StaticClass, TEXT("USudsProCameraModifier"), &Z_Registration_Info_UClass_USudsProCameraModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProCameraModifier), 1676491905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Private_Extensions_SudsProCameraModifier_h_989173108(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Private_Extensions_SudsProCameraModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Private_Extensions_SudsProCameraModifier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
