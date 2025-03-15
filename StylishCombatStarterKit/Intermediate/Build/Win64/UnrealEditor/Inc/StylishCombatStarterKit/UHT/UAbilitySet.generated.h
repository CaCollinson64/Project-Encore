// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Character/Abilities/UAbilitySet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UGameplayAbility;
#ifdef STYLISHCOMBATSTARTERKIT_UAbilitySet_generated_h
#error "UAbilitySet.generated.h already included, missing '#pragma once' in UAbilitySet.h"
#endif
#define STYLISHCOMBATSTARTERKIT_UAbilitySet_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilitySetItem_Statics; \
	STYLISHCOMBATSTARTERKIT_API static class UScriptStruct* StaticStruct();


template<> STYLISHCOMBATSTARTERKIT_API UScriptStruct* StaticStruct<struct FAbilitySetItem>();

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllActiveAbilities); \
	DECLARE_FUNCTION(execGetAllGrantedAbilities);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySet(); \
	friend struct Z_Construct_UClass_UAbilitySet_Statics; \
public: \
	DECLARE_CLASS(UAbilitySet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StylishCombatStarterKit"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySet)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilitySet(UAbilitySet&&); \
	UAbilitySet(const UAbilitySet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySet) \
	NO_API virtual ~UAbilitySet();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_42_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_45_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<class UAbilitySet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_UAbilitySet_h


#define FOREACH_ENUM_EABILITYINPUT(op) \
	op(EAbilityInput::None) \
	op(EAbilityInput::Jump) \
	op(EAbilityInput::PrimaryAttack) \
	op(EAbilityInput::PrimaryAttackL) \
	op(EAbilityInput::PrimaryAttackR) \
	op(EAbilityInput::PrimaryAttackHeavy) \
	op(EAbilityInput::SecondaryAbility) \
	op(EAbilityInput::SpecialAbility) \
	op(EAbilityInput::Ability1) \
	op(EAbilityInput::Ability2) 

enum class EAbilityInput : uint8;
template<> struct TIsUEnumClass<EAbilityInput> { enum { Value = true }; };
template<> STYLISHCOMBATSTARTERKIT_API UEnum* StaticEnum<EAbilityInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
