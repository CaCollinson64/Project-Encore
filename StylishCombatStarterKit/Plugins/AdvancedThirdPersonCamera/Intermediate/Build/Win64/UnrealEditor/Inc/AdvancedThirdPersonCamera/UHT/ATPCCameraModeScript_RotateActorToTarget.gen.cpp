// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/CameraModeScripts/ATPCCameraModeScript_RotateActorToTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraModeScript_RotateActorToTarget() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraModeScript_RotateActorToTarget
void UATPCCameraModeScript_RotateActorToTarget::StaticRegisterNativesUATPCCameraModeScript_RotateActorToTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraModeScript_RotateActorToTarget);
UClass* Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_NoRegister()
{
	return UATPCCameraModeScript_RotateActorToTarget::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Rotate actor to target from UATPCCameraLockOnTargetObject */" },
#endif
		{ "IncludePath", "CameraModeScripts/ATPCCameraModeScript_RotateActorToTarget.h" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_RotateActorToTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotate actor to target from UATPCCameraLockOnTargetObject" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_RotateActorToTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraModeScript_RotateActorToTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraModeScript_RotateActorToTarget, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UATPCCameraModeScript,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::ClassParams = {
	&UATPCCameraModeScript_RotateActorToTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget()
{
	if (!Z_Registration_Info_UClass_UATPCCameraModeScript_RotateActorToTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraModeScript_RotateActorToTarget.OuterSingleton, Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraModeScript_RotateActorToTarget.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraModeScript_RotateActorToTarget>()
{
	return UATPCCameraModeScript_RotateActorToTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraModeScript_RotateActorToTarget);
UATPCCameraModeScript_RotateActorToTarget::~UATPCCameraModeScript_RotateActorToTarget() {}
// End Class UATPCCameraModeScript_RotateActorToTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_RotateActorToTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraModeScript_RotateActorToTarget, UATPCCameraModeScript_RotateActorToTarget::StaticClass, TEXT("UATPCCameraModeScript_RotateActorToTarget"), &Z_Registration_Info_UClass_UATPCCameraModeScript_RotateActorToTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraModeScript_RotateActorToTarget), 681291240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_RotateActorToTarget_h_1487822557(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_RotateActorToTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_RotateActorToTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
