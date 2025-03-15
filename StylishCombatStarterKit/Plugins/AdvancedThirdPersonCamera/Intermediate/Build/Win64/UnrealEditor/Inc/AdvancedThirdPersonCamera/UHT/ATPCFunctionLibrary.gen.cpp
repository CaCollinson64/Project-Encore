// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCFunctionLibrary.h"
#include "AdvancedThirdPersonCamera/Public/ATPCInterpolationSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCFunctionLibrary() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCFunctionLibrary();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCFunctionLibrary_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCInterploationSpeed();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCFunctionLibrary Function InterpFloat
struct Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics
{
	struct ATPCFunctionLibrary_eventInterpFloat_Parms
	{
		float Current;
		float Target;
		float DeltaTime;
		FATPCInterploationSpeed InterpSpeed;
		bool bResetSpeedIfResultEqualToTarget;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Utils" },
		{ "CPP_Default_bResetSpeedIfResultEqualToTarget", "true" },
		{ "ModuleRelativePath", "Public/ATPCFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpSpeed;
	static void NewProp_bResetSpeedIfResultEqualToTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSpeedIfResultEqualToTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpFloat_Parms, Current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpFloat_Parms, Target), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpFloat_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpFloat_Parms, InterpSpeed), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(0, nullptr) }; // 1929702493
void Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_bResetSpeedIfResultEqualToTarget_SetBit(void* Obj)
{
	((ATPCFunctionLibrary_eventInterpFloat_Parms*)Obj)->bResetSpeedIfResultEqualToTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_bResetSpeedIfResultEqualToTarget = { "bResetSpeedIfResultEqualToTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCFunctionLibrary_eventInterpFloat_Parms), &Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_bResetSpeedIfResultEqualToTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_bResetSpeedIfResultEqualToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCFunctionLibrary, nullptr, "InterpFloat", nullptr, nullptr, Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::ATPCFunctionLibrary_eventInterpFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::ATPCFunctionLibrary_eventInterpFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCFunctionLibrary::execInterpFloat)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Current);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_STRUCT_REF(FATPCInterploationSpeed,Z_Param_Out_InterpSpeed);
	P_GET_UBOOL(Z_Param_bResetSpeedIfResultEqualToTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UATPCFunctionLibrary::InterpFloat(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_Out_InterpSpeed,Z_Param_bResetSpeedIfResultEqualToTarget);
	P_NATIVE_END;
}
// End Class UATPCFunctionLibrary Function InterpFloat

// Begin Class UATPCFunctionLibrary Function InterpolationSpeed_GetCurrentInterpolationSpeed
struct Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics
{
	struct ATPCFunctionLibrary_eventInterpolationSpeed_GetCurrentInterpolationSpeed_Parms
	{
		FATPCInterploationSpeed InterpSpeed;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Utils" },
		{ "DisplayName", "Get Current Interpolation Speed" },
		{ "ModuleRelativePath", "Public/ATPCFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpolationSpeed_GetCurrentInterpolationSpeed_Parms, InterpSpeed), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) }; // 1929702493
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpolationSpeed_GetCurrentInterpolationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCFunctionLibrary, nullptr, "InterpolationSpeed_GetCurrentInterpolationSpeed", nullptr, nullptr, Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::ATPCFunctionLibrary_eventInterpolationSpeed_GetCurrentInterpolationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::ATPCFunctionLibrary_eventInterpolationSpeed_GetCurrentInterpolationSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCFunctionLibrary::execInterpolationSpeed_GetCurrentInterpolationSpeed)
{
	P_GET_STRUCT_REF(FATPCInterploationSpeed,Z_Param_Out_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UATPCFunctionLibrary::InterpolationSpeed_GetCurrentInterpolationSpeed(Z_Param_Out_InterpSpeed);
	P_NATIVE_END;
}
// End Class UATPCFunctionLibrary Function InterpolationSpeed_GetCurrentInterpolationSpeed

// Begin Class UATPCFunctionLibrary Function InterpolationSpeed_InterpolateSpeed
struct Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics
{
	struct ATPCFunctionLibrary_eventInterpolationSpeed_InterpolateSpeed_Parms
	{
		FATPCInterploationSpeed InterpSpeed;
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Utils" },
		{ "DisplayName", "Interpolate Speed" },
		{ "ModuleRelativePath", "Public/ATPCFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpolationSpeed_InterpolateSpeed_Parms, InterpSpeed), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(0, nullptr) }; // 1929702493
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpolationSpeed_InterpolateSpeed_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCFunctionLibrary, nullptr, "InterpolationSpeed_InterpolateSpeed", nullptr, nullptr, Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::ATPCFunctionLibrary_eventInterpolationSpeed_InterpolateSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::ATPCFunctionLibrary_eventInterpolationSpeed_InterpolateSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCFunctionLibrary::execInterpolationSpeed_InterpolateSpeed)
{
	P_GET_STRUCT_REF(FATPCInterploationSpeed,Z_Param_Out_InterpSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UATPCFunctionLibrary::InterpolationSpeed_InterpolateSpeed(Z_Param_Out_InterpSpeed,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UATPCFunctionLibrary Function InterpolationSpeed_InterpolateSpeed

// Begin Class UATPCFunctionLibrary Function InterpolationSpeed_ResetSpeed
struct Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics
{
	struct ATPCFunctionLibrary_eventInterpolationSpeed_ResetSpeed_Parms
	{
		FATPCInterploationSpeed InterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Utils" },
		{ "ModuleRelativePath", "Public/ATPCFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpolationSpeed_ResetSpeed_Parms, InterpSpeed), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(0, nullptr) }; // 1929702493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCFunctionLibrary, nullptr, "InterpolationSpeed_ResetSpeed", nullptr, nullptr, Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::ATPCFunctionLibrary_eventInterpolationSpeed_ResetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::ATPCFunctionLibrary_eventInterpolationSpeed_ResetSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCFunctionLibrary::execInterpolationSpeed_ResetSpeed)
{
	P_GET_STRUCT_REF(FATPCInterploationSpeed,Z_Param_Out_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UATPCFunctionLibrary::InterpolationSpeed_ResetSpeed(Z_Param_Out_InterpSpeed);
	P_NATIVE_END;
}
// End Class UATPCFunctionLibrary Function InterpolationSpeed_ResetSpeed

// Begin Class UATPCFunctionLibrary Function InterpRotator
struct Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics
{
	struct ATPCFunctionLibrary_eventInterpRotator_Parms
	{
		FRotator Current;
		FRotator Target;
		float DeltaTime;
		FATPCInterploationSpeed InterpSpeed;
		bool bResetSpeedIfResultEqualToTarget;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Utils" },
		{ "CPP_Default_bResetSpeedIfResultEqualToTarget", "true" },
		{ "ModuleRelativePath", "Public/ATPCFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpSpeed;
	static void NewProp_bResetSpeedIfResultEqualToTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSpeedIfResultEqualToTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpRotator_Parms, Current), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpRotator_Parms, Target), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpRotator_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpRotator_Parms, InterpSpeed), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(0, nullptr) }; // 1929702493
void Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_bResetSpeedIfResultEqualToTarget_SetBit(void* Obj)
{
	((ATPCFunctionLibrary_eventInterpRotator_Parms*)Obj)->bResetSpeedIfResultEqualToTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_bResetSpeedIfResultEqualToTarget = { "bResetSpeedIfResultEqualToTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCFunctionLibrary_eventInterpRotator_Parms), &Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_bResetSpeedIfResultEqualToTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_bResetSpeedIfResultEqualToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCFunctionLibrary, nullptr, "InterpRotator", nullptr, nullptr, Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::ATPCFunctionLibrary_eventInterpRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::ATPCFunctionLibrary_eventInterpRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCFunctionLibrary::execInterpRotator)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Current);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_STRUCT_REF(FATPCInterploationSpeed,Z_Param_Out_InterpSpeed);
	P_GET_UBOOL(Z_Param_bResetSpeedIfResultEqualToTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UATPCFunctionLibrary::InterpRotator(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_Out_InterpSpeed,Z_Param_bResetSpeedIfResultEqualToTarget);
	P_NATIVE_END;
}
// End Class UATPCFunctionLibrary Function InterpRotator

// Begin Class UATPCFunctionLibrary Function InterpVector
struct Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics
{
	struct ATPCFunctionLibrary_eventInterpVector_Parms
	{
		FVector Current;
		FVector Target;
		float DeltaTime;
		FATPCInterploationSpeed InterpSpeed;
		bool bResetSpeedIfResultEqualToTarget;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Utils" },
		{ "CPP_Default_bResetSpeedIfResultEqualToTarget", "true" },
		{ "ModuleRelativePath", "Public/ATPCFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpSpeed;
	static void NewProp_bResetSpeedIfResultEqualToTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSpeedIfResultEqualToTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpVector_Parms, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpVector_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpVector_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpVector_Parms, InterpSpeed), Z_Construct_UScriptStruct_FATPCInterploationSpeed, METADATA_PARAMS(0, nullptr) }; // 1929702493
void Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_bResetSpeedIfResultEqualToTarget_SetBit(void* Obj)
{
	((ATPCFunctionLibrary_eventInterpVector_Parms*)Obj)->bResetSpeedIfResultEqualToTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_bResetSpeedIfResultEqualToTarget = { "bResetSpeedIfResultEqualToTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCFunctionLibrary_eventInterpVector_Parms), &Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_bResetSpeedIfResultEqualToTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventInterpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_bResetSpeedIfResultEqualToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCFunctionLibrary, nullptr, "InterpVector", nullptr, nullptr, Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::ATPCFunctionLibrary_eventInterpVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::ATPCFunctionLibrary_eventInterpVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCFunctionLibrary::execInterpVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Current);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_STRUCT_REF(FATPCInterploationSpeed,Z_Param_Out_InterpSpeed);
	P_GET_UBOOL(Z_Param_bResetSpeedIfResultEqualToTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UATPCFunctionLibrary::InterpVector(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_Out_InterpSpeed,Z_Param_bResetSpeedIfResultEqualToTarget);
	P_NATIVE_END;
}
// End Class UATPCFunctionLibrary Function InterpVector

// Begin Class UATPCFunctionLibrary Function ReplaceSpringArmToATPCComponent
struct Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics
{
	struct ATPCFunctionLibrary_eventReplaceSpringArmToATPCComponent_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reattach spring arm child components to atpc component */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reattach spring arm child components to atpc component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCFunctionLibrary_eventReplaceSpringArmToATPCComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ATPCFunctionLibrary_eventReplaceSpringArmToATPCComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCFunctionLibrary_eventReplaceSpringArmToATPCComponent_Parms), &Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCFunctionLibrary, nullptr, "ReplaceSpringArmToATPCComponent", nullptr, nullptr, Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::ATPCFunctionLibrary_eventReplaceSpringArmToATPCComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::ATPCFunctionLibrary_eventReplaceSpringArmToATPCComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCFunctionLibrary::execReplaceSpringArmToATPCComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UATPCFunctionLibrary::ReplaceSpringArmToATPCComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UATPCFunctionLibrary Function ReplaceSpringArmToATPCComponent

// Begin Class UATPCFunctionLibrary
void UATPCFunctionLibrary::StaticRegisterNativesUATPCFunctionLibrary()
{
	UClass* Class = UATPCFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InterpFloat", &UATPCFunctionLibrary::execInterpFloat },
		{ "InterpolationSpeed_GetCurrentInterpolationSpeed", &UATPCFunctionLibrary::execInterpolationSpeed_GetCurrentInterpolationSpeed },
		{ "InterpolationSpeed_InterpolateSpeed", &UATPCFunctionLibrary::execInterpolationSpeed_InterpolateSpeed },
		{ "InterpolationSpeed_ResetSpeed", &UATPCFunctionLibrary::execInterpolationSpeed_ResetSpeed },
		{ "InterpRotator", &UATPCFunctionLibrary::execInterpRotator },
		{ "InterpVector", &UATPCFunctionLibrary::execInterpVector },
		{ "ReplaceSpringArmToATPCComponent", &UATPCFunctionLibrary::execReplaceSpringArmToATPCComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCFunctionLibrary);
UClass* Z_Construct_UClass_UATPCFunctionLibrary_NoRegister()
{
	return UATPCFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UATPCFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ATPCFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ATPCFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UATPCFunctionLibrary_InterpFloat, "InterpFloat" }, // 29516864
		{ &Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_GetCurrentInterpolationSpeed, "InterpolationSpeed_GetCurrentInterpolationSpeed" }, // 236103363
		{ &Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_InterpolateSpeed, "InterpolationSpeed_InterpolateSpeed" }, // 1509546251
		{ &Z_Construct_UFunction_UATPCFunctionLibrary_InterpolationSpeed_ResetSpeed, "InterpolationSpeed_ResetSpeed" }, // 1427389927
		{ &Z_Construct_UFunction_UATPCFunctionLibrary_InterpRotator, "InterpRotator" }, // 3214956224
		{ &Z_Construct_UFunction_UATPCFunctionLibrary_InterpVector, "InterpVector" }, // 2174035837
		{ &Z_Construct_UFunction_UATPCFunctionLibrary_ReplaceSpringArmToATPCComponent, "ReplaceSpringArmToATPCComponent" }, // 2853955353
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UATPCFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCFunctionLibrary_Statics::ClassParams = {
	&UATPCFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UATPCFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCFunctionLibrary.OuterSingleton, Z_Construct_UClass_UATPCFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCFunctionLibrary.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCFunctionLibrary>()
{
	return UATPCFunctionLibrary::StaticClass();
}
UATPCFunctionLibrary::UATPCFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCFunctionLibrary);
UATPCFunctionLibrary::~UATPCFunctionLibrary() {}
// End Class UATPCFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCFunctionLibrary, UATPCFunctionLibrary::StaticClass, TEXT("UATPCFunctionLibrary"), &Z_Registration_Info_UClass_UATPCFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCFunctionLibrary), 267169120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_3699290623(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
