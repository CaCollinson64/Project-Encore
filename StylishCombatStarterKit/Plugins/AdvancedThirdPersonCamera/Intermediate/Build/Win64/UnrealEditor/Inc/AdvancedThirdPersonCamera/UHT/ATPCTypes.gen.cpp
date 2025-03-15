// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCTypes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCInterpolationSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCTypes() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UEnum* Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraDebugRules();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraMode();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraShakesSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCFadeSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCFollowTerrainSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCFOVSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCInterploationSpeed();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCLocationSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCLockOnTargetSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCRotationOffsetSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCRotationSettings();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin ScriptStruct FATPCCameraLocationLagSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCCameraLocationLagSettings;
class UScriptStruct* FATPCCameraLocationLagSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraLocationLagSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCCameraLocationLagSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCCameraLocationLagSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraLocationLagSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCCameraLocationLagSettings>()
{
	return FATPCCameraLocationLagSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLagForXY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLagForZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag).\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
#endif
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLagMarkers_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true and camera location lag is enabled, draws markers at the camera target (in green) and the lagged position (in yellow).\n\x09 * A line is drawn between the two locations, in green normally but in red if the distance to the lag target has been clamped (by CameraLagMaxDistance).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true and camera location lag is enabled, draws markers at the camera target (in green) and the lagged position (in yellow).\nA line is drawn between the two locations, in green normally but in red if the distance to the lag target has been clamped (by CameraLagMaxDistance)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraLagSubstepping_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxTimeStep_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.005" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max time step used when sub-stepping camera lag. */" },
#endif
		{ "Editcondition", "bUseCameraLagSubstepping" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max time step used when sub-stepping camera lag." },
#endif
		{ "UIMax", "0.5" },
		{ "UIMin", "0.005" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableCameraLagForXY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLagForXY;
	static void NewProp_bEnableCameraLagForZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLagForZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxDistance;
	static void NewProp_bDrawDebugLagMarkers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLagMarkers;
	static void NewProp_bUseCameraLagSubstepping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraLagSubstepping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxTimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCCameraLocationLagSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bEnableCameraLagForXY_SetBit(void* Obj)
{
	((FATPCCameraLocationLagSettings*)Obj)->bEnableCameraLagForXY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bEnableCameraLagForXY = { "bEnableCameraLagForXY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraLocationLagSettings), &Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bEnableCameraLagForXY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraLagForXY_MetaData), NewProp_bEnableCameraLagForXY_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bEnableCameraLagForZ_SetBit(void* Obj)
{
	((FATPCCameraLocationLagSettings*)Obj)->bEnableCameraLagForZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bEnableCameraLagForZ = { "bEnableCameraLagForZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraLocationLagSettings), &Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bEnableCameraLagForZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraLagForZ_MetaData), NewProp_bEnableCameraLagForZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraLocationLagSettings, CameraLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagSpeed_MetaData), NewProp_CameraLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_CameraLagMaxDistance = { "CameraLagMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraLocationLagSettings, CameraLagMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagMaxDistance_MetaData), NewProp_CameraLagMaxDistance_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bDrawDebugLagMarkers_SetBit(void* Obj)
{
	((FATPCCameraLocationLagSettings*)Obj)->bDrawDebugLagMarkers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bDrawDebugLagMarkers = { "bDrawDebugLagMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraLocationLagSettings), &Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bDrawDebugLagMarkers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugLagMarkers_MetaData), NewProp_bDrawDebugLagMarkers_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bUseCameraLagSubstepping_SetBit(void* Obj)
{
	((FATPCCameraLocationLagSettings*)Obj)->bUseCameraLagSubstepping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bUseCameraLagSubstepping = { "bUseCameraLagSubstepping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraLocationLagSettings), &Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bUseCameraLagSubstepping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCameraLagSubstepping_MetaData), NewProp_bUseCameraLagSubstepping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_CameraLagMaxTimeStep = { "CameraLagMaxTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraLocationLagSettings, CameraLagMaxTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagMaxTimeStep_MetaData), NewProp_CameraLagMaxTimeStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bEnableCameraLagForXY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bEnableCameraLagForZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_CameraLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_CameraLagMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bDrawDebugLagMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_bUseCameraLagSubstepping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewProp_CameraLagMaxTimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCCameraLocationLagSettings",
	Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::PropPointers),
	sizeof(FATPCCameraLocationLagSettings),
	alignof(FATPCCameraLocationLagSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraLocationLagSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCCameraLocationLagSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraLocationLagSettings.InnerSingleton;
}
// End ScriptStruct FATPCCameraLocationLagSettings

// Begin ScriptStruct FATPCCameraRotationLagSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCCameraRotationLagSettings;
class UScriptStruct* FATPCCameraRotationLagSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraRotationLagSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCCameraRotationLagSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCCameraRotationLagSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraRotationLagSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCCameraRotationLagSettings>()
{
	return FATPCCameraRotationLagSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag). */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
#endif
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraLagSubstepping_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxTimeStep_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.005" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max time step used when sub-stepping camera lag. */" },
#endif
		{ "editcondition", "bUseCameraLagSubstepping" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max time step used when sub-stepping camera lag." },
#endif
		{ "UIMax", "0.5" },
		{ "UIMin", "0.005" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
	static void NewProp_bUseCameraLagSubstepping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraLagSubstepping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxTimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCCameraRotationLagSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraRotationLagSettings, CameraLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagSpeed_MetaData), NewProp_CameraLagSpeed_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::NewProp_bUseCameraLagSubstepping_SetBit(void* Obj)
{
	((FATPCCameraRotationLagSettings*)Obj)->bUseCameraLagSubstepping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::NewProp_bUseCameraLagSubstepping = { "bUseCameraLagSubstepping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraRotationLagSettings), &Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::NewProp_bUseCameraLagSubstepping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCameraLagSubstepping_MetaData), NewProp_bUseCameraLagSubstepping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::NewProp_CameraLagMaxTimeStep = { "CameraLagMaxTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraRotationLagSettings, CameraLagMaxTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagMaxTimeStep_MetaData), NewProp_CameraLagMaxTimeStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::NewProp_CameraLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::NewProp_bUseCameraLagSubstepping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::NewProp_CameraLagMaxTimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCCameraRotationLagSettings",
	Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::PropPointers),
	sizeof(FATPCCameraRotationLagSettings),
	alignof(FATPCCameraRotationLagSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraRotationLagSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCCameraRotationLagSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraRotationLagSettings.InnerSingleton;
}
// End ScriptStruct FATPCCameraRotationLagSettings

// Begin ScriptStruct FATPCLocationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCLocationSettings;
class UScriptStruct* FATPCLocationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCLocationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCLocationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCLocationSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCLocationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCLocationSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCLocationSettings>()
{
	return FATPCLocationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCLocationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLocationLag_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocationLagSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Editcondition", "bEnableCameraLocationLag" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraRotationLag_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationLagSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Editcondition", "bEnableCameraRotationLag" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoCollisionTest_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, do a collision test using ProbeChannel and ProbeSize to prevent camera clipping into level.  */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, do a collision test using ProbeChannel and ProbeSize to prevent camera clipping into level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeSize_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How big should the query probe sphere be (in unreal units) */" },
#endif
		{ "Editcondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How big should the query probe sphere be (in unreal units)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraResetInterpolationSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Editcondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeChannel_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision channel of the query probe */" },
#endif
		{ "Editcondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision channel of the query probe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoMovementCollisionTest_MetaData[] = {
		{ "Category", "Settings|MovementCollisionTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Ignoring collisions between the camera and the character(but not the camera itself) while camera moving for special objects. Enabled if standard collision test detected collision\n\x09* see params @MovementCollisionTestDuration, @MovementCollisionTestMinLocationDelta, @MovementCollisionTestCollisionChannel\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ignoring collisions between the camera and the character(but not the camera itself) while camera moving for special objects. Enabled if standard collision test detected collision\nsee params @MovementCollisionTestDuration, @MovementCollisionTestMinLocationDelta, @MovementCollisionTestCollisionChannel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCollisionTestDuration_MetaData[] = {
		{ "Category", "Settings|MovementCollisionTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Duration of movement collision test after stopped movement\n\x09* see @bDoMovementCollisionTest\n\x09*/" },
#endif
		{ "Editcondition", "bDoMovementCollisionTest" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of movement collision test after stopped movement\nsee @bDoMovementCollisionTest" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCollisionTestMinLocationDelta_MetaData[] = {
		{ "Category", "Settings|MovementCollisionTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Minimal location delta for enable movement collision. Calc delta between @PreviousResultLoc and @desiredLoc from ATPCCameraLocationObject\n\x09* see @bDoMovementCollisionTest\n\x09*/" },
#endif
		{ "Editcondition", "bDoMovementCollisionTest" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal location delta for enable movement collision. Calc delta between @PreviousResultLoc and @desiredLoc from ATPCCameraLocationObject\nsee @bDoMovementCollisionTest" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCollisionTestCollisionChannel_MetaData[] = {
		{ "Category", "Settings|MovementCollisionTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Ignoring collision works only for those objects for which collision @ObjectCollisionChannelForSkipCollision == Overlap\n\x09* see @bDoMovementCollisionTest\n\x09*/" },
#endif
		{ "Editcondition", "bDoMovementCollisionTest" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ignoring collision works only for those objects for which collision @ObjectCollisionChannelForSkipCollision == Overlap\nsee @bDoMovementCollisionTest" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCameraDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal camera distance until character */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal camera distance until character" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCameraDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum camera distance from character */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum camera distance from character" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetDistanceToDefaultOnChangeCameraMode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* If is true, set current CameraDistance to DefaultCameraDistance on CameraMode changed\n\x09* Disabled when @bCacheDistanceForCurrentCameraMode is true\n\x09*/" },
#endif
		{ "Editcondition", "!bCacheDistanceForCurrentCameraMode" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If is true, set current CameraDistance to DefaultCameraDistance on CameraMode changed\nDisabled when @bCacheDistanceForCurrentCameraMode is true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If is true, set CameraDistance to this value in first CameraMode or  when CameraMode changed and if bSetDistanceToDefaultOnChangeCameraMode is true */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If is true, set CameraDistance to this value in first CameraMode or  when CameraMode changed and if bSetDistanceToDefaultOnChangeCameraMode is true" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCacheDistanceForCurrentCameraMode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* If is true, cached CameraDistance for current CameraMode and apply when it CameraMode again set\n\x09* Override @bSetDistanceToDefaultOnChangeCameraMode\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If is true, cached CameraDistance for current CameraMode and apply when it CameraMode again set\nOverride @bSetDistanceToDefaultOnChangeCameraMode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpolation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetCurve_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Offset at end of spring arm; use this instead of the relative offset of the attached component to ensure the line trace works as desired\n\x09* X - x offset\n\x09* Y - y offset\n\x09* Z - z offset\n\x09* Time - distance to character\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset at end of spring arm; use this instead of the relative offset of the attached component to ensure the line trace works as desired\nX - x offset\nY - y offset\nZ - z offset\nTime - distance to character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** SocketOffset change speed when changed CameraMode with a different SocketOffset */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SocketOffset change speed when changed CameraMode with a different SocketOffset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset at start of spring, applied in world space.Use this if you want a world - space offset from the parent component instead of the usual relative - space offset. */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset at start of spring, applied in world space.Use this if you want a world - space offset from the parent component instead of the usual relative - space offset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TargetOffset change speed when changed CameraMode with a different TargetOffset */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TargetOffset change speed when changed CameraMode with a different TargetOffset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchDistanceCurve_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If is not null, add camera distance depending on current pitch rotation\n\x09* Value - additional distance\n\x09* Time - normalize pitch rotation\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If is not null, add camera distance depending on current pitch rotation\nValue - additional distance\nTime - normalize pitch rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpolationType_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @ZoomInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @ZoomInterpolation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @ZoomInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @ZoomInterpolation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetInterpSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @SocketOffsetInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @SocketOffsetInterpolation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetInterpSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @TargetOffsetInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @TargetOffsetInterpolation" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableCameraLocationLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLocationLag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocationLagSettings;
	static void NewProp_bEnableCameraRotationLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraRotationLag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotationLagSettings;
	static void NewProp_bDoCollisionTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionTest;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbeSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraResetInterpolationSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProbeChannel;
	static void NewProp_bDoMovementCollisionTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoMovementCollisionTest;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementCollisionTestDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementCollisionTestMinLocationDelta;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementCollisionTestCollisionChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCameraDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCameraDistance;
	static void NewProp_bSetDistanceToDefaultOnChangeCameraMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDistanceToDefaultOnChangeCameraMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCameraDistance;
	static void NewProp_bCacheDistanceForCurrentCameraMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheDistanceForCurrentCameraMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZoomInterpolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocketOffsetCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffsetInterpolation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffsetInterpolation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchDistanceCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ZoomInterpolationType_OLD_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ZoomInterpolationType_OLD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed_OLD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SocketOffsetInterpSpeed_OLD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetOffsetInterpSpeed_OLD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCLocationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bEnableCameraLocationLag_SetBit(void* Obj)
{
	((FATPCLocationSettings*)Obj)->bEnableCameraLocationLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bEnableCameraLocationLag = { "bEnableCameraLocationLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLocationSettings), &Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bEnableCameraLocationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraLocationLag_MetaData), NewProp_bEnableCameraLocationLag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_CameraLocationLagSettings = { "CameraLocationLagSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, CameraLocationLagSettings), Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLocationLagSettings_MetaData), NewProp_CameraLocationLagSettings_MetaData) }; // 113406157
void Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bEnableCameraRotationLag_SetBit(void* Obj)
{
	((FATPCLocationSettings*)Obj)->bEnableCameraRotationLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bEnableCameraRotationLag = { "bEnableCameraRotationLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLocationSettings), &Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bEnableCameraRotationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraRotationLag_MetaData), NewProp_bEnableCameraRotationLag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_CameraRotationLagSettings = { "CameraRotationLagSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, CameraRotationLagSettings), Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationLagSettings_MetaData), NewProp_CameraRotationLagSettings_MetaData) }; // 331717640
void Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bDoCollisionTest_SetBit(void* Obj)
{
	((FATPCLocationSettings*)Obj)->bDoCollisionTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bDoCollisionTest = { "bDoCollisionTest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLocationSettings), &Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bDoCollisionTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoCollisionTest_MetaData), NewProp_bDoCollisionTest_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ProbeSize = { "ProbeSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, ProbeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeSize_MetaData), NewProp_ProbeSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_CameraResetInterpolationSpeed = { "CameraResetInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, CameraResetInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraResetInterpolationSpeed_MetaData), NewProp_CameraResetInterpolationSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ProbeChannel = { "ProbeChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, ProbeChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeChannel_MetaData), NewProp_ProbeChannel_MetaData) }; // 756624936
void Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bDoMovementCollisionTest_SetBit(void* Obj)
{
	((FATPCLocationSettings*)Obj)->bDoMovementCollisionTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bDoMovementCollisionTest = { "bDoMovementCollisionTest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLocationSettings), &Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bDoMovementCollisionTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoMovementCollisionTest_MetaData), NewProp_bDoMovementCollisionTest_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MovementCollisionTestDuration = { "MovementCollisionTestDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, MovementCollisionTestDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCollisionTestDuration_MetaData), NewProp_MovementCollisionTestDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MovementCollisionTestMinLocationDelta = { "MovementCollisionTestMinLocationDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, MovementCollisionTestMinLocationDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCollisionTestMinLocationDelta_MetaData), NewProp_MovementCollisionTestMinLocationDelta_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MovementCollisionTestCollisionChannel = { "MovementCollisionTestCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, MovementCollisionTestCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCollisionTestCollisionChannel_MetaData), NewProp_MovementCollisionTestCollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MinCameraDistance = { "MinCameraDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, MinCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCameraDistance_MetaData), NewProp_MinCameraDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MaxCameraDistance = { "MaxCameraDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, MaxCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCameraDistance_MetaData), NewProp_MaxCameraDistance_MetaData) };
void Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bSetDistanceToDefaultOnChangeCameraMode_SetBit(void* Obj)
{
	((FATPCLocationSettings*)Obj)->bSetDistanceToDefaultOnChangeCameraMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bSetDistanceToDefaultOnChangeCameraMode = { "bSetDistanceToDefaultOnChangeCameraMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLocationSettings), &Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bSetDistanceToDefaultOnChangeCameraMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetDistanceToDefaultOnChangeCameraMode_MetaData), NewProp_bSetDistanceToDefaultOnChangeCameraMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_DefaultCameraDistance = { "DefaultCameraDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, DefaultCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraDistance_MetaData), NewProp_DefaultCameraDistance_MetaData) };
void Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bCacheDistanceForCurrentCameraMode_SetBit(void* Obj)
{
	((FATPCLocationSettings*)Obj)->bCacheDistanceForCurrentCameraMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bCacheDistanceForCurrentCameraMode = { "bCacheDistanceForCurrentCameraMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLocationSettings), &Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bCacheDistanceForCurrentCameraMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCacheDistanceForCurrentCameraMode_MetaData), NewProp_bCacheDistanceForCurrentCameraMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomInterpolation = { "ZoomInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, ZoomInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInterpolation_MetaData), NewProp_ZoomInterpolation_MetaData) }; // 1929702493
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomDistance = { "ZoomDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, ZoomDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomDistance_MetaData), NewProp_ZoomDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_SocketOffsetCurve = { "SocketOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, SocketOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetCurve_MetaData), NewProp_SocketOffsetCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_SocketOffsetInterpolation = { "SocketOffsetInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, SocketOffsetInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetInterpolation_MetaData), NewProp_SocketOffsetInterpolation_MetaData) }; // 1929702493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffset_MetaData), NewProp_TargetOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_TargetOffsetInterpolation = { "TargetOffsetInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, TargetOffsetInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffsetInterpolation_MetaData), NewProp_TargetOffsetInterpolation_MetaData) }; // 1929702493
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_PitchDistanceCurve = { "PitchDistanceCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, PitchDistanceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchDistanceCurve_MetaData), NewProp_PitchDistanceCurve_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomInterpolationType_OLD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomInterpolationType_OLD = { "ZoomInterpolationType_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, ZoomInterpolationType_OLD), Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInterpolationType_OLD_MetaData), NewProp_ZoomInterpolationType_OLD_MetaData) }; // 4047661307
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomSpeed_OLD = { "ZoomSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, ZoomSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_OLD_MetaData), NewProp_ZoomSpeed_OLD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_SocketOffsetInterpSpeed_OLD = { "SocketOffsetInterpSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, SocketOffsetInterpSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetInterpSpeed_OLD_MetaData), NewProp_SocketOffsetInterpSpeed_OLD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_TargetOffsetInterpSpeed_OLD = { "TargetOffsetInterpSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLocationSettings, TargetOffsetInterpSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffsetInterpSpeed_OLD_MetaData), NewProp_TargetOffsetInterpSpeed_OLD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bEnableCameraLocationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_CameraLocationLagSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bEnableCameraRotationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_CameraRotationLagSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bDoCollisionTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ProbeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_CameraResetInterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ProbeChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bDoMovementCollisionTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MovementCollisionTestDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MovementCollisionTestMinLocationDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MovementCollisionTestCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MinCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_MaxCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bSetDistanceToDefaultOnChangeCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_DefaultCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_bCacheDistanceForCurrentCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_SocketOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_SocketOffsetInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_TargetOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_TargetOffsetInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_PitchDistanceCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomInterpolationType_OLD_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomInterpolationType_OLD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_ZoomSpeed_OLD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_SocketOffsetInterpSpeed_OLD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewProp_TargetOffsetInterpSpeed_OLD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCLocationSettings",
	Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::PropPointers),
	sizeof(FATPCLocationSettings),
	alignof(FATPCLocationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCLocationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCLocationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCLocationSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCLocationSettings.InnerSingleton;
}
// End ScriptStruct FATPCLocationSettings

