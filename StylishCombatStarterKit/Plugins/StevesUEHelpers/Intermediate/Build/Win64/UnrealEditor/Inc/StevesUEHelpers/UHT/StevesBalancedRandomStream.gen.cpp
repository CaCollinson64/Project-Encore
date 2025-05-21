// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesBalancedRandomStream.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesBalancedRandomStream() {}

// Begin Cross Module References
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesBalancedRandomStream();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin ScriptStruct FStevesBalancedRandomStream
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesBalancedRandomStream;
class UScriptStruct* FStevesBalancedRandomStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesBalancedRandomStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesBalancedRandomStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesBalancedRandomStream, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesBalancedRandomStream"));
	}
	return Z_Registration_Info_UScriptStruct_StevesBalancedRandomStream.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesBalancedRandomStream>()
{
	return FStevesBalancedRandomStream::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesBalancedRandomStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// \"Balanced\" random stream, using the Halton Sequence\n/// This is deterministic and more uniform in appearance than a general random stream (although not perfectly uniform)\n" },
#endif
		{ "HasNativeMake", "StevesUEHelpers.StevesBPL.MakeBalancedRandomStream" },
		{ "ModuleRelativePath", "Public/StevesBalancedRandomStream.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"Balanced\" random stream, using the Halton Sequence\nThis is deterministic and more uniform in appearance than a general random stream (although not perfectly uniform)" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesBalancedRandomStream>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesBalancedRandomStream_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	&NewStructOps,
	"StevesBalancedRandomStream",
	nullptr,
	0,
	sizeof(FStevesBalancedRandomStream),
	alignof(FStevesBalancedRandomStream),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesBalancedRandomStream_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesBalancedRandomStream_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesBalancedRandomStream()
{
	if (!Z_Registration_Info_UScriptStruct_StevesBalancedRandomStream.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesBalancedRandomStream.InnerSingleton, Z_Construct_UScriptStruct_FStevesBalancedRandomStream_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesBalancedRandomStream.InnerSingleton;
}
// End ScriptStruct FStevesBalancedRandomStream

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBalancedRandomStream_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStevesBalancedRandomStream::StaticStruct, Z_Construct_UScriptStruct_FStevesBalancedRandomStream_Statics::NewStructOps, TEXT("StevesBalancedRandomStream"), &Z_Registration_Info_UScriptStruct_StevesBalancedRandomStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesBalancedRandomStream), 1988292872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBalancedRandomStream_h_2055702194(TEXT("/Script/StevesUEHelpers"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBalancedRandomStream_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBalancedRandomStream_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
