// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSScriptNode.h"
#include "SUDS/Public/SUDSScriptEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSScriptNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNode();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNode_NoRegister();
SUDS_API UEnum* Z_Construct_UEnum_SUDS_ESUDSScriptNodeType();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSScriptEdge();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Enum ESUDSScriptNodeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESUDSScriptNodeType;
static UEnum* ESUDSScriptNodeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESUDSScriptNodeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESUDSScriptNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SUDS_ESUDSScriptNodeType, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("ESUDSScriptNodeType"));
	}
	return Z_Registration_Info_UEnum_ESUDSScriptNodeType.OuterSingleton;
}
template<> SUDS_API UEnum* StaticEnum<ESUDSScriptNodeType>()
{
	return ESUDSScriptNodeType_StaticEnum();
}
struct Z_Construct_UEnum_SUDS_ESUDSScriptNodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Choice.Comment", "/// Choice node, displaying a series of user choices which navigate to other nodes\n" },
		{ "Choice.Name", "ESUDSScriptNodeType::Choice" },
		{ "Choice.ToolTip", "Choice node, displaying a series of user choices which navigate to other nodes" },
		{ "Event.Comment", "/// Event node\n" },
		{ "Event.Name", "ESUDSScriptNodeType::Event" },
		{ "Event.ToolTip", "Event node" },
		{ "Gosub.Comment", "/// Gosub node\n" },
		{ "Gosub.Name", "ESUDSScriptNodeType::Gosub" },
		{ "Gosub.ToolTip", "Gosub node" },
		{ "ModuleRelativePath", "Public/SUDSScriptNode.h" },
		{ "Return.Comment", "/// Return node\n" },
		{ "Return.Name", "ESUDSScriptNodeType::Return" },
		{ "Return.ToolTip", "Return node" },
		{ "Select.Comment", "/// Select node, automatically selecting one which navigates to another node based on state\n" },
		{ "Select.Name", "ESUDSScriptNodeType::Select" },
		{ "Select.ToolTip", "Select node, automatically selecting one which navigates to another node based on state" },
		{ "SetVariable.Comment", "/// Set variable node\n" },
		{ "SetVariable.Name", "ESUDSScriptNodeType::SetVariable" },
		{ "SetVariable.ToolTip", "Set variable node" },
		{ "Text.Comment", "/// Text node, displaying a line of dialogue\n" },
		{ "Text.Name", "ESUDSScriptNodeType::Text" },
		{ "Text.ToolTip", "Text node, displaying a line of dialogue" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESUDSScriptNodeType::Text", (int64)ESUDSScriptNodeType::Text },
		{ "ESUDSScriptNodeType::Choice", (int64)ESUDSScriptNodeType::Choice },
		{ "ESUDSScriptNodeType::Select", (int64)ESUDSScriptNodeType::Select },
		{ "ESUDSScriptNodeType::SetVariable", (int64)ESUDSScriptNodeType::SetVariable },
		{ "ESUDSScriptNodeType::Event", (int64)ESUDSScriptNodeType::Event },
		{ "ESUDSScriptNodeType::Gosub", (int64)ESUDSScriptNodeType::Gosub },
		{ "ESUDSScriptNodeType::Return", (int64)ESUDSScriptNodeType::Return },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SUDS_ESUDSScriptNodeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	"ESUDSScriptNodeType",
	"ESUDSScriptNodeType",
	Z_Construct_UEnum_SUDS_ESUDSScriptNodeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SUDS_ESUDSScriptNodeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SUDS_ESUDSScriptNodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SUDS_ESUDSScriptNodeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SUDS_ESUDSScriptNodeType()
{
	if (!Z_Registration_Info_UEnum_ESUDSScriptNodeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESUDSScriptNodeType.InnerSingleton, Z_Construct_UEnum_SUDS_ESUDSScriptNodeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESUDSScriptNodeType.InnerSingleton;
}
// End Enum ESUDSScriptNodeType

// Begin Class USUDSScriptNode
void USUDSScriptNode::StaticRegisterNativesUSUDSScriptNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSScriptNode);
UClass* Z_Construct_UClass_USUDSScriptNode_NoRegister()
{
	return USUDSScriptNode::StaticClass();
}
struct Z_Construct_UClass_USUDSScriptNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A node in the script graph.\n * Nodes are either text, or branch points (user choice or automatic branching logic)\n * Text nodes always lead to a single next step, be that another text node or a branch.\n * Branch nodes are separate from the text so that jumping can return to a choice point without emitting more text.\n * At runtime if a text node's next step is a user choice, it will be available immediately. Otherwise it's not\n * evaluated until the dialogue progresses.\n * Edges connect everything. Edges may have text if they're user choices (even if that's a single choice), and\n * may have conditions.\n */" },
		{ "IncludePath", "SUDSScriptNode.h" },
		{ "ModuleRelativePath", "Public/SUDSScriptNode.h" },
		{ "ToolTip", "A node in the script graph.\nNodes are either text, or branch points (user choice or automatic branching logic)\nText nodes always lead to a single next step, be that another text node or a branch.\nBranch nodes are separate from the text so that jumping can return to a choice point without emitting more text.\nAt runtime if a text node's next step is a user choice, it will be available immediately. Otherwise it's not\nevaluated until the dialogue progresses.\nEdges connect everything. Edges may have text if they're user choices (even if that's a single choice), and\nmay have conditions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/// Type of node\n/// To make it easier to check rather than having to cast to subtypes blindly. And also not all types need a subtype\n" },
		{ "ModuleRelativePath", "Public/SUDSScriptNode.h" },
		{ "ToolTip", "Type of node\nTo make it easier to check rather than having to cast to subtypes blindly. And also not all types need a subtype" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/// Links to other nodes\n" },
		{ "ModuleRelativePath", "Public/SUDSScriptNode.h" },
		{ "ToolTip", "Links to other nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLineNo_MetaData[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/// The line number in the script that this node came from\n" },
		{ "ModuleRelativePath", "Public/SUDSScriptNode.h" },
		{ "ToolTip", "The line number in the script that this node came from" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceLineNo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSScriptNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_NodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNode, NodeType), Z_Construct_UEnum_SUDS_ESUDSScriptNodeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeType_MetaData), NewProp_NodeType_MetaData) }; // 4197933308
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUDSScriptEdge, METADATA_PARAMS(0, nullptr) }; // 2172330560
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNode, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Edges_MetaData), NewProp_Edges_MetaData) }; // 2172330560
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_SourceLineNo = { "SourceLineNo", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNode, SourceLineNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLineNo_MetaData), NewProp_SourceLineNo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUDSScriptNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_NodeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_NodeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_Edges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_Edges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNode_Statics::NewProp_SourceLineNo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USUDSScriptNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSScriptNode_Statics::ClassParams = {
	&USUDSScriptNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USUDSScriptNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNode_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSScriptNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSScriptNode()
{
	if (!Z_Registration_Info_UClass_USUDSScriptNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSScriptNode.OuterSingleton, Z_Construct_UClass_USUDSScriptNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSScriptNode.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSScriptNode>()
{
	return USUDSScriptNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSScriptNode);
USUDSScriptNode::~USUDSScriptNode() {}
// End Class USUDSScriptNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESUDSScriptNodeType_StaticEnum, TEXT("ESUDSScriptNodeType"), &Z_Registration_Info_UEnum_ESUDSScriptNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4197933308U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSScriptNode, USUDSScriptNode::StaticClass, TEXT("USUDSScriptNode"), &Z_Registration_Info_UClass_USUDSScriptNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSScriptNode), 3461066953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNode_h_2212824765(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
