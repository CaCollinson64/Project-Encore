// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/SudsProSequenceProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULevelSequence;
#ifdef SUDSPRO_SudsProSequenceProvider_generated_h
#error "SudsProSequenceProvider.generated.h already included, missing '#pragma once' in SudsProSequenceProvider.h"
#endif
#define SUDSPRO_SudsProSequenceProvider_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetDialogueLevelSequenceTransformOrigin_Implementation(FName Name, FTransform& OutTransform) { return false; }; \
	virtual AActor* GetDialogueLevelSequenceTransformOriginActor_Implementation(FName Name) { return NULL; }; \
	virtual ULevelSequence* GetDialogueLevelSequence_Implementation(FName Name) { return NULL; }; \
	DECLARE_FUNCTION(execGetDialogueLevelSequenceTransformOrigin); \
	DECLARE_FUNCTION(execGetDialogueLevelSequenceTransformOriginActor); \
	DECLARE_FUNCTION(execGetDialogueLevelSequence);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USudsProSequenceProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USudsProSequenceProvider(USudsProSequenceProvider&&); \
	USudsProSequenceProvider(const USudsProSequenceProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USudsProSequenceProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USudsProSequenceProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USudsProSequenceProvider) \
	NO_API virtual ~USudsProSequenceProvider();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSudsProSequenceProvider(); \
	friend struct Z_Construct_UClass_USudsProSequenceProvider_Statics; \
public: \
	DECLARE_CLASS(USudsProSequenceProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(USudsProSequenceProvider)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISudsProSequenceProvider() {} \
public: \
	typedef USudsProSequenceProvider UClassType; \
	typedef ISudsProSequenceProvider ThisClass; \
	static ULevelSequence* Execute_GetDialogueLevelSequence(UObject* O, FName Name); \
	static bool Execute_GetDialogueLevelSequenceTransformOrigin(UObject* O, FName Name, FTransform& OutTransform); \
	static AActor* Execute_GetDialogueLevelSequenceTransformOriginActor(UObject* O, FName Name); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_12_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class USudsProSequenceProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
