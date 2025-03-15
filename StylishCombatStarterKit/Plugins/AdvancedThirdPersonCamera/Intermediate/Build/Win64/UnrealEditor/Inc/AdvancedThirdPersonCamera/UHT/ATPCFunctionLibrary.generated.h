// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATPCFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FATPCInterploationSpeed;
#ifdef ADVANCEDTHIRDPERSONCAMERA_ATPCFunctionLibrary_generated_h
#error "ATPCFunctionLibrary.generated.h already included, missing '#pragma once' in ATPCFunctionLibrary.h"
#endif
#define ADVANCEDTHIRDPERSONCAMERA_ATPCFunctionLibrary_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReplaceSpringArmToATPCComponent); \
	DECLARE_FUNCTION(execInterpFloat); \
	DECLARE_FUNCTION(execInterpRotator); \
	DECLARE_FUNCTION(execInterpVector); \
	DECLARE_FUNCTION(execInterpolationSpeed_GetCurrentInterpolationSpeed); \
	DECLARE_FUNCTION(execInterpolationSpeed_ResetSpeed); \
	DECLARE_FUNCTION(execInterpolationSpeed_InterpolateSpeed);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUATPCFunctionLibrary(); \
	friend struct Z_Construct_UClass_UATPCFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UATPCFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedThirdPersonCamera"), NO_API) \
	DECLARE_SERIALIZER(UATPCFunctionLibrary)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UATPCFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UATPCFunctionLibrary(UATPCFunctionLibrary&&); \
	UATPCFunctionLibrary(const UATPCFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UATPCFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UATPCFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UATPCFunctionLibrary) \
	NO_API virtual ~UATPCFunctionLibrary();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_12_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<class UATPCFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
