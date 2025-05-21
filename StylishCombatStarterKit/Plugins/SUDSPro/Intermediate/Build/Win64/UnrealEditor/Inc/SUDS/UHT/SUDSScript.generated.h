// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSScript.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogueVoice;
class USUDSScriptNode;
class USUDSScriptNodeGosub;
class USUDSScriptNodeText;
#ifdef SUDS_SUDSScript_generated_h
#error "SUDSScript.generated.h already included, missing '#pragma once' in SUDSScript.h"
#endif
#define SUDS_SUDSScript_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpeakerVoice); \
	DECLARE_FUNCTION(execGetNodeByGosubID); \
	DECLARE_FUNCTION(execGetNodeByTextID); \
	DECLARE_FUNCTION(execGetNodeByLabel); \
	DECLARE_FUNCTION(execGetNextNode); \
	DECLARE_FUNCTION(execGetFirstNode); \
	DECLARE_FUNCTION(execGetHeaderNode);


#if WITH_EDITORONLY_DATA
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USUDSScript, NO_API)
#else // WITH_EDITORONLY_DATA
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSUDSScript(); \
	friend struct Z_Construct_UClass_USUDSScript_Statics; \
public: \
	DECLARE_CLASS(USUDSScript, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SUDS"), NO_API) \
	DECLARE_SERIALIZER(USUDSScript) \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_ARCHIVESERIALIZER


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USUDSScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USUDSScript(USUDSScript&&); \
	USUDSScript(const USUDSScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USUDSScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USUDSScript); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USUDSScript) \
	NO_API virtual ~USUDSScript();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_17_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDS_API UClass* StaticClass<class USUDSScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
