// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSValue() {}

// Begin Cross Module References
SUDS_API UEnum* Z_Construct_UEnum_SUDS_ESUDSValueType();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Enum ESUDSValueType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESUDSValueType;
static UEnum* ESUDSValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESUDSValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESUDSValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SUDS_ESUDSValueType, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("ESUDSValueType"));
	}
	return Z_Registration_Info_UEnum_ESUDSValueType.OuterSingleton;
}
template<> SUDS_API UEnum* StaticEnum<ESUDSValueType>()
{
	return ESUDSValueType_StaticEnum();
}
struct Z_Construct_UEnum_SUDS_ESUDSValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "ESUDSValueType::Boolean" },
		{ "Empty.Name", "ESUDSValueType::Empty" },
		{ "Float.Name", "ESUDSValueType::Float" },
		{ "Gender.Name", "ESUDSValueType::Gender" },
		{ "Int.Name", "ESUDSValueType::Int" },
		{ "ModuleRelativePath", "Public/SUDSValue.h" },
		{ "Name.Name", "ESUDSValueType::Name" },
		{ "Text.Name", "ESUDSValueType::Text" },
		{ "Variable.Comment", "/// Access the value of another variable\n" },
		{ "Variable.Name", "ESUDSValueType::Variable" },
		{ "Variable.ToolTip", "Access the value of another variable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESUDSValueType::Text", (int64)ESUDSValueType::Text },
		{ "ESUDSValueType::Int", (int64)ESUDSValueType::Int },
		{ "ESUDSValueType::Float", (int64)ESUDSValueType::Float },
		{ "ESUDSValueType::Boolean", (int64)ESUDSValueType::Boolean },
		{ "ESUDSValueType::Gender", (int64)ESUDSValueType::Gender },
		{ "ESUDSValueType::Name", (int64)ESUDSValueType::Name },
		{ "ESUDSValueType::Variable", (int64)ESUDSValueType::Variable },
		{ "ESUDSValueType::Empty", (int64)ESUDSValueType::Empty },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SUDS_ESUDSValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	"ESUDSValueType",
	"ESUDSValueType",
	Z_Construct_UEnum_SUDS_ESUDSValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SUDS_ESUDSValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SUDS_ESUDSValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SUDS_ESUDSValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SUDS_ESUDSValueType()
{
	if (!Z_Registration_Info_UEnum_ESUDSValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESUDSValueType.InnerSingleton, Z_Construct_UEnum_SUDS_ESUDSValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESUDSValueType.InnerSingleton;
}
// End Enum ESUDSValueType

// Begin ScriptStruct FSUDSValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SUDSValue;
class UScriptStruct* FSUDSValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SUDSValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSUDSValue, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("SUDSValue"));
	}
	return Z_Registration_Info_UScriptStruct_SUDSValue.OuterSingleton;
}
template<> SUDS_API UScriptStruct* StaticStruct<FSUDSValue>()
{
	return FSUDSValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSUDSValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Struct which can hold any of the value types that SUDS needs to use, in a Blueprint friendly manner\n/// For getting / setting these values from blueprints, see blueprint library functions SetSUDSValue<Type>() / GetSUDSValue<Type>()\n/// For convenience these are wrapped in USUDSDialogue but in e.g. event callbacks they're not\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct which can hold any of the value types that SUDS needs to use, in a Blueprint friendly manner\nFor getting / setting these values from blueprints, see blueprint library functions SetSUDSValue<Type>() / GetSUDSValue<Type>()\nFor convenience these are wrapped in USUDSDialogue but in e.g. event callbacks they're not" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSUDSValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSUDSValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	&NewStructOps,
	"SUDSValue",
	nullptr,
	0,
	sizeof(FSUDSValue),
	alignof(FSUDSValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSUDSValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SUDSValue.InnerSingleton, Z_Construct_UScriptStruct_FSUDSValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SUDSValue.InnerSingleton;
}
// End ScriptStruct FSUDSValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSValue_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESUDSValueType_StaticEnum, TEXT("ESUDSValueType"), &Z_Registration_Info_UEnum_ESUDSValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3083799823U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSUDSValue::StaticStruct, Z_Construct_UScriptStruct_FSUDSValue_Statics::NewStructOps, TEXT("SUDSValue"), &Z_Registration_Info_UScriptStruct_SUDSValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSUDSValue), 774184046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSValue_h_2739940257(TEXT("/Script/SUDS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSValue_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSValue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSValue_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
