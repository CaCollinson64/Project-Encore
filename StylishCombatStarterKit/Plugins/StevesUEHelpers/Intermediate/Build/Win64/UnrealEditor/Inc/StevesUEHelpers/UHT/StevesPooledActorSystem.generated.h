// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesPooledActorSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UStevesPooledActorSystem;
#ifdef STEVESUEHELPERS_StevesPooledActorSystem_generated_h
#error "StevesPooledActorSystem.generated.h already included, missing '#pragma once' in StevesPooledActorSystem.h"
#endif
#define STEVESUEHELPERS_StevesPooledActorSystem_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrainAllActorPools); \
	DECLARE_FUNCTION(execDrainActorPool); \
	DECLARE_FUNCTION(execPreWarmActorPool); \
	DECLARE_FUNCTION(execGetPooledActor); \
	DECLARE_FUNCTION(execReleasePooledActor); \
	DECLARE_FUNCTION(execAddActorToPool); \
	DECLARE_FUNCTION(execGet);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStevesPooledActorSystem(); \
	friend struct Z_Construct_UClass_UStevesPooledActorSystem_Statics; \
public: \
	DECLARE_CLASS(UStevesPooledActorSystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UStevesPooledActorSystem)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStevesPooledActorSystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStevesPooledActorSystem(UStevesPooledActorSystem&&); \
	UStevesPooledActorSystem(const UStevesPooledActorSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStevesPooledActorSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStevesPooledActorSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStevesPooledActorSystem) \
	NO_API virtual ~UStevesPooledActorSystem();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_14_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UStevesPooledActorSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
