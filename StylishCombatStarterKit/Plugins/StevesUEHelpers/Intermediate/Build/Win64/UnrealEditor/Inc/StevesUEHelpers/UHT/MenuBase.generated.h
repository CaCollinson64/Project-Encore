// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesUI/MenuBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMenuBase;
class UMenuStack;
#ifdef STEVESUEHELPERS_MenuBase_generated_h
#error "MenuBase.generated.h already included, missing '#pragma once' in MenuBase.h"
#endif
#define STEVESUEHELPERS_MenuBase_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_11_DELEGATE \
STEVESUEHELPERS_API void FOnMenuClosed_DelegateWrapper(const FMulticastScriptDelegate& OnMenuClosed, UMenuBase* Menu, bool bWasCancelled);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRemovedFromStack_Implementation(UMenuStack* Parent); \
	virtual void OnAddedToStack_Implementation(UMenuStack* Parent); \
	virtual void OnRegainedFocusInStack_Implementation(); \
	virtual void OnSupercededInStack_Implementation(UMenuBase* ByMenu); \
	virtual bool ValidateClose_Implementation(bool bWasCancel); \
	DECLARE_FUNCTION(execIsTopOfStack); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execRequestClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execOnRemovedFromStack); \
	DECLARE_FUNCTION(execOnAddedToStack); \
	DECLARE_FUNCTION(execOnRegainedFocusInStack); \
	DECLARE_FUNCTION(execOnSupercededInStack); \
	DECLARE_FUNCTION(execValidateClose);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_22_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuBase(); \
	friend struct Z_Construct_UClass_UMenuBase_Statics; \
public: \
	DECLARE_CLASS(UMenuBase, UFocusablePanel, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UMenuBase)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMenuBase(UMenuBase&&); \
	UMenuBase(const UMenuBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuBase) \
	NO_API virtual ~UMenuBase();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_19_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_22_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UMenuBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
