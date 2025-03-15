// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATPCCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AATPCCameraVolume;
class APawn;
class APlayerCameraManager;
class APlayerController;
class UATPCCameraFadingObject;
class UATPCCameraFollowTerrainObject;
class UATPCCameraFOVObject;
class UATPCCameraLocationObject;
class UATPCCameraLockOnTargetObject;
class UATPCCameraModeDataAsset;
class UATPCCameraShakesObject;
struct FGameplayTag;
#ifdef ADVANCEDTHIRDPERSONCAMERA_ATPCCameraComponent_generated_h
#error "ATPCCameraComponent.generated.h already included, missing '#pragma once' in ATPCCameraComponent.h"
#endif
#define ADVANCEDTHIRDPERSONCAMERA_ATPCCameraComponent_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_33_DELEGATE \
static void FOnCameraModeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCameraModeChangedDelegate);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FGameplayTag GetDesiredCameraModeTag_Implementation() const; \
	virtual FGameplayTag GetInitialCameraModeTag_Implementation() const; \
	virtual bool CanSetCameraMode_Implementation(FGameplayTag CameraModeTag) const; \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetCameraLockOnTargetObject); \
	DECLARE_FUNCTION(execGetCameraShakesObject); \
	DECLARE_FUNCTION(execGetCameraFollowTerrainObject); \
	DECLARE_FUNCTION(execGetCameraFadingObject); \
	DECLARE_FUNCTION(execGetCameraFOVObject); \
	DECLARE_FUNCTION(execGetCameraLocationObject); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execGetCameraDistance); \
	DECLARE_FUNCTION(execFindOverlapCameraVolume); \
	DECLARE_FUNCTION(execClearAllCameraModes); \
	DECLARE_FUNCTION(execGetCameraMode); \
	DECLARE_FUNCTION(execHasCameraMode); \
	DECLARE_FUNCTION(execRemoveCameraMode); \
	DECLARE_FUNCTION(execAddCameraMode); \
	DECLARE_FUNCTION(execIsSetCustomCameraMode); \
	DECLARE_FUNCTION(execResetCustomCameraMode); \
	DECLARE_FUNCTION(execSetCustomCameraMode); \
	DECLARE_FUNCTION(execGetCurrentCameraMode); \
	DECLARE_FUNCTION(execGetCurrentCameraModeTag); \
	DECLARE_FUNCTION(execGetDesiredCameraModeTag); \
	DECLARE_FUNCTION(execGetCameraModeTagFromOverlapCameraVolume); \
	DECLARE_FUNCTION(execGetInitialCameraModeTag); \
	DECLARE_FUNCTION(execCanSetCameraMode); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execSetCameraDistance); \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execValidateComponents);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_30_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUATPCCameraComponent(); \
	friend struct Z_Construct_UClass_UATPCCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UATPCCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedThirdPersonCamera"), NO_API) \
	DECLARE_SERIALIZER(UATPCCameraComponent)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UATPCCameraComponent(UATPCCameraComponent&&); \
	UATPCCameraComponent(const UATPCCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UATPCCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UATPCCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UATPCCameraComponent) \
	NO_API virtual ~UATPCCameraComponent();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_27_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_30_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<class UATPCCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
