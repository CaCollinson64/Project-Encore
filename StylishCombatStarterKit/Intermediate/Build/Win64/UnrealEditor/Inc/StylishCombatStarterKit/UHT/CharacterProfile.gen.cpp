// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Profile/CharacterProfile.h"
#include "StylishCombatStarterKit/Gameplay/Character/Inputs/ComboTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterProfile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UCharacterProfile();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UCharacterProfile_NoRegister();
STYLISHCOMBATSTARTERKIT_API UEnum* Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FComboChain();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UCharacterProfile
void UCharacterProfile::StaticRegisterNativesUCharacterProfile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterProfile);
UClass* Z_Construct_UClass_UCharacterProfile_NoRegister()
{
	return UCharacterProfile::StaticClass();
}
struct Z_Construct_UClass_UCharacterProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gameplay/Character/Profile/CharacterProfile.h" },
		{ "ModuleRelativePath", "Gameplay/Character/Profile/CharacterProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Character Properties" },
		{ "ModuleRelativePath", "Gameplay/Character/Profile/CharacterProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Character Properties" },
		{ "ModuleRelativePath", "Gameplay/Character/Profile/CharacterProfile.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputRegister_MetaData[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Gameplay/Character/Profile/CharacterProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboChains_MetaData[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Gameplay/Character/Profile/CharacterProfile.h" },
		{ "TitleProperty", "ChainName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRegister_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputRegister_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputRegister_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputRegister;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboChains_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboChains;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterProfile_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterProfile, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterProfile_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterProfile, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterProfile_Statics::NewProp_InputRegister_ValueProp = { "InputRegister", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterProfile_Statics::NewProp_InputRegister_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterProfile_Statics::NewProp_InputRegister_Key_KeyProp = { "InputRegister_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType, METADATA_PARAMS(0, nullptr) }; // 3934570452
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterProfile_Statics::NewProp_InputRegister = { "InputRegister", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterProfile, InputRegister), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputRegister_MetaData), NewProp_InputRegister_MetaData) }; // 3934570452
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterProfile_Statics::NewProp_ComboChains_Inner = { "ComboChains", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComboChain, METADATA_PARAMS(0, nullptr) }; // 1083968843
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterProfile_Statics::NewProp_ComboChains = { "ComboChains", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterProfile, ComboChains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboChains_MetaData), NewProp_ComboChains_MetaData) }; // 1083968843
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterProfile_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterProfile_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterProfile_Statics::NewProp_InputRegister_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterProfile_Statics::NewProp_InputRegister_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterProfile_Statics::NewProp_InputRegister_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterProfile_Statics::NewProp_InputRegister,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterProfile_Statics::NewProp_ComboChains_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterProfile_Statics::NewProp_ComboChains,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterProfile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterProfile_Statics::ClassParams = {
	&UCharacterProfile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterProfile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterProfile()
{
	if (!Z_Registration_Info_UClass_UCharacterProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterProfile.OuterSingleton, Z_Construct_UClass_UCharacterProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterProfile.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UCharacterProfile>()
{
	return UCharacterProfile::StaticClass();
}
UCharacterProfile::UCharacterProfile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterProfile);
UCharacterProfile::~UCharacterProfile() {}
// End Class UCharacterProfile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Profile_CharacterProfile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterProfile, UCharacterProfile::StaticClass, TEXT("UCharacterProfile"), &Z_Registration_Info_UClass_UCharacterProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterProfile), 2977153003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Profile_CharacterProfile_h_861140401(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Profile_CharacterProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Profile_CharacterProfile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
