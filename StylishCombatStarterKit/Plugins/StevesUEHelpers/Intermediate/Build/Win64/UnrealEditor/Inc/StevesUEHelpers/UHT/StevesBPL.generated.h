// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesBPL.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPanelSlot;
class UPanelWidget;
class UWidget;
struct FStevesBalancedRandomStream;
#ifdef STEVESUEHELPERS_StevesBPL_generated_h
#error "StevesBPL.generated.h already included, missing '#pragma once' in StevesBPL.h"
#endif
#define STEVESUEHELPERS_StevesBPL_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateStreaming); \
	DECLARE_FUNCTION(execAddViewOriginToStreaming); \
	DECLARE_FUNCTION(execBalancedRandomPointInBox); \
	DECLARE_FUNCTION(execBalancedRandomVector); \
	DECLARE_FUNCTION(execBalancedRandom3D); \
	DECLARE_FUNCTION(execBalancedRandom2D); \
	DECLARE_FUNCTION(execBalancedRandom); \
	DECLARE_FUNCTION(execMakeBalancedRandomStream); \
	DECLARE_FUNCTION(execInsertChildWidgetAt); \
	DECLARE_FUNCTION(execSetWidgetFocus); \
	DECLARE_FUNCTION(execSphereOverlapCone);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStevesBPL(); \
	friend struct Z_Construct_UClass_UStevesBPL_Statics; \
public: \
	DECLARE_CLASS(UStevesBPL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UStevesBPL)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStevesBPL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStevesBPL(UStevesBPL&&); \
	UStevesBPL(const UStevesBPL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStevesBPL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStevesBPL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStevesBPL) \
	NO_API virtual ~UStevesBPL();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_18_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_21_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UStevesBPL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
