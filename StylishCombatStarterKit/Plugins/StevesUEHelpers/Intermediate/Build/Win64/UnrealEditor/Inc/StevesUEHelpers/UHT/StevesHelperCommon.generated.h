// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesHelperCommon.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEVESUEHELPERS_StevesHelperCommon_generated_h
#error "StevesHelperCommon.generated.h already included, missing '#pragma once' in StevesHelperCommon.h"
#endif
#define STEVESUEHELPERS_StevesHelperCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesHelperCommon_h


#define FOREACH_ENUM_EINPUTMODE(op) \
	op(EInputMode::Mouse) \
	op(EInputMode::Keyboard) \
	op(EInputMode::Gamepad) \
	op(EInputMode::Unknown) 

enum class EInputMode : uint8;
template<> struct TIsUEnumClass<EInputMode> { enum { Value = true }; };
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EInputMode>();

#define FOREACH_ENUM_EINPUTMODECHANGE(op) \
	op(EInputModeChange::DoNotChange) \
	op(EInputModeChange::Restore) \
	op(EInputModeChange::UIOnly) \
	op(EInputModeChange::GameAndUI) \
	op(EInputModeChange::GameOnly) 

enum class EInputModeChange : uint8;
template<> struct TIsUEnumClass<EInputModeChange> { enum { Value = true }; };
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EInputModeChange>();

#define FOREACH_ENUM_EMOUSEPOINTERVISIBILITYCHANGE(op) \
	op(EMousePointerVisibilityChange::DoNotChange) \
	op(EMousePointerVisibilityChange::Restore) \
	op(EMousePointerVisibilityChange::Visible) \
	op(EMousePointerVisibilityChange::Hidden) 

enum class EMousePointerVisibilityChange : uint8;
template<> struct TIsUEnumClass<EMousePointerVisibilityChange> { enum { Value = true }; };
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EMousePointerVisibilityChange>();

#define FOREACH_ENUM_EGAMEPAUSECHANGE(op) \
	op(EGamePauseChange::DoNotChange) \
	op(EGamePauseChange::Restore) \
	op(EGamePauseChange::Paused) \
	op(EGamePauseChange::Unpaused) 

enum class EGamePauseChange : uint8;
template<> struct TIsUEnumClass<EGamePauseChange> { enum { Value = true }; };
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EGamePauseChange>();

#define FOREACH_ENUM_EINPUTBINDINGTYPE(op) \
	op(EInputBindingType::Action) \
	op(EInputBindingType::Axis) \
	op(EInputBindingType::Key) \
	op(EInputBindingType::EnhancedInputAction) 

enum class EInputBindingType : uint8;
template<> struct TIsUEnumClass<EInputBindingType> { enum { Value = true }; };
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EInputBindingType>();

#define FOREACH_ENUM_EINPUTIMAGEDEVICEPREFERENCE(op) \
	op(EInputImageDevicePreference::Auto) \
	op(EInputImageDevicePreference::Gamepad_Keyboard_Mouse) \
	op(EInputImageDevicePreference::Gamepad_Mouse_Keyboard) \
	op(EInputImageDevicePreference::Gamepad_Keyboard_Mouse_Button) \
	op(EInputImageDevicePreference::Gamepad_Keyboard_Mouse_Axis) 

enum class EInputImageDevicePreference : uint8;
template<> struct TIsUEnumClass<EInputImageDevicePreference> { enum { Value = true }; };
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EInputImageDevicePreference>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
