// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDSEditor/Public/SUDSScriptFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSScriptFactory() {}

// Begin Cross Module References
SUDSEDITOR_API UClass* Z_Construct_UClass_USUDSScriptFactory();
SUDSEDITOR_API UClass* Z_Construct_UClass_USUDSScriptFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_SUDSEditor();
// End Cross Module References

// Begin Class USUDSScriptFactory
void USUDSScriptFactory::StaticRegisterNativesUSUDSScriptFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSScriptFactory);
UClass* Z_Construct_UClass_USUDSScriptFactory_NoRegister()
{
	return USUDSScriptFactory::StaticClass();
}
struct Z_Construct_UClass_USUDSScriptFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SUDSScriptFactory.h" },
		{ "ModuleRelativePath", "Public/SUDSScriptFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSScriptFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USUDSScriptFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSScriptFactory_Statics::ClassParams = {
	&USUDSScriptFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSScriptFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSScriptFactory()
{
	if (!Z_Registration_Info_UClass_USUDSScriptFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSScriptFactory.OuterSingleton, Z_Construct_UClass_USUDSScriptFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSScriptFactory.OuterSingleton;
}
template<> SUDSEDITOR_API UClass* StaticClass<USUDSScriptFactory>()
{
	return USUDSScriptFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSScriptFactory);
USUDSScriptFactory::~USUDSScriptFactory() {}
// End Class USUDSScriptFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSScriptFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSScriptFactory, USUDSScriptFactory::StaticClass, TEXT("USUDSScriptFactory"), &Z_Registration_Info_UClass_USUDSScriptFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSScriptFactory), 1273449358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSScriptFactory_h_4205971689(TEXT("/Script/SUDSEditor"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSScriptFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSScriptFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
