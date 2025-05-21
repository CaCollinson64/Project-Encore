// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDSEditor/Public/SUDSScriptReimportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSScriptReimportFactory() {}

// Begin Cross Module References
SUDSEDITOR_API UClass* Z_Construct_UClass_USUDSScriptFactory();
SUDSEDITOR_API UClass* Z_Construct_UClass_USUDSScriptReimportFactory();
SUDSEDITOR_API UClass* Z_Construct_UClass_USUDSScriptReimportFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_SUDSEditor();
// End Cross Module References

// Begin Class USUDSScriptReimportFactory
void USUDSScriptReimportFactory::StaticRegisterNativesUSUDSScriptReimportFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSScriptReimportFactory);
UClass* Z_Construct_UClass_USUDSScriptReimportFactory_NoRegister()
{
	return USUDSScriptReimportFactory::StaticClass();
}
struct Z_Construct_UClass_USUDSScriptReimportFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reimports a USUDSScriptFactory asset\n// Necessary to get the import pop-up \n" },
#endif
		{ "IncludePath", "SUDSScriptReimportFactory.h" },
		{ "ModuleRelativePath", "Public/SUDSScriptReimportFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reimports a USUDSScriptFactory asset\nNecessary to get the import pop-up" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSScriptReimportFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USUDSScriptReimportFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USUDSScriptFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptReimportFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSScriptReimportFactory_Statics::ClassParams = {
	&USUDSScriptReimportFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptReimportFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSScriptReimportFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSScriptReimportFactory()
{
	if (!Z_Registration_Info_UClass_USUDSScriptReimportFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSScriptReimportFactory.OuterSingleton, Z_Construct_UClass_USUDSScriptReimportFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSScriptReimportFactory.OuterSingleton;
}
template<> SUDSEDITOR_API UClass* StaticClass<USUDSScriptReimportFactory>()
{
	return USUDSScriptReimportFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSScriptReimportFactory);
USUDSScriptReimportFactory::~USUDSScriptReimportFactory() {}
// End Class USUDSScriptReimportFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSScriptReimportFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSScriptReimportFactory, USUDSScriptReimportFactory::StaticClass, TEXT("USUDSScriptReimportFactory"), &Z_Registration_Info_UClass_USUDSScriptReimportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSScriptReimportFactory), 4128358064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSScriptReimportFactory_h_3776709245(TEXT("/Script/SUDSEditor"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSScriptReimportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSScriptReimportFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
