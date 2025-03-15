// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/CameraModeScripts/ATPCCameraModeScript_ChangeMovementSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraModeScript_ChangeMovementSpeed() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraModeScript_ChangeMovementSpeed
void UATPCCameraModeScript_ChangeMovementSpeed::StaticRegisterNativesUATPCCameraModeScript_ChangeMovementSpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraModeScript_ChangeMovementSpeed);
UClass* Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_NoRegister()
{
	return UATPCCameraModeScript_ChangeMovementSpeed::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CameraModeScripts/ATPCCameraModeScript_ChangeMovementSpeed.h" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_ChangeMovementSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMaxMovementSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_ChangeMovementSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreOldMovementSpeedOnExitCameraMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_ChangeMovementSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMovementSpeed_MetaData[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_ChangeMovementSpeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxMovementSpeed;
	static void NewProp_bRestoreOldMovementSpeedOnExitCameraMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreOldMovementSpeedOnExitCameraMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldMaxMovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraModeScript_ChangeMovementSpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::NewProp_NewMaxMovementSpeed = { "NewMaxMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraModeScript_ChangeMovementSpeed, NewMaxMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMaxMovementSpeed_MetaData), NewProp_NewMaxMovementSpeed_MetaData) };
void Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::NewProp_bRestoreOldMovementSpeedOnExitCameraMode_SetBit(void* Obj)
{
	((UATPCCameraModeScript_ChangeMovementSpeed*)Obj)->bRestoreOldMovementSpeedOnExitCameraMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::NewProp_bRestoreOldMovementSpeedOnExitCameraMode = { "bRestoreOldMovementSpeedOnExitCameraMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATPCCameraModeScript_ChangeMovementSpeed), &Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::NewProp_bRestoreOldMovementSpeedOnExitCameraMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestoreOldMovementSpeedOnExitCameraMode_MetaData), NewProp_bRestoreOldMovementSpeedOnExitCameraMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::NewProp_OldMaxMovementSpeed = { "OldMaxMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraModeScript_ChangeMovementSpeed, OldMaxMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMovementSpeed_MetaData), NewProp_OldMaxMovementSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::NewProp_NewMaxMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::NewProp_bRestoreOldMovementSpeedOnExitCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::NewProp_OldMaxMovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UATPCCameraModeScript,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::ClassParams = {
	&UATPCCameraModeScript_ChangeMovementSpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed()
{
	if (!Z_Registration_Info_UClass_UATPCCameraModeScript_ChangeMovementSpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraModeScript_ChangeMovementSpeed.OuterSingleton, Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraModeScript_ChangeMovementSpeed.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraModeScript_ChangeMovementSpeed>()
{
	return UATPCCameraModeScript_ChangeMovementSpeed::StaticClass();
}
UATPCCameraModeScript_ChangeMovementSpeed::UATPCCameraModeScript_ChangeMovementSpeed() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraModeScript_ChangeMovementSpeed);
UATPCCameraModeScript_ChangeMovementSpeed::~UATPCCameraModeScript_ChangeMovementSpeed() {}
// End Class UATPCCameraModeScript_ChangeMovementSpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_ChangeMovementSpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraModeScript_ChangeMovementSpeed, UATPCCameraModeScript_ChangeMovementSpeed::StaticClass, TEXT("UATPCCameraModeScript_ChangeMovementSpeed"), &Z_Registration_Info_UClass_UATPCCameraModeScript_ChangeMovementSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraModeScript_ChangeMovementSpeed), 1581594699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_ChangeMovementSpeed_h_2360093957(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_ChangeMovementSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_ChangeMovementSpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
