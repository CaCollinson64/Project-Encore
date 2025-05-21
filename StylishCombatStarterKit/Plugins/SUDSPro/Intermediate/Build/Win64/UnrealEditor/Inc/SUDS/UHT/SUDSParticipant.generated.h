// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSParticipant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USUDSDialogue;
struct FSUDSValue;
#ifdef SUDS_SUDSParticipant_generated_h
#error "SUDSParticipant.generated.h already included, missing '#pragma once' in SUDSParticipant.h"
#endif
#define SUDS_SUDSParticipant_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetDialogueParticipantPriority_Implementation() const { return 0; }; \
	virtual void OnDialogueVariableRequested_Implementation(USUDSDialogue* Dialogue, FName VariableName) {}; \
	virtual void OnDialogueVariableChanged_Implementation(USUDSDialogue* Dialogue, FName VariableName, FSUDSValue const& Value, bool bFromScript) {}; \
	virtual void OnDialogueEvent_Implementation(USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments) {}; \
	virtual void OnDialogueProceeding_Implementation(USUDSDialogue* Dialogue) {}; \
	virtual void OnDialogueChoiceMade_Implementation(USUDSDialogue* Dialogue, int32 ChoiceIndex) {}; \
	virtual void OnDialogueSpeakerLine_Implementation(USUDSDialogue* Dialogue) {}; \
	virtual void OnDialogueFinished_Implementation(USUDSDialogue* Dialogue) {}; \
	virtual void OnDialogueStarting_Implementation(USUDSDialogue* Dialogue, FName AtLabel) {}; \
	DECLARE_FUNCTION(execGetDialogueParticipantPriority); \
	DECLARE_FUNCTION(execOnDialogueVariableRequested); \
	DECLARE_FUNCTION(execOnDialogueVariableChanged); \
	DECLARE_FUNCTION(execOnDialogueEvent); \
	DECLARE_FUNCTION(execOnDialogueProceeding); \
	DECLARE_FUNCTION(execOnDialogueChoiceMade); \
	DECLARE_FUNCTION(execOnDialogueSpeakerLine); \
	DECLARE_FUNCTION(execOnDialogueFinished); \
	DECLARE_FUNCTION(execOnDialogueStarting);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUDS_API USUDSParticipant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USUDSParticipant(USUDSParticipant&&); \
	USUDSParticipant(const USUDSParticipant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUDS_API, USUDSParticipant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USUDSParticipant); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USUDSParticipant) \
	SUDS_API virtual ~USUDSParticipant();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSUDSParticipant(); \
	friend struct Z_Construct_UClass_USUDSParticipant_Statics; \
public: \
	DECLARE_CLASS(USUDSParticipant, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SUDS"), SUDS_API) \
	DECLARE_SERIALIZER(USUDSParticipant)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISUDSParticipant() {} \
public: \
	typedef USUDSParticipant UClassType; \
	typedef ISUDSParticipant ThisClass; \
	static int32 Execute_GetDialogueParticipantPriority(const UObject* O); \
	static void Execute_OnDialogueChoiceMade(UObject* O, USUDSDialogue* Dialogue, int32 ChoiceIndex); \
	static void Execute_OnDialogueEvent(UObject* O, USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments); \
	static void Execute_OnDialogueFinished(UObject* O, USUDSDialogue* Dialogue); \
	static void Execute_OnDialogueProceeding(UObject* O, USUDSDialogue* Dialogue); \
	static void Execute_OnDialogueSpeakerLine(UObject* O, USUDSDialogue* Dialogue); \
	static void Execute_OnDialogueStarting(UObject* O, USUDSDialogue* Dialogue, FName AtLabel); \
	static void Execute_OnDialogueVariableChanged(UObject* O, USUDSDialogue* Dialogue, FName VariableName, FSUDSValue const& Value, bool bFromScript); \
	static void Execute_OnDialogueVariableRequested(UObject* O, USUDSDialogue* Dialogue, FName VariableName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_11_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDS_API UClass* StaticClass<class USUDSParticipant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSParticipant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
