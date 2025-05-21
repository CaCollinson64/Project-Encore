// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSScriptNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUDS_SUDSScriptNode_generated_h
#error "SUDSScriptNode.generated.h already included, missing '#pragma once' in SUDSScriptNode.h"
#endif
#define SUDS_SUDSScriptNode_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNode_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSUDSScriptNode(); \
	friend struct Z_Construct_UClass_USUDSScriptNode_Statics; \
public: \
	DECLARE_CLASS(USUDSScriptNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SUDS"), NO_API) \
	DECLARE_SERIALIZER(USUDSScriptNode)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNode_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USUDSScriptNode(USUDSScriptNode&&); \
	USUDSScriptNode(const USUDSScriptNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USUDSScriptNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USUDSScriptNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USUDSScriptNode) \
	NO_API virtual ~USUDSScriptNode();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNode_h_38_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNode_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNode_h_41_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNode_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDS_API UClass* StaticClass<class USUDSScriptNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNode_h


#define FOREACH_ENUM_ESUDSSCRIPTNODETYPE(op) \
	op(ESUDSScriptNodeType::Text) \
	op(ESUDSScriptNodeType::Choice) \
	op(ESUDSScriptNodeType::Select) \
	op(ESUDSScriptNodeType::SetVariable) \
	op(ESUDSScriptNodeType::Event) \
	op(ESUDSScriptNodeType::Gosub) \
	op(ESUDSScriptNodeType::Return) 

enum class ESUDSScriptNodeType : uint8;
template<> struct TIsUEnumClass<ESUDSScriptNodeType> { enum { Value = true }; };
template<> SUDS_API UEnum* StaticEnum<ESUDSScriptNodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
