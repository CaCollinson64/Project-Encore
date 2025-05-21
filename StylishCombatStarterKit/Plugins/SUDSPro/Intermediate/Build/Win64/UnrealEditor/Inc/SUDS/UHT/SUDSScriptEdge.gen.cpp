// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSScriptEdge.h"
#include "SUDS/Public/SUDSExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSScriptEdge() {}

// Begin Cross Module References
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNode_NoRegister();
SUDS_API UEnum* Z_Construct_UEnum_SUDS_ESUDSEdgeType();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSExpression();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSScriptEdge();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Enum ESUDSEdgeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESUDSEdgeType;
static UEnum* ESUDSEdgeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESUDSEdgeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESUDSEdgeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SUDS_ESUDSEdgeType, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("ESUDSEdgeType"));
	}
	return Z_Registration_Info_UEnum_ESUDSEdgeType.OuterSingleton;
}
template<> SUDS_API UEnum* StaticEnum<ESUDSEdgeType>()
{
	return ESUDSEdgeType_StaticEnum();
}
struct Z_Construct_UEnum_SUDS_ESUDSEdgeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chained.Comment", "/// An edge which forms a chain of nodes which are supposed to be considered together\n/// This links a text node to its choices, and also potentially compound choices underneath if there are selects \n" },
		{ "Chained.Name", "ESUDSEdgeType::Chained" },
		{ "Chained.ToolTip", "An edge which forms a chain of nodes which are supposed to be considered together\nThis links a text node to its choices, and also potentially compound choices underneath if there are selects" },
		{ "Condition.Comment", "/// A conditional path, taken automatically based on the situation\n" },
		{ "Condition.Name", "ESUDSEdgeType::Condition" },
		{ "Condition.ToolTip", "A conditional path, taken automatically based on the situation" },
		{ "Continue.Comment", "/// A simple continuation; usually for sequences with no choices\n" },
		{ "Continue.Name", "ESUDSEdgeType::Continue" },
		{ "Continue.ToolTip", "A simple continuation; usually for sequences with no choices" },
		{ "Decision.Comment", "/// A decision made by the player from a list of choices\n" },
		{ "Decision.Name", "ESUDSEdgeType::Decision" },
		{ "Decision.ToolTip", "A decision made by the player from a list of choices" },
		{ "ModuleRelativePath", "Public/SUDSScriptEdge.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESUDSEdgeType::Continue", (int64)ESUDSEdgeType::Continue },
		{ "ESUDSEdgeType::Decision", (int64)ESUDSEdgeType::Decision },
		{ "ESUDSEdgeType::Condition", (int64)ESUDSEdgeType::Condition },
		{ "ESUDSEdgeType::Chained", (int64)ESUDSEdgeType::Chained },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SUDS_ESUDSEdgeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	"ESUDSEdgeType",
	"ESUDSEdgeType",
	Z_Construct_UEnum_SUDS_ESUDSEdgeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SUDS_ESUDSEdgeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SUDS_ESUDSEdgeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SUDS_ESUDSEdgeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SUDS_ESUDSEdgeType()
{
	if (!Z_Registration_Info_UEnum_ESUDSEdgeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESUDSEdgeType.InnerSingleton, Z_Construct_UEnum_SUDS_ESUDSEdgeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESUDSEdgeType.InnerSingleton;
}
// End Enum ESUDSEdgeType

// Begin ScriptStruct FSUDSScriptEdge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SUDSScriptEdge;
class UScriptStruct* FSUDSScriptEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSScriptEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SUDSScriptEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSUDSScriptEdge, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("SUDSScriptEdge"));
	}
	return Z_Registration_Info_UScriptStruct_SUDSScriptEdge.OuterSingleton;
}
template<> SUDS_API UScriptStruct* StaticStruct<FSUDSScriptEdge>()
{
	return FSUDSScriptEdge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Edge in the script graph. An edge leads to another node (unidirectional)\n* Edges can have conditions which mean whether they're valid or not, either as automatic\n* choices or player choices.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Edge in the script graph. An edge leads to another node (unidirectional)\nEdges can have conditions which mean whether they're valid or not, either as automatic\nchoices or player choices." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text, if a user choice. Always references a string table\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text, if a user choice. Always references a string table" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "SUDS" },
		{ "ModuleRelativePath", "Public/SUDSScriptEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNode_MetaData[] = {
		{ "Category", "SUDS" },
		{ "ModuleRelativePath", "Public/SUDSScriptEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "SUDS" },
		{ "ModuleRelativePath", "Public/SUDSScriptEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLineNo_MetaData[] = {
		{ "Category", "SUDS" },
		{ "ModuleRelativePath", "Public/SUDSScriptEdge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceLineNo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSUDSScriptEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSScriptEdge, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSScriptEdge, Type), Z_Construct_UEnum_SUDS_ESUDSEdgeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2632513666
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_TargetNode = { "TargetNode", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSScriptEdge, TargetNode), Z_Construct_UClass_USUDSScriptNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNode_MetaData), NewProp_TargetNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSScriptEdge, Condition), Z_Construct_UScriptStruct_FSUDSExpression, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) }; // 169834246
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_SourceLineNo = { "SourceLineNo", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSScriptEdge, SourceLineNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLineNo_MetaData), NewProp_SourceLineNo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_TargetNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewProp_SourceLineNo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	&NewStructOps,
	"SUDSScriptEdge",
	Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::PropPointers),
	sizeof(FSUDSScriptEdge),
	alignof(FSUDSScriptEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSUDSScriptEdge()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSScriptEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SUDSScriptEdge.InnerSingleton, Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SUDSScriptEdge.InnerSingleton;
}
// End ScriptStruct FSUDSScriptEdge

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptEdge_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESUDSEdgeType_StaticEnum, TEXT("ESUDSEdgeType"), &Z_Registration_Info_UEnum_ESUDSEdgeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2632513666U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSUDSScriptEdge::StaticStruct, Z_Construct_UScriptStruct_FSUDSScriptEdge_Statics::NewStructOps, TEXT("SUDSScriptEdge"), &Z_Registration_Info_UScriptStruct_SUDSScriptEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSUDSScriptEdge), 4254885715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptEdge_h_1325896332(TEXT("/Script/SUDS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptEdge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptEdge_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptEdge_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptEdge_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
