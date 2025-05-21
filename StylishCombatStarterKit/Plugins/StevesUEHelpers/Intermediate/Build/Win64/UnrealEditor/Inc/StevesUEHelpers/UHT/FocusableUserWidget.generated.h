// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesUI/FocusableUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEVESUEHELPERS_FocusableUserWidget_generated_h
#error "FocusableUserWidget.generated.h already included, missing '#pragma once' in FocusableUserWidget.h"
#endif
#define STEVESUEHELPERS_FocusableUserWidget_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool TakeFocusIfDesired_Implementation(); \
	virtual bool IsRequestingFocus_Implementation() const; \
	virtual void SetFocusProperly_Implementation(); \
	DECLARE_FUNCTION(execTakeFocusIfDesired); \
	DECLARE_FUNCTION(execIsRequestingFocus); \
	DECLARE_FUNCTION(execSetFocusProperly);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_12_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFocusableUserWidget(); \
	friend struct Z_Construct_UClass_UFocusableUserWidget_Statics; \
public: \
	DECLARE_CLASS(UFocusableUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UFocusableUserWidget)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFocusableUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFocusableUserWidget(UFocusableUserWidget&&); \
	UFocusableUserWidget(const UFocusableUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFocusableUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFocusableUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFocusableUserWidget) \
	NO_API virtual ~UFocusableUserWidget();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_9_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_12_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_12_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UFocusableUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
