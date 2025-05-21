// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesUI/MenuStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMenuBase;
class UMenuStack;
enum class EInputMode : uint8;
#ifdef STEVESUEHELPERS_MenuStack_generated_h
#error "MenuStack.generated.h already included, missing '#pragma once' in MenuStack.h"
#endif
#define STEVESUEHELPERS_MenuStack_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_16_DELEGATE \
STEVESUEHELPERS_API void FOnMenuStackClosed_DelegateWrapper(const FMulticastScriptDelegate& OnMenuStackClosed, UMenuStack* Stack, bool bWasCancel);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTopMenu); \
	DECLARE_FUNCTION(execCloseAll); \
	DECLARE_FUNCTION(execCount); \
	DECLARE_FUNCTION(execPopMenu); \
	DECLARE_FUNCTION(execPushMenuByObject); \
	DECLARE_FUNCTION(execPushMenuByClass); \
	DECLARE_FUNCTION(execInputModeChanged);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuStack(); \
	friend struct Z_Construct_UClass_UMenuStack_Statics; \
public: \
	DECLARE_CLASS(UMenuStack, UFocusableInputInterceptorUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UMenuStack)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMenuStack(UMenuStack&&); \
	UMenuStack(const UMenuStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuStack); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMenuStack) \
	NO_API virtual ~UMenuStack();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_27_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_30_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UMenuStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
