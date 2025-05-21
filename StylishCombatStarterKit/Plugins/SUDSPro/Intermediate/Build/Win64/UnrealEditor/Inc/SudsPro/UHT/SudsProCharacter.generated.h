// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/SudsProCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class USkeletalMeshComponent;
struct FSUDSValue;
#ifdef SUDSPRO_SudsProCharacter_generated_h
#error "SudsProCharacter.generated.h already included, missing '#pragma once' in SudsProCharacter.h"
#endif
#define SUDSPRO_SudsProCharacter_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OnDialogueNotify_Implementation(FName NotifyName, TArray<FSUDSValue> const& Args) { return false; }; \
	virtual USkeletalMeshComponent* GetDialogueSkeleton_Implementation(FName AnimName) { return NULL; }; \
	virtual UAnimSequenceBase* GetDialogueAnimation_Implementation(FName AnimName) { return NULL; }; \
	virtual void PostDialogueMoveCharacter_Implementation() {}; \
	virtual bool PreDialogueMoveCharacter_Implementation(FVector const& Location, FRotator const& Rotator) { return false; }; \
	virtual FName GetDialogueCharacterIdentifier_Implementation() { return NAME_None; }; \
	DECLARE_FUNCTION(execOnDialogueNotify); \
	DECLARE_FUNCTION(execGetDialogueSkeleton); \
	DECLARE_FUNCTION(execGetDialogueAnimation); \
	DECLARE_FUNCTION(execPostDialogueMoveCharacter); \
	DECLARE_FUNCTION(execPreDialogueMoveCharacter); \
	DECLARE_FUNCTION(execGetDialogueCharacterIdentifier);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USudsProCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USudsProCharacter(USudsProCharacter&&); \
	USudsProCharacter(const USudsProCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USudsProCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USudsProCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USudsProCharacter) \
	NO_API virtual ~USudsProCharacter();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSudsProCharacter(); \
	friend struct Z_Construct_UClass_USudsProCharacter_Statics; \
public: \
	DECLARE_CLASS(USudsProCharacter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(USudsProCharacter)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISudsProCharacter() {} \
public: \
	typedef USudsProCharacter UClassType; \
	typedef ISudsProCharacter ThisClass; \
	static UAnimSequenceBase* Execute_GetDialogueAnimation(UObject* O, FName AnimName); \
	static FName Execute_GetDialogueCharacterIdentifier(UObject* O); \
	static USkeletalMeshComponent* Execute_GetDialogueSkeleton(UObject* O, FName AnimName); \
	static bool Execute_OnDialogueNotify(UObject* O, FName NotifyName, TArray<FSUDSValue> const& Args); \
	static void Execute_PostDialogueMoveCharacter(UObject* O); \
	static bool Execute_PreDialogueMoveCharacter(UObject* O, FVector const& Location, FRotator const& Rotator); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_11_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class USudsProCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
