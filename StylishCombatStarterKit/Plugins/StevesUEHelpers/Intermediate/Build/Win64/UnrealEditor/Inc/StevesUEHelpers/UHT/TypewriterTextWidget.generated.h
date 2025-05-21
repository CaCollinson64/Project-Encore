// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesUI/TypewriterTextWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTypewriterTextWidget;
#ifdef STEVESUEHELPERS_TypewriterTextWidget_generated_h
#error "TypewriterTextWidget.generated.h already included, missing '#pragma once' in TypewriterTextWidget.h"
#endif
#define STEVESUEHELPERS_TypewriterTextWidget_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_19_DELEGATE \
STEVESUEHELPERS_API void FOnTypewriterLineFinished_DelegateWrapper(const FMulticastScriptDelegate& OnTypewriterLineFinished, UTypewriterTextWidget* Widget);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_20_DELEGATE \
STEVESUEHELPERS_API void FOnTypewriterLetterAdded_DelegateWrapper(const FMulticastScriptDelegate& OnTypewriterLetterAdded, UTypewriterTextWidget* Widget, const FString& Char);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_21_DELEGATE \
STEVESUEHELPERS_API void FOnTypewriterRunNameChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTypewriterRunNameChanged, UTypewriterTextWidget* Widget, const FString& NewRunName);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichTextBlockForTypewriter(); \
	friend struct Z_Construct_UClass_URichTextBlockForTypewriter_Statics; \
public: \
	DECLARE_CLASS(URichTextBlockForTypewriter, URichTextBlock, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(URichTextBlockForTypewriter)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichTextBlockForTypewriter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URichTextBlockForTypewriter(URichTextBlockForTypewriter&&); \
	URichTextBlockForTypewriter(const URichTextBlockForTypewriter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextBlockForTypewriter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlockForTypewriter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlockForTypewriter) \
	NO_API virtual ~URichTextBlockForTypewriter();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_25_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_28_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class URichTextBlockForTypewriter>();

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSkipToLineEnd); \
	DECLARE_FUNCTION(execPlayNextLinePart); \
	DECLARE_FUNCTION(execHasMoreLineParts); \
	DECLARE_FUNCTION(execHasFinishedPlayingLine); \
	DECLARE_FUNCTION(execGetCurrentLine); \
	DECLARE_FUNCTION(execPlayLine); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execSetText);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_54_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypewriterTextWidget(); \
	friend struct Z_Construct_UClass_UTypewriterTextWidget_Statics; \
public: \
	DECLARE_CLASS(UTypewriterTextWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UTypewriterTextWidget)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTypewriterTextWidget(UTypewriterTextWidget&&); \
	UTypewriterTextWidget(const UTypewriterTextWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypewriterTextWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypewriterTextWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypewriterTextWidget) \
	NO_API virtual ~UTypewriterTextWidget();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_51_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_54_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_54_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UTypewriterTextWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
