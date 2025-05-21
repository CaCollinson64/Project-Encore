// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SudsProSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USUDSDialogue;
class USudsProDialogueExtension;
class USudsProUiLink;
#ifdef SUDSPRO_SudsProSubsystem_generated_h
#error "SudsProSubsystem.generated.h already included, missing '#pragma once' in SudsProSubsystem.h"
#endif
#define SUDSPRO_SudsProSubsystem_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_18_DELEGATE \
SUDSPRO_API void FOnSudsProDialogueStarting_DelegateWrapper(const FMulticastScriptDelegate& OnSudsProDialogueStarting, USUDSDialogue* Dialogue, FName Label);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_19_DELEGATE \
SUDSPRO_API void FOnSudsProDialogueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSudsProDialogueFinished, USUDSDialogue* Dialogue);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_20_DELEGATE \
SUDSPRO_API void FOnSudsProSpeakerLineShown_DelegateWrapper(const FMulticastScriptDelegate& OnSudsProSpeakerLineShown, USUDSDialogue* Dialogue);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPreSpeakerLineCompleted); \
	DECLARE_FUNCTION(execCharacterNotifyCompleted); \
	DECLARE_FUNCTION(execEventCompleted); \
	DECLARE_FUNCTION(execGetCurrentDialogue); \
	DECLARE_FUNCTION(execResumeDialogue); \
	DECLARE_FUNCTION(execStartDialogue);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSudsProSubsystem(); \
	friend struct Z_Construct_UClass_USudsProSubsystem_Statics; \
public: \
	DECLARE_CLASS(USudsProSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(USudsProSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<USudsProSubsystem*>(this); }


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USudsProSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USudsProSubsystem(USudsProSubsystem&&); \
	USudsProSubsystem(const USudsProSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USudsProSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USudsProSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USudsProSubsystem) \
	NO_API virtual ~USudsProSubsystem();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_24_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class USudsProSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
