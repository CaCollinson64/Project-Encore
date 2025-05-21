// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDSEditor/Public/SUDSEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
SUDSEDITOR_API UClass* Z_Construct_UClass_USUDSEditorSettings();
SUDSEDITOR_API UClass* Z_Construct_UClass_USUDSEditorSettings_NoRegister();
SUDSEDITOR_API UEnum* Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation();
UPackage* Z_Construct_UPackage__Script_SUDSEditor();
// End Cross Module References

// Begin Enum ESUDSAssetLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESUDSAssetLocation;
static UEnum* ESUDSAssetLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESUDSAssetLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESUDSAssetLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation, (UObject*)Z_Construct_UPackage__Script_SUDSEditor(), TEXT("ESUDSAssetLocation"));
	}
	return Z_Registration_Info_UEnum_ESUDSAssetLocation.OuterSingleton;
}
template<> SUDSEDITOR_API UEnum* StaticEnum<ESUDSAssetLocation>()
{
	return ESUDSAssetLocation_StaticEnum();
}
struct Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
		{ "ScriptDirectory.Comment", "/// Place asset alongside the script that originated it\n" },
		{ "ScriptDirectory.Name", "ESUDSAssetLocation::ScriptDirectory" },
		{ "ScriptDirectory.ToolTip", "Place asset alongside the script that originated it" },
		{ "ScriptDirectorySubdir.Comment", "/// Place asset in a subfolder of the folder containing the script that generated it, named the same as the script\n" },
		{ "ScriptDirectorySubdir.Name", "ESUDSAssetLocation::ScriptDirectorySubdir" },
		{ "ScriptDirectorySubdir.ToolTip", "Place asset in a subfolder of the folder containing the script that generated it, named the same as the script" },
		{ "SharedDirectory.Comment", "/// Use a single flat shared directory\n" },
		{ "SharedDirectory.Name", "ESUDSAssetLocation::SharedDirectory" },
		{ "SharedDirectory.ToolTip", "Use a single flat shared directory" },
		{ "SharedDirectorySubdir.Comment", "/// Use a shared base directory, but create subfolders based on the script asset name\n" },
		{ "SharedDirectorySubdir.Name", "ESUDSAssetLocation::SharedDirectorySubdir" },
		{ "SharedDirectorySubdir.ToolTip", "Use a shared base directory, but create subfolders based on the script asset name" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESUDSAssetLocation::SharedDirectory", (int64)ESUDSAssetLocation::SharedDirectory },
		{ "ESUDSAssetLocation::SharedDirectorySubdir", (int64)ESUDSAssetLocation::SharedDirectorySubdir },
		{ "ESUDSAssetLocation::ScriptDirectory", (int64)ESUDSAssetLocation::ScriptDirectory },
		{ "ESUDSAssetLocation::ScriptDirectorySubdir", (int64)ESUDSAssetLocation::ScriptDirectorySubdir },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SUDSEditor,
	nullptr,
	"ESUDSAssetLocation",
	"ESUDSAssetLocation",
	Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation()
{
	if (!Z_Registration_Info_UEnum_ESUDSAssetLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESUDSAssetLocation.InnerSingleton, Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESUDSAssetLocation.InnerSingleton;
}
// End Enum ESUDSAssetLocation

// Begin Class USUDSEditorSettings
void USUDSEditorSettings::StaticRegisterNativesUSUDSEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSEditorSettings);
UClass* Z_Construct_UClass_USUDSEditorSettings_NoRegister()
{
	return USUDSEditorSettings::StaticClass();
}
struct Z_Construct_UClass_USUDSEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings for editor-specific aspects of SUDS (no effect at runtime)\n */" },
#endif
		{ "DisplayName", "SUDS Editor" },
		{ "IncludePath", "SUDSEditorSettings.h" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for editor-specific aspects of SUDS (no effect at runtime)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVoiceAssetLocation_MetaData[] = {
		{ "Category", "Voice" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Where to place Dialogue Voice assets for speakers in scripts when generated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVoiceAssetSharedDir_MetaData[] = {
		{ "Category", "Voice" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Shared directory for Dialogue Voice assets, if using a shared directory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWaveAssetLocation_MetaData[] = {
		{ "Category", "Voice" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Where to place Dialogue Wave assets for speaker lines in scripts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWaveAssetSharedDir_MetaData[] = {
		{ "Category", "Voice" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Shared directory for Dialogue Wave assets, if using a shared directory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVoiceAssetPrefix_MetaData[] = {
		{ "Category", "Voice" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Prefix to give Dialogue Voice assets in front of their SpeakerID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWaveAssetPrefix_MetaData[] = {
		{ "Category", "Voice" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Prefix to give Dialogue Wave assets in front of their SpeakerID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StripScriptPrefixesWhenGeneratingNames_MetaData[] = {
		{ "Category", "Voice" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "When generating subdirectories and wave asset names from script names, whether to strip characters before the first '_' to avoid including script prefix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysAutoGenerateVoiceOverAssetsOnImport_MetaData[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Whether to auto-generate Dialogue Voice/Wave assets for ALL dialogue scripts on import. Note: you can always generate VO assets manually." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToAutoGenerateVoiceOverAssetsOnImport_MetaData[] = {
		{ "Category", "Voice" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Auto-generate Dialogue Voice/Wave assets for scripts in these directories (and subdirectories) on import. Note: you can always generate VO assets manually." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysGenerateSpeakerLinesFromChoices_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Whether to generate a spoken line for choices (default false)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerIdForGeneratedLinesFromChoices_MetaData[] = {
		{ "Category", "Choices" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "The SpeakerID to use for speaker lines generated from choices" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateStringTablesAsSeparatePackages_MetaData[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "Public/SUDSEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Whether to create string tables as a separate package (.uasset) from the SUDS Script, which will cause them to appear separately in the Content Browser (requires script re-import)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueVoiceAssetLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueVoiceAssetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueVoiceAssetSharedDir;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueWaveAssetLocation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueWaveAssetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueWaveAssetSharedDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueVoiceAssetPrefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueWaveAssetPrefix;
	static void NewProp_StripScriptPrefixesWhenGeneratingNames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StripScriptPrefixesWhenGeneratingNames;
	static void NewProp_AlwaysAutoGenerateVoiceOverAssetsOnImport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AlwaysAutoGenerateVoiceOverAssetsOnImport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToAutoGenerateVoiceOverAssetsOnImport_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToAutoGenerateVoiceOverAssetsOnImport;
	static void NewProp_AlwaysGenerateSpeakerLinesFromChoices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AlwaysGenerateSpeakerLinesFromChoices;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakerIdForGeneratedLinesFromChoices;
	static void NewProp_bCreateStringTablesAsSeparatePackages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateStringTablesAsSeparatePackages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueVoiceAssetLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueVoiceAssetLocation = { "DialogueVoiceAssetLocation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSEditorSettings, DialogueVoiceAssetLocation), Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueVoiceAssetLocation_MetaData), NewProp_DialogueVoiceAssetLocation_MetaData) }; // 3639327285
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueVoiceAssetSharedDir = { "DialogueVoiceAssetSharedDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSEditorSettings, DialogueVoiceAssetSharedDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueVoiceAssetSharedDir_MetaData), NewProp_DialogueVoiceAssetSharedDir_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueWaveAssetLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueWaveAssetLocation = { "DialogueWaveAssetLocation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSEditorSettings, DialogueWaveAssetLocation), Z_Construct_UEnum_SUDSEditor_ESUDSAssetLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWaveAssetLocation_MetaData), NewProp_DialogueWaveAssetLocation_MetaData) }; // 3639327285
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueWaveAssetSharedDir = { "DialogueWaveAssetSharedDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSEditorSettings, DialogueWaveAssetSharedDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWaveAssetSharedDir_MetaData), NewProp_DialogueWaveAssetSharedDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueVoiceAssetPrefix = { "DialogueVoiceAssetPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSEditorSettings, DialogueVoiceAssetPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueVoiceAssetPrefix_MetaData), NewProp_DialogueVoiceAssetPrefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueWaveAssetPrefix = { "DialogueWaveAssetPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSEditorSettings, DialogueWaveAssetPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWaveAssetPrefix_MetaData), NewProp_DialogueWaveAssetPrefix_MetaData) };
void Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_StripScriptPrefixesWhenGeneratingNames_SetBit(void* Obj)
{
	((USUDSEditorSettings*)Obj)->StripScriptPrefixesWhenGeneratingNames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_StripScriptPrefixesWhenGeneratingNames = { "StripScriptPrefixesWhenGeneratingNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USUDSEditorSettings), &Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_StripScriptPrefixesWhenGeneratingNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StripScriptPrefixesWhenGeneratingNames_MetaData), NewProp_StripScriptPrefixesWhenGeneratingNames_MetaData) };
void Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_AlwaysAutoGenerateVoiceOverAssetsOnImport_SetBit(void* Obj)
{
	((USUDSEditorSettings*)Obj)->AlwaysAutoGenerateVoiceOverAssetsOnImport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_AlwaysAutoGenerateVoiceOverAssetsOnImport = { "AlwaysAutoGenerateVoiceOverAssetsOnImport", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USUDSEditorSettings), &Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_AlwaysAutoGenerateVoiceOverAssetsOnImport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlwaysAutoGenerateVoiceOverAssetsOnImport_MetaData), NewProp_AlwaysAutoGenerateVoiceOverAssetsOnImport_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DirectoriesToAutoGenerateVoiceOverAssetsOnImport_Inner = { "DirectoriesToAutoGenerateVoiceOverAssetsOnImport", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DirectoriesToAutoGenerateVoiceOverAssetsOnImport = { "DirectoriesToAutoGenerateVoiceOverAssetsOnImport", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSEditorSettings, DirectoriesToAutoGenerateVoiceOverAssetsOnImport), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoriesToAutoGenerateVoiceOverAssetsOnImport_MetaData), NewProp_DirectoriesToAutoGenerateVoiceOverAssetsOnImport_MetaData) };
void Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_AlwaysGenerateSpeakerLinesFromChoices_SetBit(void* Obj)
{
	((USUDSEditorSettings*)Obj)->AlwaysGenerateSpeakerLinesFromChoices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_AlwaysGenerateSpeakerLinesFromChoices = { "AlwaysGenerateSpeakerLinesFromChoices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USUDSEditorSettings), &Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_AlwaysGenerateSpeakerLinesFromChoices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlwaysGenerateSpeakerLinesFromChoices_MetaData), NewProp_AlwaysGenerateSpeakerLinesFromChoices_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_SpeakerIdForGeneratedLinesFromChoices = { "SpeakerIdForGeneratedLinesFromChoices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSEditorSettings, SpeakerIdForGeneratedLinesFromChoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerIdForGeneratedLinesFromChoices_MetaData), NewProp_SpeakerIdForGeneratedLinesFromChoices_MetaData) };
void Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_bCreateStringTablesAsSeparatePackages_SetBit(void* Obj)
{
	((USUDSEditorSettings*)Obj)->bCreateStringTablesAsSeparatePackages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_bCreateStringTablesAsSeparatePackages = { "bCreateStringTablesAsSeparatePackages", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USUDSEditorSettings), &Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_bCreateStringTablesAsSeparatePackages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateStringTablesAsSeparatePackages_MetaData), NewProp_bCreateStringTablesAsSeparatePackages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUDSEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueVoiceAssetLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueVoiceAssetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueVoiceAssetSharedDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueWaveAssetLocation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueWaveAssetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueWaveAssetSharedDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueVoiceAssetPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DialogueWaveAssetPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_StripScriptPrefixesWhenGeneratingNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_AlwaysAutoGenerateVoiceOverAssetsOnImport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DirectoriesToAutoGenerateVoiceOverAssetsOnImport_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_DirectoriesToAutoGenerateVoiceOverAssetsOnImport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_AlwaysGenerateSpeakerLinesFromChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_SpeakerIdForGeneratedLinesFromChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSEditorSettings_Statics::NewProp_bCreateStringTablesAsSeparatePackages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USUDSEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSEditorSettings_Statics::ClassParams = {
	&USUDSEditorSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USUDSEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USUDSEditorSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSEditorSettings()
{
	if (!Z_Registration_Info_UClass_USUDSEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSEditorSettings.OuterSingleton, Z_Construct_UClass_USUDSEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSEditorSettings.OuterSingleton;
}
template<> SUDSEDITOR_API UClass* StaticClass<USUDSEditorSettings>()
{
	return USUDSEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSEditorSettings);
USUDSEditorSettings::~USUDSEditorSettings() {}
// End Class USUDSEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESUDSAssetLocation_StaticEnum, TEXT("ESUDSAssetLocation"), &Z_Registration_Info_UEnum_ESUDSAssetLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3639327285U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSEditorSettings, USUDSEditorSettings::StaticClass, TEXT("USUDSEditorSettings"), &Z_Registration_Info_UClass_USUDSEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSEditorSettings), 3113155726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_1805501252(TEXT("/Script/SUDSEditor"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