// Begin ScriptStruct FATPCRotationOffsetSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCRotationOffsetSettings;
class UScriptStruct* FATPCRotationOffsetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCRotationOffsetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCRotationOffsetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCRotationOffsetSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCRotationOffsetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCRotationOffsetSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCRotationOffsetSettings>()
{
	return FATPCRotationOffsetSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Settings for offset Pitch rotation*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for offset Pitch rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffsetDelay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset delay after the user manually changed rotation of camera (for example, moved the mouse or made an input via the gamepad)*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset delay after the user manually changed rotation of camera (for example, moved the mouse or made an input via the gamepad)" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pitch rotation change speed(from current to PitchOffset)*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch rotation change speed(from current to PitchOffset)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchOffset_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pitch offset for camera relative 0*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch offset for camera relative 0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActivateOnlyIfMovement_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, offset settings will only be applied while Actor movement speed >= @MinMovementSpeedForActivate*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, offset settings will only be applied while Actor movement speed >= @MinMovementSpeedForActivate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMovementSpeedForActivate_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal actor movement speed for applied offset settings(if @bActivateOnlyIfMovement true)*/" },
#endif
		{ "EditCondition", "bActivateOnlyIfMovement" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal actor movement speed for applied offset settings(if @bActivateOnlyIfMovement true)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeRotationSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @RotationInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @RotationInterpolation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @RotationInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @RotationInterpolation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffsetDelay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationInterpolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchOffset;
	static void NewProp_bActivateOnlyIfMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateOnlyIfMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMovementSpeedForActivate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeRotationSpeed_OLD;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_OLD_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType_OLD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCRotationOffsetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_StartOffsetDelay = { "StartOffsetDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationOffsetSettings, StartOffsetDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffsetDelay_MetaData), NewProp_StartOffsetDelay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_RotationInterpolation = { "RotationInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationOffsetSettings, RotationInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpolation_MetaData), NewProp_RotationInterpolation_MetaData) }; // 1929702493
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_PitchOffset = { "PitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationOffsetSettings, PitchOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchOffset_MetaData), NewProp_PitchOffset_MetaData) };
void Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_bActivateOnlyIfMovement_SetBit(void* Obj)
{
	((FATPCRotationOffsetSettings*)Obj)->bActivateOnlyIfMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_bActivateOnlyIfMovement = { "bActivateOnlyIfMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCRotationOffsetSettings), &Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_bActivateOnlyIfMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActivateOnlyIfMovement_MetaData), NewProp_bActivateOnlyIfMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_MinMovementSpeedForActivate = { "MinMovementSpeedForActivate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationOffsetSettings, MinMovementSpeedForActivate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMovementSpeedForActivate_MetaData), NewProp_MinMovementSpeedForActivate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_ChangeRotationSpeed_OLD = { "ChangeRotationSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationOffsetSettings, ChangeRotationSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeRotationSpeed_OLD_MetaData), NewProp_ChangeRotationSpeed_OLD_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_InterpolationType_OLD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_InterpolationType_OLD = { "InterpolationType_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationOffsetSettings, InterpolationType_OLD), Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_OLD_MetaData), NewProp_InterpolationType_OLD_MetaData) }; // 4047661307
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_StartOffsetDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_RotationInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_PitchOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_bActivateOnlyIfMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_MinMovementSpeedForActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_ChangeRotationSpeed_OLD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_InterpolationType_OLD_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewProp_InterpolationType_OLD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCRotationOffsetSettings",
	Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::PropPointers),
	sizeof(FATPCRotationOffsetSettings),
	alignof(FATPCRotationOffsetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCRotationOffsetSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCRotationOffsetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCRotationOffsetSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCRotationOffsetSettings.InnerSingleton;
}
// End ScriptStruct FATPCRotationOffsetSettings

