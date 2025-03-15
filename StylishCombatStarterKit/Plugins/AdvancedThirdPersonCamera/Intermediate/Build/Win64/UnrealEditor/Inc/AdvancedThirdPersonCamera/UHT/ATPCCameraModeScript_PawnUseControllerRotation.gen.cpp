// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/CameraModeScripts/ATPCCameraModeScript_PawnUseControllerRotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraModeScript_PawnUseControllerRotation() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraModeScript_PawnUseControllerRotation
void UATPCCameraModeScript_PawnUseControllerRotation::StaticRegisterNativesUATPCCameraModeScript_PawnUseControllerRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraModeScript_PawnUseControllerRotation);
UClass* Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_NoRegister()
{
	return UATPCCameraModeScript_PawnUseControllerRotation::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override params @OrientRotationToMovement and @UseControllerDesiredRotation in CharacterMovementComponent */" },
#endif
		{ "IncludePath", "CameraModeScripts/ATPCCameraModeScript_PawnUseControllerRotation.h" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_PawnUseControllerRotation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override params @OrientRotationToMovement and @UseControllerDesiredRotation in CharacterMovementComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientRotationToMovement_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set @OrientRotationToMovement to CharacterMovementComponent */" },
#endif
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_PawnUseControllerRotation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set @OrientRotationToMovement to CharacterMovementComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseControllerDesiredRotation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set @UseControllerDesiredRotation to CharacterMovementComponent */" },
#endif
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_PawnUseControllerRotation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set @UseControllerDesiredRotation to CharacterMovementComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreOldValuesOnExitCameraMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_PawnUseControllerRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldOrientRotationToMovement_MetaData[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_PawnUseControllerRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldUseControllerDesiredRotation_MetaData[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/CameraModeScripts/ATPCCameraModeScript_PawnUseControllerRotation.h" },
	};
#endif // WITH_METADATA
	static void NewProp_OrientRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OrientRotationToMovement;
	static void NewProp_UseControllerDesiredRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseControllerDesiredRotation;
	static void NewProp_bRestoreOldValuesOnExitCameraMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreOldValuesOnExitCameraMode;
	static void NewProp_OldOrientRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OldOrientRotationToMovement;
	static void NewProp_OldUseControllerDesiredRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OldUseControllerDesiredRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraModeScript_PawnUseControllerRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OrientRotationToMovement_SetBit(void* Obj)
{
	((UATPCCameraModeScript_PawnUseControllerRotation*)Obj)->OrientRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OrientRotationToMovement = { "OrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATPCCameraModeScript_PawnUseControllerRotation), &Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OrientRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientRotationToMovement_MetaData), NewProp_OrientRotationToMovement_MetaData) };
void Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_UseControllerDesiredRotation_SetBit(void* Obj)
{
	((UATPCCameraModeScript_PawnUseControllerRotation*)Obj)->UseControllerDesiredRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_UseControllerDesiredRotation = { "UseControllerDesiredRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATPCCameraModeScript_PawnUseControllerRotation), &Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_UseControllerDesiredRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseControllerDesiredRotation_MetaData), NewProp_UseControllerDesiredRotation_MetaData) };
void Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_bRestoreOldValuesOnExitCameraMode_SetBit(void* Obj)
{
	((UATPCCameraModeScript_PawnUseControllerRotation*)Obj)->bRestoreOldValuesOnExitCameraMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_bRestoreOldValuesOnExitCameraMode = { "bRestoreOldValuesOnExitCameraMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATPCCameraModeScript_PawnUseControllerRotation), &Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_bRestoreOldValuesOnExitCameraMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestoreOldValuesOnExitCameraMode_MetaData), NewProp_bRestoreOldValuesOnExitCameraMode_MetaData) };
void Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OldOrientRotationToMovement_SetBit(void* Obj)
{
	((UATPCCameraModeScript_PawnUseControllerRotation*)Obj)->OldOrientRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OldOrientRotationToMovement = { "OldOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATPCCameraModeScript_PawnUseControllerRotation), &Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OldOrientRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldOrientRotationToMovement_MetaData), NewProp_OldOrientRotationToMovement_MetaData) };
void Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OldUseControllerDesiredRotation_SetBit(void* Obj)
{
	((UATPCCameraModeScript_PawnUseControllerRotation*)Obj)->OldUseControllerDesiredRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OldUseControllerDesiredRotation = { "OldUseControllerDesiredRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATPCCameraModeScript_PawnUseControllerRotation), &Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OldUseControllerDesiredRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldUseControllerDesiredRotation_MetaData), NewProp_OldUseControllerDesiredRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OrientRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_UseControllerDesiredRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_bRestoreOldValuesOnExitCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OldOrientRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::NewProp_OldUseControllerDesiredRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UATPCCameraModeScript,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::ClassParams = {
	&UATPCCameraModeScript_PawnUseControllerRotation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation()
{
	if (!Z_Registration_Info_UClass_UATPCCameraModeScript_PawnUseControllerRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraModeScript_PawnUseControllerRotation.OuterSingleton, Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraModeScript_PawnUseControllerRotation.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraModeScript_PawnUseControllerRotation>()
{
	return UATPCCameraModeScript_PawnUseControllerRotation::StaticClass();
}
UATPCCameraModeScript_PawnUseControllerRotation::UATPCCameraModeScript_PawnUseControllerRotation() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraModeScript_PawnUseControllerRotation);
UATPCCameraModeScript_PawnUseControllerRotation::~UATPCCameraModeScript_PawnUseControllerRotation() {}
// End Class UATPCCameraModeScript_PawnUseControllerRotation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_PawnUseControllerRotation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraModeScript_PawnUseControllerRotation, UATPCCameraModeScript_PawnUseControllerRotation::StaticClass, TEXT("UATPCCameraModeScript_PawnUseControllerRotation"), &Z_Registration_Info_UClass_UATPCCameraModeScript_PawnUseControllerRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraModeScript_PawnUseControllerRotation), 4219945894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_PawnUseControllerRotation_h_368018892(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_PawnUseControllerRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_CameraModeScripts_ATPCCameraModeScript_PawnUseControllerRotation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
