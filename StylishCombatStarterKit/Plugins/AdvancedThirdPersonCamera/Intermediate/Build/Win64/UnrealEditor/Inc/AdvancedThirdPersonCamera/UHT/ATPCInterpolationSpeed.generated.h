// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATPCInterpolationSpeed.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDTHIRDPERSONCAMERA_ATPCInterpolationSpeed_generated_h
#error "ATPCInterpolationSpeed.generated.h already included, missing '#pragma once' in ATPCInterpolationSpeed.h"
#endif
#define ADVANCEDTHIRDPERSONCAMERA_ATPCInterpolationSpeed_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCInterpolationSpeed_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<struct FATPCInterploationSpeed>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCInterpolationSpeed_h


#define FOREACH_ENUM_EATPCINTERPOLATIONTYPE(op) \
	op(EATPCInterpolationType::SmoothInterpolation) \
	op(EATPCInterpolationType::ConstInterpolation) 

enum class EATPCInterpolationType : uint8;
template<> struct TIsUEnumClass<EATPCInterpolationType> { enum { Value = true }; };
template<> ADVANCEDTHIRDPERSONCAMERA_API UEnum* StaticEnum<EATPCInterpolationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