// Begin ScriptStruct FATPCRoofCollisionCheckSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCRoofCollisionCheckSettings;
class UScriptStruct* FATPCRoofCollisionCheckSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCRoofCollisionCheckSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCRoofCollisionCheckSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCRoofCollisionCheckSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCRoofCollisionCheckSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCRoofCollisionCheckSettings>()
{
	return FATPCRoofCollisionCheckSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Settings for finding collisions over character. This allows you to lower camera when the character passes through the door, under bridges, under trees and more.\n* 2 traces are used, the first to search for a collision in front of the character, the second to search for a collision over the character.\n* If there is no collision in front of the character and there is a collision above him, then the offset will be applied \n*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for finding collisions over character. This allows you to lower camera when the character passes through the door, under bridges, under trees and more.\n2 traces are used, the first to search for a collision in front of the character, the second to search for a collision over the character.\nIf there is no collision in front of the character and there is a collision above him, then the offset will be applied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTypes_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of collisions oobjects to check(in trace)*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of collisions oobjects to check(in trace)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyesBoxTraceHalfSize_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Half size trace from actor eye(getting eyes viewpoint from AActor::GetActorEyesViewPoint using in BoxTrace) */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half size trace from actor eye(getting eyes viewpoint from AActor::GetActorEyesViewPoint using in BoxTrace)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoofTraceAngleFirst_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Angle of rotation for character roof trace. See @ActorRoofBoxTraceHalfSize */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angle of rotation for character roof trace. See @ActorRoofBoxTraceHalfSize" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoofBoxTraceHalfSizeFirst_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Half size trace from character eyes(getting eyes viewpoint from AActor::GetActorEyesViewPoint using in BoxTrace) */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half size trace from character eyes(getting eyes viewpoint from AActor::GetActorEyesViewPoint using in BoxTrace)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoofTraceAngleSecond_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Angle of rotation for camera roof trace. See @CameraRoofBoxTraceHalfSize */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angle of rotation for camera roof trace. See @CameraRoofBoxTraceHalfSize" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoofBoxTraceHalfSizeSecond_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Half size trace from trace(using in BoxTrace) */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half size trace from trace(using in BoxTrace)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffsetSettings_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EyesBoxTraceHalfSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoofTraceAngleFirst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoofBoxTraceHalfSizeFirst;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoofTraceAngleSecond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoofBoxTraceHalfSizeSecond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffsetSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCRoofCollisionCheckSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRoofCollisionCheckSettings, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceObjectTypes_MetaData), NewProp_TraceObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_EyesBoxTraceHalfSize = { "EyesBoxTraceHalfSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRoofCollisionCheckSettings, EyesBoxTraceHalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyesBoxTraceHalfSize_MetaData), NewProp_EyesBoxTraceHalfSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RoofTraceAngleFirst = { "RoofTraceAngleFirst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRoofCollisionCheckSettings, RoofTraceAngleFirst), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoofTraceAngleFirst_MetaData), NewProp_RoofTraceAngleFirst_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RoofBoxTraceHalfSizeFirst = { "RoofBoxTraceHalfSizeFirst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRoofCollisionCheckSettings, RoofBoxTraceHalfSizeFirst), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoofBoxTraceHalfSizeFirst_MetaData), NewProp_RoofBoxTraceHalfSizeFirst_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RoofTraceAngleSecond = { "RoofTraceAngleSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRoofCollisionCheckSettings, RoofTraceAngleSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoofTraceAngleSecond_MetaData), NewProp_RoofTraceAngleSecond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RoofBoxTraceHalfSizeSecond = { "RoofBoxTraceHalfSizeSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRoofCollisionCheckSettings, RoofBoxTraceHalfSizeSecond), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoofBoxTraceHalfSizeSecond_MetaData), NewProp_RoofBoxTraceHalfSizeSecond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RotationOffsetSettings = { "RotationOffsetSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRoofCollisionCheckSettings, RotationOffsetSettings), Z_Construct_UScriptStruct_FATPCRotationOffsetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffsetSettings_MetaData), NewProp_RotationOffsetSettings_MetaData) }; // 2737839955
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_TraceObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_TraceObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_EyesBoxTraceHalfSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RoofTraceAngleFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RoofBoxTraceHalfSizeFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RoofTraceAngleSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RoofBoxTraceHalfSizeSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewProp_RotationOffsetSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCRoofCollisionCheckSettings",
	Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::PropPointers),
	sizeof(FATPCRoofCollisionCheckSettings),
	alignof(FATPCRoofCollisionCheckSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCRoofCollisionCheckSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCRoofCollisionCheckSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCRoofCollisionCheckSettings.InnerSingleton;
}
// End ScriptStruct FATPCRoofCollisionCheckSettings

