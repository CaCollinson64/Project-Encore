// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Character/Abilities/AbilitySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEncoreAbilities;
class UGameplayAbility;
class UGameplayEffect;
enum class EAbilityInput : uint8;
#ifdef STYLISHCOMBATSTARTERKIT_AbilitySubsystem_generated_h
#error "AbilitySubsystem.generated.h already included, missing '#pragma once' in AbilitySubsystem.h"
#endif
#define STYLISHCOMBATSTARTERKIT_AbilitySubsystem_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityInputToInputActionBindings_Statics; \
	STYLISHCOMBATSTARTERKIT_API static class UScriptStruct* StaticStruct();


template<> STYLISHCOMBATSTARTERKIT_API UScriptStruct* StaticStruct<struct FAbilityInputToInputActionBindings>();

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityInputBindings_Statics; \
	STYLISHCOMBATSTARTERKIT_API static class UScriptStruct* StaticStruct();


template<> STYLISHCOMBATSTARTERKIT_API UScriptStruct* StaticStruct<struct FAbilityInputBindings>();

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAbilityByClass); \
	DECLARE_FUNCTION(execCanActivateAbilityByInput); \
	DECLARE_FUNCTION(execApplyGameplayEffectToOwner); \
	DECLARE_FUNCTION(execCancelAllAbilities); \
	DECLARE_FUNCTION(execIsAbilityActive); \
	DECLARE_FUNCTION(execSetupEffects); \
	DECLARE_FUNCTION(execSetupAbilities); \
	DECLARE_FUNCTION(execEndAbilityByInput); \
	DECLARE_FUNCTION(execTickAbilityByClass); \
	DECLARE_FUNCTION(execGetAbilityByInput); \
	DECLARE_FUNCTION(execStartAbilityByInput); \
	DECLARE_FUNCTION(execEndCurrentAbility); \
	DECLARE_FUNCTION(execEndAbilityEarlyByInput); \
	DECLARE_FUNCTION(execGetActiveAbilitiesWithInputID);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySubsystem(); \
	friend struct Z_Construct_UClass_UAbilitySubsystem_Statics; \
public: \
	DECLARE_CLASS(UAbilitySubsystem, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StylishCombatStarterKit"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySubsystem)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilitySubsystem(UAbilitySubsystem&&); \
	UAbilitySubsystem(const UAbilitySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilitySubsystem) \
	NO_API virtual ~UAbilitySubsystem();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_43_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_47_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h_47_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<class UAbilitySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_AbilitySubsystem_h


#define FOREACH_ENUM_EINPUTTYPE(op) \
	op(EInputType::IT_None) \
	op(EInputType::IT_StartRelease) \
	op(EInputType::IT_Started) \
	op(EInputType::IT_Triggered) \
	op(EInputType::IT_Released) 

enum class EInputType : uint8;
template<> struct TIsUEnumClass<EInputType> { enum { Value = true }; };
template<> STYLISHCOMBATSTARTERKIT_API UEnum* StaticEnum<EInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
