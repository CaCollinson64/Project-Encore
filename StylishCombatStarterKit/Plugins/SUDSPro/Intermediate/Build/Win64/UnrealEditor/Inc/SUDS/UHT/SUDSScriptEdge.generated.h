// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSScriptEdge.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUDS_SUDSScriptEdge_generated_h
#error "SUDSScriptEdge.generated.h already included, missing '#pragma once' in SUDSScriptEdge.h"
#endif
#define SUDS_SUDSScriptEdge_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptEdge_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SUDS_API UScriptStruct* StaticStruct<struct FSUDSScriptEdge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptEdge_h


#define FOREACH_ENUM_ESUDSEDGETYPE(op) \
	op(ESUDSEdgeType::Continue) \
	op(ESUDSEdgeType::Decision) \
	op(ESUDSEdgeType::Condition) \
	op(ESUDSEdgeType::Chained) 

enum class ESUDSEdgeType : uint8;
template<> struct TIsUEnumClass<ESUDSEdgeType> { enum { Value = true }; };
template<> SUDS_API UEnum* StaticEnum<ESUDSEdgeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
