// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesUI/SmoothChangingProgressBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEVESUEHELPERS_SmoothChangingProgressBar_generated_h
#error "SmoothChangingProgressBar.generated.h already included, missing '#pragma once' in SmoothChangingProgressBar.h"
#endif
#define STEVESUEHELPERS_SmoothChangingProgressBar_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSmoothPercentChange); \
	DECLARE_FUNCTION(execSetPercentSmoothly);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmoothChangingProgressBar(); \
	friend struct Z_Construct_UClass_USmoothChangingProgressBar_Statics; \
public: \
	DECLARE_CLASS(USmoothChangingProgressBar, UProgressBar, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(USmoothChangingProgressBar)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmoothChangingProgressBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USmoothChangingProgressBar(USmoothChangingProgressBar&&); \
	USmoothChangingProgressBar(const USmoothChangingProgressBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmoothChangingProgressBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmoothChangingProgressBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmoothChangingProgressBar) \
	NO_API virtual ~USmoothChangingProgressBar();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_15_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_18_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class USmoothChangingProgressBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
