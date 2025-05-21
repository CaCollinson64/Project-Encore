// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesPooledActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEVESUEHELPERS_StevesPooledActor_generated_h
#error "StevesPooledActor.generated.h already included, missing '#pragma once' in StevesPooledActor.h"
#endif
#define STEVESUEHELPERS_StevesPooledActor_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReactivateOnRemovedFromPool_Implementation() {}; \
	virtual void DeactivateOnAddedToPool_Implementation() {}; \
	DECLARE_FUNCTION(execReactivateOnRemovedFromPool); \
	DECLARE_FUNCTION(execDeactivateOnAddedToPool);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STEVESUEHELPERS_API UStevesPooledActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStevesPooledActor(UStevesPooledActor&&); \
	UStevesPooledActor(const UStevesPooledActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STEVESUEHELPERS_API, UStevesPooledActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStevesPooledActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStevesPooledActor) \
	STEVESUEHELPERS_API virtual ~UStevesPooledActor();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStevesPooledActor(); \
	friend struct Z_Construct_UClass_UStevesPooledActor_Statics; \
public: \
	DECLARE_CLASS(UStevesPooledActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), STEVESUEHELPERS_API) \
	DECLARE_SERIALIZER(UStevesPooledActor)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_GENERATED_UINTERFACE_BODY() \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStevesPooledActor() {} \
public: \
	typedef UStevesPooledActor UClassType; \
	typedef IStevesPooledActor ThisClass; \
	static void Execute_DeactivateOnAddedToPool(UObject* O); \
	static void Execute_ReactivateOnRemovedFromPool(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_5_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UStevesPooledActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