// Begin ScriptStruct FATPCViewRotationToActorRotationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCViewRotationToActorRotationSettings;
class UScriptStruct* FATPCViewRotationToActorRotationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCViewRotationToActorRotationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCViewRotationToActorRotationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCViewRotationToActorRotationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCViewRotationToActorRotationSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCViewRotationToActorRotationSettings>()
{
	return FATPCViewRotationToActorRotationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Settings for controlling the camera\xe2\x80\x99s rotation in the direction of the character\xe2\x80\x99s movement */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for controlling the camera\xe2\x80\x99s rotation in the direction of the character\xe2\x80\x99s movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaForChange_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum difference between yaw rotation of actor and camera to start following rotation of camera to rotation of actor*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum difference between yaw rotation of actor and camera to start following rotation of camera to rotation of actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartChangeDelay_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay after the user manually changed rotation of camera (for example, moved the mouse or made an input via the gamepad)*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay after the user manually changed rotation of camera (for example, moved the mouse or made an input via the gamepad)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Change speed of rotation of camera in direction of rotation of actor */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change speed of rotation of camera in direction of rotation of actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeRotationSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @RotationInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @RotationInterpolation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeRotationSpeedInterpSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @RotationInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @RotationInterpolation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaForChange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartChangeDelay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationInterpolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeRotationSpeed_OLD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeRotationSpeedInterpSpeed_OLD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCViewRotationToActorRotationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_MaxDeltaForChange = { "MaxDeltaForChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCViewRotationToActorRotationSettings, MaxDeltaForChange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeltaForChange_MetaData), NewProp_MaxDeltaForChange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_StartChangeDelay = { "StartChangeDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCViewRotationToActorRotationSettings, StartChangeDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartChangeDelay_MetaData), NewProp_StartChangeDelay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_RotationInterpolation = { "RotationInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCViewRotationToActorRotationSettings, RotationInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpolation_MetaData), NewProp_RotationInterpolation_MetaData) }; // 1929702493
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_ChangeRotationSpeed_OLD = { "ChangeRotationSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCViewRotationToActorRotationSettings, ChangeRotationSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeRotationSpeed_OLD_MetaData), NewProp_ChangeRotationSpeed_OLD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_ChangeRotationSpeedInterpSpeed_OLD = { "ChangeRotationSpeedInterpSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCViewRotationToActorRotationSettings, ChangeRotationSpeedInterpSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeRotationSpeedInterpSpeed_OLD_MetaData), NewProp_ChangeRotationSpeedInterpSpeed_OLD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_MaxDeltaForChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_StartChangeDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_RotationInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_ChangeRotationSpeed_OLD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewProp_ChangeRotationSpeedInterpSpeed_OLD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCViewRotationToActorRotationSettings",
	Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::PropPointers),
	sizeof(FATPCViewRotationToActorRotationSettings),
	alignof(FATPCViewRotationToActorRotationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCViewRotationToActorRotationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCViewRotationToActorRotationSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCViewRotationToActorRotationSettings.InnerSingleton;
}
// End ScriptStruct FATPCViewRotationToActorRotationSettings

// Begin ScriptStruct FATPCRotationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCRotationSettings;
class UScriptStruct* FATPCRotationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCRotationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCRotationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCRotationSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCRotationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCRotationSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCRotationSettings>()
{
	return FATPCRotationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCRotationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-90.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum view pitch, in degrees. */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum view pitch, in degrees." },
#endif
		{ "UIMax", "0.0" },
		{ "UIMin", "-90.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum view pitch, in degrees. */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum view pitch, in degrees." },
#endif
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewYawMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "359.999" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum view yaw, in degrees. */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum view yaw, in degrees." },
#endif
		{ "UIMax", "359.999" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewYawMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "359.999" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum view yaw, in degrees. */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum view yaw, in degrees." },
#endif
		{ "UIMax", "359.999" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Rate of change of camera view(pitch and yaw)\n\x09* Interpolation used for validation settings between dif camera modes\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate of change of camera view(pitch and yaw)\nInterpolation used for validation settings between dif camera modes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffsetSettings_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default offset settings. Used when the user does not change the camera rotation manually.*/" },
#endif
		{ "editcondition", "bEnableRotationOffset" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default offset settings. Used when the user does not change the camera rotation manually." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRoofCollisionCheckSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoofCollisionCheckSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "editcondition", "bEnableRoofCollisionCheckSettings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableViewRotationToActorRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewRotationToActorRotationSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "editcondition", "bEnableViewRotationToActorRotation" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If this component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\n\x09 * When disabled, the component will revert to using the stored RelativeRotation of the component.\n\x09 * Note that this component itself does not rotate, but instead maintains its relative rotation to its parent as normal,\n\x09 * and just repositions and rotates its children as desired by the inherited rotation settings. Use GetTargetRotation()\n\x09 * if you want the rotation target based on all the settings (UsePawnControlRotation, InheritPitch, etc).\n\x09 *\n\x09 * @see ATPCCameraLocationObject::GetTargetRotation(), APawn::GetViewRotation()\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\nWhen disabled, the component will revert to using the stored RelativeRotation of the component.\nNote that this component itself does not rotate, but instead maintains its relative rotation to its parent as normal,\nand just repositions and rotates its children as desired by the inherited rotation settings. Use GetTargetRotation()\nif you want the rotation target based on all the settings (UsePawnControlRotation, InheritPitch, etc).\n\n@see ATPCCameraLocationObject::GetTargetRotation(), APawn::GetViewRotation()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritPitch_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we inherit pitch from parent component. Does nothing if using Absolute Rotation. */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we inherit pitch from parent component. Does nothing if using Absolute Rotation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritYaw_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we inherit yaw from parent component. Does nothing if using Absolute Rotation. */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we inherit yaw from parent component. Does nothing if using Absolute Rotation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritRoll_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we inherit roll from parent component. Does nothing if using Absolute Rotation. */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we inherit roll from parent component. Does nothing if using Absolute Rotation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewInterpolationSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @ViewInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @ViewInterpolation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewYawMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewYawMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewInterpolation;
	static void NewProp_bEnableRotationOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffsetSettings;
	static void NewProp_bEnableRoofCollisionCheckSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRoofCollisionCheckSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoofCollisionCheckSettings;
	static void NewProp_bEnableViewRotationToActorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableViewRotationToActorRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRotationToActorRotationSettings;
	static void NewProp_bUsePawnControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation;
	static void NewProp_bInheritPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritPitch;
	static void NewProp_bInheritYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritYaw;
	static void NewProp_bInheritRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewInterpolationSpeed_OLD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCRotationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewPitchMin = { "ViewPitchMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationSettings, ViewPitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMin_MetaData), NewProp_ViewPitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewPitchMax = { "ViewPitchMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationSettings, ViewPitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMax_MetaData), NewProp_ViewPitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewYawMin = { "ViewYawMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationSettings, ViewYawMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewYawMin_MetaData), NewProp_ViewYawMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewYawMax = { "ViewYawMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationSettings, ViewYawMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewYawMax_MetaData), NewProp_ViewYawMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewInterpolation = { "ViewInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationSettings, ViewInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewInterpolation_MetaData), NewProp_ViewInterpolation_MetaData) }; // 1929702493
void Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableRotationOffset_SetBit(void* Obj)
{
	((FATPCRotationSettings*)Obj)->bEnableRotationOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableRotationOffset = { "bEnableRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCRotationSettings), &Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableRotationOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRotationOffset_MetaData), NewProp_bEnableRotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_RotationOffsetSettings = { "RotationOffsetSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationSettings, RotationOffsetSettings), Z_Construct_UScriptStruct_FATPCRotationOffsetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffsetSettings_MetaData), NewProp_RotationOffsetSettings_MetaData) }; // 2737839955
void Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableRoofCollisionCheckSettings_SetBit(void* Obj)
{
	((FATPCRotationSettings*)Obj)->bEnableRoofCollisionCheckSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableRoofCollisionCheckSettings = { "bEnableRoofCollisionCheckSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCRotationSettings), &Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableRoofCollisionCheckSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRoofCollisionCheckSettings_MetaData), NewProp_bEnableRoofCollisionCheckSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_RoofCollisionCheckSettings = { "RoofCollisionCheckSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationSettings, RoofCollisionCheckSettings), Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoofCollisionCheckSettings_MetaData), NewProp_RoofCollisionCheckSettings_MetaData) }; // 2774749043
void Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableViewRotationToActorRotation_SetBit(void* Obj)
{
	((FATPCRotationSettings*)Obj)->bEnableViewRotationToActorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableViewRotationToActorRotation = { "bEnableViewRotationToActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCRotationSettings), &Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableViewRotationToActorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableViewRotationToActorRotation_MetaData), NewProp_bEnableViewRotationToActorRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewRotationToActorRotationSettings = { "ViewRotationToActorRotationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationSettings, ViewRotationToActorRotationSettings), Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewRotationToActorRotationSettings_MetaData), NewProp_ViewRotationToActorRotationSettings_MetaData) }; // 258604471
void Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bUsePawnControlRotation_SetBit(void* Obj)
{
	((FATPCRotationSettings*)Obj)->bUsePawnControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bUsePawnControlRotation = { "bUsePawnControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCRotationSettings), &Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bUsePawnControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePawnControlRotation_MetaData), NewProp_bUsePawnControlRotation_MetaData) };
void Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritPitch_SetBit(void* Obj)
{
	((FATPCRotationSettings*)Obj)->bInheritPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritPitch = { "bInheritPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCRotationSettings), &Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritPitch_MetaData), NewProp_bInheritPitch_MetaData) };
void Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritYaw_SetBit(void* Obj)
{
	((FATPCRotationSettings*)Obj)->bInheritYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritYaw = { "bInheritYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCRotationSettings), &Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritYaw_MetaData), NewProp_bInheritYaw_MetaData) };
void Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritRoll_SetBit(void* Obj)
{
	((FATPCRotationSettings*)Obj)->bInheritRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritRoll = { "bInheritRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCRotationSettings), &Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritRoll_MetaData), NewProp_bInheritRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewInterpolationSpeed_OLD = { "ViewInterpolationSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCRotationSettings, ViewInterpolationSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewInterpolationSpeed_OLD_MetaData), NewProp_ViewInterpolationSpeed_OLD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewPitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewPitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewYawMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewYawMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_RotationOffsetSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableRoofCollisionCheckSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_RoofCollisionCheckSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bEnableViewRotationToActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewRotationToActorRotationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bUsePawnControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_bInheritRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewProp_ViewInterpolationSpeed_OLD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCRotationSettings",
	Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::PropPointers),
	sizeof(FATPCRotationSettings),
	alignof(FATPCRotationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCRotationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCRotationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCRotationSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCRotationSettings.InnerSingleton;
}
// End ScriptStruct FATPCRotationSettings

// Begin ScriptStruct FATPCFOVSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCFOVSettings;
class UScriptStruct* FATPCFOVSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCFOVSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCFOVSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCFOVSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCFOVSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCFOVSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCFOVSettings>()
{
	return FATPCFOVSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCFOVSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFOV_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Rate of change of field of view(FOV)\n\x09* Interpolation used for validation settings between dif camera modes\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate of change of field of view(FOV)\nInterpolation used for validation settings between dif camera modes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotationFOVModifier_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Value - FOV modifier\n\x09* Time - Distance until to character\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Value - FOV modifier\n* Time - Distance until to character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedFOVModifier_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Value - FOV modifier\n\x09* Time - Movement speed\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Value - FOV modifier\n* Time - Movement speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeFOVWhenCineCamera_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @FOVInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @FOVInterpolation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFOV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FOVInterpolation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchRotationFOVModifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementSpeedFOVModifier;
	static void NewProp_ChangeFOVWhenCineCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeFOVWhenCineCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed_OLD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCFOVSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_CameraFOV = { "CameraFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFOVSettings, CameraFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFOV_MetaData), NewProp_CameraFOV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_FOVInterpolation = { "FOVInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFOVSettings, FOVInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVInterpolation_MetaData), NewProp_FOVInterpolation_MetaData) }; // 1929702493
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_PitchRotationFOVModifier = { "PitchRotationFOVModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFOVSettings, PitchRotationFOVModifier), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRotationFOVModifier_MetaData), NewProp_PitchRotationFOVModifier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_MovementSpeedFOVModifier = { "MovementSpeedFOVModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFOVSettings, MovementSpeedFOVModifier), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeedFOVModifier_MetaData), NewProp_MovementSpeedFOVModifier_MetaData) };
void Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_ChangeFOVWhenCineCamera_SetBit(void* Obj)
{
	((FATPCFOVSettings*)Obj)->ChangeFOVWhenCineCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_ChangeFOVWhenCineCamera = { "ChangeFOVWhenCineCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCFOVSettings), &Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_ChangeFOVWhenCineCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeFOVWhenCineCamera_MetaData), NewProp_ChangeFOVWhenCineCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_InterpolationSpeed_OLD = { "InterpolationSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFOVSettings, InterpolationSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSpeed_OLD_MetaData), NewProp_InterpolationSpeed_OLD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_CameraFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_FOVInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_PitchRotationFOVModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_MovementSpeedFOVModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_ChangeFOVWhenCineCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewProp_InterpolationSpeed_OLD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCFOVSettings",
	Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::PropPointers),
	sizeof(FATPCFOVSettings),
	alignof(FATPCFOVSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCFOVSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCFOVSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCFOVSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCFOVSettings.InnerSingleton;
}
// End ScriptStruct FATPCFOVSettings

// Begin ScriptStruct FATPCFadeSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCFadeSettings;
class UScriptStruct* FATPCFadeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCFadeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCFadeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCFadeSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCFadeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCFadeSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCFadeSettings>()
{
	return FATPCFadeSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCFadeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Time to completely show the object (if the material parameter = MaterialFadeMaxValue)\n\x09*\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to completely show the object (if the material parameter = MaterialFadeMaxValue)" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFadeMinValue_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Material param. During fade process this. Not support changing between different camera modes */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material param. During fade process this. Not support changing between different camera modes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFadeMaxValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFadeParamNames_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* The set of material parameters that will be set to the minimum @MaterialFadeMinValue or maximum @MaterialFadeMaxValue value.\n\x09* These parameters (usually only 1 here) should hide or show the object.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The set of material parameters that will be set to the minimum @MaterialFadeMinValue or maximum @MaterialFadeMaxValue value.\nThese parameters (usually only 1 here) should hide or show the object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeChannel_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* This channel used in trace for find for objects are between camera and character.\n\x09* see @UATPCCameraFadingObject::FindCollidedActors\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This channel used in trace for find for objects are between camera and character.\nsee @UATPCCameraFadingObject::FindCollidedActors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFadeSelfIfCollision_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Do need hide self character if he collided with camera.\n\x09* For camera check radius see @SelfFadeCheckRadius\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Do need hide self character if he collided with camera.\nFor camera check radius see @SelfFadeCheckRadius" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomFadeOutTimeForSelfFade_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, then custom fade time will be used @SelfFadeCustomFadeOutTime, otherwise will be used @FadeOutTime*/" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, then custom fade time will be used @SelfFadeCustomFadeOutTime, otherwise will be used @FadeOutTime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfFadeCustomFadeOutTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom fade time if @bUseCustomFadeOutTimeForSelfFade is true. Overrides @FadeOutTime */" },
#endif
		{ "EditCondition", "bUseCustomFadeOutTimeForSelfFade" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom fade time if @bUseCustomFadeOutTimeForSelfFade is true. Overrides @FadeOutTime" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfFadeCheckRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius sphere trace to determine camera collision with character*/" },
#endif
		{ "EditCondition", "bFadeSelfIfCollision" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius sphere trace to determine camera collision with character" },
#endif
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelfFadeAttachedActors_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, and if bFadeSelfIfCollision true then all attached actors to character will be faded */" },
#endif
		{ "EditCondition", "bFadeSelfIfCollision" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, and if bFadeSelfIfCollision true then all attached actors to character will be faded" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialFadeMinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialFadeMaxValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialFadeParamNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialFadeParamNames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FadeChannel;
	static void NewProp_bFadeSelfIfCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeSelfIfCollision;
	static void NewProp_bUseCustomFadeOutTimeForSelfFade_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomFadeOutTimeForSelfFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfFadeCustomFadeOutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfFadeCheckRadius;
	static void NewProp_bSelfFadeAttachedActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfFadeAttachedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCFadeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFadeSettings, FadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInTime_MetaData), NewProp_FadeInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFadeSettings, FadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutTime_MetaData), NewProp_FadeOutTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_MaterialFadeMinValue = { "MaterialFadeMinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFadeSettings, MaterialFadeMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFadeMinValue_MetaData), NewProp_MaterialFadeMinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_MaterialFadeMaxValue = { "MaterialFadeMaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFadeSettings, MaterialFadeMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFadeMaxValue_MetaData), NewProp_MaterialFadeMaxValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_MaterialFadeParamNames_Inner = { "MaterialFadeParamNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_MaterialFadeParamNames = { "MaterialFadeParamNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFadeSettings, MaterialFadeParamNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFadeParamNames_MetaData), NewProp_MaterialFadeParamNames_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_FadeChannel = { "FadeChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFadeSettings, FadeChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeChannel_MetaData), NewProp_FadeChannel_MetaData) }; // 756624936
void Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bFadeSelfIfCollision_SetBit(void* Obj)
{
	((FATPCFadeSettings*)Obj)->bFadeSelfIfCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bFadeSelfIfCollision = { "bFadeSelfIfCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCFadeSettings), &Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bFadeSelfIfCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFadeSelfIfCollision_MetaData), NewProp_bFadeSelfIfCollision_MetaData) };
void Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bUseCustomFadeOutTimeForSelfFade_SetBit(void* Obj)
{
	((FATPCFadeSettings*)Obj)->bUseCustomFadeOutTimeForSelfFade = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bUseCustomFadeOutTimeForSelfFade = { "bUseCustomFadeOutTimeForSelfFade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCFadeSettings), &Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bUseCustomFadeOutTimeForSelfFade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomFadeOutTimeForSelfFade_MetaData), NewProp_bUseCustomFadeOutTimeForSelfFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_SelfFadeCustomFadeOutTime = { "SelfFadeCustomFadeOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFadeSettings, SelfFadeCustomFadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfFadeCustomFadeOutTime_MetaData), NewProp_SelfFadeCustomFadeOutTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_SelfFadeCheckRadius = { "SelfFadeCheckRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFadeSettings, SelfFadeCheckRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfFadeCheckRadius_MetaData), NewProp_SelfFadeCheckRadius_MetaData) };
void Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bSelfFadeAttachedActors_SetBit(void* Obj)
{
	((FATPCFadeSettings*)Obj)->bSelfFadeAttachedActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bSelfFadeAttachedActors = { "bSelfFadeAttachedActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCFadeSettings), &Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bSelfFadeAttachedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelfFadeAttachedActors_MetaData), NewProp_bSelfFadeAttachedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_FadeInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_FadeOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_MaterialFadeMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_MaterialFadeMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_MaterialFadeParamNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_MaterialFadeParamNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_FadeChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bFadeSelfIfCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bUseCustomFadeOutTimeForSelfFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_SelfFadeCustomFadeOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_SelfFadeCheckRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewProp_bSelfFadeAttachedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCFadeSettings",
	Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::PropPointers),
	sizeof(FATPCFadeSettings),
	alignof(FATPCFadeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCFadeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCFadeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCFadeSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCFadeSettings.InnerSingleton;
}
// End ScriptStruct FATPCFadeSettings

// Begin ScriptStruct FATPCFollowTerrainSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCFollowTerrainSettings;
class UScriptStruct* FATPCFollowTerrainSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCFollowTerrainSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCFollowTerrainSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCFollowTerrainSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCFollowTerrainSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCFollowTerrainSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCFollowTerrainSettings>()
{
	return FATPCFollowTerrainSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Automatically change the camera angle based on the terrain\n*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically change the camera angle based on the terrain" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetCurve_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Curve with Socket offset. This curve don't override current socket offset, it modifier it(via + operation)\n\x09* Curve X - x offset\n\x09* Curve Y - y offset\n\x09* Curve Z - z offset\n\x09* Curve Time - current terrain pitch angle\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve with Socket offset. This curve don't override current socket offset, it modifier it(via + operation)\nCurve X - x offset\nCurve Y - y offset\nCurve Z - z offset\nCurve Time - current terrain pitch angle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Socket offset change speed */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket offset change speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotationCurve_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Curve with Pitch offset. This curve don't override current pitch angle, it modifier it(via + operation)\n\x09* Curve Value - Pitch offset\n\x09* Curve Time - current terrain pitch angle\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve with Pitch offset. This curve don't override current pitch angle, it modifier it(via + operation)\nCurve Value - Pitch offset\nCurve Time - current terrain pitch angle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotationInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pitch offset change speed */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pitch offset change speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangePitchRotationDelay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay for applying Socket offset from @SocketOffsetCurve and pitch offset from @PitchRotationCurve after changing the terrain angle*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay for applying Socket offset from @SocketOffsetCurve and pitch offset from @PitchRotationCurve after changing the terrain angle" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetInterpSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @SocketOffsetInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @SocketOffsetInterpolation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleRotationInterpSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @PitchRotationInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @PitchRotationInterpolation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocketOffsetCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffsetInterpolation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchRotationCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRotationInterpolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangePitchRotationDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SocketOffsetInterpSpeed_OLD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleRotationInterpSpeed_OLD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCFollowTerrainSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_SocketOffsetCurve = { "SocketOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFollowTerrainSettings, SocketOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetCurve_MetaData), NewProp_SocketOffsetCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_SocketOffsetInterpolation = { "SocketOffsetInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFollowTerrainSettings, SocketOffsetInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetInterpolation_MetaData), NewProp_SocketOffsetInterpolation_MetaData) }; // 1929702493
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_PitchRotationCurve = { "PitchRotationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFollowTerrainSettings, PitchRotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRotationCurve_MetaData), NewProp_PitchRotationCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_PitchRotationInterpolation = { "PitchRotationInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFollowTerrainSettings, PitchRotationInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRotationInterpolation_MetaData), NewProp_PitchRotationInterpolation_MetaData) }; // 1929702493
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_ChangePitchRotationDelay = { "ChangePitchRotationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFollowTerrainSettings, ChangePitchRotationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangePitchRotationDelay_MetaData), NewProp_ChangePitchRotationDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_SocketOffsetInterpSpeed_OLD = { "SocketOffsetInterpSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFollowTerrainSettings, SocketOffsetInterpSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetInterpSpeed_OLD_MetaData), NewProp_SocketOffsetInterpSpeed_OLD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_AngleRotationInterpSpeed_OLD = { "AngleRotationInterpSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCFollowTerrainSettings, AngleRotationInterpSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRotationInterpSpeed_OLD_MetaData), NewProp_AngleRotationInterpSpeed_OLD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_SocketOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_SocketOffsetInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_PitchRotationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_PitchRotationInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_ChangePitchRotationDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_SocketOffsetInterpSpeed_OLD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewProp_AngleRotationInterpSpeed_OLD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCFollowTerrainSettings",
	Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::PropPointers),
	sizeof(FATPCFollowTerrainSettings),
	alignof(FATPCFollowTerrainSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCFollowTerrainSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCFollowTerrainSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCFollowTerrainSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCFollowTerrainSettings.InnerSingleton;
}
// End ScriptStruct FATPCFollowTerrainSettings

// Begin ScriptStruct FATPCCameraShakesSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCCameraShakesSettings;
class UScriptStruct* FATPCCameraShakesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraShakesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCCameraShakesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCCameraShakesSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCCameraShakesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraShakesSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCCameraShakesSettings>()
{
	return FATPCCameraShakesSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterToModeCameraShake_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** CameraShake that are activated when camera mode started */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CameraShake that are activated when camera mode started" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularCameraShake_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* CameraShake that are activated when camera mode started if EnterToModeCameraShake is null \n\x09* or activated after playing @EnterToModeCameraShake\n\x09* IMPORTANT: This shake is looping\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CameraShake that are activated when camera mode started if EnterToModeCameraShake is null\nor activated after playing @EnterToModeCameraShake\nIMPORTANT: This shake is looping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedStopAllCameraShakeOnEnterToCameraMode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If true stop all camera shakes on camera */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true stop all camera shakes on camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnterToModeCameraShake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegularCameraShake;
	static void NewProp_bNeedStopAllCameraShakeOnEnterToCameraMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedStopAllCameraShakeOnEnterToCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCCameraShakesSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::NewProp_EnterToModeCameraShake = { "EnterToModeCameraShake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraShakesSettings, EnterToModeCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterToModeCameraShake_MetaData), NewProp_EnterToModeCameraShake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::NewProp_RegularCameraShake = { "RegularCameraShake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraShakesSettings, RegularCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularCameraShake_MetaData), NewProp_RegularCameraShake_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::NewProp_bNeedStopAllCameraShakeOnEnterToCameraMode_SetBit(void* Obj)
{
	((FATPCCameraShakesSettings*)Obj)->bNeedStopAllCameraShakeOnEnterToCameraMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::NewProp_bNeedStopAllCameraShakeOnEnterToCameraMode = { "bNeedStopAllCameraShakeOnEnterToCameraMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraShakesSettings), &Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::NewProp_bNeedStopAllCameraShakeOnEnterToCameraMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedStopAllCameraShakeOnEnterToCameraMode_MetaData), NewProp_bNeedStopAllCameraShakeOnEnterToCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::NewProp_EnterToModeCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::NewProp_RegularCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::NewProp_bNeedStopAllCameraShakeOnEnterToCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCCameraShakesSettings",
	Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::PropPointers),
	sizeof(FATPCCameraShakesSettings),
	alignof(FATPCCameraShakesSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraShakesSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraShakesSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCCameraShakesSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraShakesSettings.InnerSingleton;
}
// End ScriptStruct FATPCCameraShakesSettings

// Begin ScriptStruct FATPCLockOnTargetSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCLockOnTargetSettings;
class UScriptStruct* FATPCLockOnTargetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCLockOnTargetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCLockOnTargetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCLockOnTargetSettings, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCLockOnTargetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCLockOnTargetSettings.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCLockOnTargetSettings>()
{
	return FATPCLockOnTargetSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetTargetOnChangeCameraMode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, reset TargetActor from CameraLockOnTargetObject when other camera mode is set */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, reset TargetActor from CameraLockOnTargetObject when other camera mode is set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateCameraByYaw_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, rotate camera by yaw when target is set */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, rotate camera by yaw when target is set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateCameraByPitch_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, rotate camera by pitch when target is set */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, rotate camera by pitch when target is set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera rotation interpolation speed for aiming to target */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera rotation interpolation speed for aiming to target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetInterpolationSpeedAfterChangeTarget_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If true, reset CameraRotationInterpolation speed after set new a non null target actor(when the target cleared interpolation speed will be always reset)*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, reset CameraRotationInterpolation speed after set new a non null target actor(when the target cleared interpolation speed will be always reset)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampByCameraModeRotationLimits_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, use rotation limits @ViewPitchMin, @ViewPitchMax, @ViewYawhMin, @ViewYawMax from RotationSettings. Otherwise set camera rotation to a target without limits */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, use rotation limits @ViewPitchMin, @ViewPitchMax, @ViewYawhMin, @ViewYawMax from RotationSettings. Otherwise set camera rotation to a target without limits" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxLockDistance_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, set a target only if distance between the camera owner and the target less than @MaxLockDistance */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, set a target only if distance between the camera owner and the target less than @MaxLockDistance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetTargetOnReachMaxDistance_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If true, a target will be cleared if distance between the camera owner and the target more than @MaxLockDistance */" },
#endif
		{ "EditCondition", "bUseMaxLockDistance" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, a target will be cleared if distance between the camera owner and the target more than @MaxLockDistance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLockDistance_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max distance between the camera owner and a target, see @bUseMaxLockDistance and @bResetTargetOnReachMaxDistance */" },
#endif
		{ "EditCondition", "bUseMaxLockDistance" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance between the camera owner and a target, see @bUseMaxLockDistance and @bResetTargetOnReachMaxDistance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCheckTargetVisibility_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, set a target only if line trace from the camera location to the target is clear */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, set a target only if line trace from the camera location to the target is clear" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetLockOnLostVisibleTarget_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, clear a target if line trace from the camera location to the target blocked */" },
#endif
		{ "EditCondition", "bUseCheckTargetVisibility" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, clear a target if line trace from the camera location to the target blocked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckVisibilityTraceChannel_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trace channel for checks by @bUseCheckTargetVisibility and @bResetLockOnLostVisibleTarget */" },
#endif
		{ "EditCondition", "bUseCheckTargetVisibility" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace channel for checks by @bUseCheckTargetVisibility and @bResetLockOnLostVisibleTarget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHardLockOnTarget_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, disable a player rotation input and hard rotate the camera to a target. Otherwise, allow the player input, but the camera will continue rotation to the target */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, disable a player rotation input and hard rotate the camera to a target. Otherwise, allow the player input, but the camera will continue rotation to the target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseLockAfterPlayerInput_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, @bHardLockOnTarget is false and the camera has a target, then after a player input camera will stop rotating for @PauseLockAfterPlayerInputTime time */" },
#endif
		{ "EditCondition", "!bHardLockOnTarget" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, @bHardLockOnTarget is false and the camera has a target, then after a player input camera will stop rotating for @PauseLockAfterPlayerInputTime time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseLockAfterPlayerInputTime_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See @bPauseLockAfterPlayerInput */" },
#endif
		{ "EditCondition", "bPauseLockAfterPlayerInput && !bHardLockOnTarget" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See @bPauseLockAfterPlayerInput" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetTargetAfterPlayerInput_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, reset a target after a certain player rotation input @RequiredPlayerInputForResetTarget (usually via mouse or gamepad) */" },
#endif
		{ "EditCondition", "!bHardLockOnTarget" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, reset a target after a certain player rotation input @RequiredPlayerInputForResetTarget (usually via mouse or gamepad)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPlayerInputForResetTarget_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Required a player input for reset a target. Input will be accumulated and after accumulated input is great then @RequiredPlayerInputForResetTarget on any axis the target will be reset \n\x09* If @ResetAccumulatedPlayerInputForResetTargetDelay > 0 accumulated input will be reset after player stop input and expiration time. Otherwise, input immediately will be reset after player stop input \n\x09*/" },
#endif
		{ "EditCondition", "bResetTargetAfterPlayerInput && !bHardLockOnTarget" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Required a player input for reset a target. Input will be accumulated and after accumulated input is great then @RequiredPlayerInputForResetTarget on any axis the target will be reset\nIf @ResetAccumulatedPlayerInputForResetTargetDelay > 0 accumulated input will be reset after player stop input and expiration time. Otherwise, input immediately will be reset after player stop input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetAccumulatedPlayerInputForResetTargetDelay_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See @RequiredPlayerInputForResetTarget */" },
#endif
		{ "EditCondition", "bResetTargetAfterPlayerInput && !bHardLockOnTarget" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See @RequiredPlayerInputForResetTarget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDesiredConeRotation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If true, use approximate cone @DeisredConeRotationYaw camera aiming to a target. For visualize enable @CameraDebugRules::bEnableLockOnTargetDebug from ATPCCameraComponent\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, use approximate cone @DeisredConeRotationYaw camera aiming to a target. For visualize enable @CameraDebugRules::bEnableLockOnTargetDebug from ATPCCameraComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeisredConeRotationYaw_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See @bUseDesiredConeRotation */" },
#endif
		{ "EditCondition", "bUseDesiredConeRotation" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See @bUseDesiredConeRotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @CameraRotationInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @CameraRotationInterpolation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSmoothRotationSpeed_OLD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DEPRECATED. See @CameraRotationInterpolation */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEPRECATED. See @CameraRotationInterpolation" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bResetTargetOnChangeCameraMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTargetOnChangeCameraMode;
	static void NewProp_RotateCameraByYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateCameraByYaw;
	static void NewProp_RotateCameraByPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateCameraByPitch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotationInterpolation;
	static void NewProp_bResetInterpolationSpeedAfterChangeTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetInterpolationSpeedAfterChangeTarget;
	static void NewProp_bClampByCameraModeRotationLimits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampByCameraModeRotationLimits;
	static void NewProp_bUseMaxLockDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxLockDistance;
	static void NewProp_bResetTargetOnReachMaxDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTargetOnReachMaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLockDistance;
	static void NewProp_bUseCheckTargetVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCheckTargetVisibility;
	static void NewProp_bResetLockOnLostVisibleTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetLockOnLostVisibleTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckVisibilityTraceChannel;
	static void NewProp_bHardLockOnTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHardLockOnTarget;
	static void NewProp_bPauseLockAfterPlayerInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseLockAfterPlayerInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PauseLockAfterPlayerInputTime;
	static void NewProp_bResetTargetAfterPlayerInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTargetAfterPlayerInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredPlayerInputForResetTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetAccumulatedPlayerInputForResetTargetDelay;
	static void NewProp_bUseDesiredConeRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDesiredConeRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeisredConeRotationYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationSpeed_OLD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditionalSmoothRotationSpeed_OLD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCLockOnTargetSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetOnChangeCameraMode_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bResetTargetOnChangeCameraMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetOnChangeCameraMode = { "bResetTargetOnChangeCameraMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetOnChangeCameraMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetTargetOnChangeCameraMode_MetaData), NewProp_bResetTargetOnChangeCameraMode_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RotateCameraByYaw_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->RotateCameraByYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RotateCameraByYaw = { "RotateCameraByYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RotateCameraByYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateCameraByYaw_MetaData), NewProp_RotateCameraByYaw_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RotateCameraByPitch_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->RotateCameraByPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RotateCameraByPitch = { "RotateCameraByPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RotateCameraByPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateCameraByPitch_MetaData), NewProp_RotateCameraByPitch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_CameraRotationInterpolation = { "CameraRotationInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLockOnTargetSettings, CameraRotationInterpolation), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationInterpolation_MetaData), NewProp_CameraRotationInterpolation_MetaData) }; // 1929702493
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetInterpolationSpeedAfterChangeTarget_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bResetInterpolationSpeedAfterChangeTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetInterpolationSpeedAfterChangeTarget = { "bResetInterpolationSpeedAfterChangeTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetInterpolationSpeedAfterChangeTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetInterpolationSpeedAfterChangeTarget_MetaData), NewProp_bResetInterpolationSpeedAfterChangeTarget_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bClampByCameraModeRotationLimits_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bClampByCameraModeRotationLimits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bClampByCameraModeRotationLimits = { "bClampByCameraModeRotationLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bClampByCameraModeRotationLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampByCameraModeRotationLimits_MetaData), NewProp_bClampByCameraModeRotationLimits_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseMaxLockDistance_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bUseMaxLockDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseMaxLockDistance = { "bUseMaxLockDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseMaxLockDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxLockDistance_MetaData), NewProp_bUseMaxLockDistance_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetOnReachMaxDistance_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bResetTargetOnReachMaxDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetOnReachMaxDistance = { "bResetTargetOnReachMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetOnReachMaxDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetTargetOnReachMaxDistance_MetaData), NewProp_bResetTargetOnReachMaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_MaxLockDistance = { "MaxLockDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLockOnTargetSettings, MaxLockDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLockDistance_MetaData), NewProp_MaxLockDistance_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseCheckTargetVisibility_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bUseCheckTargetVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseCheckTargetVisibility = { "bUseCheckTargetVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseCheckTargetVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCheckTargetVisibility_MetaData), NewProp_bUseCheckTargetVisibility_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetLockOnLostVisibleTarget_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bResetLockOnLostVisibleTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetLockOnLostVisibleTarget = { "bResetLockOnLostVisibleTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetLockOnLostVisibleTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetLockOnLostVisibleTarget_MetaData), NewProp_bResetLockOnLostVisibleTarget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_CheckVisibilityTraceChannel = { "CheckVisibilityTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLockOnTargetSettings, CheckVisibilityTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckVisibilityTraceChannel_MetaData), NewProp_CheckVisibilityTraceChannel_MetaData) }; // 756624936
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bHardLockOnTarget_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bHardLockOnTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bHardLockOnTarget = { "bHardLockOnTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bHardLockOnTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHardLockOnTarget_MetaData), NewProp_bHardLockOnTarget_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bPauseLockAfterPlayerInput_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bPauseLockAfterPlayerInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bPauseLockAfterPlayerInput = { "bPauseLockAfterPlayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bPauseLockAfterPlayerInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseLockAfterPlayerInput_MetaData), NewProp_bPauseLockAfterPlayerInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_PauseLockAfterPlayerInputTime = { "PauseLockAfterPlayerInputTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLockOnTargetSettings, PauseLockAfterPlayerInputTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseLockAfterPlayerInputTime_MetaData), NewProp_PauseLockAfterPlayerInputTime_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetAfterPlayerInput_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bResetTargetAfterPlayerInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetAfterPlayerInput = { "bResetTargetAfterPlayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetAfterPlayerInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetTargetAfterPlayerInput_MetaData), NewProp_bResetTargetAfterPlayerInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RequiredPlayerInputForResetTarget = { "RequiredPlayerInputForResetTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLockOnTargetSettings, RequiredPlayerInputForResetTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredPlayerInputForResetTarget_MetaData), NewProp_RequiredPlayerInputForResetTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_ResetAccumulatedPlayerInputForResetTargetDelay = { "ResetAccumulatedPlayerInputForResetTargetDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLockOnTargetSettings, ResetAccumulatedPlayerInputForResetTargetDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetAccumulatedPlayerInputForResetTargetDelay_MetaData), NewProp_ResetAccumulatedPlayerInputForResetTargetDelay_MetaData) };
void Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseDesiredConeRotation_SetBit(void* Obj)
{
	((FATPCLockOnTargetSettings*)Obj)->bUseDesiredConeRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseDesiredConeRotation = { "bUseDesiredConeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCLockOnTargetSettings), &Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseDesiredConeRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDesiredConeRotation_MetaData), NewProp_bUseDesiredConeRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_DeisredConeRotationYaw = { "DeisredConeRotationYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLockOnTargetSettings, DeisredConeRotationYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeisredConeRotationYaw_MetaData), NewProp_DeisredConeRotationYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_CameraRotationSpeed_OLD = { "CameraRotationSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLockOnTargetSettings, CameraRotationSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationSpeed_OLD_MetaData), NewProp_CameraRotationSpeed_OLD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_AdditionalSmoothRotationSpeed_OLD = { "AdditionalSmoothRotationSpeed_OLD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCLockOnTargetSettings, AdditionalSmoothRotationSpeed_OLD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSmoothRotationSpeed_OLD_MetaData), NewProp_AdditionalSmoothRotationSpeed_OLD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetOnChangeCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RotateCameraByYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RotateCameraByPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_CameraRotationInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetInterpolationSpeedAfterChangeTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bClampByCameraModeRotationLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseMaxLockDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetOnReachMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_MaxLockDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseCheckTargetVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetLockOnLostVisibleTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_CheckVisibilityTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bHardLockOnTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bPauseLockAfterPlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_PauseLockAfterPlayerInputTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bResetTargetAfterPlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_RequiredPlayerInputForResetTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_ResetAccumulatedPlayerInputForResetTargetDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_bUseDesiredConeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_DeisredConeRotationYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_CameraRotationSpeed_OLD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewProp_AdditionalSmoothRotationSpeed_OLD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCLockOnTargetSettings",
	Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::PropPointers),
	sizeof(FATPCLockOnTargetSettings),
	alignof(FATPCLockOnTargetSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCLockOnTargetSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCLockOnTargetSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCLockOnTargetSettings.InnerSingleton, Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCLockOnTargetSettings.InnerSingleton;
}
// End ScriptStruct FATPCLockOnTargetSettings

// Begin ScriptStruct FATPCCameraMode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCCameraMode;
class UScriptStruct* FATPCCameraMode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraMode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCCameraMode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCCameraMode, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCCameraMode"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraMode.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCCameraMode>()
{
	return FATPCCameraMode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLocationSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bEnableLocationSettings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bEnableRotationSettings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFOVSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bEnableFOVSettings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFadeSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bEnableFadeSettings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFollowTerrainSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowTerrainSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bEnableFollowTerrainSettings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraShakesSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakesSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bEnableCameraShakesSettings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnTargetSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableLocationSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLocationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationSettings;
	static void NewProp_bEnableRotationSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationSettings;
	static void NewProp_bEnableFOVSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFOVSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FOVSettings;
	static void NewProp_bEnableFadeSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFadeSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FadeSettings;
	static void NewProp_bEnableFollowTerrainSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFollowTerrainSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FollowTerrainSettings;
	static void NewProp_bEnableCameraShakesSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraShakesSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraShakesSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockOnTargetSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCCameraMode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableLocationSettings_SetBit(void* Obj)
{
	((FATPCCameraMode*)Obj)->bEnableLocationSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableLocationSettings = { "bEnableLocationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraMode), &Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableLocationSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLocationSettings_MetaData), NewProp_bEnableLocationSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_LocationSettings = { "LocationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraMode, LocationSettings), Z_Construct_UScriptStruct_FATPCLocationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationSettings_MetaData), NewProp_LocationSettings_MetaData) }; // 1792981931
void Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableRotationSettings_SetBit(void* Obj)
{
	((FATPCCameraMode*)Obj)->bEnableRotationSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableRotationSettings = { "bEnableRotationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraMode), &Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableRotationSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRotationSettings_MetaData), NewProp_bEnableRotationSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_RotationSettings = { "RotationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraMode, RotationSettings), Z_Construct_UScriptStruct_FATPCRotationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSettings_MetaData), NewProp_RotationSettings_MetaData) }; // 1357877044
void Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFOVSettings_SetBit(void* Obj)
{
	((FATPCCameraMode*)Obj)->bEnableFOVSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFOVSettings = { "bEnableFOVSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraMode), &Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFOVSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFOVSettings_MetaData), NewProp_bEnableFOVSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_FOVSettings = { "FOVSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraMode, FOVSettings), Z_Construct_UScriptStruct_FATPCFOVSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVSettings_MetaData), NewProp_FOVSettings_MetaData) }; // 3861984884
void Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFadeSettings_SetBit(void* Obj)
{
	((FATPCCameraMode*)Obj)->bEnableFadeSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFadeSettings = { "bEnableFadeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraMode), &Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFadeSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFadeSettings_MetaData), NewProp_bEnableFadeSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_FadeSettings = { "FadeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraMode, FadeSettings), Z_Construct_UScriptStruct_FATPCFadeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeSettings_MetaData), NewProp_FadeSettings_MetaData) }; // 953277103
void Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFollowTerrainSettings_SetBit(void* Obj)
{
	((FATPCCameraMode*)Obj)->bEnableFollowTerrainSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFollowTerrainSettings = { "bEnableFollowTerrainSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraMode), &Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFollowTerrainSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFollowTerrainSettings_MetaData), NewProp_bEnableFollowTerrainSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_FollowTerrainSettings = { "FollowTerrainSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraMode, FollowTerrainSettings), Z_Construct_UScriptStruct_FATPCFollowTerrainSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowTerrainSettings_MetaData), NewProp_FollowTerrainSettings_MetaData) }; // 3177938203
void Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableCameraShakesSettings_SetBit(void* Obj)
{
	((FATPCCameraMode*)Obj)->bEnableCameraShakesSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableCameraShakesSettings = { "bEnableCameraShakesSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraMode), &Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableCameraShakesSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraShakesSettings_MetaData), NewProp_bEnableCameraShakesSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_CameraShakesSettings = { "CameraShakesSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraMode, CameraShakesSettings), Z_Construct_UScriptStruct_FATPCCameraShakesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakesSettings_MetaData), NewProp_CameraShakesSettings_MetaData) }; // 2598822233
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_LockOnTargetSettings = { "LockOnTargetSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCCameraMode, LockOnTargetSettings), Z_Construct_UScriptStruct_FATPCLockOnTargetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnTargetSettings_MetaData), NewProp_LockOnTargetSettings_MetaData) }; // 1187569127
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableLocationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_LocationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableRotationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_RotationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFOVSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_FOVSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFadeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_FadeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableFollowTerrainSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_FollowTerrainSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_bEnableCameraShakesSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_CameraShakesSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewProp_LockOnTargetSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCCameraMode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCCameraMode",
	Z_Construct_UScriptStruct_FATPCCameraMode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraMode_Statics::PropPointers),
	sizeof(FATPCCameraMode),
	alignof(FATPCCameraMode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraMode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCCameraMode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraMode()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCCameraMode.InnerSingleton, Z_Construct_UScriptStruct_FATPCCameraMode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraMode.InnerSingleton;
}
// End ScriptStruct FATPCCameraMode

