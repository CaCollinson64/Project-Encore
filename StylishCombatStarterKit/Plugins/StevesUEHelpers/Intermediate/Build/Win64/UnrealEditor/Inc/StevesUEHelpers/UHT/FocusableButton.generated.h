// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesUI/FocusableButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEVESUEHELPERS_FocusableButton_generated_h
#error "FocusableButton.generated.h already included, missing '#pragma once' in FocusableButton.h"
#endif
#define STEVESUEHELPERS_FocusableButton_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_13_DELEGATE \
STEVESUEHELPERS_API void FOnButtonFocusReceivedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonFocusReceivedEvent);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_14_DELEGATE \
STEVESUEHELPERS_API void FOnButtonFocusLostEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonFocusLostEvent);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_26_RPC_WRAPPERS \
	virtual void RefreshFocussedStyle_Implementation(); \
	DECLARE_FUNCTION(execRefreshFocussedStyle); \
	DECLARE_FUNCTION(execSimulateRelease); \
	DECLARE_FUNCTION(execSimulatePress);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_26_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUFocusableButton(); \
	friend struct Z_Construct_UClass_UFocusableButton_Statics; \
public: \
	DECLARE_CLASS(UFocusableButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UFocusableButton)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFocusableButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFocusableButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFocusableButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFocusableButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFocusableButton(UFocusableButton&&); \
	UFocusableButton(const UFocusableButton&); \
public: \
	NO_API virtual ~UFocusableButton();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_23_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_26_RPC_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_26_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_26_INCLASS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UFocusableButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
