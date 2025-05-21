// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SudsProRunner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class USUDSDialogue;
struct FSoftObjectPath;
struct FSUDSDialogueState;
#ifdef SUDSPRO_SudsProRunner_generated_h
#error "SudsProRunner.generated.h already included, missing '#pragma once' in SudsProRunner.h"
#endif
#define SUDSPRO_SudsProRunner_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USUDSDialogue* StartDialogue_Implementation(ACharacter* PlayerCharacter); \
	virtual void UnloadScript_Implementation(); \
	virtual void LoadScriptAsync_Implementation(); \
	DECLARE_FUNCTION(execSnapshotDialogueState); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execUnloadScript); \
	DECLARE_FUNCTION(execLoadScriptAsync); \
	DECLARE_FUNCTION(execOnScriptAsyncLoaded);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_21_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASudsProRunner(); \
	friend struct Z_Construct_UClass_ASudsProRunner_Statics; \
public: \
	DECLARE_CLASS(ASudsProRunner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(ASudsProRunner) \
	virtual UObject* _getUObject() const override { return const_cast<ASudsProRunner*>(this); }


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASudsProRunner(ASudsProRunner&&); \
	ASudsProRunner(const ASudsProRunner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASudsProRunner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASudsProRunner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASudsProRunner) \
	NO_API virtual ~ASudsProRunner();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_16_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_21_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_21_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class ASudsProRunner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProRunner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
