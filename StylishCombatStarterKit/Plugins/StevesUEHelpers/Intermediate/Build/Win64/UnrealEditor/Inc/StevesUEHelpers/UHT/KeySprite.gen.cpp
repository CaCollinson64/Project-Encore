// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/KeySprite.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeySprite() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FKeySprite();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin ScriptStruct FKeySprite
static_assert(std::is_polymorphic<FKeySprite>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FKeySprite cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeySprite;
class UScriptStruct* FKeySprite::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeySprite.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeySprite.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeySprite, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("KeySprite"));
	}
	return Z_Registration_Info_UScriptStruct_KeySprite.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FKeySprite>()
{
	return FKeySprite::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeySprite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Struct for the rows of a DataTable which will hold the mapping from an FKey to a Paper Sprite which represents it\n/// Used for on-screen prompts\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/KeySprite.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for the rows of a DataTable which will hold the mapping from an FKey to a Paper Sprite which represents it\nUsed for on-screen prompts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "KeySprite" },
		{ "ModuleRelativePath", "Public/StevesUI/KeySprite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[] = {
		{ "Category", "KeySprite" },
		{ "ModuleRelativePath", "Public/StevesUI/KeySprite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeySprite>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeySprite_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeySprite, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKeySprite_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeySprite, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprite_MetaData), NewProp_Sprite_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeySprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeySprite_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeySprite_Statics::NewProp_Sprite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeySprite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeySprite_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"KeySprite",
	Z_Construct_UScriptStruct_FKeySprite_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeySprite_Statics::PropPointers),
	sizeof(FKeySprite),
	alignof(FKeySprite),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeySprite_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeySprite_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeySprite()
{
	if (!Z_Registration_Info_UScriptStruct_KeySprite.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeySprite.InnerSingleton, Z_Construct_UScriptStruct_FKeySprite_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeySprite.InnerSingleton;
}
// End ScriptStruct FKeySprite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_KeySprite_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKeySprite::StaticStruct, Z_Construct_UScriptStruct_FKeySprite_Statics::NewStructOps, TEXT("KeySprite"), &Z_Registration_Info_UScriptStruct_KeySprite, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeySprite), 2849842221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_KeySprite_h_1734780373(TEXT("/Script/StevesUEHelpers"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_KeySprite_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_KeySprite_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
