// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesPluginSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesPluginSettings();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesPluginSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UStevesPluginSettings
void UStevesPluginSettings::StaticRegisterNativesUStevesPluginSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesPluginSettings);
UClass* Z_Construct_UClass_UStevesPluginSettings_NoRegister()
{
	return UStevesPluginSettings::StaticClass();
}
struct Z_Construct_UClass_UStevesPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Settings for the plug-in.\n*/" },
#endif
		{ "IncludePath", "StevesPluginSettings.h" },
		{ "ModuleRelativePath", "Public/StevesPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for the plug-in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputActionSearchDirectories_MetaData[] = {
		{ "Category", "StevesUEHelpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Which directories to search for Enhanced Input Actions when referenced just by name in e.g. Rich Text Decorator\n" },
#endif
		{ "DisplayName", "Directories to search for Enhanced Input Actions" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/StevesPluginSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which directories to search for Enhanced Input Actions when referenced just by name in e.g. Rich Text Decorator" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnhancedInputActionSearchDirectories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnhancedInputActionSearchDirectories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesPluginSettings_Statics::NewProp_EnhancedInputActionSearchDirectories_Inner = { "EnhancedInputActionSearchDirectories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesPluginSettings_Statics::NewProp_EnhancedInputActionSearchDirectories = { "EnhancedInputActionSearchDirectories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesPluginSettings, EnhancedInputActionSearchDirectories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputActionSearchDirectories_MetaData), NewProp_EnhancedInputActionSearchDirectories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStevesPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesPluginSettings_Statics::NewProp_EnhancedInputActionSearchDirectories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesPluginSettings_Statics::NewProp_EnhancedInputActionSearchDirectories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPluginSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStevesPluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesPluginSettings_Statics::ClassParams = {
	&UStevesPluginSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStevesPluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPluginSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesPluginSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesPluginSettings()
{
	if (!Z_Registration_Info_UClass_UStevesPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesPluginSettings.OuterSingleton, Z_Construct_UClass_UStevesPluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesPluginSettings.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesPluginSettings>()
{
	return UStevesPluginSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesPluginSettings);
UStevesPluginSettings::~UStevesPluginSettings() {}
// End Class UStevesPluginSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPluginSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesPluginSettings, UStevesPluginSettings::StaticClass, TEXT("UStevesPluginSettings"), &Z_Registration_Info_UClass_UStevesPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesPluginSettings), 736932546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPluginSettings_h_1488965045(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPluginSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
