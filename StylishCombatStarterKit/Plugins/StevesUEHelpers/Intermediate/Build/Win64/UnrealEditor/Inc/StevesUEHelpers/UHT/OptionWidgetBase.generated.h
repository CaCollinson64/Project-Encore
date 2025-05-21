// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesUI/OptionWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOptionWidgetBase;
enum class EInputMode : uint8;
#ifdef STEVESUEHELPERS_OptionWidgetBase_generated_h
#error "OptionWidgetBase.generated.h already included, missing '#pragma once' in OptionWidgetBase.h"
#endif
#define STEVESUEHELPERS_OptionWidgetBase_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_13_DELEGATE \
STEVESUEHELPERS_API void FOnSelectedOptionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedOptionChanged, UOptionWidgetBase* Widget, int32 NewIndex);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMouseDownClicked); \
	DECLARE_FUNCTION(execMouseUpClicked); \
	DECLARE_FUNCTION(execInputModeChanged); \
	DECLARE_FUNCTION(execGetCurrentInputMode); \
	DECLARE_FUNCTION(execChangeOption); \
	DECLARE_FUNCTION(execUpdateFromInputMode); \
	DECLARE_FUNCTION(execSetButtonMode); \
	DECLARE_FUNCTION(execSetMouseMode); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execSetOptions); \
	DECLARE_FUNCTION(execAddOption); \
	DECLARE_FUNCTION(execClearOptions);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptionWidgetBase(); \
	friend struct Z_Construct_UClass_UOptionWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UOptionWidgetBase, UFocusableUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UOptionWidgetBase)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptionWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptionWidgetBase(UOptionWidgetBase&&); \
	UOptionWidgetBase(const UOptionWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionWidgetBase) \
	NO_API virtual ~UOptionWidgetBase();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_15_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UOptionWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