// Begin ScriptStruct FATPCCameraDebugRules
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCCameraDebugRules;
class UScriptStruct* FATPCCameraDebugRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraDebugRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCCameraDebugRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCCameraDebugRules, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCCameraDebugRules"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraDebugRules.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCCameraDebugRules>()
{
	return FATPCCameraDebugRules::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrintErrorsToScreen_MetaData[] = {
		{ "Category", "Logs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Put errors to log and screen, otherwise put only to log */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Put errors to log and screen, otherwise put only to log" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLocationObjectDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Debug object - CameraLocationObject\n\x09* Show debug information about location object\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug object - CameraLocationObject\nShow debug information about location object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRoofCollisionCheckDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Debug object - CameraLocationObject\n\x09* Show traces from roof collision and print info \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug object - CameraLocationObject\nShow traces from roof collision and print info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDrawFadeShapeDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Debug object - CameraFadingObject\n\x09* Show debug trace for find objects between camera and character\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug object - CameraFadingObject\nShow debug trace for find objects between camera and character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowTerrainEnableDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Debug object - CameraFollowTerrainObject\n\x09* Print debug data\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug object - CameraFollowTerrainObject\nPrint debug data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLockOnTargetDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Debug object - CameraLockOnTargetObject\n\x09* Print and draw debug data\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug object - CameraLockOnTargetObject\nPrint and draw debug data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockOnTargetShowTargetDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Debug object - CameraLockOnTargetObject\n\x09* Highlights target on scene via debug arrow\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Debug object - CameraLockOnTargetObject\n* Highlights target on scene via debug arrow" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPrintErrorsToScreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintErrorsToScreen;
	static void NewProp_bEnableLocationObjectDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLocationObjectDebug;
	static void NewProp_bEnableRoofCollisionCheckDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRoofCollisionCheckDebug;
	static void NewProp_bEnableDrawFadeShapeDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDrawFadeShapeDebug;
	static void NewProp_bFollowTerrainEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowTerrainEnableDebug;
	static void NewProp_bEnableLockOnTargetDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLockOnTargetDebug;
	static void NewProp_bLockOnTargetShowTargetDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOnTargetShowTargetDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCCameraDebugRules>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bPrintErrorsToScreen_SetBit(void* Obj)
{
	((FATPCCameraDebugRules*)Obj)->bPrintErrorsToScreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bPrintErrorsToScreen = { "bPrintErrorsToScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraDebugRules), &Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bPrintErrorsToScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrintErrorsToScreen_MetaData), NewProp_bPrintErrorsToScreen_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableLocationObjectDebug_SetBit(void* Obj)
{
	((FATPCCameraDebugRules*)Obj)->bEnableLocationObjectDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableLocationObjectDebug = { "bEnableLocationObjectDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraDebugRules), &Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableLocationObjectDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLocationObjectDebug_MetaData), NewProp_bEnableLocationObjectDebug_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableRoofCollisionCheckDebug_SetBit(void* Obj)
{
	((FATPCCameraDebugRules*)Obj)->bEnableRoofCollisionCheckDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableRoofCollisionCheckDebug = { "bEnableRoofCollisionCheckDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraDebugRules), &Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableRoofCollisionCheckDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRoofCollisionCheckDebug_MetaData), NewProp_bEnableRoofCollisionCheckDebug_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableDrawFadeShapeDebug_SetBit(void* Obj)
{
	((FATPCCameraDebugRules*)Obj)->bEnableDrawFadeShapeDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableDrawFadeShapeDebug = { "bEnableDrawFadeShapeDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraDebugRules), &Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableDrawFadeShapeDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDrawFadeShapeDebug_MetaData), NewProp_bEnableDrawFadeShapeDebug_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bFollowTerrainEnableDebug_SetBit(void* Obj)
{
	((FATPCCameraDebugRules*)Obj)->bFollowTerrainEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bFollowTerrainEnableDebug = { "bFollowTerrainEnableDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraDebugRules), &Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bFollowTerrainEnableDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowTerrainEnableDebug_MetaData), NewProp_bFollowTerrainEnableDebug_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableLockOnTargetDebug_SetBit(void* Obj)
{
	((FATPCCameraDebugRules*)Obj)->bEnableLockOnTargetDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableLockOnTargetDebug = { "bEnableLockOnTargetDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraDebugRules), &Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableLockOnTargetDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLockOnTargetDebug_MetaData), NewProp_bEnableLockOnTargetDebug_MetaData) };
void Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bLockOnTargetShowTargetDebug_SetBit(void* Obj)
{
	((FATPCCameraDebugRules*)Obj)->bLockOnTargetShowTargetDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bLockOnTargetShowTargetDebug = { "bLockOnTargetShowTargetDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCCameraDebugRules), &Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bLockOnTargetShowTargetDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockOnTargetShowTargetDebug_MetaData), NewProp_bLockOnTargetShowTargetDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bPrintErrorsToScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableLocationObjectDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableRoofCollisionCheckDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableDrawFadeShapeDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bFollowTerrainEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bEnableLockOnTargetDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewProp_bLockOnTargetShowTargetDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCCameraDebugRules",
	Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::PropPointers),
	sizeof(FATPCCameraDebugRules),
	alignof(FATPCCameraDebugRules),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraDebugRules()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCCameraDebugRules.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCCameraDebugRules.InnerSingleton, Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCCameraDebugRules.InnerSingleton;
}
// End ScriptStruct FATPCCameraDebugRules

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FATPCCameraLocationLagSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCCameraLocationLagSettings_Statics::NewStructOps, TEXT("ATPCCameraLocationLagSettings"), &Z_Registration_Info_UScriptStruct_ATPCCameraLocationLagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCCameraLocationLagSettings), 113406157U) },
		{ FATPCCameraRotationLagSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCCameraRotationLagSettings_Statics::NewStructOps, TEXT("ATPCCameraRotationLagSettings"), &Z_Registration_Info_UScriptStruct_ATPCCameraRotationLagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCCameraRotationLagSettings), 331717640U) },
		{ FATPCLocationSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCLocationSettings_Statics::NewStructOps, TEXT("ATPCLocationSettings"), &Z_Registration_Info_UScriptStruct_ATPCLocationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCLocationSettings), 1792981931U) },
		{ FATPCRotationOffsetSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCRotationOffsetSettings_Statics::NewStructOps, TEXT("ATPCRotationOffsetSettings"), &Z_Registration_Info_UScriptStruct_ATPCRotationOffsetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCRotationOffsetSettings), 2737839955U) },
		{ FATPCRoofCollisionCheckSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCRoofCollisionCheckSettings_Statics::NewStructOps, TEXT("ATPCRoofCollisionCheckSettings"), &Z_Registration_Info_UScriptStruct_ATPCRoofCollisionCheckSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCRoofCollisionCheckSettings), 2774749043U) },
		{ FATPCViewRotationToActorRotationSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCViewRotationToActorRotationSettings_Statics::NewStructOps, TEXT("ATPCViewRotationToActorRotationSettings"), &Z_Registration_Info_UScriptStruct_ATPCViewRotationToActorRotationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCViewRotationToActorRotationSettings), 258604471U) },
		{ FATPCRotationSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCRotationSettings_Statics::NewStructOps, TEXT("ATPCRotationSettings"), &Z_Registration_Info_UScriptStruct_ATPCRotationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCRotationSettings), 1357877044U) },
		{ FATPCFOVSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCFOVSettings_Statics::NewStructOps, TEXT("ATPCFOVSettings"), &Z_Registration_Info_UScriptStruct_ATPCFOVSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCFOVSettings), 3861984884U) },
		{ FATPCFadeSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCFadeSettings_Statics::NewStructOps, TEXT("ATPCFadeSettings"), &Z_Registration_Info_UScriptStruct_ATPCFadeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCFadeSettings), 953277103U) },
		{ FATPCFollowTerrainSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCFollowTerrainSettings_Statics::NewStructOps, TEXT("ATPCFollowTerrainSettings"), &Z_Registration_Info_UScriptStruct_ATPCFollowTerrainSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCFollowTerrainSettings), 3177938203U) },
		{ FATPCCameraShakesSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCCameraShakesSettings_Statics::NewStructOps, TEXT("ATPCCameraShakesSettings"), &Z_Registration_Info_UScriptStruct_ATPCCameraShakesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCCameraShakesSettings), 2598822233U) },
		{ FATPCLockOnTargetSettings::StaticStruct, Z_Construct_UScriptStruct_FATPCLockOnTargetSettings_Statics::NewStructOps, TEXT("ATPCLockOnTargetSettings"), &Z_Registration_Info_UScriptStruct_ATPCLockOnTargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCLockOnTargetSettings), 1187569127U) },
		{ FATPCCameraMode::StaticStruct, Z_Construct_UScriptStruct_FATPCCameraMode_Statics::NewStructOps, TEXT("ATPCCameraMode"), &Z_Registration_Info_UScriptStruct_ATPCCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCCameraMode), 1519354485U) },
		{ FATPCCameraDebugRules::StaticStruct, Z_Construct_UScriptStruct_FATPCCameraDebugRules_Statics::NewStructOps, TEXT("ATPCCameraDebugRules"), &Z_Registration_Info_UScriptStruct_ATPCCameraDebugRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCCameraDebugRules), 2895171853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCTypes_h_3872367096(TEXT("/Script/AdvancedThirdPersonCamera"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
