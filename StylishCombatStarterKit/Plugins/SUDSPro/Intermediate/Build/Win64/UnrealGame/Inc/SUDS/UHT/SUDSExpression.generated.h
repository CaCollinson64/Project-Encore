// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSExpression.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUDS_SUDSExpression_generated_h
#error "SUDSExpression.generated.h already included, missing '#pragma once' in SUDSExpression.h"
#endif
#define SUDS_SUDSExpression_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSExpression_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SUDS_API UScriptStruct* StaticStruct<struct FSUDSExpressionItem>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSExpression_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSUDSExpression_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SUDS_API UScriptStruct* StaticStruct<struct FSUDSExpression>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSExpression_h


#define FOREACH_ENUM_ESUDSEXPRESSIONITEMTYPE(op) \
	op(ESUDSExpressionItemType::Null) \
	op(ESUDSExpressionItemType::Not) \
	op(ESUDSExpressionItemType::Multiply) \
	op(ESUDSExpressionItemType::Divide) \
	op(ESUDSExpressionItemType::Modulo) \
	op(ESUDSExpressionItemType::Add) \
	op(ESUDSExpressionItemType::Subtract) \
	op(ESUDSExpressionItemType::Less) \
	op(ESUDSExpressionItemType::LessEqual) \
	op(ESUDSExpressionItemType::Greater) \
	op(ESUDSExpressionItemType::GreaterEqual) \
	op(ESUDSExpressionItemType::Equal) \
	op(ESUDSExpressionItemType::NotEqual) \
	op(ESUDSExpressionItemType::And) \
	op(ESUDSExpressionItemType::Or) \
	op(ESUDSExpressionItemType::LParens) \
	op(ESUDSExpressionItemType::RParens) \
	op(ESUDSExpressionItemType::Operand) 

enum class ESUDSExpressionItemType : uint8;
template<> struct TIsUEnumClass<ESUDSExpressionItemType> { enum { Value = true }; };
template<> SUDS_API UEnum* StaticEnum<ESUDSExpressionItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
