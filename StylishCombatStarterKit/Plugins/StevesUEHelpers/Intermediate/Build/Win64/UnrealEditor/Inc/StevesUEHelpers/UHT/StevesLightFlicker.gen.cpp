// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesLightFlicker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesLightFlicker() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesLightFlickerComponent();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesLightFlickerComponent_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesLightFlickerHelper();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesLightFlickerHelper_NoRegister();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Enum EStevesLightFlickerPattern
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStevesLightFlickerPattern;
static UEnum* EStevesLightFlickerPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStevesLightFlickerPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStevesLightFlickerPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("EStevesLightFlickerPattern"));
	}
	return Z_Registration_Info_UEnum_EStevesLightFlickerPattern.OuterSingleton;
}
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EStevesLightFlickerPattern>()
{
	return EStevesLightFlickerPattern_StaticEnum();
}
struct Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Candle1.Name", "EStevesLightFlickerPattern::Candle1" },
		{ "Candle2.Name", "EStevesLightFlickerPattern::Candle2" },
		{ "Candle3.Name", "EStevesLightFlickerPattern::Candle3" },
		{ "Custom.Name", "EStevesLightFlickerPattern::Custom" },
		{ "FastStrobe.Name", "EStevesLightFlickerPattern::FastStrobe" },
		{ "Flicker1.Name", "EStevesLightFlickerPattern::Flicker1" },
		{ "Flicker2.Name", "EStevesLightFlickerPattern::Flicker2" },
		{ "FlourescentFlicker.Name", "EStevesLightFlickerPattern::FlourescentFlicker" },
		{ "GentlePulse1.Name", "EStevesLightFlickerPattern::GentlePulse1" },
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
		{ "SlowPulseNoBlack.Name", "EStevesLightFlickerPattern::SlowPulseNoBlack" },
		{ "SlowStrobe.Name", "EStevesLightFlickerPattern::SlowStrobe" },
		{ "SlowStrongPulse.Name", "EStevesLightFlickerPattern::SlowStrongPulse" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStevesLightFlickerPattern::Flicker1", (int64)EStevesLightFlickerPattern::Flicker1 },
		{ "EStevesLightFlickerPattern::Flicker2", (int64)EStevesLightFlickerPattern::Flicker2 },
		{ "EStevesLightFlickerPattern::SlowStrongPulse", (int64)EStevesLightFlickerPattern::SlowStrongPulse },
		{ "EStevesLightFlickerPattern::Candle1", (int64)EStevesLightFlickerPattern::Candle1 },
		{ "EStevesLightFlickerPattern::Candle2", (int64)EStevesLightFlickerPattern::Candle2 },
		{ "EStevesLightFlickerPattern::Candle3", (int64)EStevesLightFlickerPattern::Candle3 },
		{ "EStevesLightFlickerPattern::FastStrobe", (int64)EStevesLightFlickerPattern::FastStrobe },
		{ "EStevesLightFlickerPattern::SlowStrobe", (int64)EStevesLightFlickerPattern::SlowStrobe },
		{ "EStevesLightFlickerPattern::GentlePulse1", (int64)EStevesLightFlickerPattern::GentlePulse1 },
		{ "EStevesLightFlickerPattern::FlourescentFlicker", (int64)EStevesLightFlickerPattern::FlourescentFlicker },
		{ "EStevesLightFlickerPattern::SlowPulseNoBlack", (int64)EStevesLightFlickerPattern::SlowPulseNoBlack },
		{ "EStevesLightFlickerPattern::Custom", (int64)EStevesLightFlickerPattern::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	"EStevesLightFlickerPattern",
	"EStevesLightFlickerPattern",
	Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern()
{
	if (!Z_Registration_Info_UEnum_EStevesLightFlickerPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStevesLightFlickerPattern.InnerSingleton, Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStevesLightFlickerPattern.InnerSingleton;
}
// End Enum EStevesLightFlickerPattern

// Begin Class UStevesLightFlickerHelper Function EvaluateLightCurve
struct Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics
{
	struct StevesLightFlickerHelper_eventEvaluateLightCurve_Parms
	{
		EStevesLightFlickerPattern CurveType;
		float Time;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lighting Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Directly evaluate a lighting curve. Alternatively, see ULightingCurveComponent.\n\x09 * @param CurveType The type of curve\n\x09 * @param Time The time index (0..1 period)\n\x09 * @return Normalised value of the curve at this time\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Directly evaluate a lighting curve. Alternatively, see ULightingCurveComponent.\n@param CurveType The type of curve\n@param Time The time index (0..1 period)\n@return Normalised value of the curve at this time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesLightFlickerHelper_eventEvaluateLightCurve_Parms, CurveType), Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern, METADATA_PARAMS(0, nullptr) }; // 3577445939
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesLightFlickerHelper_eventEvaluateLightCurve_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesLightFlickerHelper_eventEvaluateLightCurve_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::NewProp_CurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::NewProp_CurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesLightFlickerHelper, nullptr, "EvaluateLightCurve", nullptr, nullptr, Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::StevesLightFlickerHelper_eventEvaluateLightCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::StevesLightFlickerHelper_eventEvaluateLightCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesLightFlickerHelper::execEvaluateLightCurve)
{
	P_GET_ENUM(EStevesLightFlickerPattern,Z_Param_CurveType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UStevesLightFlickerHelper::EvaluateLightCurve(EStevesLightFlickerPattern(Z_Param_CurveType),Z_Param_Time);
	P_NATIVE_END;
}
// End Class UStevesLightFlickerHelper Function EvaluateLightCurve

// Begin Class UStevesLightFlickerHelper
void UStevesLightFlickerHelper::StaticRegisterNativesUStevesLightFlickerHelper()
{
	UClass* Class = UStevesLightFlickerHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EvaluateLightCurve", &UStevesLightFlickerHelper::execEvaluateLightCurve },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesLightFlickerHelper);
UClass* Z_Construct_UClass_UStevesLightFlickerHelper_NoRegister()
{
	return UStevesLightFlickerHelper::StaticClass();
}
struct Z_Construct_UClass_UStevesLightFlickerHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Helper class to get lighting flicker curves\n */" },
#endif
		{ "IncludePath", "StevesLightFlicker.h" },
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper class to get lighting flicker curves" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStevesLightFlickerHelper_EvaluateLightCurve, "EvaluateLightCurve" }, // 810483255
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesLightFlickerHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStevesLightFlickerHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesLightFlickerHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesLightFlickerHelper_Statics::ClassParams = {
	&UStevesLightFlickerHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesLightFlickerHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesLightFlickerHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesLightFlickerHelper()
{
	if (!Z_Registration_Info_UClass_UStevesLightFlickerHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesLightFlickerHelper.OuterSingleton, Z_Construct_UClass_UStevesLightFlickerHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesLightFlickerHelper.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesLightFlickerHelper>()
{
	return UStevesLightFlickerHelper::StaticClass();
}
UStevesLightFlickerHelper::UStevesLightFlickerHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesLightFlickerHelper);
UStevesLightFlickerHelper::~UStevesLightFlickerHelper() {}
// End Class UStevesLightFlickerHelper

// Begin Delegate FOnLightFlickerUpdate
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnLightFlickerUpdate_Parms
	{
		float LightValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::NewProp_LightValue = { "LightValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnLightFlickerUpdate_Parms, LightValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::NewProp_LightValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnLightFlickerUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnLightFlickerUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnLightFlickerUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLightFlickerUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLightFlickerUpdate, float LightValue)
{
	struct _Script_StevesUEHelpers_eventOnLightFlickerUpdate_Parms
	{
		float LightValue;
	};
	_Script_StevesUEHelpers_eventOnLightFlickerUpdate_Parms Parms;
	Parms.LightValue=LightValue;
	OnLightFlickerUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLightFlickerUpdate

// Begin Class UStevesLightFlickerComponent Function GetCurrentValue
struct Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics
{
	struct StevesLightFlickerComponent_eventGetCurrentValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesLightFlickerComponent_eventGetCurrentValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesLightFlickerComponent, nullptr, "GetCurrentValue", nullptr, nullptr, Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::StevesLightFlickerComponent_eventGetCurrentValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::StevesLightFlickerComponent_eventGetCurrentValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesLightFlickerComponent::execGetCurrentValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentValue();
	P_NATIVE_END;
}
// End Class UStevesLightFlickerComponent Function GetCurrentValue

// Begin Class UStevesLightFlickerComponent Function OnRep_TimePos
struct Z_Construct_UFunction_UStevesLightFlickerComponent_OnRep_TimePos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesLightFlickerComponent_OnRep_TimePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesLightFlickerComponent, nullptr, "OnRep_TimePos", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerComponent_OnRep_TimePos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesLightFlickerComponent_OnRep_TimePos_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStevesLightFlickerComponent_OnRep_TimePos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesLightFlickerComponent_OnRep_TimePos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesLightFlickerComponent::execOnRep_TimePos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TimePos();
	P_NATIVE_END;
}
// End Class UStevesLightFlickerComponent Function OnRep_TimePos

// Begin Class UStevesLightFlickerComponent Function Pause
struct Z_Construct_UFunction_UStevesLightFlickerComponent_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesLightFlickerComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesLightFlickerComponent, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerComponent_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesLightFlickerComponent_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStevesLightFlickerComponent_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesLightFlickerComponent_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesLightFlickerComponent::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class UStevesLightFlickerComponent Function Pause

// Begin Class UStevesLightFlickerComponent Function Play
struct Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics
{
	struct StevesLightFlickerComponent_eventPlay_Parms
	{
		bool bResetTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bResetTime", "false" },
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bResetTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::NewProp_bResetTime_SetBit(void* Obj)
{
	((StevesLightFlickerComponent_eventPlay_Parms*)Obj)->bResetTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::NewProp_bResetTime = { "bResetTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StevesLightFlickerComponent_eventPlay_Parms), &Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::NewProp_bResetTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::NewProp_bResetTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesLightFlickerComponent, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::StevesLightFlickerComponent_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::StevesLightFlickerComponent_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesLightFlickerComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesLightFlickerComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesLightFlickerComponent::execPlay)
{
	P_GET_UBOOL(Z_Param_bResetTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play(Z_Param_bResetTime);
	P_NATIVE_END;
}
// End Class UStevesLightFlickerComponent Function Play

// Begin Class UStevesLightFlickerComponent
void UStevesLightFlickerComponent::StaticRegisterNativesUStevesLightFlickerComponent()
{
	UClass* Class = UStevesLightFlickerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentValue", &UStevesLightFlickerComponent::execGetCurrentValue },
		{ "OnRep_TimePos", &UStevesLightFlickerComponent::execOnRep_TimePos },
		{ "Pause", &UStevesLightFlickerComponent::execPause },
		{ "Play", &UStevesLightFlickerComponent::execPlay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesLightFlickerComponent);
UClass* Z_Construct_UClass_UStevesLightFlickerComponent_NoRegister()
{
	return UStevesLightFlickerComponent::StaticClass();
}
struct Z_Construct_UClass_UStevesLightFlickerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * This is like a generated version of TimelineComponent, providing a generated lighting curve.\n */" },
#endif
		{ "IncludePath", "StevesLightFlicker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is like a generated version of TimelineComponent, providing a generated lighting curve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlickerPattern_MetaData[] = {
		{ "Category", "Light Flicker" },
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomFlickerPattern_MetaData[] = {
		{ "Category", "Light Flicker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If using a custom pattern, provide your own Quake-style string of letters, a-z (a = 0, m = 1, z = 2)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If using a custom pattern, provide your own Quake-style string of letters, a-z (a = 0, m = 1, z = 2)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Light Flicker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Max output intensity multiplier value. Defaults to 2 since that's what Quake used!\n/// We can *very slightly* exceed this max with 'z' as per standard Quake where z was 2.08\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max output intensity multiplier value. Defaults to 2 since that's what Quake used!\nWe can *very slightly* exceed this max with 'z' as per standard Quake where z was 2.08" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Light Flicker" },
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Light Flicker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Playback speed\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "Light Flicker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Whether to auto-start\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to auto-start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimePos_MetaData[] = {
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLightFlickerUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/StevesLightFlicker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FlickerPattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FlickerPattern;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomFlickerPattern;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePos;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLightFlickerUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStevesLightFlickerComponent_GetCurrentValue, "GetCurrentValue" }, // 3776441426
		{ &Z_Construct_UFunction_UStevesLightFlickerComponent_OnRep_TimePos, "OnRep_TimePos" }, // 3339106796
		{ &Z_Construct_UFunction_UStevesLightFlickerComponent_Pause, "Pause" }, // 1857481729
		{ &Z_Construct_UFunction_UStevesLightFlickerComponent_Play, "Play" }, // 168601893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesLightFlickerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_FlickerPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_FlickerPattern = { "FlickerPattern", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesLightFlickerComponent, FlickerPattern), Z_Construct_UEnum_StevesUEHelpers_EStevesLightFlickerPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlickerPattern_MetaData), NewProp_FlickerPattern_MetaData) }; // 3577445939
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_CustomFlickerPattern = { "CustomFlickerPattern", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesLightFlickerComponent, CustomFlickerPattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomFlickerPattern_MetaData), NewProp_CustomFlickerPattern_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesLightFlickerComponent, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesLightFlickerComponent, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesLightFlickerComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((UStevesLightFlickerComponent*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStevesLightFlickerComponent), &Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlay_MetaData), NewProp_bAutoPlay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_TimePos = { "TimePos", "OnRep_TimePos", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesLightFlickerComponent, TimePos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimePos_MetaData), NewProp_TimePos_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_OnLightFlickerUpdate = { "OnLightFlickerUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesLightFlickerComponent, OnLightFlickerUpdate), Z_Construct_UDelegateFunction_StevesUEHelpers_OnLightFlickerUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLightFlickerUpdate_MetaData), NewProp_OnLightFlickerUpdate_MetaData) }; // 2614171819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStevesLightFlickerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_FlickerPattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_FlickerPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_CustomFlickerPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_TimePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesLightFlickerComponent_Statics::NewProp_OnLightFlickerUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesLightFlickerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStevesLightFlickerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesLightFlickerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesLightFlickerComponent_Statics::ClassParams = {
	&UStevesLightFlickerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStevesLightFlickerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStevesLightFlickerComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesLightFlickerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesLightFlickerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesLightFlickerComponent()
{
	if (!Z_Registration_Info_UClass_UStevesLightFlickerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesLightFlickerComponent.OuterSingleton, Z_Construct_UClass_UStevesLightFlickerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesLightFlickerComponent.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesLightFlickerComponent>()
{
	return UStevesLightFlickerComponent::StaticClass();
}
void UStevesLightFlickerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TimePos(TEXT("TimePos"));
	const bool bIsValid = true
		&& Name_TimePos == ClassReps[(int32)ENetFields_Private::TimePos].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UStevesLightFlickerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesLightFlickerComponent);
UStevesLightFlickerComponent::~UStevesLightFlickerComponent() {}
// End Class UStevesLightFlickerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStevesLightFlickerPattern_StaticEnum, TEXT("EStevesLightFlickerPattern"), &Z_Registration_Info_UEnum_EStevesLightFlickerPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3577445939U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesLightFlickerHelper, UStevesLightFlickerHelper::StaticClass, TEXT("UStevesLightFlickerHelper"), &Z_Registration_Info_UClass_UStevesLightFlickerHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesLightFlickerHelper), 3157965785U) },
		{ Z_Construct_UClass_UStevesLightFlickerComponent, UStevesLightFlickerComponent::StaticClass, TEXT("UStevesLightFlickerComponent"), &Z_Registration_Info_UClass_UStevesLightFlickerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesLightFlickerComponent), 2633366830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_954948876(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
