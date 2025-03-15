// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCInterpolationSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCInterpolationSpeed() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UEnum* Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCInterploationSpeed();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Enum EATPCInterpolationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EATPCInterpolationType;
static UEnum* EATPCInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EATPCInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EATPCInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("EATPCInterpolationType"));
	}
	return Z_Registration_Info_UEnum_EATPCInterpolationType.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UEnum* StaticEnum<EATPCInterpolationType>()
{
	return EATPCInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ConstInterpolation.Comment", "//Interpolation via  FMath::FInterpTo\n" },
		{ "ConstInterpolation.Name", "EATPCInterpolationType::ConstInterpolation" },
		{ "ConstInterpolation.ToolTip", "Interpolation via  FMath::FInterpTo" },
		{ "ModuleRelativePath", "Public/ATPCInterpolationSpeed.h" },
		{ "SmoothInterpolation.Name", "EATPCInterpolationType::SmoothInterpolation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EATPCInterpolationType::SmoothInterpolation", (int64)EATPCInterpolationType::SmoothInterpolation },
		{ "EATPCInterpolationType::ConstInterpolation", (int64)EATPCInterpolationType::ConstInterpolation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	"EATPCInterpolationType",
	"EATPCInterpolationType",
	Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType()
{
	if (!Z_Registration_Info_UEnum_EATPCInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EATPCInterpolationType.InnerSingleton, Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EATPCInterpolationType.InnerSingleton;
}
// End Enum EATPCInterpolationType

// Begin ScriptStruct FATPCInterploationSpeed
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ATPCInterploationSpeed;
class UScriptStruct* FATPCInterploationSpeed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCInterploationSpeed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ATPCInterploationSpeed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FATPCInterploationSpeed, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("ATPCInterploationSpeed"));
	}
	return Z_Registration_Info_UScriptStruct_ATPCInterploationSpeed.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* StaticStruct<FATPCInterploationSpeed>()
{
	return FATPCInterploationSpeed::StaticStruct();
}
struct Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* Interpolation speed with self interpolation value\n* For correct get @InterpolationSpeed in BP use InterpolationSpeed_GetCurrentInterpolationSpeed function. For C++ use GetCurrentInterpolationSpeed function\n*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCInterpolationSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Interpolation speed with self interpolation value\n* For correct get @InterpolationSpeed in BP use InterpolationSpeed_GetCurrentInterpolationSpeed function. For C++ use GetCurrentInterpolationSpeed function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolation speed */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCInterpolationSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolation speed" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpType_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interpolation type */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCInterpolationSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolation type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInterpSpeedToInterpolation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, @InterpSpeed will be interpolated with speed @InterpSpeedToInterpolation and reset after interpolation result value is equals to interpolation target value */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCInterpolationSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, @InterpSpeed will be interpolated with speed @InterpSpeedToInterpolation and reset after interpolation result value is equals to interpolation target value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedToInterpolation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See @bUseInterpSpeedToInterpolation */" },
#endif
		{ "EditCondition", "bUseInterpSpeedToInterpolation" },
		{ "ModuleRelativePath", "Public/ATPCInterpolationSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See @bUseInterpSpeedToInterpolation" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetInterpSpeedTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tolerance between result and target interpolation value for reset @InterpSpeed. See @bUseInterpSpeedToInterpolation */" },
#endif
		{ "EditCondition", "bUseInterpSpeedToInterpolation" },
		{ "ModuleRelativePath", "Public/ATPCInterpolationSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tolerance between result and target interpolation value for reset @InterpSpeed. See @bUseInterpSpeedToInterpolation" },
#endif
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpType;
	static void NewProp_bUseInterpSpeedToInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInterpSpeedToInterpolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedToInterpolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetInterpSpeedTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FATPCInterploationSpeed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCInterploationSpeed, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_InterpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_InterpType = { "InterpType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCInterploationSpeed, InterpType), Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpType_MetaData), NewProp_InterpType_MetaData) }; // 4047661307
void Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_bUseInterpSpeedToInterpolation_SetBit(void* Obj)
{
	((FATPCInterploationSpeed*)Obj)->bUseInterpSpeedToInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_bUseInterpSpeedToInterpolation = { "bUseInterpSpeedToInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FATPCInterploationSpeed), &Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_bUseInterpSpeedToInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInterpSpeedToInterpolation_MetaData), NewProp_bUseInterpSpeedToInterpolation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_InterpSpeedToInterpolation = { "InterpSpeedToInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCInterploationSpeed, InterpSpeedToInterpolation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeedToInterpolation_MetaData), NewProp_InterpSpeedToInterpolation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_ResetInterpSpeedTolerance = { "ResetInterpSpeedTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FATPCInterploationSpeed, ResetInterpSpeedTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetInterpSpeedTolerance_MetaData), NewProp_ResetInterpSpeedTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_InterpType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_InterpType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_bUseInterpSpeedToInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_InterpSpeedToInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewProp_ResetInterpSpeedTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	&NewStructOps,
	"ATPCInterploationSpeed",
	Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::PropPointers),
	sizeof(FATPCInterploationSpeed),
	alignof(FATPCInterploationSpeed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FATPCInterploationSpeed()
{
	if (!Z_Registration_Info_UScriptStruct_ATPCInterploationSpeed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ATPCInterploationSpeed.InnerSingleton, Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ATPCInterploationSpeed.InnerSingleton;
}
// End ScriptStruct FATPCInterploationSpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCInterpolationSpeed_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EATPCInterpolationType_StaticEnum, TEXT("EATPCInterpolationType"), &Z_Registration_Info_UEnum_EATPCInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4047661307U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FATPCInterploationSpeed::StaticStruct, Z_Construct_UScriptStruct_FATPCInterploationSpeed_Statics::NewStructOps, TEXT("ATPCInterploationSpeed"), &Z_Registration_Info_UScriptStruct_ATPCInterploationSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FATPCInterploationSpeed), 1929702493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCInterpolationSpeed_h_190203759(TEXT("/Script/AdvancedThirdPersonCamera"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCInterpolationSpeed_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCInterpolationSpeed_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCInterpolationSpeed_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCInterpolationSpeed_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
