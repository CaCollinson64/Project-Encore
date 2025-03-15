// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATPCCameraFadingObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ADVANCEDTHIRDPERSONCAMERA_ATPCCameraFadingObject_generated_h
#error "ATPCCameraFadingObject.generated.h already included, missing '#pragma once' in ATPCCameraFadingObject.h"
#endif
#define ADVANCEDTHIRDPERSONCAMERA_ATPCCameraFadingObject_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearManualFadeActors); \
	DECLARE_FUNCTION(execRemoveManualFadeActor); \
	DECLARE_FUNCTION(execAddManualFadeActor); \
	DECLARE_FUNCTION(execClearIgnoredActors); \
	DECLARE_FUNCTION(execRemoveIgnoredActor); \
	DECLARE_FUNCTION(execAddIgnoredActor);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUATPCCameraFadingObject(); \
	friend struct Z_Construct_UClass_UATPCCameraFadingObject_Statics; \
public: \
	DECLARE_CLASS(UATPCCameraFadingObject, UATPCCameraBaseObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedThirdPersonCamera"), NO_API) \
	DECLARE_SERIALIZER(UATPCCameraFadingObject)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UATPCCameraFadingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UATPCCameraFadingObject(UATPCCameraFadingObject&&); \
	UATPCCameraFadingObject(const UATPCCameraFadingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UATPCCameraFadingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UATPCCameraFadingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UATPCCameraFadingObject) \
	NO_API virtual ~UATPCCameraFadingObject();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_28_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_31_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<class UATPCCameraFadingObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
