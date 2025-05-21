// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSScriptNodeSet.h"
#include "SUDS/Public/SUDSExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSScriptNodeSet() {}

// Begin Cross Module References
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNode();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeSet();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeSet_NoRegister();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSExpression();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Class USUDSScriptNodeSet
void USUDSScriptNodeSet::StaticRegisterNativesUSUDSScriptNodeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSScriptNodeSet);
UClass* Z_Construct_UClass_USUDSScriptNodeSet_NoRegister()
{
	return USUDSScriptNodeSet::StaticClass();
}
struct Z_Construct_UClass_USUDSScriptNodeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Set variable node \n*/" },
		{ "IncludePath", "SUDSScriptNodeSet.h" },
		{ "ModuleRelativePath", "Public/SUDSScriptNodeSet.h" },
		{ "ToolTip", "Set variable node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "Category", "SUDS" },
		{ "Comment", "// Variable identifier\n" },
		{ "ModuleRelativePath", "Public/SUDSScriptNodeSet.h" },
		{ "ToolTip", "Variable identifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/// Expression to provide value to set\n" },
		{ "ModuleRelativePath", "Public/SUDSScriptNodeSet.h" },
		{ "ToolTip", "Expression to provide value to set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSScriptNodeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USUDSScriptNodeSet_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNodeSet, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USUDSScriptNodeSet_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNodeSet, Expression), Z_Construct_UScriptStruct_FSUDSExpression, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) }; // 3605943675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUDSScriptNodeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeSet_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeSet_Statics::NewProp_Expression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USUDSScriptNodeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USUDSScriptNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSScriptNodeSet_Statics::ClassParams = {
	&USUDSScriptNodeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USUDSScriptNodeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSScriptNodeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSScriptNodeSet()
{
	if (!Z_Registration_Info_UClass_USUDSScriptNodeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSScriptNodeSet.OuterSingleton, Z_Construct_UClass_USUDSScriptNodeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSScriptNodeSet.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSScriptNodeSet>()
{
	return USUDSScriptNodeSet::StaticClass();
}
USUDSScriptNodeSet::USUDSScriptNodeSet() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSScriptNodeSet);
USUDSScriptNodeSet::~USUDSScriptNodeSet() {}
// End Class USUDSScriptNodeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNodeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSScriptNodeSet, USUDSScriptNodeSet::StaticClass, TEXT("USUDSScriptNodeSet"), &Z_Registration_Info_UClass_USUDSScriptNodeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSScriptNodeSet), 4233122395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNodeSet_h_4070738343(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNodeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSScriptNodeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
