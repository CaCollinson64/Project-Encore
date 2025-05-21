// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesEasings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesEasings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesEasings();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesEasings_NoRegister();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Enum EStevesEaseFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStevesEaseFunction;
static UEnum* EStevesEaseFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStevesEaseFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStevesEaseFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("EStevesEaseFunction"));
	}
	return Z_Registration_Info_UEnum_EStevesEaseFunction.OuterSingleton;
}
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EStevesEaseFunction>()
{
	return EStevesEaseFunction_StaticEnum();
}
struct Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Easing functions\n/// See https://easings.net/\n/// Could have used UE EEasingFunc but it's missing some nice options like back/elastic \n" },
#endif
		{ "EaseIn_Back.Name", "EStevesEaseFunction::EaseIn_Back" },
		{ "EaseIn_Bounce.Name", "EStevesEaseFunction::EaseIn_Bounce" },
		{ "EaseIn_Circ.Name", "EStevesEaseFunction::EaseIn_Circ" },
		{ "EaseIn_Cubic.Name", "EStevesEaseFunction::EaseIn_Cubic" },
		{ "EaseIn_Elastic.Name", "EStevesEaseFunction::EaseIn_Elastic" },
		{ "EaseIn_Expo.Name", "EStevesEaseFunction::EaseIn_Expo" },
		{ "EaseIn_Quad.Name", "EStevesEaseFunction::EaseIn_Quad" },
		{ "EaseIn_Quart.Name", "EStevesEaseFunction::EaseIn_Quart" },
		{ "EaseIn_Quint.Name", "EStevesEaseFunction::EaseIn_Quint" },
		{ "EaseIn_Sine.Name", "EStevesEaseFunction::EaseIn_Sine" },
		{ "EaseInOut_Back.Name", "EStevesEaseFunction::EaseInOut_Back" },
		{ "EaseInOut_Bounce.Name", "EStevesEaseFunction::EaseInOut_Bounce" },
		{ "EaseInOut_Circ.Name", "EStevesEaseFunction::EaseInOut_Circ" },
		{ "EaseInOut_Cubic.Name", "EStevesEaseFunction::EaseInOut_Cubic" },
		{ "EaseInOut_Elastic.Name", "EStevesEaseFunction::EaseInOut_Elastic" },
		{ "EaseInOut_Expo.Name", "EStevesEaseFunction::EaseInOut_Expo" },
		{ "EaseInOut_Quad.Name", "EStevesEaseFunction::EaseInOut_Quad" },
		{ "EaseInOut_Quart.Name", "EStevesEaseFunction::EaseInOut_Quart" },
		{ "EaseInOut_Quint.Name", "EStevesEaseFunction::EaseInOut_Quint" },
		{ "EaseInOut_Sine.Name", "EStevesEaseFunction::EaseInOut_Sine" },
		{ "EaseOut_Back.Name", "EStevesEaseFunction::EaseOut_Back" },
		{ "EaseOut_Bounce.Name", "EStevesEaseFunction::EaseOut_Bounce" },
		{ "EaseOut_Circ.Name", "EStevesEaseFunction::EaseOut_Circ" },
		{ "EaseOut_Cubic.Name", "EStevesEaseFunction::EaseOut_Cubic" },
		{ "EaseOut_Elastic.Name", "EStevesEaseFunction::EaseOut_Elastic" },
		{ "EaseOut_Expo.Name", "EStevesEaseFunction::EaseOut_Expo" },
		{ "EaseOut_Quad.Name", "EStevesEaseFunction::EaseOut_Quad" },
		{ "EaseOut_Quart.Name", "EStevesEaseFunction::EaseOut_Quart" },
		{ "EaseOut_Quint.Name", "EStevesEaseFunction::EaseOut_Quint" },
		{ "EaseOut_Sine.Name", "EStevesEaseFunction::EaseOut_Sine" },
		{ "Linear.Name", "EStevesEaseFunction::Linear" },
		{ "ModuleRelativePath", "Public/StevesEasings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easing functions\nSee https:easings.net/\nCould have used UE EEasingFunc but it's missing some nice options like back/elastic" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStevesEaseFunction::Linear", (int64)EStevesEaseFunction::Linear },
		{ "EStevesEaseFunction::EaseIn_Sine", (int64)EStevesEaseFunction::EaseIn_Sine },
		{ "EStevesEaseFunction::EaseOut_Sine", (int64)EStevesEaseFunction::EaseOut_Sine },
		{ "EStevesEaseFunction::EaseInOut_Sine", (int64)EStevesEaseFunction::EaseInOut_Sine },
		{ "EStevesEaseFunction::EaseIn_Quad", (int64)EStevesEaseFunction::EaseIn_Quad },
		{ "EStevesEaseFunction::EaseOut_Quad", (int64)EStevesEaseFunction::EaseOut_Quad },
		{ "EStevesEaseFunction::EaseInOut_Quad", (int64)EStevesEaseFunction::EaseInOut_Quad },
		{ "EStevesEaseFunction::EaseIn_Cubic", (int64)EStevesEaseFunction::EaseIn_Cubic },
		{ "EStevesEaseFunction::EaseOut_Cubic", (int64)EStevesEaseFunction::EaseOut_Cubic },
		{ "EStevesEaseFunction::EaseInOut_Cubic", (int64)EStevesEaseFunction::EaseInOut_Cubic },
		{ "EStevesEaseFunction::EaseIn_Quart", (int64)EStevesEaseFunction::EaseIn_Quart },
		{ "EStevesEaseFunction::EaseOut_Quart", (int64)EStevesEaseFunction::EaseOut_Quart },
		{ "EStevesEaseFunction::EaseInOut_Quart", (int64)EStevesEaseFunction::EaseInOut_Quart },
		{ "EStevesEaseFunction::EaseIn_Quint", (int64)EStevesEaseFunction::EaseIn_Quint },
		{ "EStevesEaseFunction::EaseOut_Quint", (int64)EStevesEaseFunction::EaseOut_Quint },
		{ "EStevesEaseFunction::EaseInOut_Quint", (int64)EStevesEaseFunction::EaseInOut_Quint },
		{ "EStevesEaseFunction::EaseIn_Expo", (int64)EStevesEaseFunction::EaseIn_Expo },
		{ "EStevesEaseFunction::EaseOut_Expo", (int64)EStevesEaseFunction::EaseOut_Expo },
		{ "EStevesEaseFunction::EaseInOut_Expo", (int64)EStevesEaseFunction::EaseInOut_Expo },
		{ "EStevesEaseFunction::EaseIn_Circ", (int64)EStevesEaseFunction::EaseIn_Circ },
		{ "EStevesEaseFunction::EaseOut_Circ", (int64)EStevesEaseFunction::EaseOut_Circ },
		{ "EStevesEaseFunction::EaseInOut_Circ", (int64)EStevesEaseFunction::EaseInOut_Circ },
		{ "EStevesEaseFunction::EaseIn_Back", (int64)EStevesEaseFunction::EaseIn_Back },
		{ "EStevesEaseFunction::EaseOut_Back", (int64)EStevesEaseFunction::EaseOut_Back },
		{ "EStevesEaseFunction::EaseInOut_Back", (int64)EStevesEaseFunction::EaseInOut_Back },
		{ "EStevesEaseFunction::EaseIn_Elastic", (int64)EStevesEaseFunction::EaseIn_Elastic },
		{ "EStevesEaseFunction::EaseOut_Elastic", (int64)EStevesEaseFunction::EaseOut_Elastic },
		{ "EStevesEaseFunction::EaseInOut_Elastic", (int64)EStevesEaseFunction::EaseInOut_Elastic },
		{ "EStevesEaseFunction::EaseIn_Bounce", (int64)EStevesEaseFunction::EaseIn_Bounce },
		{ "EStevesEaseFunction::EaseOut_Bounce", (int64)EStevesEaseFunction::EaseOut_Bounce },
		{ "EStevesEaseFunction::EaseInOut_Bounce", (int64)EStevesEaseFunction::EaseInOut_Bounce },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	"EStevesEaseFunction",
	"EStevesEaseFunction",
	Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction()
{
	if (!Z_Registration_Info_UEnum_EStevesEaseFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStevesEaseFunction.InnerSingleton, Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStevesEaseFunction.InnerSingleton;
}
// End Enum EStevesEaseFunction

// Begin Class UStevesEasings Function EaseAlpha
struct Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics
{
	struct StevesEasings_eventEaseAlpha_Parms
	{
		float InAlpha;
		EStevesEaseFunction Func;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesEaseMath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert a linear alpha value into an eased alpha value using an easing function \n\x09 * @param InAlpha The input linear alpha\n\x09 * @param Func The easing function\n\x09 * @return The eased version of the alpha\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesEasings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a linear alpha value into an eased alpha value using an easing function\n@param InAlpha The input linear alpha\n@param Func The easing function\n@return The eased version of the alpha" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAlpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Func_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Func;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::NewProp_InAlpha = { "InAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseAlpha_Parms, InAlpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::NewProp_Func_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::NewProp_Func = { "Func", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseAlpha_Parms, Func), Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction, METADATA_PARAMS(0, nullptr) }; // 1328582227
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseAlpha_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::NewProp_InAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::NewProp_Func_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::NewProp_Func,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesEasings, nullptr, "EaseAlpha", nullptr, nullptr, Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::StevesEasings_eventEaseAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::StevesEasings_eventEaseAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesEasings_EaseAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesEasings_EaseAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesEasings::execEaseAlpha)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAlpha);
	P_GET_ENUM(EStevesEaseFunction,Z_Param_Func);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UStevesEasings::EaseAlpha(Z_Param_InAlpha,EStevesEaseFunction(Z_Param_Func));
	P_NATIVE_END;
}
// End Class UStevesEasings Function EaseAlpha

