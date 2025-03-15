// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATPCCameraBaseObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class APlayerCameraManager;
class APlayerController;
class UATPCCameraComponent;
#ifdef ADVANCEDTHIRDPERSONCAMERA_ATPCCameraBaseObject_generated_h
#error "ATPCCameraBaseObject.generated.h already included, missing '#pragma once' in ATPCCameraBaseObject.h"
#endif
#define ADVANCEDTHIRDPERSONCAMERA_ATPCCameraBaseObject_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execGetOwningCamera); \
	DECLARE_FUNCTION(execValidate);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_18_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUATPCCameraBaseObject(); \
	friend struct Z_Construct_UClass_UATPCCameraBaseObject_Statics; \
public: \
	DECLARE_CLASS(UATPCCameraBaseObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedThirdPersonCamera"), NO_API) \
	DECLARE_SERIALIZER(UATPCCameraBaseObject)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UATPCCameraBaseObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UATPCCameraBaseObject(UATPCCameraBaseObject&&); \
	UATPCCameraBaseObject(const UATPCCameraBaseObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UATPCCameraBaseObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UATPCCameraBaseObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UATPCCameraBaseObject) \
	NO_API virtual ~UATPCCameraBaseObject();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_15_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_18_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_18_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<class UATPCCameraBaseObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
