// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesHelperCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesHelperCommon() {}

// Begin Cross Module References
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputBindingType();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputMode();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputModeChange();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Enum EInputMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputMode;
static UEnum* EInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StevesUEHelpers_EInputMode, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("EInputMode"));
	}
	return Z_Registration_Info_UEnum_EInputMode.OuterSingleton;
}
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EInputMode>()
{
	return EInputMode_StaticEnum();
}
struct Z_Construct_UEnum_StevesUEHelpers_EInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gamepad.Name", "EInputMode::Gamepad" },
		{ "Keyboard.Name", "EInputMode::Keyboard" },
		{ "ModuleRelativePath", "Public/StevesHelperCommon.h" },
		{ "Mouse.Name", "EInputMode::Mouse" },
		{ "Unknown.Name", "EInputMode::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputMode::Mouse", (int64)EInputMode::Mouse },
		{ "EInputMode::Keyboard", (int64)EInputMode::Keyboard },
		{ "EInputMode::Gamepad", (int64)EInputMode::Gamepad },
		{ "EInputMode::Unknown", (int64)EInputMode::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StevesUEHelpers_EInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	"EInputMode",
	"EInputMode",
	Z_Construct_UEnum_StevesUEHelpers_EInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StevesUEHelpers_EInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputMode()
{
	if (!Z_Registration_Info_UEnum_EInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputMode.InnerSingleton, Z_Construct_UEnum_StevesUEHelpers_EInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputMode.InnerSingleton;
}
// End Enum EInputMode

// Begin Enum EInputModeChange
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputModeChange;
static UEnum* EInputModeChange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputModeChange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputModeChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StevesUEHelpers_EInputModeChange, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("EInputModeChange"));
	}
	return Z_Registration_Info_UEnum_EInputModeChange.OuterSingleton;
}
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EInputModeChange>()
{
	return EInputModeChange_StaticEnum();
}
struct Z_Construct_UEnum_StevesUEHelpers_EInputModeChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoNotChange.DisplayName", "No Change" },
		{ "DoNotChange.Name", "EInputModeChange::DoNotChange" },
		{ "GameAndUI.DisplayName", "Game And UI" },
		{ "GameAndUI.Name", "EInputModeChange::GameAndUI" },
		{ "GameOnly.DisplayName", "Game Only" },
		{ "GameOnly.Name", "EInputModeChange::GameOnly" },
		{ "ModuleRelativePath", "Public/StevesHelperCommon.h" },
		{ "Restore.DisplayName", "Restore To Previous" },
		{ "Restore.Name", "EInputModeChange::Restore" },
		{ "UIOnly.DisplayName", "UI Only" },
		{ "UIOnly.Name", "EInputModeChange::UIOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputModeChange::DoNotChange", (int64)EInputModeChange::DoNotChange },
		{ "EInputModeChange::Restore", (int64)EInputModeChange::Restore },
		{ "EInputModeChange::UIOnly", (int64)EInputModeChange::UIOnly },
		{ "EInputModeChange::GameAndUI", (int64)EInputModeChange::GameAndUI },
		{ "EInputModeChange::GameOnly", (int64)EInputModeChange::GameOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StevesUEHelpers_EInputModeChange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	"EInputModeChange",
	"EInputModeChange",
	Z_Construct_UEnum_StevesUEHelpers_EInputModeChange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EInputModeChange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EInputModeChange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StevesUEHelpers_EInputModeChange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputModeChange()
{
	if (!Z_Registration_Info_UEnum_EInputModeChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputModeChange.InnerSingleton, Z_Construct_UEnum_StevesUEHelpers_EInputModeChange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputModeChange.InnerSingleton;
}
// End Enum EInputModeChange

// Begin Enum EMousePointerVisibilityChange
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMousePointerVisibilityChange;
static UEnum* EMousePointerVisibilityChange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMousePointerVisibilityChange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMousePointerVisibilityChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("EMousePointerVisibilityChange"));
	}
	return Z_Registration_Info_UEnum_EMousePointerVisibilityChange.OuterSingleton;
}
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EMousePointerVisibilityChange>()
{
	return EMousePointerVisibilityChange_StaticEnum();
}
struct Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoNotChange.DisplayName", "No Change" },
		{ "DoNotChange.Name", "EMousePointerVisibilityChange::DoNotChange" },
		{ "Hidden.DisplayName", "Pointer Hidden" },
		{ "Hidden.Name", "EMousePointerVisibilityChange::Hidden" },
		{ "ModuleRelativePath", "Public/StevesHelperCommon.h" },
		{ "Restore.DisplayName", "Restore To Previous" },
		{ "Restore.Name", "EMousePointerVisibilityChange::Restore" },
		{ "Visible.DisplayName", "Pointer Visible" },
		{ "Visible.Name", "EMousePointerVisibilityChange::Visible" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMousePointerVisibilityChange::DoNotChange", (int64)EMousePointerVisibilityChange::DoNotChange },
		{ "EMousePointerVisibilityChange::Restore", (int64)EMousePointerVisibilityChange::Restore },
		{ "EMousePointerVisibilityChange::Visible", (int64)EMousePointerVisibilityChange::Visible },
		{ "EMousePointerVisibilityChange::Hidden", (int64)EMousePointerVisibilityChange::Hidden },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	"EMousePointerVisibilityChange",
	"EMousePointerVisibilityChange",
	Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange()
{
	if (!Z_Registration_Info_UEnum_EMousePointerVisibilityChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMousePointerVisibilityChange.InnerSingleton, Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMousePointerVisibilityChange.InnerSingleton;
}
// End Enum EMousePointerVisibilityChange

// Begin Enum EGamePauseChange
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGamePauseChange;
static UEnum* EGamePauseChange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGamePauseChange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGamePauseChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("EGamePauseChange"));
	}
	return Z_Registration_Info_UEnum_EGamePauseChange.OuterSingleton;
}
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EGamePauseChange>()
{
	return EGamePauseChange_StaticEnum();
}
struct Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoNotChange.DisplayName", "No Change" },
		{ "DoNotChange.Name", "EGamePauseChange::DoNotChange" },
		{ "ModuleRelativePath", "Public/StevesHelperCommon.h" },
		{ "Paused.DisplayName", "Pause Game" },
		{ "Paused.Name", "EGamePauseChange::Paused" },
		{ "Restore.DisplayName", "Restore To Previous" },
		{ "Restore.Name", "EGamePauseChange::Restore" },
		{ "Unpaused.DisplayName", "Unpause Game" },
		{ "Unpaused.Name", "EGamePauseChange::Unpaused" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGamePauseChange::DoNotChange", (int64)EGamePauseChange::DoNotChange },
		{ "EGamePauseChange::Restore", (int64)EGamePauseChange::Restore },
		{ "EGamePauseChange::Paused", (int64)EGamePauseChange::Paused },
		{ "EGamePauseChange::Unpaused", (int64)EGamePauseChange::Unpaused },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	"EGamePauseChange",
	"EGamePauseChange",
	Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange()
{
	if (!Z_Registration_Info_UEnum_EGamePauseChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGamePauseChange.InnerSingleton, Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGamePauseChange.InnerSingleton;
}
// End Enum EGamePauseChange

// Begin Enum EInputBindingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputBindingType;
static UEnum* EInputBindingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputBindingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputBindingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StevesUEHelpers_EInputBindingType, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("EInputBindingType"));
	}
	return Z_Registration_Info_UEnum_EInputBindingType.OuterSingleton;
}
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EInputBindingType>()
{
	return EInputBindingType_StaticEnum();
}
struct Z_Construct_UEnum_StevesUEHelpers_EInputBindingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Action.Comment", "/// A legacy button action, will be looked up based on input mappings\n" },
		{ "Action.Name", "EInputBindingType::Action" },
		{ "Action.ToolTip", "A legacy button action, will be looked up based on input mappings" },
		{ "Axis.Comment", "/// An legacy axis action, will be looked up based on input mappings\n" },
		{ "Axis.Name", "EInputBindingType::Axis" },
		{ "Axis.ToolTip", "An legacy axis action, will be looked up based on input mappings" },
		{ "BlueprintType", "true" },
		{ "EnhancedInputAction.Comment", "/// An EnhancedInput action\n" },
		{ "EnhancedInputAction.Name", "EInputBindingType::EnhancedInputAction" },
		{ "EnhancedInputAction.ToolTip", "An EnhancedInput action" },
		{ "Key.Comment", "/// A manually specified FKey (which can be key, button, axis)\n" },
		{ "Key.Name", "EInputBindingType::Key" },
		{ "Key.ToolTip", "A manually specified FKey (which can be key, button, axis)" },
		{ "ModuleRelativePath", "Public/StevesHelperCommon.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputBindingType::Action", (int64)EInputBindingType::Action },
		{ "EInputBindingType::Axis", (int64)EInputBindingType::Axis },
		{ "EInputBindingType::Key", (int64)EInputBindingType::Key },
		{ "EInputBindingType::EnhancedInputAction", (int64)EInputBindingType::EnhancedInputAction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StevesUEHelpers_EInputBindingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	"EInputBindingType",
	"EInputBindingType",
	Z_Construct_UEnum_StevesUEHelpers_EInputBindingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EInputBindingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EInputBindingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StevesUEHelpers_EInputBindingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputBindingType()
{
	if (!Z_Registration_Info_UEnum_EInputBindingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputBindingType.InnerSingleton, Z_Construct_UEnum_StevesUEHelpers_EInputBindingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputBindingType.InnerSingleton;
}
// End Enum EInputBindingType

// Begin Enum EInputImageDevicePreference
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputImageDevicePreference;
static UEnum* EInputImageDevicePreference_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputImageDevicePreference.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputImageDevicePreference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("EInputImageDevicePreference"));
	}
	return Z_Registration_Info_UEnum_EInputImageDevicePreference.OuterSingleton;
}
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EInputImageDevicePreference>()
{
	return EInputImageDevicePreference_StaticEnum();
}
struct Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/// For actions, use Gamepad_Keyboard_Mouse_Button, for axes, use Gamepad_Mouse_Keyboard\n" },
		{ "Auto.Name", "EInputImageDevicePreference::Auto" },
		{ "Auto.ToolTip", "For actions, use Gamepad_Keyboard_Mouse_Button, for axes, use Gamepad_Mouse_Keyboard" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// What order of preference should we return input images where an action/axis has multiple mappings\n" },
#endif
		{ "Gamepad_Keyboard_Mouse.Comment", "/// Gamepad first, then keyboard, then mouse\n" },
		{ "Gamepad_Keyboard_Mouse.DisplayName", "Gamepad, Keyboard, Mouse" },
		{ "Gamepad_Keyboard_Mouse.Name", "EInputImageDevicePreference::Gamepad_Keyboard_Mouse" },
		{ "Gamepad_Keyboard_Mouse.ToolTip", "Gamepad first, then keyboard, then mouse" },
		{ "Gamepad_Keyboard_Mouse_Axis.Comment", "/// Gamepad first, then whichever of mouse or keyboard last had an AXIS moved (ignore buttons) - this is usually best for directionals\n" },
		{ "Gamepad_Keyboard_Mouse_Axis.DisplayName", "Gamepad, Most Recent Axis Keyboard/Mouse" },
		{ "Gamepad_Keyboard_Mouse_Axis.Name", "EInputImageDevicePreference::Gamepad_Keyboard_Mouse_Axis" },
		{ "Gamepad_Keyboard_Mouse_Axis.ToolTip", "Gamepad first, then whichever of mouse or keyboard last had an AXIS moved (ignore buttons) - this is usually best for directionals" },
		{ "Gamepad_Keyboard_Mouse_Button.Comment", "/// Gamepad first, then whichever of mouse or keyboard last had a BUTTON pressed (ignore axes) - this is usually best for actions (buttons)\n" },
		{ "Gamepad_Keyboard_Mouse_Button.DisplayName", "Gamepad, Most Recent Button Keyboard/Mouse" },
		{ "Gamepad_Keyboard_Mouse_Button.Name", "EInputImageDevicePreference::Gamepad_Keyboard_Mouse_Button" },
		{ "Gamepad_Keyboard_Mouse_Button.ToolTip", "Gamepad first, then whichever of mouse or keyboard last had a BUTTON pressed (ignore axes) - this is usually best for actions (buttons)" },
		{ "Gamepad_Mouse_Keyboard.Comment", "/// Gamepad first, then mouse, then keyboard - this is usually best for axes\n" },
		{ "Gamepad_Mouse_Keyboard.DisplayName", "Gamepad, Mouse, Keyboard" },
		{ "Gamepad_Mouse_Keyboard.Name", "EInputImageDevicePreference::Gamepad_Mouse_Keyboard" },
		{ "Gamepad_Mouse_Keyboard.ToolTip", "Gamepad first, then mouse, then keyboard - this is usually best for axes" },
		{ "ModuleRelativePath", "Public/StevesHelperCommon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What order of preference should we return input images where an action/axis has multiple mappings" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputImageDevicePreference::Auto", (int64)EInputImageDevicePreference::Auto },
		{ "EInputImageDevicePreference::Gamepad_Keyboard_Mouse", (int64)EInputImageDevicePreference::Gamepad_Keyboard_Mouse },
		{ "EInputImageDevicePreference::Gamepad_Mouse_Keyboard", (int64)EInputImageDevicePreference::Gamepad_Mouse_Keyboard },
		{ "EInputImageDevicePreference::Gamepad_Keyboard_Mouse_Button", (int64)EInputImageDevicePreference::Gamepad_Keyboard_Mouse_Button },
		{ "EInputImageDevicePreference::Gamepad_Keyboard_Mouse_Axis", (int64)EInputImageDevicePreference::Gamepad_Keyboard_Mouse_Axis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	"EInputImageDevicePreference",
	"EInputImageDevicePreference",
	Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference()
{
	if (!Z_Registration_Info_UEnum_EInputImageDevicePreference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputImageDevicePreference.InnerSingleton, Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputImageDevicePreference.InnerSingleton;
}
// End Enum EInputImageDevicePreference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesHelperCommon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputMode_StaticEnum, TEXT("EInputMode"), &Z_Registration_Info_UEnum_EInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2721707288U) },
		{ EInputModeChange_StaticEnum, TEXT("EInputModeChange"), &Z_Registration_Info_UEnum_EInputModeChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 986802536U) },
		{ EMousePointerVisibilityChange_StaticEnum, TEXT("EMousePointerVisibilityChange"), &Z_Registration_Info_UEnum_EMousePointerVisibilityChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3477069294U) },
		{ EGamePauseChange_StaticEnum, TEXT("EGamePauseChange"), &Z_Registration_Info_UEnum_EGamePauseChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4159482778U) },
		{ EInputBindingType_StaticEnum, TEXT("EInputBindingType"), &Z_Registration_Info_UEnum_EInputBindingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2580179460U) },
		{ EInputImageDevicePreference_StaticEnum, TEXT("EInputImageDevicePreference"), &Z_Registration_Info_UEnum_EInputImageDevicePreference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3636241670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesHelperCommon_h_3785277633(TEXT("/Script/StevesUEHelpers"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesHelperCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesHelperCommon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
