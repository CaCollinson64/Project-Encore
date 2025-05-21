// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SudsProDialogueExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USUDSDialogue;
struct FSudsProQueuedEvent;
#ifdef SUDSPRO_SudsProDialogueExtension_generated_h
#error "SudsProDialogueExtension.generated.h already included, missing '#pragma once' in SudsProDialogueExtension.h"
#endif
#define SUDSPRO_SudsProDialogueExtension_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics; \
	SUDSPRO_API static class UScriptStruct* StaticStruct();


template<> SUDSPRO_API UScriptStruct* StaticStruct<struct FSudsProQueuedEvent>();

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Tick_Implementation(float DeltaTime); \
	virtual float GetTimeRemaining_Implementation(bool bForEndDialogue); \
	virtual bool PreDialogueSpeakerLineShown_Implementation(USUDSDialogue* Dialogue); \
	virtual bool ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue, FSudsProQueuedEvent const& Evt); \
	virtual void DialogueFinished_Implementation(USUDSDialogue* Dialogue); \
	virtual void DialogueStarting_Implementation(USUDSDialogue* Dialogue); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execFireEventCompleted); \
	DECLARE_FUNCTION(execQueueEventCompleted); \
	DECLARE_FUNCTION(execGetTimeRemaining); \
	DECLARE_FUNCTION(execPreDialogueSpeakerLineShown); \
	DECLARE_FUNCTION(execProcessDialogueEvent); \
	DECLARE_FUNCTION(execDialogueFinished); \
	DECLARE_FUNCTION(execDialogueStarting);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_43_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSudsProDialogueExtension(); \
	friend struct Z_Construct_UClass_USudsProDialogueExtension_Statics; \
public: \
	DECLARE_CLASS(USudsProDialogueExtension, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(USudsProDialogueExtension)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USudsProDialogueExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USudsProDialogueExtension(USudsProDialogueExtension&&); \
	USudsProDialogueExtension(const USudsProDialogueExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USudsProDialogueExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USudsProDialogueExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USudsProDialogueExtension) \
	NO_API virtual ~USudsProDialogueExtension();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_40_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_43_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_43_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class USudsProDialogueExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProDialogueExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
