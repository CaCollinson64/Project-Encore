// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSDialogue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FSUDSValue;
class UAudioComponent;
class UDialogueVoice;
class UDialogueWave;
class UObject;
class USoundAttenuation;
class USoundBase;
class USUDSDialogue;
class USUDSScript;
enum class ETextGender : uint8;
struct FSUDSDialogueState;
struct FSUDSScriptEdge;
struct FSUDSValue;
#ifdef SUDS_SUDSDialogue_generated_h
#error "SUDSDialogue.generated.h already included, missing '#pragma once' in SUDSDialogue.h"
#endif
#define SUDS_SUDSDialogue_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_21_DELEGATE \
SUDS_API void FOnDialogueSpeakerLine_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueSpeakerLine, USUDSDialogue* Dialogue);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_22_DELEGATE \
SUDS_API void FOnDialogueChoice_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueChoice, USUDSDialogue* Dialogue, int32 ChoiceIndex);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_23_DELEGATE \
SUDS_API void FOnDialogueProceeding_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueProceeding, USUDSDialogue* Dialogue);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_24_DELEGATE \
SUDS_API void FOnDialogueStarting_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueStarting, USUDSDialogue* Dialogue, FName AtLabel);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_25_DELEGATE \
SUDS_API void FOnDialogueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueFinished, USUDSDialogue* Dialogue);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_26_DELEGATE \
SUDS_API void FOnDialogueEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueEvent, USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_27_DELEGATE \
SUDS_API void FOnVariableChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnVariableChangedEvent, USUDSDialogue* Dialogue, FName VariableName, FSUDSValue const& Value, bool bFromScript);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_28_DELEGATE \
SUDS_API void FOnVariableRequestedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnVariableRequestedEvent, USUDSDialogue* Dialogue, FName VariableName);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSUDSDialogueState_Statics; \
	SUDS_API static class UScriptStruct* StaticStruct();


template<> SUDS_API UScriptStruct* StaticStruct<struct FSUDSDialogueState>();

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnSetVariable); \
	DECLARE_FUNCTION(execGetVariableName); \
	DECLARE_FUNCTION(execSetVariableName); \
	DECLARE_FUNCTION(execGetVariableBoolean); \
	DECLARE_FUNCTION(execSetVariableBoolean); \
	DECLARE_FUNCTION(execGetVariableGender); \
	DECLARE_FUNCTION(execSetVariableGender); \
	DECLARE_FUNCTION(execGetVariableFloat); \
	DECLARE_FUNCTION(execSetVariableFloat); \
	DECLARE_FUNCTION(execGetVariableInt); \
	DECLARE_FUNCTION(execSetVariableInt); \
	DECLARE_FUNCTION(execGetVariableText); \
	DECLARE_FUNCTION(execSetVariableText); \
	DECLARE_FUNCTION(execGetVariables); \
	DECLARE_FUNCTION(execIsVariableSet); \
	DECLARE_FUNCTION(execGetVariable); \
	DECLARE_FUNCTION(execSetVariable); \
	DECLARE_FUNCTION(execGetParametersInUse); \
	DECLARE_FUNCTION(execRestoreSavedState); \
	DECLARE_FUNCTION(execGetSavedState); \
	DECLARE_FUNCTION(execResetState); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execGetCurrentSourceLine); \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execIsEnded); \
	DECLARE_FUNCTION(execChoose); \
	DECLARE_FUNCTION(execContinue); \
	DECLARE_FUNCTION(execHasChoiceBeenTakenPreviously); \
	DECLARE_FUNCTION(execHasChoiceIndexBeenTakenPreviously); \
	DECLARE_FUNCTION(execGetChoices); \
	DECLARE_FUNCTION(execGetChoiceText); \
	DECLARE_FUNCTION(execIsSimpleContinue); \
	DECLARE_FUNCTION(execGetNumberOfChoices); \
	DECLARE_FUNCTION(execGetVoicedLineSound); \
	DECLARE_FUNCTION(execSpawnVoicedLineAtLocation); \
	DECLARE_FUNCTION(execSpawnVoicedLine2D); \
	DECLARE_FUNCTION(execPlayVoicedLineAtLocation); \
	DECLARE_FUNCTION(execPlayVoicedLine2D); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSpeakerVoice); \
	DECLARE_FUNCTION(execGetSpeakerDisplayName); \
	DECLARE_FUNCTION(execGetSpeakerID); \
	DECLARE_FUNCTION(execIsCurrentLineVoiced); \
	DECLARE_FUNCTION(execGetWave); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execSetParticipants); \
	DECLARE_FUNCTION(execGetParticipants); \
	DECLARE_FUNCTION(execAddParticipant); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execGetScript);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSUDSDialogue(); \
	friend struct Z_Construct_UClass_USUDSDialogue_Statics; \
public: \
	DECLARE_CLASS(USUDSDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SUDS"), NO_API) \
	DECLARE_SERIALIZER(USUDSDialogue)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_114_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USUDSDialogue(USUDSDialogue&&); \
	USUDSDialogue(const USUDSDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USUDSDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USUDSDialogue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USUDSDialogue) \
	NO_API virtual ~USUDSDialogue();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_111_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_114_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDS_API UClass* StaticClass<class USUDSDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
