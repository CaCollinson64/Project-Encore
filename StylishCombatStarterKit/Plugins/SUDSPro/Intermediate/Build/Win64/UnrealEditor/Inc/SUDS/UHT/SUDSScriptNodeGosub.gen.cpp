// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSScriptNodeGosub.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSScriptNodeGosub() {}

// Begin Cross Module References
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNode();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeGosub();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeGosub_NoRegister();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Class USUDSScriptNodeGosub
void USUDSScriptNodeGosub::StaticRegisterNativesUSUDSScriptNodeGosub()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSScriptNodeGosub);
UClass* Z_Construct_UClass_USUDSScriptNodeGosub_NoRegister()
{
	return USUDSScriptNodeGosub::StaticClass();
}
struct Z_Construct_UClass_USUDSScriptNodeGosub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SUDSScriptNodeGosub.h" },
		{ "ModuleRelativePath", "Public/SUDSScriptNodeGosub.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelName_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Name of the label which we'll jump to before returning\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptNodeGosub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the label which we'll jump to before returning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GosubID_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Generated ID for use when saving state\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptNodeGosub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generated ID for use when saving state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasChoices_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Convenience flag to let you know whether this node MAY HAVE any choices directly after it\n/// Internally this also lets us know to look for the next choice node after returning\n/// It's possible that where there are conditionals ahead, there are only choices on some of the paths.\n/// This flag is to let us know to look for choices, but if conditionals apply we may not find any using actual dialogue state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptNodeGosub.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience flag to let you know whether this node MAY HAVE any choices directly after it\nInternally this also lets us know to look for the next choice node after returning\nIt's possible that where there are conditionals ahead, there are only choices on some of the paths.\nThis flag is to let us know to look for choices, but if conditionals apply we may not find any using actual dialogue state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LabelName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GosubID;
	static void NewProp_bHasChoices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasChoices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSScriptNodeGosub>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USUDSScriptNodeGosub_Statics::NewProp_LabelName = { "LabelName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNodeGosub, LabelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelName_MetaData), NewProp_LabelName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USUDSScriptNodeGosub_Statics::NewProp_GosubID = { "GosubID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNodeGosub, GosubID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GosubID_MetaData), NewProp_GosubID_MetaData) };
void Z_Construct_UClass_USUDSScriptNodeGosub_Statics::NewProp_bHasChoices_SetBit(void* Obj)
{
	((USUDSScriptNodeGosub*)Obj)->bHasChoices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USUDSScriptNodeGosub_Statics::NewProp_bHasChoices = { "bHasChoices", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USUDSScriptNodeGosub), &Z_Construct_UClass_USUDSScriptNodeGosub_Statics::NewProp_bHasChoices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasChoices_MetaData), NewProp_bHasChoices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUDSScriptNodeGosub_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeGosub_Statics::NewProp_LabelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeGosub_Statics::NewProp_GosubID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeGosub_Statics::NewProp_bHasChoices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeGosub_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USUDSScriptNodeGosub_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USUDSScriptNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeGosub_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSScriptNodeGosub_Statics::ClassParams = {
	&USUDSScriptNodeGosub::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USUDSScriptNodeGosub_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeGosub_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeGosub_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSScriptNodeGosub_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSScriptNodeGosub()
{
	if (!Z_Registration_Info_UClass_USUDSScriptNodeGosub.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSScriptNodeGosub.OuterSingleton, Z_Construct_UClass_USUDSScriptNodeGosub_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSScriptNodeGosub.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSScriptNodeGosub>()
{
	return USUDSScriptNodeGosub::StaticClass();
}
USUDSScriptNodeGosub::USUDSScriptNodeGosub() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSScriptNodeGosub);
USUDSScriptNodeGosub::~USUDSScriptNodeGosub() {}
// End Class USUDSScriptNodeGosub

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeGosub_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSScriptNodeGosub, USUDSScriptNodeGosub::StaticClass, TEXT("USUDSScriptNodeGosub"), &Z_Registration_Info_UClass_USUDSScriptNodeGosub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSScriptNodeGosub), 751604338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeGosub_h_3165082029(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeGosub_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeGosub_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
