// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSScript.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSScript() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScript();
SUDS_API UClass* Z_Construct_UClass_USUDSScript_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNode_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeGosub_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeText_NoRegister();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Class USUDSScript Function GetFirstNode
struct Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics
{
	struct SUDSScript_eventGetFirstNode_Parms
	{
		USUDSScriptNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the first node of the script, if starting from the beginning\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the first node of the script, if starting from the beginning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetFirstNode_Parms, ReturnValue), Z_Construct_UClass_USUDSScriptNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSScript, nullptr, "GetFirstNode", nullptr, nullptr, Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::SUDSScript_eventGetFirstNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::SUDSScript_eventGetFirstNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSScript_GetFirstNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSScript_GetFirstNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSScript::execGetFirstNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSScriptNode**)Z_Param__Result=P_THIS->GetFirstNode();
	P_NATIVE_END;
}
// End Class USUDSScript Function GetFirstNode

// Begin Class USUDSScript Function GetHeaderNode
struct Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics
{
	struct SUDSScript_eventGetHeaderNode_Parms
	{
		USUDSScriptNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the first header node, if any (header nodes are run every time the script starts)\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the first header node, if any (header nodes are run every time the script starts)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetHeaderNode_Parms, ReturnValue), Z_Construct_UClass_USUDSScriptNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSScript, nullptr, "GetHeaderNode", nullptr, nullptr, Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::SUDSScript_eventGetHeaderNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::SUDSScript_eventGetHeaderNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSScript_GetHeaderNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSScript_GetHeaderNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSScript::execGetHeaderNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSScriptNode**)Z_Param__Result=P_THIS->GetHeaderNode();
	P_NATIVE_END;
}
// End Class USUDSScript Function GetHeaderNode

