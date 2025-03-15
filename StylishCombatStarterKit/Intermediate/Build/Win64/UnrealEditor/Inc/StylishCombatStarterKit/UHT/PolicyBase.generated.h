// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Character/Components/ComboPolicies/PolicyBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class USkeletalMeshComponent;
#ifdef STYLISHCOMBATSTARTERKIT_PolicyBase_generated_h
#error "PolicyBase.generated.h already included, missing '#pragma once' in PolicyBase.h"
#endif
#define STYLISHCOMBATSTARTERKIT_PolicyBase_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayAnimMontage); \
	DECLARE_FUNCTION(execStopMontage);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolicyBase(); \
	friend struct Z_Construct_UClass_UPolicyBase_Statics; \
public: \
	DECLARE_CLASS(UPolicyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StylishCombatStarterKit"), NO_API) \
	DECLARE_SERIALIZER(UPolicyBase)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolicyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPolicyBase(UPolicyBase&&); \
	UPolicyBase(const UPolicyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolicyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolicyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolicyBase) \
	NO_API virtual ~UPolicyBase();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_12_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<class UPolicyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
