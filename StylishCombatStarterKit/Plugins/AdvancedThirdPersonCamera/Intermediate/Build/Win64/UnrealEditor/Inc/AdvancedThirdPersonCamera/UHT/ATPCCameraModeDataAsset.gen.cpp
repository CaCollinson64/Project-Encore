// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraModeDataAsset.h"
#include "AdvancedThirdPersonCamera/Public/ATPCTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraModeDataAsset() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeDataAsset();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraMode();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraModeDataAsset
void UATPCCameraModeDataAsset::StaticRegisterNativesUATPCCameraModeDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraModeDataAsset);
UClass* Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister()
{
	return UATPCCameraModeDataAsset::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraModeDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ATPCCameraModeDataAsset.h" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRelativeLocation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeScripts_Inner_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Classes of objects that will be created when camera mode is activated. \n\x09* This is a useful thing to add custom user code that will be executed during the work of camera mode\n\x09*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Classes of objects that will be created when camera mode is activated.\nThis is a useful thing to add custom user code that will be executed during the work of camera mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeScripts_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Classes of objects that will be created when camera mode is activated. \n\x09* This is a useful thing to add custom user code that will be executed during the work of camera mode\n\x09*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Classes of objects that will be created when camera mode is activated.\nThis is a useful thing to add custom user code that will be executed during the work of camera mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeScripts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeScripts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraModeDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraModeTag = { "CameraModeTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraModeDataAsset, CameraModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeTag_MetaData), NewProp_CameraModeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraRelativeLocation = { "CameraRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraModeDataAsset, CameraRelativeLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRelativeLocation_MetaData), NewProp_CameraRelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraModeSettings = { "CameraModeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraModeDataAsset, CameraModeSettings), Z_Construct_UScriptStruct_FATPCCameraMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeSettings_MetaData), NewProp_CameraModeSettings_MetaData) }; // 1519354485
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraModeScripts_Inner = { "CameraModeScripts", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UATPCCameraModeScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeScripts_Inner_MetaData), NewProp_CameraModeScripts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraModeScripts = { "CameraModeScripts", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraModeDataAsset, CameraModeScripts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeScripts_MetaData), NewProp_CameraModeScripts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraModeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraModeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraModeScripts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::NewProp_CameraModeScripts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::ClassParams = {
	&UATPCCameraModeDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraModeDataAsset()
{
	if (!Z_Registration_Info_UClass_UATPCCameraModeDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraModeDataAsset.OuterSingleton, Z_Construct_UClass_UATPCCameraModeDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraModeDataAsset.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraModeDataAsset>()
{
	return UATPCCameraModeDataAsset::StaticClass();
}
UATPCCameraModeDataAsset::UATPCCameraModeDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraModeDataAsset);
UATPCCameraModeDataAsset::~UATPCCameraModeDataAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UATPCCameraModeDataAsset)
// End Class UATPCCameraModeDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraModeDataAsset, UATPCCameraModeDataAsset::StaticClass, TEXT("UATPCCameraModeDataAsset"), &Z_Registration_Info_UClass_UATPCCameraModeDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraModeDataAsset), 1115948233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeDataAsset_h_185377083(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
