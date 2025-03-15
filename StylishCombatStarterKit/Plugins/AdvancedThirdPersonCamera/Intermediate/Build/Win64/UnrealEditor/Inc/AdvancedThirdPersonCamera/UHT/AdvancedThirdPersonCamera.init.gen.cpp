// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedThirdPersonCamera_init() {}
	ADVANCEDTHIRDPERSONCAMERA_API UFunction* Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature();
	ADVANCEDTHIRDPERSONCAMERA_API UFunction* Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AdvancedThirdPersonCamera;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera()
	{
		if (!Z_Registration_Info_UPackage__Script_AdvancedThirdPersonCamera.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AdvancedThirdPersonCamera",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE1E8649C,
				0xB6DD0898,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AdvancedThirdPersonCamera.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AdvancedThirdPersonCamera.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AdvancedThirdPersonCamera(Z_Construct_UPackage__Script_AdvancedThirdPersonCamera, TEXT("/Script/AdvancedThirdPersonCamera"), Z_Registration_Info_UPackage__Script_AdvancedThirdPersonCamera, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE1E8649C, 0xB6DD0898));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
