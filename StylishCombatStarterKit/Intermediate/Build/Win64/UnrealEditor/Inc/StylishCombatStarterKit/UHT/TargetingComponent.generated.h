// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Character/Components/TargetingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STYLISHCOMBATSTARTERKIT_TargetingComponent_generated_h
#error "TargetingComponent.generated.h already included, missing '#pragma once' in TargetingComponent.h"
#endif
#define STYLISHCOMBATSTARTERKIT_TargetingComponent_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindTargets);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingComponent(); \
	friend struct Z_Construct_UClass_UTargetingComponent_Statics; \
public: \
	DECLARE_CLASS(UTargetingComponent, UInteroperableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StylishCombatStarterKit"), NO_API) \
	DECLARE_SERIALIZER(UTargetingComponent)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTargetingComponent(UTargetingComponent&&); \
	UTargetingComponent(const UTargetingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetingComponent) \
	NO_API virtual ~UTargetingComponent();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_15_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<class UTargetingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h


#define FOREACH_ENUM_ETARGETSELECTIONMETHOD(op) \
	op(ETargetSelectionMethod::SingleTarget) \
	op(ETargetSelectionMethod::MultiTarget) 

enum class ETargetSelectionMethod : uint8;
template<> struct TIsUEnumClass<ETargetSelectionMethod> { enum { Value = true }; };
template<> STYLISHCOMBATSTARTERKIT_API UEnum* StaticEnum<ETargetSelectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
