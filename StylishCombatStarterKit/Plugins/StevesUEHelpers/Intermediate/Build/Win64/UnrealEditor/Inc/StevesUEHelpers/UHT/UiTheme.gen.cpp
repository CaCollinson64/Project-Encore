// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/UiTheme.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUiTheme() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UUiTheme();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UUiTheme_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UUiTheme
void UUiTheme::StaticRegisterNativesUUiTheme()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUiTheme);
UClass* Z_Construct_UClass_UUiTheme_NoRegister()
{
	return UUiTheme::StaticClass();
}
struct Z_Construct_UClass_UUiTheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Custom asset to conveniently hold theme information for the UI\n/// Currently only lightly used to provide simple access to button images, but I intend to use\n/// this more extensively later\n" },
#endif
		{ "IncludePath", "StevesUI/UiTheme.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/UiTheme.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom asset to conveniently hold theme information for the UI\nCurrently only lightly used to provide simple access to button images, but I intend to use\nthis more extensively later" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseImages_MetaData[] = {
		{ "Category", "UiTheme" },
		{ "ModuleRelativePath", "Public/StevesUI/UiTheme.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XboxControllerImages_MetaData[] = {
		{ "Category", "UiTheme" },
		{ "ModuleRelativePath", "Public/StevesUI/UiTheme.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_KeyboardMouseImages;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_XboxControllerImages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUiTheme>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUiTheme_Statics::NewProp_KeyboardMouseImages = { "KeyboardMouseImages", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUiTheme, KeyboardMouseImages), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardMouseImages_MetaData), NewProp_KeyboardMouseImages_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUiTheme_Statics::NewProp_XboxControllerImages = { "XboxControllerImages", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUiTheme, XboxControllerImages), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XboxControllerImages_MetaData), NewProp_XboxControllerImages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUiTheme_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUiTheme_Statics::NewProp_KeyboardMouseImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUiTheme_Statics::NewProp_XboxControllerImages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUiTheme_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUiTheme_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUiTheme_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUiTheme_Statics::ClassParams = {
	&UUiTheme::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUiTheme_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUiTheme_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUiTheme_Statics::Class_MetaDataParams), Z_Construct_UClass_UUiTheme_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUiTheme()
{
	if (!Z_Registration_Info_UClass_UUiTheme.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUiTheme.OuterSingleton, Z_Construct_UClass_UUiTheme_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUiTheme.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UUiTheme>()
{
	return UUiTheme::StaticClass();
}
UUiTheme::UUiTheme(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUiTheme);
UUiTheme::~UUiTheme() {}
// End Class UUiTheme

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_UiTheme_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUiTheme, UUiTheme::StaticClass, TEXT("UUiTheme"), &Z_Registration_Info_UClass_UUiTheme, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUiTheme), 1025715969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_UiTheme_h_1216904(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_UiTheme_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_UiTheme_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