// Begin Class USUDSScript Function GetNextNode
struct Z_Construct_UFunction_USUDSScript_GetNextNode_Statics
{
	struct SUDSScript_eventGetNextNode_Parms
	{
		const USUDSScriptNode* Node;
		USUDSScriptNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the next node after a given node, ONLY if there's only one way to go\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the next node after a given node, ONLY if there's only one way to go" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetNextNode_Parms, Node), Z_Construct_UClass_USUDSScriptNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetNextNode_Parms, ReturnValue), Z_Construct_UClass_USUDSScriptNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSScript, nullptr, "GetNextNode", nullptr, nullptr, Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::SUDSScript_eventGetNextNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::SUDSScript_eventGetNextNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSScript_GetNextNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSScript_GetNextNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSScript::execGetNextNode)
{
	P_GET_OBJECT(USUDSScriptNode,Z_Param_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSScriptNode**)Z_Param__Result=P_THIS->GetNextNode(Z_Param_Node);
	P_NATIVE_END;
}
// End Class USUDSScript Function GetNextNode

// Begin Class USUDSScript Function GetNodeByGosubID
struct Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics
{
	struct SUDSScript_eventGetNodeByGosubID_Parms
	{
		FString ID;
		USUDSScriptNodeGosub* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Try to find a gosub node by its gosub ID\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to find a gosub node by its gosub ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetNodeByGosubID_Parms, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetNodeByGosubID_Parms, ReturnValue), Z_Construct_UClass_USUDSScriptNodeGosub_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSScript, nullptr, "GetNodeByGosubID", nullptr, nullptr, Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::SUDSScript_eventGetNodeByGosubID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::SUDSScript_eventGetNodeByGosubID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSScript_GetNodeByGosubID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSScript_GetNodeByGosubID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSScript::execGetNodeByGosubID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSScriptNodeGosub**)Z_Param__Result=P_THIS->GetNodeByGosubID(Z_Param_ID);
	P_NATIVE_END;
}
// End Class USUDSScript Function GetNodeByGosubID

// Begin Class USUDSScript Function GetNodeByLabel
struct Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics
{
	struct SUDSScript_eventGetNodeByLabel_Parms
	{
		FName Label;
		USUDSScriptNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the first node of the script following a label, or null if the label wasn't found\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the first node of the script following a label, or null if the label wasn't found" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetNodeByLabel_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetNodeByLabel_Parms, ReturnValue), Z_Construct_UClass_USUDSScriptNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSScript, nullptr, "GetNodeByLabel", nullptr, nullptr, Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::SUDSScript_eventGetNodeByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::SUDSScript_eventGetNodeByLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSScript_GetNodeByLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSScript_GetNodeByLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSScript::execGetNodeByLabel)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSScriptNode**)Z_Param__Result=P_THIS->GetNodeByLabel(Z_Param_Out_Label);
	P_NATIVE_END;
}
// End Class USUDSScript Function GetNodeByLabel

// Begin Class USUDSScript Function GetNodeByTextID
struct Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics
{
	struct SUDSScript_eventGetNodeByTextID_Parms
	{
		FString TextID;
		USUDSScriptNodeText* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Try to find a speaker node by its text ID\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to find a speaker node by its text ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::NewProp_TextID = { "TextID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetNodeByTextID_Parms, TextID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextID_MetaData), NewProp_TextID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetNodeByTextID_Parms, ReturnValue), Z_Construct_UClass_USUDSScriptNodeText_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::NewProp_TextID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSScript, nullptr, "GetNodeByTextID", nullptr, nullptr, Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::SUDSScript_eventGetNodeByTextID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::SUDSScript_eventGetNodeByTextID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSScript_GetNodeByTextID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSScript_GetNodeByTextID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSScript::execGetNodeByTextID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TextID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSScriptNodeText**)Z_Param__Result=P_THIS->GetNodeByTextID(Z_Param_TextID);
	P_NATIVE_END;
}
// End Class USUDSScript Function GetNodeByTextID

// Begin Class USUDSScript Function GetSpeakerVoice
struct Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics
{
	struct SUDSScript_eventGetSpeakerVoice_Parms
	{
		FString SpeakerID;
		UDialogueVoice* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakerID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetSpeakerVoice_Parms, SpeakerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerID_MetaData), NewProp_SpeakerID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSScript_eventGetSpeakerVoice_Parms, ReturnValue), Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::NewProp_SpeakerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSScript, nullptr, "GetSpeakerVoice", nullptr, nullptr, Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::SUDSScript_eventGetSpeakerVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::SUDSScript_eventGetSpeakerVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSScript_GetSpeakerVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSScript_GetSpeakerVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSScript::execGetSpeakerVoice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SpeakerID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogueVoice**)Z_Param__Result=P_THIS->GetSpeakerVoice(Z_Param_SpeakerID);
	P_NATIVE_END;
}
// End Class USUDSScript Function GetSpeakerVoice

// Begin Class USUDSScript
void USUDSScript::StaticRegisterNativesUSUDSScript()
{
	UClass* Class = USUDSScript::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFirstNode", &USUDSScript::execGetFirstNode },
		{ "GetHeaderNode", &USUDSScript::execGetHeaderNode },
		{ "GetNextNode", &USUDSScript::execGetNextNode },
		{ "GetNodeByGosubID", &USUDSScript::execGetNodeByGosubID },
		{ "GetNodeByLabel", &USUDSScript::execGetNodeByLabel },
		{ "GetNodeByTextID", &USUDSScript::execGetNodeByTextID },
		{ "GetSpeakerVoice", &USUDSScript::execGetSpeakerVoice },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSScript);
UClass* Z_Construct_UClass_USUDSScript_NoRegister()
{
	return USUDSScript::StaticClass();
}
struct Z_Construct_UClass_USUDSScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A single SUDS script asset.\n */" },
#endif
		{ "IncludePath", "SUDSScript.h" },
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single SUDS script asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Array of nodes (static after import)\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of nodes (static after import)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelList_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Map of labels to nodes\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of labels to nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderNodes_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Header equivalents for startup\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Header equivalents for startup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderLabelList_MetaData[] = {
		{ "Category", "SUDS" },
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speakers_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Array of all speaker IDs found in this script\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of all speaker IDs found in this script" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerVoices_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// When using VO, Dialogue Voice assets are associated with speaker IDs\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When using VO, Dialogue Voice assets are associated with speaker IDs" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Import data for this \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SUDSScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Import data for this" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LabelList_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LabelList_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LabelList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeaderNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeaderNodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeaderLabelList_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeaderLabelList_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HeaderLabelList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Speakers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Speakers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerVoices_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakerVoices_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpeakerVoices;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USUDSScript_GetFirstNode, "GetFirstNode" }, // 2214406442
		{ &Z_Construct_UFunction_USUDSScript_GetHeaderNode, "GetHeaderNode" }, // 3796612891
		{ &Z_Construct_UFunction_USUDSScript_GetNextNode, "GetNextNode" }, // 2444871527
		{ &Z_Construct_UFunction_USUDSScript_GetNodeByGosubID, "GetNodeByGosubID" }, // 4011635866
		{ &Z_Construct_UFunction_USUDSScript_GetNodeByLabel, "GetNodeByLabel" }, // 2210159160
		{ &Z_Construct_UFunction_USUDSScript_GetNodeByTextID, "GetNodeByTextID" }, // 996198887
		{ &Z_Construct_UFunction_USUDSScript_GetSpeakerVoice, "GetSpeakerVoice" }, // 2810375743
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USUDSScriptNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScript, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_LabelList_ValueProp = { "LabelList", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_LabelList_Key_KeyProp = { "LabelList_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_LabelList = { "LabelList", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScript, LabelList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelList_MetaData), NewProp_LabelList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderNodes_Inner = { "HeaderNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USUDSScriptNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderNodes = { "HeaderNodes", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScript, HeaderNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderNodes_MetaData), NewProp_HeaderNodes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderLabelList_ValueProp = { "HeaderLabelList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderLabelList_Key_KeyProp = { "HeaderLabelList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderLabelList = { "HeaderLabelList", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScript, HeaderLabelList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderLabelList_MetaData), NewProp_HeaderLabelList_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_Speakers_Inner = { "Speakers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_Speakers = { "Speakers", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScript, Speakers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speakers_MetaData), NewProp_Speakers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_SpeakerVoices_ValueProp = { "SpeakerVoices", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_SpeakerVoices_Key_KeyProp = { "SpeakerVoices_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_SpeakerVoices = { "SpeakerVoices", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScript, SpeakerVoices), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerVoices_MetaData), NewProp_SpeakerVoices_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSScript_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScript, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUDSScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_LabelList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_LabelList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_LabelList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderLabelList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderLabelList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_HeaderLabelList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_Speakers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_Speakers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_SpeakerVoices_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_SpeakerVoices_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_SpeakerVoices,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScript_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScript_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USUDSScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSScript_Statics::ClassParams = {
	&USUDSScript::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USUDSScript_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScript_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScript_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSScript()
{
	if (!Z_Registration_Info_UClass_USUDSScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSScript.OuterSingleton, Z_Construct_UClass_USUDSScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSScript.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSScript>()
{
	return USUDSScript::StaticClass();
}
USUDSScript::USUDSScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSScript);
USUDSScript::~USUDSScript() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USUDSScript)
#endif // WITH_EDITORONLY_DATA
// End Class USUDSScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSScript, USUDSScript::StaticClass, TEXT("USUDSScript"), &Z_Registration_Info_UClass_USUDSScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSScript), 3678390163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_13817687(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScript_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
