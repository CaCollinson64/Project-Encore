// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesFixedDataTableRowHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesFixedDataTableRowHandle() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesFixedDataTableRowHandle();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin ScriptStruct FStevesFixedDataTableRowHandle
static_assert(std::is_polymorphic<FStevesFixedDataTableRowHandle>() == std::is_polymorphic<FDataTableRowHandle>(), "USTRUCT FStevesFixedDataTableRowHandle cannot be polymorphic unless super FDataTableRowHandle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesFixedDataTableRowHandle;
class UScriptStruct* FStevesFixedDataTableRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesFixedDataTableRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesFixedDataTableRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesFixedDataTableRowHandle, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesFixedDataTableRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_StevesFixedDataTableRowHandle.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesFixedDataTableRowHandle>()
{
	return FStevesFixedDataTableRowHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesFixedDataTableRowHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Just a type to denote that this table row handle should be edited differently\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesFixedDataTableRowHandle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Just a type to denote that this table row handle should be edited differently" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesFixedDataTableRowHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesFixedDataTableRowHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	Z_Construct_UScriptStruct_FDataTableRowHandle,
	&NewStructOps,
	"StevesFixedDataTableRowHandle",
	nullptr,
	0,
	sizeof(FStevesFixedDataTableRowHandle),
	alignof(FStevesFixedDataTableRowHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesFixedDataTableRowHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesFixedDataTableRowHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesFixedDataTableRowHandle()
{
	if (!Z_Registration_Info_UScriptStruct_StevesFixedDataTableRowHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesFixedDataTableRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FStevesFixedDataTableRowHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesFixedDataTableRowHandle.InnerSingleton;
}
// End ScriptStruct FStevesFixedDataTableRowHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesFixedDataTableRowHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStevesFixedDataTableRowHandle::StaticStruct, Z_Construct_UScriptStruct_FStevesFixedDataTableRowHandle_Statics::NewStructOps, TEXT("StevesFixedDataTableRowHandle"), &Z_Registration_Info_UScriptStruct_StevesFixedDataTableRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesFixedDataTableRowHandle), 3524715100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesFixedDataTableRowHandle_h_1229102199(TEXT("/Script/StevesUEHelpers"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesFixedDataTableRowHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesFixedDataTableRowHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
