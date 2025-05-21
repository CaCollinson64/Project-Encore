// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSExpression.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSExpression() {}

// Begin Cross Module References
SUDS_API UEnum* Z_Construct_UEnum_SUDS_ESUDSExpressionItemType();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSExpression();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSExpressionItem();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Enum ESUDSExpressionItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESUDSExpressionItemType;
static UEnum* ESUDSExpressionItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESUDSExpressionItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESUDSExpressionItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SUDS_ESUDSExpressionItemType, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("ESUDSExpressionItemType"));
	}
	return Z_Registration_Info_UEnum_ESUDSExpressionItemType.OuterSingleton;
}
template<> SUDS_API UEnum* StaticEnum<ESUDSExpressionItemType>()
{
	return ESUDSExpressionItemType_StaticEnum();
}
struct Z_Construct_UEnum_SUDS_ESUDSExpressionItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Name", "ESUDSExpressionItemType::Add" },
		{ "And.Name", "ESUDSExpressionItemType::And" },
		{ "BlueprintType", "true" },
		{ "Divide.Name", "ESUDSExpressionItemType::Divide" },
		{ "Equal.Name", "ESUDSExpressionItemType::Equal" },
		{ "Greater.Name", "ESUDSExpressionItemType::Greater" },
		{ "GreaterEqual.Name", "ESUDSExpressionItemType::GreaterEqual" },
		{ "Less.Name", "ESUDSExpressionItemType::Less" },
		{ "LessEqual.Name", "ESUDSExpressionItemType::LessEqual" },
		{ "LParens.Name", "ESUDSExpressionItemType::LParens" },
		{ "ModuleRelativePath", "Public/SUDSExpression.h" },
		{ "Modulo.Name", "ESUDSExpressionItemType::Modulo" },
		{ "Multiply.Name", "ESUDSExpressionItemType::Multiply" },
		{ "Not.Comment", "// Operators (must be 0-127, in order of precedence, highest first - gaps left in case we need them)\n" },
		{ "Not.Name", "ESUDSExpressionItemType::Not" },
		{ "Not.ToolTip", "Operators (must be 0-127, in order of precedence, highest first - gaps left in case we need them)" },
		{ "NotEqual.Name", "ESUDSExpressionItemType::NotEqual" },
		{ "Null.Hidden", "" },
		{ "Null.Name", "ESUDSExpressionItemType::Null" },
		{ "Operand.Comment", "// Operands (must be 128+)\n" },
		{ "Operand.Name", "ESUDSExpressionItemType::Operand" },
		{ "Operand.ToolTip", "Operands (must be 128+)" },
		{ "Or.Name", "ESUDSExpressionItemType::Or" },
		{ "RParens.Name", "ESUDSExpressionItemType::RParens" },
		{ "Subtract.Name", "ESUDSExpressionItemType::Subtract" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESUDSExpressionItemType::Null", (int64)ESUDSExpressionItemType::Null },
		{ "ESUDSExpressionItemType::Not", (int64)ESUDSExpressionItemType::Not },
		{ "ESUDSExpressionItemType::Multiply", (int64)ESUDSExpressionItemType::Multiply },
		{ "ESUDSExpressionItemType::Divide", (int64)ESUDSExpressionItemType::Divide },
		{ "ESUDSExpressionItemType::Modulo", (int64)ESUDSExpressionItemType::Modulo },
		{ "ESUDSExpressionItemType::Add", (int64)ESUDSExpressionItemType::Add },
		{ "ESUDSExpressionItemType::Subtract", (int64)ESUDSExpressionItemType::Subtract },
		{ "ESUDSExpressionItemType::Less", (int64)ESUDSExpressionItemType::Less },
		{ "ESUDSExpressionItemType::LessEqual", (int64)ESUDSExpressionItemType::LessEqual },
		{ "ESUDSExpressionItemType::Greater", (int64)ESUDSExpressionItemType::Greater },
		{ "ESUDSExpressionItemType::GreaterEqual", (int64)ESUDSExpressionItemType::GreaterEqual },
		{ "ESUDSExpressionItemType::Equal", (int64)ESUDSExpressionItemType::Equal },
		{ "ESUDSExpressionItemType::NotEqual", (int64)ESUDSExpressionItemType::NotEqual },
		{ "ESUDSExpressionItemType::And", (int64)ESUDSExpressionItemType::And },
		{ "ESUDSExpressionItemType::Or", (int64)ESUDSExpressionItemType::Or },
		{ "ESUDSExpressionItemType::LParens", (int64)ESUDSExpressionItemType::LParens },
		{ "ESUDSExpressionItemType::RParens", (int64)ESUDSExpressionItemType::RParens },
		{ "ESUDSExpressionItemType::Operand", (int64)ESUDSExpressionItemType::Operand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SUDS_ESUDSExpressionItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	"ESUDSExpressionItemType",
	"ESUDSExpressionItemType",
	Z_Construct_UEnum_SUDS_ESUDSExpressionItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SUDS_ESUDSExpressionItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SUDS_ESUDSExpressionItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SUDS_ESUDSExpressionItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SUDS_ESUDSExpressionItemType()
{
	if (!Z_Registration_Info_UEnum_ESUDSExpressionItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESUDSExpressionItemType.InnerSingleton, Z_Construct_UEnum_SUDS_ESUDSExpressionItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESUDSExpressionItemType.InnerSingleton;
}
// End Enum ESUDSExpressionItemType

// Begin ScriptStruct FSUDSExpressionItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SUDSExpressionItem;
class UScriptStruct* FSUDSExpressionItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSExpressionItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SUDSExpressionItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSUDSExpressionItem, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("SUDSExpressionItem"));
	}
	return Z_Registration_Info_UScriptStruct_SUDSExpressionItem.OuterSingleton;
}
template<> SUDS_API UScriptStruct* StaticStruct<FSUDSExpressionItem>()
{
	return FSUDSExpressionItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// An item in an expression queue, can be operator or operand\n" },
		{ "ModuleRelativePath", "Public/SUDSExpression.h" },
		{ "ToolTip", "An item in an expression queue, can be operator or operand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "SUDS|Expression" },
		{ "ModuleRelativePath", "Public/SUDSExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandValue_MetaData[] = {
		{ "Category", "SUDS|Expression" },
		{ "Comment", "// Value if an operand node\n" },
		{ "ModuleRelativePath", "Public/SUDSExpression.h" },
		{ "ToolTip", "Value if an operand node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSUDSExpressionItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSExpressionItem, Type), Z_Construct_UEnum_SUDS_ESUDSExpressionItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3667294154
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::NewProp_OperandValue = { "OperandValue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSExpressionItem, OperandValue), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandValue_MetaData), NewProp_OperandValue_MetaData) }; // 100687975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::NewProp_OperandValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	&NewStructOps,
	"SUDSExpressionItem",
	Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::PropPointers),
	sizeof(FSUDSExpressionItem),
	alignof(FSUDSExpressionItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSUDSExpressionItem()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSExpressionItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SUDSExpressionItem.InnerSingleton, Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SUDSExpressionItem.InnerSingleton;
}
// End ScriptStruct FSUDSExpressionItem

// Begin ScriptStruct FSUDSExpression
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SUDSExpression;
class UScriptStruct* FSUDSExpression::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSExpression.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SUDSExpression.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSUDSExpression, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("SUDSExpression"));
	}
	return Z_Registration_Info_UScriptStruct_SUDSExpression.OuterSingleton;
}
template<> SUDS_API UScriptStruct* StaticStruct<FSUDSExpression>()
{
	return FSUDSExpression::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSUDSExpression_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// An expression holds an executable expression, whether it's a simple single literal\n/// or a compound expression with variables\n" },
		{ "ModuleRelativePath", "Public/SUDSExpression.h" },
		{ "ToolTip", "An expression holds an executable expression, whether it's a simple single literal\nor a compound expression with variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Queue_MetaData[] = {
		{ "Comment", "// The output queue in Reverse Polish Notation order\n" },
		{ "ModuleRelativePath", "Public/SUDSExpression.h" },
		{ "ToolTip", "The output queue in Reverse Polish Notation order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "SUDS|Expression" },
		{ "Comment", "/// Whether the tree is valid to execute\n" },
		{ "ModuleRelativePath", "Public/SUDSExpression.h" },
		{ "ToolTip", "Whether the tree is valid to execute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/SUDSExpression.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceString_MetaData[] = {
		{ "Category", "SUDS|Expression" },
		{ "Comment", "/// The original string version of the expression, for reference \n" },
		{ "ModuleRelativePath", "Public/SUDSExpression.h" },
		{ "ToolTip", "The original string version of the expression, for reference" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Queue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Queue;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariableNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSUDSExpression>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_Queue_Inner = { "Queue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUDSExpressionItem, METADATA_PARAMS(0, nullptr) }; // 3355714720
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSExpression, Queue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Queue_MetaData), NewProp_Queue_MetaData) }; // 3355714720
void Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FSUDSExpression*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSUDSExpression), &Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_VariableNames_Inner = { "VariableNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_VariableNames = { "VariableNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSExpression, VariableNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableNames_MetaData), NewProp_VariableNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_SourceString = { "SourceString", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSExpression, SourceString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceString_MetaData), NewProp_SourceString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSUDSExpression_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_Queue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_Queue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_VariableNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_VariableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewProp_SourceString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSExpression_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSUDSExpression_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	&NewStructOps,
	"SUDSExpression",
	Z_Construct_UScriptStruct_FSUDSExpression_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSExpression_Statics::PropPointers),
	sizeof(FSUDSExpression),
	alignof(FSUDSExpression),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSExpression_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSUDSExpression_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSUDSExpression()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSExpression.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SUDSExpression.InnerSingleton, Z_Construct_UScriptStruct_FSUDSExpression_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SUDSExpression.InnerSingleton;
}
// End ScriptStruct FSUDSExpression

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSExpression_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESUDSExpressionItemType_StaticEnum, TEXT("ESUDSExpressionItemType"), &Z_Registration_Info_UEnum_ESUDSExpressionItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3667294154U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSUDSExpressionItem::StaticStruct, Z_Construct_UScriptStruct_FSUDSExpressionItem_Statics::NewStructOps, TEXT("SUDSExpressionItem"), &Z_Registration_Info_UScriptStruct_SUDSExpressionItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSUDSExpressionItem), 3355714720U) },
		{ FSUDSExpression::StaticStruct, Z_Construct_UScriptStruct_FSUDSExpression_Statics::NewStructOps, TEXT("SUDSExpression"), &Z_Registration_Info_UScriptStruct_SUDSExpression, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSUDSExpression), 3605943675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSExpression_h_3148673867(TEXT("/Script/SUDS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSExpression_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSExpression_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSExpression_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSExpression_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
