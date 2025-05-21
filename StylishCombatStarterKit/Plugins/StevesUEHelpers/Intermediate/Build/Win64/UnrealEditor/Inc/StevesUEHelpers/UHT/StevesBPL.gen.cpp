// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesBPL.h"
#include "StevesUEHelpers/Public/StevesBalancedRandomStream.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesBPL() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesBPL();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesBPL_NoRegister();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesBalancedRandomStream();
UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UStevesBPL Function AddViewOriginToStreaming
struct Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics
{
	struct StevesBPL_eventAddViewOriginToStreaming_Parms
	{
		FVector ViewOrigin;
		float ScreenWidth;
		float FOV;
		float BoostFactor;
		bool bOverrideLocation;
		float Duration;
		AActor* ActorToBoost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|Streaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Let the content streaming system know that there is a viewpoint other than a possessed camera that should be taken\n\x09 * into account when deciding what to stream in. This can be useful when you're using a scene capture component,\n\x09 * which if it's capturing a scene that isn't close to a player, can result in blurry textures.\n\x09 * @param ViewOrigin The world space view point\n\x09 * @param ScreenWidth The width in pixels of the screen being rendered\n\x09 * @param FOV Horizontal field of view, in degrees\n\x09 * @param BoostFactor How much to boost the LOD by (1 being normal, higher being higher detail)\n\x09 * @param bOverrideLocation\x09Whether this is an override location, which forces the streaming system to ignore all other regular locations\n\x09 * @param Duration How long the streaming system should keep checking this location (in seconds). 0 means just for the next Tick.\n\x09 * @param ActorToBoost Optional pointer to an actor who's textures should have their streaming priority boosted\n\x09 */" },
#endif
		{ "CPP_Default_ActorToBoost", "None" },
		{ "CPP_Default_BoostFactor", "1.000000" },
		{ "CPP_Default_bOverrideLocation", "false" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Let the content streaming system know that there is a viewpoint other than a possessed camera that should be taken\ninto account when deciding what to stream in. This can be useful when you're using a scene capture component,\nwhich if it's capturing a scene that isn't close to a player, can result in blurry textures.\n@param ViewOrigin The world space view point\n@param ScreenWidth The width in pixels of the screen being rendered\n@param FOV Horizontal field of view, in degrees\n@param BoostFactor How much to boost the LOD by (1 being normal, higher being higher detail)\n@param bOverrideLocation     Whether this is an override location, which forces the streaming system to ignore all other regular locations\n@param Duration How long the streaming system should keep checking this location (in seconds). 0 means just for the next Tick.\n@param ActorToBoost Optional pointer to an actor who's textures should have their streaming priority boosted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewOrigin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostFactor;
	static void NewProp_bOverrideLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToBoost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_ViewOrigin = { "ViewOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventAddViewOriginToStreaming_Parms, ViewOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewOrigin_MetaData), NewProp_ViewOrigin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_ScreenWidth = { "ScreenWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventAddViewOriginToStreaming_Parms, ScreenWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventAddViewOriginToStreaming_Parms, FOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_BoostFactor = { "BoostFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventAddViewOriginToStreaming_Parms, BoostFactor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_bOverrideLocation_SetBit(void* Obj)
{
	((StevesBPL_eventAddViewOriginToStreaming_Parms*)Obj)->bOverrideLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_bOverrideLocation = { "bOverrideLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StevesBPL_eventAddViewOriginToStreaming_Parms), &Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_bOverrideLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventAddViewOriginToStreaming_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_ActorToBoost = { "ActorToBoost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventAddViewOriginToStreaming_Parms, ActorToBoost), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_ViewOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_ScreenWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_BoostFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_bOverrideLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::NewProp_ActorToBoost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "AddViewOriginToStreaming", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::StevesBPL_eventAddViewOriginToStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::StevesBPL_eventAddViewOriginToStreaming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execAddViewOriginToStreaming)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ViewOrigin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenWidth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FOV);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BoostFactor);
	P_GET_UBOOL(Z_Param_bOverrideLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_OBJECT(AActor,Z_Param_ActorToBoost);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStevesBPL::AddViewOriginToStreaming(Z_Param_Out_ViewOrigin,Z_Param_ScreenWidth,Z_Param_FOV,Z_Param_BoostFactor,Z_Param_bOverrideLocation,Z_Param_Duration,Z_Param_ActorToBoost);
	P_NATIVE_END;
}
// End Class UStevesBPL Function AddViewOriginToStreaming

// Begin Class UStevesBPL Function BalancedRandom
struct Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics
{
	struct StevesBPL_eventBalancedRandom_Parms
	{
		FStevesBalancedRandomStream Stream;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|Random" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandom_Parms, Stream), Z_Construct_UScriptStruct_FStevesBalancedRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) }; // 1988292872
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::NewProp_Stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "BalancedRandom", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::StevesBPL_eventBalancedRandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::StevesBPL_eventBalancedRandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_BalancedRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_BalancedRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execBalancedRandom)
{
	P_GET_STRUCT_REF(FStevesBalancedRandomStream,Z_Param_Out_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UStevesBPL::BalancedRandom(Z_Param_Out_Stream);
	P_NATIVE_END;
}
// End Class UStevesBPL Function BalancedRandom

// Begin Class UStevesBPL Function BalancedRandom2D
struct Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics
{
	struct StevesBPL_eventBalancedRandom2D_Parms
	{
		FStevesBalancedRandomStream Stream;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|Random" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandom2D_Parms, Stream), Z_Construct_UScriptStruct_FStevesBalancedRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) }; // 1988292872
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandom2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::NewProp_Stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "BalancedRandom2D", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::StevesBPL_eventBalancedRandom2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::StevesBPL_eventBalancedRandom2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_BalancedRandom2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_BalancedRandom2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execBalancedRandom2D)
{
	P_GET_STRUCT_REF(FStevesBalancedRandomStream,Z_Param_Out_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UStevesBPL::BalancedRandom2D(Z_Param_Out_Stream);
	P_NATIVE_END;
}
// End Class UStevesBPL Function BalancedRandom2D

// Begin Class UStevesBPL Function BalancedRandom3D
struct Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics
{
	struct StevesBPL_eventBalancedRandom3D_Parms
	{
		FStevesBalancedRandomStream Stream;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|Random" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandom3D_Parms, Stream), Z_Construct_UScriptStruct_FStevesBalancedRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) }; // 1988292872
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandom3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::NewProp_Stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "BalancedRandom3D", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::StevesBPL_eventBalancedRandom3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::StevesBPL_eventBalancedRandom3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_BalancedRandom3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_BalancedRandom3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execBalancedRandom3D)
{
	P_GET_STRUCT_REF(FStevesBalancedRandomStream,Z_Param_Out_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UStevesBPL::BalancedRandom3D(Z_Param_Out_Stream);
	P_NATIVE_END;
}
// End Class UStevesBPL Function BalancedRandom3D

// Begin Class UStevesBPL Function BalancedRandomPointInBox
struct Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics
{
	struct StevesBPL_eventBalancedRandomPointInBox_Parms
	{
		FStevesBalancedRandomStream Stream;
		FVector Min;
		FVector Max;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|Random" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandomPointInBox_Parms, Stream), Z_Construct_UScriptStruct_FStevesBalancedRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) }; // 1988292872
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandomPointInBox_Parms, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandomPointInBox_Parms, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandomPointInBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::NewProp_Stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "BalancedRandomPointInBox", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::StevesBPL_eventBalancedRandomPointInBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::StevesBPL_eventBalancedRandomPointInBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execBalancedRandomPointInBox)
{
	P_GET_STRUCT_REF(FStevesBalancedRandomStream,Z_Param_Out_Stream);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Min);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UStevesBPL::BalancedRandomPointInBox(Z_Param_Out_Stream,Z_Param_Out_Min,Z_Param_Out_Max);
	P_NATIVE_END;
}
// End Class UStevesBPL Function BalancedRandomPointInBox

// Begin Class UStevesBPL Function BalancedRandomVector
struct Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics
{
	struct StevesBPL_eventBalancedRandomVector_Parms
	{
		FStevesBalancedRandomStream Stream;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|Random" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandomVector_Parms, Stream), Z_Construct_UScriptStruct_FStevesBalancedRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) }; // 1988292872
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventBalancedRandomVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::NewProp_Stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "BalancedRandomVector", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::StevesBPL_eventBalancedRandomVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::StevesBPL_eventBalancedRandomVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_BalancedRandomVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_BalancedRandomVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execBalancedRandomVector)
{
	P_GET_STRUCT_REF(FStevesBalancedRandomStream,Z_Param_Out_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UStevesBPL::BalancedRandomVector(Z_Param_Out_Stream);
	P_NATIVE_END;
}
// End Class UStevesBPL Function BalancedRandomVector

// Begin Class UStevesBPL Function InsertChildWidgetAt
struct Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics
{
	struct StevesBPL_eventInsertChildWidgetAt_Parms
	{
		UPanelWidget* Parent;
		UWidget* Child;
		int32 AtIndex;
		UPanelSlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Insert a child widget at a specific index\n\x09 * @param Parent The container widget\n\x09 * @param Child The child widget to add\n\x09 * @param AtIndex The index at which the new child should exist\n\x09 * @returns The slot the child was inserted at\n\x09 */" },
#endif
		{ "CPP_Default_AtIndex", "0" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Insert a child widget at a specific index\n@param Parent The container widget\n@param Child The child widget to add\n@param AtIndex The index at which the new child should exist\n@returns The slot the child was inserted at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Child;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AtIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventInsertChildWidgetAt_Parms, Parent), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventInsertChildWidgetAt_Parms, Child), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::NewProp_AtIndex = { "AtIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventInsertChildWidgetAt_Parms, AtIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventInsertChildWidgetAt_Parms, ReturnValue), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::NewProp_AtIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "InsertChildWidgetAt", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::StevesBPL_eventInsertChildWidgetAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::StevesBPL_eventInsertChildWidgetAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execInsertChildWidgetAt)
{
	P_GET_OBJECT(UPanelWidget,Z_Param_Parent);
	P_GET_OBJECT(UWidget,Z_Param_Child);
	P_GET_PROPERTY(FIntProperty,Z_Param_AtIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPanelSlot**)Z_Param__Result=UStevesBPL::InsertChildWidgetAt(Z_Param_Parent,Z_Param_Child,Z_Param_AtIndex);
	P_NATIVE_END;
}
// End Class UStevesBPL Function InsertChildWidgetAt

// Begin Class UStevesBPL Function MakeBalancedRandomStream
struct Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics
{
	struct StevesBPL_eventMakeBalancedRandomStream_Parms
	{
		int64 Seed;
		FStevesBalancedRandomStream ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|Random" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Seed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventMakeBalancedRandomStream_Parms, Seed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventMakeBalancedRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FStevesBalancedRandomStream, METADATA_PARAMS(0, nullptr) }; // 1988292872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "MakeBalancedRandomStream", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::StevesBPL_eventMakeBalancedRandomStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::StevesBPL_eventMakeBalancedRandomStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execMakeBalancedRandomStream)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Seed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStevesBalancedRandomStream*)Z_Param__Result=UStevesBPL::MakeBalancedRandomStream(Z_Param_Seed);
	P_NATIVE_END;
}
// End Class UStevesBPL Function MakeBalancedRandomStream

// Begin Class UStevesBPL Function SetWidgetFocus
struct Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics
{
	struct StevesBPL_eventSetWidgetFocus_Parms
	{
		UWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the focus to a given widget \"properly\", which means that if this is a widget derived\n\x09* from UFocusableWidget, it calls SetFocusProperly on it which allows a customised implementation.\n    * @param Widget The widget to give focus to\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the focus to a given widget \"properly\", which means that if this is a widget derived\nfrom UFocusableWidget, it calls SetFocusProperly on it which allows a customised implementation.\n@param Widget The widget to give focus to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventSetWidgetFocus_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "SetWidgetFocus", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::StevesBPL_eventSetWidgetFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::StevesBPL_eventSetWidgetFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_SetWidgetFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_SetWidgetFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execSetWidgetFocus)
{
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStevesBPL::SetWidgetFocus(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UStevesBPL Function SetWidgetFocus

// Begin Class UStevesBPL Function SphereOverlapCone
struct Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics
{
	struct StevesBPL_eventSphereOverlapCone_Parms
	{
		FVector ConeOrigin;
		FVector ConeDir;
		float ConeAngle;
		float Distance;
		FVector SphereCentre;
		float SphereRadius;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|Math" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return whether a sphere overlaps a cone\n\x09* @param ConeOrigin Origin of the cone\n\x09* @param ConeDir Direction of the cone, must be normalised\n\x09* @param ConeAngle Angle of the cone, in degrees\n\x09* @param Distance Length of the cone\n\x09* @param SphereCentre Centre of the sphere\n\x09* @param SphereRadius Radius of the sphere\n\x09* @return True if the sphere overlaps the cone\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return whether a sphere overlaps a cone\n@param ConeOrigin Origin of the cone\n@param ConeDir Direction of the cone, must be normalised\n@param ConeAngle Angle of the cone, in degrees\n@param Distance Length of the cone\n@param SphereCentre Centre of the sphere\n@param SphereRadius Radius of the sphere\n@return True if the sphere overlaps the cone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeDir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCentre;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ConeOrigin = { "ConeOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventSphereOverlapCone_Parms, ConeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ConeDir = { "ConeDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventSphereOverlapCone_Parms, ConeDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ConeAngle = { "ConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventSphereOverlapCone_Parms, ConeAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventSphereOverlapCone_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_SphereCentre = { "SphereCentre", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventSphereOverlapCone_Parms, SphereCentre), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventSphereOverlapCone_Parms, SphereRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StevesBPL_eventSphereOverlapCone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StevesBPL_eventSphereOverlapCone_Parms), &Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ConeOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ConeDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ConeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_SphereCentre,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "SphereOverlapCone", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::StevesBPL_eventSphereOverlapCone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::StevesBPL_eventSphereOverlapCone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_SphereOverlapCone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_SphereOverlapCone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execSphereOverlapCone)
{
	P_GET_STRUCT(FVector,Z_Param_ConeOrigin);
	P_GET_STRUCT(FVector,Z_Param_ConeDir);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ConeAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_STRUCT(FVector,Z_Param_SphereCentre);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SphereRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UStevesBPL::SphereOverlapCone(Z_Param_ConeOrigin,Z_Param_ConeDir,Z_Param_ConeAngle,Z_Param_Distance,Z_Param_SphereCentre,Z_Param_SphereRadius);
	P_NATIVE_END;
}
// End Class UStevesBPL Function SphereOverlapCone

// Begin Class UStevesBPL Function UpdateStreaming
struct Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics
{
	struct StevesBPL_eventUpdateStreaming_Parms
	{
		float DeltaTime;
		bool bBlockUntilDone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "StevesUEHelpers|Streaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Force content streaming to update. Useful if you need things to stream in sooner than usual.\n\x09 * @param DeltaTime The amount of time to tell the streaming system that has passed.\n\x09 * @param bBlockUntilDone If true, this call will not return until the streaming system has updated\n\x09 */" },
#endif
		{ "CPP_Default_bBlockUntilDone", "false" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force content streaming to update. Useful if you need things to stream in sooner than usual.\n@param DeltaTime The amount of time to tell the streaming system that has passed.\n@param bBlockUntilDone If true, this call will not return until the streaming system has updated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_bBlockUntilDone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockUntilDone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesBPL_eventUpdateStreaming_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::NewProp_bBlockUntilDone_SetBit(void* Obj)
{
	((StevesBPL_eventUpdateStreaming_Parms*)Obj)->bBlockUntilDone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::NewProp_bBlockUntilDone = { "bBlockUntilDone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StevesBPL_eventUpdateStreaming_Parms), &Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::NewProp_bBlockUntilDone_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::NewProp_bBlockUntilDone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesBPL, nullptr, "UpdateStreaming", nullptr, nullptr, Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::StevesBPL_eventUpdateStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::StevesBPL_eventUpdateStreaming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesBPL_UpdateStreaming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesBPL_UpdateStreaming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesBPL::execUpdateStreaming)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_UBOOL(Z_Param_bBlockUntilDone);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStevesBPL::UpdateStreaming(Z_Param_DeltaTime,Z_Param_bBlockUntilDone);
	P_NATIVE_END;
}
// End Class UStevesBPL Function UpdateStreaming

// Begin Class UStevesBPL
void UStevesBPL::StaticRegisterNativesUStevesBPL()
{
	UClass* Class = UStevesBPL::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddViewOriginToStreaming", &UStevesBPL::execAddViewOriginToStreaming },
		{ "BalancedRandom", &UStevesBPL::execBalancedRandom },
		{ "BalancedRandom2D", &UStevesBPL::execBalancedRandom2D },
		{ "BalancedRandom3D", &UStevesBPL::execBalancedRandom3D },
		{ "BalancedRandomPointInBox", &UStevesBPL::execBalancedRandomPointInBox },
		{ "BalancedRandomVector", &UStevesBPL::execBalancedRandomVector },
		{ "InsertChildWidgetAt", &UStevesBPL::execInsertChildWidgetAt },
		{ "MakeBalancedRandomStream", &UStevesBPL::execMakeBalancedRandomStream },
		{ "SetWidgetFocus", &UStevesBPL::execSetWidgetFocus },
		{ "SphereOverlapCone", &UStevesBPL::execSphereOverlapCone },
		{ "UpdateStreaming", &UStevesBPL::execUpdateStreaming },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesBPL);
UClass* Z_Construct_UClass_UStevesBPL_NoRegister()
{
	return UStevesBPL::StaticClass();
}
struct Z_Construct_UClass_UStevesBPL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint library exposing various things in a Blueprint-friendly way e.g. using by-value FVectors so they can\n * be entered directly if required, rather than const& as in C++. Also use degrees not radians.\n */" },
#endif
		{ "IncludePath", "StevesBPL.h" },
		{ "ModuleRelativePath", "Public/StevesBPL.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint library exposing various things in a Blueprint-friendly way e.g. using by-value FVectors so they can\nbe entered directly if required, rather than const& as in C++. Also use degrees not radians." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStevesBPL_AddViewOriginToStreaming, "AddViewOriginToStreaming" }, // 1513285280
		{ &Z_Construct_UFunction_UStevesBPL_BalancedRandom, "BalancedRandom" }, // 1155626408
		{ &Z_Construct_UFunction_UStevesBPL_BalancedRandom2D, "BalancedRandom2D" }, // 730653996
		{ &Z_Construct_UFunction_UStevesBPL_BalancedRandom3D, "BalancedRandom3D" }, // 613474849
		{ &Z_Construct_UFunction_UStevesBPL_BalancedRandomPointInBox, "BalancedRandomPointInBox" }, // 1674620958
		{ &Z_Construct_UFunction_UStevesBPL_BalancedRandomVector, "BalancedRandomVector" }, // 51834864
		{ &Z_Construct_UFunction_UStevesBPL_InsertChildWidgetAt, "InsertChildWidgetAt" }, // 1808953878
		{ &Z_Construct_UFunction_UStevesBPL_MakeBalancedRandomStream, "MakeBalancedRandomStream" }, // 154982020
		{ &Z_Construct_UFunction_UStevesBPL_SetWidgetFocus, "SetWidgetFocus" }, // 3740950433
		{ &Z_Construct_UFunction_UStevesBPL_SphereOverlapCone, "SphereOverlapCone" }, // 3060433493
		{ &Z_Construct_UFunction_UStevesBPL_UpdateStreaming, "UpdateStreaming" }, // 865059898
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesBPL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStevesBPL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesBPL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesBPL_Statics::ClassParams = {
	&UStevesBPL::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesBPL_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesBPL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesBPL()
{
	if (!Z_Registration_Info_UClass_UStevesBPL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesBPL.OuterSingleton, Z_Construct_UClass_UStevesBPL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesBPL.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesBPL>()
{
	return UStevesBPL::StaticClass();
}
UStevesBPL::UStevesBPL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesBPL);
UStevesBPL::~UStevesBPL() {}
// End Class UStevesBPL

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesBPL, UStevesBPL::StaticClass, TEXT("UStevesBPL"), &Z_Registration_Info_UClass_UStevesBPL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesBPL), 10470854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_1887848472(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesBPL_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
