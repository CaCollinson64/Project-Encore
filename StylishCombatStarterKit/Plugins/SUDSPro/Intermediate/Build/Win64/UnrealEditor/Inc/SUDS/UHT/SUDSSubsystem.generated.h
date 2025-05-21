// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FSUDSValue;
enum class ETextGender : uint8;
struct FSoundConcurrencySettings;
struct FSUDSGlobalState;
struct FSUDSValue;
#ifdef SUDS_SUDSSubsystem_generated_h
#error "SUDSSubsystem.generated.h already included, missing '#pragma once' in SUDSSubsystem.h"
#endif
#define SUDS_SUDSSubsystem_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_18_DELEGATE \
SUDS_API void FOnGlobalVariableChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalVariableChangedEvent, FName VariableName, FSUDSValue const& Value, bool bFromScript);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSUDSGlobalState_Statics; \
	SUDS_API static class UScriptStruct* StaticStruct();


template<> SUDS_API UScriptStruct* StaticStruct<struct FSUDSGlobalState>();

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnSetGlobalVariable); \
	DECLARE_FUNCTION(execGetGlobalVariableName); \
	DECLARE_FUNCTION(execSetGlobalVariableName); \
	DECLARE_FUNCTION(execGetGlobalVariableBoolean); \
	DECLARE_FUNCTION(execSetGlobalVariableBoolean); \
	DECLARE_FUNCTION(execGetGlobalVariableGender); \
	DECLARE_FUNCTION(execSetGlobalVariableGender); \
	DECLARE_FUNCTION(execGetGlobalVariableFloat); \
	DECLARE_FUNCTION(execSetGlobalVariableFloat); \
	DECLARE_FUNCTION(execGetGlobalVariableInt); \
	DECLARE_FUNCTION(execSetGlobalVariableInt); \
	DECLARE_FUNCTION(execGetGlobalVariableText); \
	DECLARE_FUNCTION(execSetGlobalVariableText); \
	DECLARE_FUNCTION(execGetGlobalVariables); \
	DECLARE_FUNCTION(execIsGlobalVariableSet); \
	DECLARE_FUNCTION(execGetGlobalVariable); \
	DECLARE_FUNCTION(execSetGlobalVariable); \
	DECLARE_FUNCTION(execRestoreSavedGlobalState); \
	DECLARE_FUNCTION(execGetSavedGlobalState); \
	DECLARE_FUNCTION(execResetGlobalState); \
	DECLARE_FUNCTION(execGetVoicedLineConcurrencySettings); \
	DECLARE_FUNCTION(execSetVoicedLineConcurrencySettings); \
	DECLARE_FUNCTION(execGetMaxConcurrentVoicedLines); \
	DECLARE_FUNCTION(execSetMaxConcurrentVoicedLines);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSUDSSubsystem(); \
	friend struct Z_Construct_UClass_USUDSSubsystem_Statics; \
public: \
	DECLARE_CLASS(USUDSSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SUDS"), NO_API) \
	DECLARE_SERIALIZER(USUDSSubsystem)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USUDSSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USUDSSubsystem(USUDSSubsystem&&); \
	USUDSSubsystem(const USUDSSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USUDSSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USUDSSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USUDSSubsystem) \
	NO_API virtual ~USUDSSubsystem();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_56_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_59_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDS_API UClass* StaticClass<class USUDSSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
