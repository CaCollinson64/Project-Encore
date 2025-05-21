// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesGameSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class UPaperSprite;
class UUiTheme;
enum class EInputBindingType : uint8;
enum class EInputImageDevicePreference : uint8;
enum class EInputMode : uint8;
enum class ETriggerEvent : uint8;
struct FInputActionInstance;
struct FKey;
#ifdef STEVESUEHELPERS_StevesGameSubsystem_generated_h
#error "StevesGameSubsystem.generated.h already included, missing '#pragma once' in StevesGameSubsystem.h"
#endif
#define STEVESUEHELPERS_StevesGameSubsystem_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_17_DELEGATE \
STEVESUEHELPERS_API void FOnInputModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInputModeChanged, int32 PlayerIndex, EInputMode InputMode);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_18_DELEGATE \
STEVESUEHELPERS_API void FOnEnhancedInputMappingsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEnhancedInputMappingsChanged);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_19_DELEGATE \
STEVESUEHELPERS_API void FOnWindowForegroundChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWindowForegroundChanged, bool bFocussed);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_20_DELEGATE \
STEVESUEHELPERS_API void FOnEnhancedInputActionTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnEnhancedInputActionTriggered, const UInputAction* Action, ETriggerEvent TriggeredEvent);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveMouseOffScreen); \
	DECLARE_FUNCTION(execRegisterInterestInEnhancedInputAction); \
	DECLARE_FUNCTION(execNotifyEnhancedInputMappingsChanged); \
	DECLARE_FUNCTION(execGetInputImageSprite); \
	DECLARE_FUNCTION(execLastInputWasGamePad); \
	DECLARE_FUNCTION(execGetLastInputAxisMoved); \
	DECLARE_FUNCTION(execGetLastInputButtonPressed); \
	DECLARE_FUNCTION(execGetLastInputModeUsed); \
	DECLARE_FUNCTION(execEnhancedInputActionTriggered);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStevesGameSubsystem(); \
	friend struct Z_Construct_UClass_UStevesGameSubsystem_Statics; \
public: \
	DECLARE_CLASS(UStevesGameSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UStevesGameSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStevesGameSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStevesGameSubsystem(UStevesGameSubsystem&&); \
	UStevesGameSubsystem(const UStevesGameSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStevesGameSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStevesGameSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStevesGameSubsystem) \
	NO_API virtual ~UStevesGameSubsystem();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_23_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UStevesGameSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
