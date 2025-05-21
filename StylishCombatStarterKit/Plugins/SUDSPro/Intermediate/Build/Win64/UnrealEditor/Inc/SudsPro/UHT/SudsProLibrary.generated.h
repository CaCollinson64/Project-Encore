// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SudsProLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class USUDSDialogue;
class USudsProUiLink;
class USUDSScript;
class UUserWidget;
struct FSUDSDialogueState;
#ifdef SUDSPRO_SudsProLibrary_generated_h
#error "SudsProLibrary.generated.h already included, missing '#pragma once' in SudsProLibrary.h"
#endif
#define SUDSPRO_SudsProLibrary_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindDialogueCharacter); \
	DECLARE_FUNCTION(execGetDialogueWidgetClass); \
	DECLARE_FUNCTION(execStartDialogueWithParticipant); \
	DECLARE_FUNCTION(execStartDialogueWithParticipants); \
	DECLARE_FUNCTION(execStartDialogue);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSudsProLibrary(); \
	friend struct Z_Construct_UClass_USudsProLibrary_Statics; \
public: \
	DECLARE_CLASS(USudsProLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(USudsProLibrary)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USudsProLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USudsProLibrary(USudsProLibrary&&); \
	USudsProLibrary(const USudsProLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USudsProLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USudsProLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USudsProLibrary) \
	NO_API virtual ~USudsProLibrary();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProLibrary_h_16_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class USudsProLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
