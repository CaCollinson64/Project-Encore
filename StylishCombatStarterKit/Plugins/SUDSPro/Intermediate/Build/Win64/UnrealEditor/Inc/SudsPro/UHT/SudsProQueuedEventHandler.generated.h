// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/SudsProQueuedEventHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USUDSDialogue;
struct FSUDSValue;
#ifdef SUDSPRO_SudsProQueuedEventHandler_generated_h
#error "SudsProQueuedEventHandler.generated.h already included, missing '#pragma once' in SudsProQueuedEventHandler.h"
#endif
#define SUDSPRO_SudsProQueuedEventHandler_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnQueuedDialogueEvent_Implementation(USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments) {}; \
	DECLARE_FUNCTION(execOnQueuedDialogueEvent);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USudsProQueuedEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USudsProQueuedEventHandler(USudsProQueuedEventHandler&&); \
	USudsProQueuedEventHandler(const USudsProQueuedEventHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USudsProQueuedEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USudsProQueuedEventHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USudsProQueuedEventHandler) \
	NO_API virtual ~USudsProQueuedEventHandler();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSudsProQueuedEventHandler(); \
	friend struct Z_Construct_UClass_USudsProQueuedEventHandler_Statics; \
public: \
	DECLARE_CLASS(USudsProQueuedEventHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(USudsProQueuedEventHandler)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISudsProQueuedEventHandler() {} \
public: \
	typedef USudsProQueuedEventHandler UClassType; \
	typedef ISudsProQueuedEventHandler ThisClass; \
	static void Execute_OnQueuedDialogueEvent(UObject* O, USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_13_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class USudsProQueuedEventHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
