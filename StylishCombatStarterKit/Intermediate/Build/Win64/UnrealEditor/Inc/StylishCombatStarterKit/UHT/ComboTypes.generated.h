// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Character/Inputs/ComboTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STYLISHCOMBATSTARTERKIT_ComboTypes_generated_h
#error "ComboTypes.generated.h already included, missing '#pragma once' in ComboTypes.h"
#endif
#define STYLISHCOMBATSTARTERKIT_ComboTypes_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Inputs_ComboTypes_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboStep_Statics; \
	STYLISHCOMBATSTARTERKIT_API static class UScriptStruct* StaticStruct();


template<> STYLISHCOMBATSTARTERKIT_API UScriptStruct* StaticStruct<struct FComboStep>();

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Inputs_ComboTypes_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboChain_Statics; \
	STYLISHCOMBATSTARTERKIT_API static class UScriptStruct* StaticStruct();


template<> STYLISHCOMBATSTARTERKIT_API UScriptStruct* StaticStruct<struct FComboChain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Inputs_ComboTypes_h


#define FOREACH_ENUM_ECOMBOEXECUTIONTYPE(op) \
	op(EComboExecutionType::None) \
	op(EComboExecutionType::AnimationMontageBased) \
	op(EComboExecutionType::AbilityBased) 

enum class EComboExecutionType : uint8;
template<> struct TIsUEnumClass<EComboExecutionType> { enum { Value = true }; };
template<> STYLISHCOMBATSTARTERKIT_API UEnum* StaticEnum<EComboExecutionType>();

#define FOREACH_ENUM_ECOMBOINPUTTYPE(op) \
	op(EComboInputType::None) \
	op(EComboInputType::Light) \
	op(EComboInputType::Heavy) \
	op(EComboInputType::Ranged) \
	op(EComboInputType::Special1) \
	op(EComboInputType::Special2) \
	op(EComboInputType::Jump) 

enum class EComboInputType : uint8;
template<> struct TIsUEnumClass<EComboInputType> { enum { Value = true }; };
template<> STYLISHCOMBATSTARTERKIT_API UEnum* StaticEnum<EComboInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