// Begin Class UStevesEasings Function EaseFloat
struct Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics
{
	struct StevesEasings_eventEaseFloat_Parms
	{
		float A;
		float B;
		float Alpha;
		EStevesEaseFunction Func;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesEaseMath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Interpolate with easing function support \n\x09 * @param A Input Value from\n\x09 * @param B Input Value to\n\x09 * @param Alpha Value between 0 and 1\n\x09 * @param Func Easing function\n\x09 * @return Interpolated value\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesEasings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolate with easing function support\n@param A Input Value from\n@param B Input Value to\n@param Alpha Value between 0 and 1\n@param Func Easing function\n@return Interpolated value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Func_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Func;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseFloat_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseFloat_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_Func_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_Func = { "Func", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseFloat_Parms, Func), Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction, METADATA_PARAMS(0, nullptr) }; // 1328582227
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_Func_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_Func,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesEasings, nullptr, "EaseFloat", nullptr, nullptr, Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::StevesEasings_eventEaseFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::StevesEasings_eventEaseFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesEasings_EaseFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesEasings_EaseFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesEasings::execEaseFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_GET_PROPERTY(FFloatProperty,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_GET_ENUM(EStevesEaseFunction,Z_Param_Func);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UStevesEasings::EaseFloat(Z_Param_A,Z_Param_B,Z_Param_Alpha,EStevesEaseFunction(Z_Param_Func));
	P_NATIVE_END;
}
// End Class UStevesEasings Function EaseFloat

// Begin Class UStevesEasings Function EaseQuat
struct Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics
{
	struct StevesEasings_eventEaseQuat_Parms
	{
		FQuat A;
		FQuat B;
		float Alpha;
		EStevesEaseFunction Func;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesEaseMath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Interpolate with easing function support \n\x09 * @param A Input Value from\n\x09 * @param B Input Value to\n\x09 * @param Alpha Value between 0 and 1\n\x09 * @param Func Easing function\n\x09 * @return Interpolated value\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesEasings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolate with easing function support\n@param A Input Value from\n@param B Input Value to\n@param Alpha Value between 0 and 1\n@param Func Easing function\n@return Interpolated value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Func_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Func;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseQuat_Parms, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseQuat_Parms, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseQuat_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_Func_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_Func = { "Func", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseQuat_Parms, Func), Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction, METADATA_PARAMS(0, nullptr) }; // 1328582227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_Func_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_Func,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesEasings, nullptr, "EaseQuat", nullptr, nullptr, Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::StevesEasings_eventEaseQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::StevesEasings_eventEaseQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesEasings_EaseQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesEasings_EaseQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesEasings::execEaseQuat)
{
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_A);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_GET_ENUM(EStevesEaseFunction,Z_Param_Func);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=UStevesEasings::EaseQuat(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,EStevesEaseFunction(Z_Param_Func));
	P_NATIVE_END;
}
// End Class UStevesEasings Function EaseQuat

// Begin Class UStevesEasings Function EaseRotator
struct Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics
{
	struct StevesEasings_eventEaseRotator_Parms
	{
		FRotator A;
		FRotator B;
		float Alpha;
		EStevesEaseFunction Func;
		bool bShortest;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesEaseMath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Interpolate with easing function support \n\x09 * @param A Input Value from\n\x09 * @param B Input Value to\n\x09 * @param Alpha Value between 0 and 1\n\x09 * @param Func Easing function\n\x09 * @return Interpolated value\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesEasings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolate with easing function support\n@param A Input Value from\n@param B Input Value to\n@param Alpha Value between 0 and 1\n@param Func Easing function\n@return Interpolated value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Func_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Func;
	static void NewProp_bShortest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShortest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseRotator_Parms, A), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseRotator_Parms, B), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseRotator_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_Func_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_Func = { "Func", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseRotator_Parms, Func), Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction, METADATA_PARAMS(0, nullptr) }; // 1328582227
void Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_bShortest_SetBit(void* Obj)
{
	((StevesEasings_eventEaseRotator_Parms*)Obj)->bShortest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_bShortest = { "bShortest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StevesEasings_eventEaseRotator_Parms), &Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_bShortest_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_Func_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_Func,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_bShortest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesEasings, nullptr, "EaseRotator", nullptr, nullptr, Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::StevesEasings_eventEaseRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::StevesEasings_eventEaseRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesEasings_EaseRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesEasings_EaseRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesEasings::execEaseRotator)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_A);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_GET_ENUM(EStevesEaseFunction,Z_Param_Func);
	P_GET_UBOOL(Z_Param_bShortest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UStevesEasings::EaseRotator(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,EStevesEaseFunction(Z_Param_Func),Z_Param_bShortest);
	P_NATIVE_END;
}
// End Class UStevesEasings Function EaseRotator

// Begin Class UStevesEasings Function EaseTransform
struct Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics
{
	struct StevesEasings_eventEaseTransform_Parms
	{
		FTransform A;
		FTransform B;
		float Alpha;
		EStevesEaseFunction Func;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesEaseMath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Interpolate with easing function support \n\x09 * @param A Input Value from\n\x09 * @param B Input Value to\n\x09 * @param Alpha Value between 0 and 1\n\x09 * @param Func Easing function\n\x09 * @return Interpolated value\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesEasings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolate with easing function support\n@param A Input Value from\n@param B Input Value to\n@param Alpha Value between 0 and 1\n@param Func Easing function\n@return Interpolated value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Func_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Func;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseTransform_Parms, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseTransform_Parms, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseTransform_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_Func_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_Func = { "Func", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseTransform_Parms, Func), Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction, METADATA_PARAMS(0, nullptr) }; // 1328582227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_Func_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_Func,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesEasings, nullptr, "EaseTransform", nullptr, nullptr, Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::StevesEasings_eventEaseTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::StevesEasings_eventEaseTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesEasings_EaseTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesEasings_EaseTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesEasings::execEaseTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_A);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_GET_ENUM(EStevesEaseFunction,Z_Param_Func);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UStevesEasings::EaseTransform(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,EStevesEaseFunction(Z_Param_Func));
	P_NATIVE_END;
}
// End Class UStevesEasings Function EaseTransform

// Begin Class UStevesEasings Function EaseVector
struct Z_Construct_UFunction_UStevesEasings_EaseVector_Statics
{
	struct StevesEasings_eventEaseVector_Parms
	{
		FVector A;
		FVector B;
		float Alpha;
		EStevesEaseFunction Func;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesEaseMath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Interpolate with easing function support \n\x09 * @param A Input Value from\n\x09 * @param B Input Value to\n\x09 * @param Alpha Value between 0 and 1\n\x09 * @param Func Easing function\n\x09 * @return Interpolated value\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesEasings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolate with easing function support\n@param A Input Value from\n@param B Input Value to\n@param Alpha Value between 0 and 1\n@param Func Easing function\n@return Interpolated value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Func_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Func;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseVector_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseVector_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseVector_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_Func_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_Func = { "Func", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseVector_Parms, Func), Z_Construct_UEnum_StevesUEHelpers_EStevesEaseFunction, METADATA_PARAMS(0, nullptr) }; // 1328582227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesEasings_eventEaseVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_Func_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_Func,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesEasings, nullptr, "EaseVector", nullptr, nullptr, Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::StevesEasings_eventEaseVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::StevesEasings_eventEaseVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesEasings_EaseVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesEasings_EaseVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesEasings::execEaseVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_GET_ENUM(EStevesEaseFunction,Z_Param_Func);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UStevesEasings::EaseVector(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,EStevesEaseFunction(Z_Param_Func));
	P_NATIVE_END;
}
// End Class UStevesEasings Function EaseVector

// Begin Class UStevesEasings
void UStevesEasings::StaticRegisterNativesUStevesEasings()
{
	UClass* Class = UStevesEasings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EaseAlpha", &UStevesEasings::execEaseAlpha },
		{ "EaseFloat", &UStevesEasings::execEaseFloat },
		{ "EaseQuat", &UStevesEasings::execEaseQuat },
		{ "EaseRotator", &UStevesEasings::execEaseRotator },
		{ "EaseTransform", &UStevesEasings::execEaseTransform },
		{ "EaseVector", &UStevesEasings::execEaseVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesEasings);
UClass* Z_Construct_UClass_UStevesEasings_NoRegister()
{
	return UStevesEasings::StaticClass();
}
struct Z_Construct_UClass_UStevesEasings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StevesEasings.h" },
		{ "ModuleRelativePath", "Public/StevesEasings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStevesEasings_EaseAlpha, "EaseAlpha" }, // 2523880102
		{ &Z_Construct_UFunction_UStevesEasings_EaseFloat, "EaseFloat" }, // 981437627
		{ &Z_Construct_UFunction_UStevesEasings_EaseQuat, "EaseQuat" }, // 1521458255
		{ &Z_Construct_UFunction_UStevesEasings_EaseRotator, "EaseRotator" }, // 1788876913
		{ &Z_Construct_UFunction_UStevesEasings_EaseTransform, "EaseTransform" }, // 2650230022
		{ &Z_Construct_UFunction_UStevesEasings_EaseVector, "EaseVector" }, // 3003692336
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesEasings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStevesEasings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesEasings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesEasings_Statics::ClassParams = {
	&UStevesEasings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesEasings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesEasings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesEasings()
{
	if (!Z_Registration_Info_UClass_UStevesEasings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesEasings.OuterSingleton, Z_Construct_UClass_UStevesEasings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesEasings.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesEasings>()
{
	return UStevesEasings::StaticClass();
}
UStevesEasings::UStevesEasings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesEasings);
UStevesEasings::~UStevesEasings() {}
// End Class UStevesEasings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStevesEaseFunction_StaticEnum, TEXT("EStevesEaseFunction"), &Z_Registration_Info_UEnum_EStevesEaseFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1328582227U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesEasings, UStevesEasings::StaticClass, TEXT("UStevesEasings"), &Z_Registration_Info_UClass_UStevesEasings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesEasings), 2683567998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_975313483(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
