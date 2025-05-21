// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Character/Components/Fighting/ComboPolicies/ComboHitPolicy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FComboStep;
#ifdef STYLISHCOMBATSTARTERKIT_ComboHitPolicy_generated_h
#error "ComboHitPolicy.generated.h already included, missing '#pragma once' in ComboHitPolicy.h"
#endif
#define STYLISHCOMBATSTARTERKIT_ComboHitPolicy_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_15_CALLBACK_WRAPPERS
#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboHitPolicy(); \
	friend struct Z_Construct_UClass_UComboHitPolicy_Statics; \
public: \
	DECLARE_CLASS(UComboHitPolicy, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StylishCombatStarterKit"), NO_API) \
	DECLARE_SERIALIZER(UComboHitPolicy)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboHitPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UComboHitPolicy(UComboHitPolicy&&); \
	UComboHitPolicy(const UComboHitPolicy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboHitPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboHitPolicy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboHitPolicy) \
	NO_API virtual ~UComboHitPolicy();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_12_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_15_CALLBACK_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<class UComboHitPolicy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Fighting_ComboPolicies_ComboHitPolicy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
