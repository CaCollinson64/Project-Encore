// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATPCCameraLocationObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef ADVANCEDTHIRDPERSONCAMERA_ATPCCameraLocationObject_generated_h
#error "ATPCCameraLocationObject.generated.h already included, missing '#pragma once' in ATPCCameraLocationObject.h"
#endif
#define ADVANCEDTHIRDPERSONCAMERA_ATPCCameraLocationObject_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttachCameraToComponent); \
	DECLARE_FUNCTION(execGetOverrideCameraRotation); \
	DECLARE_FUNCTION(execIsOverrideCameraRotation); \
	DECLARE_FUNCTION(execResetOverrideCameraRotation); \
	DECLARE_FUNCTION(execSetOverrideCameraRotation); \
	DECLARE_FUNCTION(execGetTargetOffset); \
	DECLARE_FUNCTION(execGetAllSocketOffsets); \
	DECLARE_FUNCTION(execGetSocketOffset); \
	DECLARE_FUNCTION(execGetRealCameraDistance); \
	DECLARE_FUNCTION(execGetCameraDistance); \
	DECLARE_FUNCTION(execGetCameraTargetDistance); \
	DECLARE_FUNCTION(execSetCameraDistance); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execGetTargetRotation); \
	DECLARE_FUNCTION(execGetDesiredRotation); \
	DECLARE_FUNCTION(execGetViewRotation); \
	DECLARE_FUNCTION(execSetViewRotation);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUATPCCameraLocationObject(); \
	friend struct Z_Construct_UClass_UATPCCameraLocationObject_Statics; \
public: \
	DECLARE_CLASS(UATPCCameraLocationObject, UATPCCameraBaseObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedThirdPersonCamera"), NO_API) \
	DECLARE_SERIALIZER(UATPCCameraLocationObject) \
	virtual UObject* _getUObject() const override { return const_cast<UATPCCameraLocationObject*>(this); }


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UATPCCameraLocationObject(UATPCCameraLocationObject&&); \
	UATPCCameraLocationObject(const UATPCCameraLocationObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UATPCCameraLocationObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UATPCCameraLocationObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UATPCCameraLocationObject) \
	NO_API virtual ~UATPCCameraLocationObject();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_32_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_36_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<class UATPCCameraLocationObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
