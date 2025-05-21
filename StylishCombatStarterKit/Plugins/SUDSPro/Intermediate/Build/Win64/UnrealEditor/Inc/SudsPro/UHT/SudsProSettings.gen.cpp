// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/SudsProSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProDialogueExtension_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProSettings();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProSettings_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProUiLink_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Class USudsProSettings
void USudsProSettings::StaticRegisterNativesUSudsProSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProSettings);
UClass* Z_Construct_UClass_USudsProSettings_NoRegister()
{
	return USudsProSettings::StaticClass();
}
struct Z_Construct_UClass_USudsProSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "SUDS Pro" },
		{ "IncludePath", "SudsProSettings.h" },
		{ "ModuleRelativePath", "Public/SudsProSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionClasses_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "ModuleRelativePath", "Public/SudsProSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Extension classes to load automatically" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnterDialogueViaSmoothCameraTransition_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "ModuleRelativePath", "Public/SudsProSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to transition smoothly from player to dialogue cameras when starting a dialogue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExitDialogueViaSmoothCameraTransition_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "ModuleRelativePath", "Public/SudsProSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to transition smoothly from dialogue cameras back to player camera at dialogue end" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterDialogueSmoothCameraDuration_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "ModuleRelativePath", "Public/SudsProSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If smoothly transitioning from player to dialogue cameras, the time to spend doing that" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitDialogueSmoothCameraDuration_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "ModuleRelativePath", "Public/SudsProSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If smoothly transitioning from dialogue back to player camera, the time to spend doing that" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakes_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "DisplayName", "Camera shake assets" },
		{ "ModuleRelativePath", "Public/SudsProSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assets that we can reference by name in the CameraShake event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUiClass_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "DisplayName", "Default UI class" },
		{ "ModuleRelativePath", "Public/SudsProSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default UI class to use to display dialogue UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "ModuleRelativePath", "Public/SudsProSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The widget to display dialogue with, if using a UI class which references this setting, such as the built-in one" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ExtensionClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtensionClasses;
	static void NewProp_bEnterDialogueViaSmoothCameraTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnterDialogueViaSmoothCameraTransition;
	static void NewProp_bExitDialogueViaSmoothCameraTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExitDialogueViaSmoothCameraTransition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterDialogueSmoothCameraDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitDialogueSmoothCameraDuration;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CameraShakes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CameraShakes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultUiClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_ExtensionClasses_Inner = { "ExtensionClasses", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USudsProDialogueExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_ExtensionClasses = { "ExtensionClasses", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSettings, ExtensionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionClasses_MetaData), NewProp_ExtensionClasses_MetaData) };
void Z_Construct_UClass_USudsProSettings_Statics::NewProp_bEnterDialogueViaSmoothCameraTransition_SetBit(void* Obj)
{
	((USudsProSettings*)Obj)->bEnterDialogueViaSmoothCameraTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_bEnterDialogueViaSmoothCameraTransition = { "bEnterDialogueViaSmoothCameraTransition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USudsProSettings), &Z_Construct_UClass_USudsProSettings_Statics::NewProp_bEnterDialogueViaSmoothCameraTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnterDialogueViaSmoothCameraTransition_MetaData), NewProp_bEnterDialogueViaSmoothCameraTransition_MetaData) };
void Z_Construct_UClass_USudsProSettings_Statics::NewProp_bExitDialogueViaSmoothCameraTransition_SetBit(void* Obj)
{
	((USudsProSettings*)Obj)->bExitDialogueViaSmoothCameraTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_bExitDialogueViaSmoothCameraTransition = { "bExitDialogueViaSmoothCameraTransition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USudsProSettings), &Z_Construct_UClass_USudsProSettings_Statics::NewProp_bExitDialogueViaSmoothCameraTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExitDialogueViaSmoothCameraTransition_MetaData), NewProp_bExitDialogueViaSmoothCameraTransition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_EnterDialogueSmoothCameraDuration = { "EnterDialogueSmoothCameraDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSettings, EnterDialogueSmoothCameraDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterDialogueSmoothCameraDuration_MetaData), NewProp_EnterDialogueSmoothCameraDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_ExitDialogueSmoothCameraDuration = { "ExitDialogueSmoothCameraDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSettings, ExitDialogueSmoothCameraDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitDialogueSmoothCameraDuration_MetaData), NewProp_ExitDialogueSmoothCameraDuration_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_CameraShakes_ValueProp = { "CameraShakes", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_CameraShakes_Key_KeyProp = { "CameraShakes_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_CameraShakes = { "CameraShakes", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSettings, CameraShakes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakes_MetaData), NewProp_CameraShakes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_DefaultUiClass = { "DefaultUiClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSettings, DefaultUiClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USudsProUiLink_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultUiClass_MetaData), NewProp_DefaultUiClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USudsProSettings_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSettings, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USudsProSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_ExtensionClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_ExtensionClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_bEnterDialogueViaSmoothCameraTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_bExitDialogueViaSmoothCameraTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_EnterDialogueSmoothCameraDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_ExitDialogueSmoothCameraDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_CameraShakes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_CameraShakes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_CameraShakes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_DefaultUiClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSettings_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USudsProSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProSettings_Statics::ClassParams = {
	&USudsProSettings::StaticClass,
	"SudsPro",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USudsProSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProSettings()
{
	if (!Z_Registration_Info_UClass_USudsProSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProSettings.OuterSingleton, Z_Construct_UClass_USudsProSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProSettings.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProSettings>()
{
	return USudsProSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProSettings);
USudsProSettings::~USudsProSettings() {}
// End Class USudsProSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProSettings, USudsProSettings::StaticClass, TEXT("USudsProSettings"), &Z_Registration_Info_UClass_USudsProSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProSettings), 2535594204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSettings_h_3866574724(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_SudsProSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
