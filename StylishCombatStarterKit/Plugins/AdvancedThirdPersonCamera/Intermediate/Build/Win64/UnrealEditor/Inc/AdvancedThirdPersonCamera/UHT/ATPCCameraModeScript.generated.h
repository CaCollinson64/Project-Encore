// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATPCCameraModeScript.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UATPCCameraComponent;
#ifdef ADVANCEDTHIRDPERSONCAMERA_ATPCCameraModeScript_generated_h
#error "ATPCCameraModeScript.generated.h already included, missing '#pragma once' in ATPCCameraModeScript.h"
#endif
#define ADVANCEDTHIRDPERSONCAMERA_ATPCCameraModeScript_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_26_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUATPCCameraModeScript(); \
	friend struct Z_Construct_UClass_UATPCCameraModeScript_Statics; \
public: \
	DECLARE_CLASS(UATPCCameraModeScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AdvancedThirdPersonCamera"), NO_API) \
	DECLARE_SERIALIZER(UATPCCameraModeScript)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UATPCCameraModeScript(UATPCCameraModeScript&&); \
	UATPCCameraModeScript(const UATPCCameraModeScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UATPCCameraModeScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UATPCCameraModeScript); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UATPCCameraModeScript) \
	NO_API virtual ~UATPCCameraModeScript();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_23_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_26_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_26_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<class UATPCCameraModeScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h


#define FOREACH_ENUM_EATPCCAMERAMODESCRIPTTICKGROUP(op) \
	op(EATPCCameraModeScriptTickGroup::PreCameraObjectTick) \
	op(EATPCCameraModeScriptTickGroup::PostCameraObjectTick) 

enum class EATPCCameraModeScriptTickGroup;
template<> struct TIsUEnumClass<EATPCCameraModeScriptTickGroup> { enum { Value = true }; };
template<> ADVANCEDTHIRDPERSONCAMERA_API UEnum* StaticEnum<EATPCCameraModeScriptTickGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
