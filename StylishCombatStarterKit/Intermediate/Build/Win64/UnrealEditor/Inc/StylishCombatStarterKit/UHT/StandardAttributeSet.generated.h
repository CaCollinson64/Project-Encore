// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Character/Abilities/Attributes/StandardAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef STYLISHCOMBATSTARTERKIT_StandardAttributeSet_generated_h
#error "StandardAttributeSet.generated.h already included, missing '#pragma once' in StandardAttributeSet.h"
#endif
#define STYLISHCOMBATSTARTERKIT_StandardAttributeSet_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_Attributes_StandardAttributeSet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_Attributes_StandardAttributeSet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStandardAttributeSet(); \
	friend struct Z_Construct_UClass_UStandardAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UStandardAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StylishCombatStarterKit"), NO_API) \
	DECLARE_SERIALIZER(UStandardAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UStandardAttributeSet) \
public:


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_Attributes_StandardAttributeSet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStandardAttributeSet(UStandardAttributeSet&&); \
	UStandardAttributeSet(const UStandardAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStandardAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStandardAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStandardAttributeSet) \
	NO_API virtual ~UStandardAttributeSet();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_Attributes_StandardAttributeSet_h_9_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_Attributes_StandardAttributeSet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_Attributes_StandardAttributeSet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_Attributes_StandardAttributeSet_h_12_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_Attributes_StandardAttributeSet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<class UStandardAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Abilities_Attributes_StandardAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
