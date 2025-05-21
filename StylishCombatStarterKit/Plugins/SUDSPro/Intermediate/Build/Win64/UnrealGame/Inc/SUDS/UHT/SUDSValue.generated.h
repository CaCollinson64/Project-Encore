// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUDS_SUDSValue_generated_h
#error "SUDSValue.generated.h already included, missing '#pragma once' in SUDSValue.h"
#endif
#define SUDS_SUDSValue_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSValue_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSUDSValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SUDS_API UScriptStruct* StaticStruct<struct FSUDSValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSValue_h


#define FOREACH_ENUM_ESUDSVALUETYPE(op) \
	op(ESUDSValueType::Text) \
	op(ESUDSValueType::Int) \
	op(ESUDSValueType::Float) \
	op(ESUDSValueType::Boolean) \
	op(ESUDSValueType::Gender) \
	op(ESUDSValueType::Name) \
	op(ESUDSValueType::Variable) \
	op(ESUDSValueType::Empty) 

enum class ESUDSValueType : uint8;
template<> struct TIsUEnumClass<ESUDSValueType> { enum { Value = true }; };
template<> SUDS_API UEnum* StaticEnum<ESUDSValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
