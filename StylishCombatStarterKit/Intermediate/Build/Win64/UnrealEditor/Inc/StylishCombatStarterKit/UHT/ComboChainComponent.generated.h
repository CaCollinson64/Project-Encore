// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Character/Components/ComboChainComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EComboInputType : uint8;
#ifdef STYLISHCOMBATSTARTERKIT_ComboChainComponent_generated_h
#error "ComboChainComponent.generated.h already included, missing '#pragma once' in ComboChainComponent.h"
#endif
#define STYLISHCOMBATSTARTERKIT_ComboChainComponent_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTriggerExit); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execOnComboInput);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboChainComponent(); \
	friend struct Z_Construct_UClass_UComboChainComponent_Statics; \
public: \
	DECLARE_CLASS(UComboChainComponent, UInteroperableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StylishCombatStarterKit"), NO_API) \
	DECLARE_SERIALIZER(UComboChainComponent)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UComboChainComponent(UComboChainComponent&&); \
	UComboChainComponent(const UComboChainComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboChainComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboChainComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComboChainComponent) \
	NO_API virtual ~UComboChainComponent();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_19_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<class UComboChainComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboChainComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
