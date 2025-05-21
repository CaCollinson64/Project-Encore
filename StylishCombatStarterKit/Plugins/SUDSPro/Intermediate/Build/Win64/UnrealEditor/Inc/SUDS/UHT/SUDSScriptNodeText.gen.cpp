// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSScriptNodeText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSScriptNodeText() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNode();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeText();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeText_NoRegister();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Class USUDSScriptNodeText
void USUDSScriptNodeText::StaticRegisterNativesUSUDSScriptNodeText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSScriptNodeText);
UClass* Z_Construct_UClass_USUDSScriptNodeText_NoRegister()
{
	return USUDSScriptNodeText::StaticClass();
}
struct Z_Construct_UClass_USUDSScriptNodeText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A node which contains speaker text \n*/" },
#endif
		{ "IncludePath", "SUDSScriptNodeText.h" },
		{ "ModuleRelativePath", "Public/SUDSScriptNodeText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A node which contains speaker text" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Identifier of the speaker for text nodes\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptNodeText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Identifier of the speaker for text nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Text, always references a string table. Parameters will not have been completed.\n/// Note: if you're using voiced dialogue, see the Wave property and its subtitle functionality\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptNodeText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text, always references a string table. Parameters will not have been completed.\nNote: if you're using voiced dialogue, see the Wave property and its subtitle functionality" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wave_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// DialogueWave asset link for voiced dialogue\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptNodeText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DialogueWave asset link for voiced dialogue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasChoices_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Convenience flag to let you know whether this text node MAY HAVE choices attached\n/// If false, there's only one way to proceed from here and no text associated with that\n/// If true, either there can be > 1 choice options, or a single choice with associated text (this can be when\n/// you have no choice but want text rather than just a continue button)\n/// Internally this also lets us know to look for the next choice node\n/// It's possible that where there are conditionals ahead, there are only choices on some of the paths.\n/// This flag is to let us know to look for choices, but if conditionals apply we may not find any using actual dialogue state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptNodeText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience flag to let you know whether this text node MAY HAVE choices attached\nIf false, there's only one way to proceed from here and no text associated with that\nIf true, either there can be > 1 choice options, or a single choice with associated text (this can be when\nyou have no choice but want text rather than just a continue button)\nInternally this also lets us know to look for the next choice node\nIt's possible that where there are conditionals ahead, there are only choices on some of the paths.\nThis flag is to let us know to look for choices, but if conditionals apply we may not find any using actual dialogue state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakerID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wave;
	static void NewProp_bHasChoices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasChoices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSScriptNodeText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNodeText, SpeakerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerID_MetaData), NewProp_SpeakerID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNodeText, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_Wave = { "Wave", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNodeText, Wave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wave_MetaData), NewProp_Wave_MetaData) };
void Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_bHasChoices_SetBit(void* Obj)
{
	((USUDSScriptNodeText*)Obj)->bHasChoices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_bHasChoices = { "bHasChoices", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USUDSScriptNodeText), &Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_bHasChoices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasChoices_MetaData), NewProp_bHasChoices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUDSScriptNodeText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_SpeakerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_Wave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeText_Statics::NewProp_bHasChoices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USUDSScriptNodeText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USUDSScriptNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSScriptNodeText_Statics::ClassParams = {
	&USUDSScriptNodeText::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USUDSScriptNodeText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeText_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeText_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSScriptNodeText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSScriptNodeText()
{
	if (!Z_Registration_Info_UClass_USUDSScriptNodeText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSScriptNodeText.OuterSingleton, Z_Construct_UClass_USUDSScriptNodeText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSScriptNodeText.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSScriptNodeText>()
{
	return USUDSScriptNodeText::StaticClass();
}
USUDSScriptNodeText::USUDSScriptNodeText() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSScriptNodeText);
USUDSScriptNodeText::~USUDSScriptNodeText() {}
// End Class USUDSScriptNodeText

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSScriptNodeText, USUDSScriptNodeText::StaticClass, TEXT("USUDSScriptNodeText"), &Z_Registration_Info_UClass_USUDSScriptNodeText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSScriptNodeText), 1991608141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeText_h_1973540536(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
