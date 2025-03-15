// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraLocationObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraLocationObject() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraBaseObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraLocationObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraLocationObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraLocationObject Function AttachCameraToComponent
struct Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics
{
	struct ATPCCameraLocationObject_eventAttachCameraToComponent_Parms
	{
		USceneComponent* ParentComponent;
		FVector RelativeLocation;
		FName SocketName;
		bool bWithInterp;
		float InterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End Override Rotation Section\n" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static void NewProp_bWithInterp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithInterp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_ParentComponent = { "ParentComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventAttachCameraToComponent_Parms, ParentComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentComponent_MetaData), NewProp_ParentComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventAttachCameraToComponent_Parms, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventAttachCameraToComponent_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_bWithInterp_SetBit(void* Obj)
{
	((ATPCCameraLocationObject_eventAttachCameraToComponent_Parms*)Obj)->bWithInterp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_bWithInterp = { "bWithInterp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraLocationObject_eventAttachCameraToComponent_Parms), &Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_bWithInterp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventAttachCameraToComponent_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_ParentComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_RelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_bWithInterp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "AttachCameraToComponent", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::ATPCCameraLocationObject_eventAttachCameraToComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::ATPCCameraLocationObject_eventAttachCameraToComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execAttachCameraToComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_ParentComponent);
	P_GET_STRUCT(FVector,Z_Param_RelativeLocation);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_GET_UBOOL(Z_Param_bWithInterp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachCameraToComponent(Z_Param_ParentComponent,Z_Param_RelativeLocation,Z_Param_SocketName,Z_Param_bWithInterp,Z_Param_InterpSpeed);
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function AttachCameraToComponent

// Begin Class UATPCCameraLocationObject Function GetAllSocketOffsets
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics
{
	struct ATPCCameraLocationObject_eventGetAllSocketOffsets_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return all socket offsets(from cameraMode, customSocketOffset, curveSocketOffset, floorOffset)\n" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return all socket offsets(from cameraMode, customSocketOffset, curveSocketOffset, floorOffset)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetAllSocketOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetAllSocketOffsets", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::ATPCCameraLocationObject_eventGetAllSocketOffsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::ATPCCameraLocationObject_eventGetAllSocketOffsets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetAllSocketOffsets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetAllSocketOffsets();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetAllSocketOffsets

// Begin Class UATPCCameraLocationObject Function GetCameraDistance
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics
{
	struct ATPCCameraLocationObject_eventGetCameraDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return camera distance without target, socket offsets and other modifiers*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return camera distance without target, socket offsets and other modifiers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetCameraDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetCameraDistance", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::ATPCCameraLocationObject_eventGetCameraDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::ATPCCameraLocationObject_eventGetCameraDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetCameraDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCameraDistance();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetCameraDistance

// Begin Class UATPCCameraLocationObject Function GetCameraLocation
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics
{
	struct ATPCCameraLocationObject_eventGetCameraLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetCameraLocation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::ATPCCameraLocationObject_eventGetCameraLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::ATPCCameraLocationObject_eventGetCameraLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetCameraLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetCameraLocation

// Begin Class UATPCCameraLocationObject Function GetCameraRotation
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics
{
	struct ATPCCameraLocationObject_eventGetCameraRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetCameraRotation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::ATPCCameraLocationObject_eventGetCameraRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::ATPCCameraLocationObject_eventGetCameraRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetCameraRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetCameraRotation

// Begin Class UATPCCameraLocationObject Function GetCameraTargetDistance
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics
{
	struct ATPCCameraLocationObject_eventGetCameraTargetDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetCameraTargetDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetCameraTargetDistance", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::ATPCCameraLocationObject_eventGetCameraTargetDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::ATPCCameraLocationObject_eventGetCameraTargetDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetCameraTargetDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCameraTargetDistance();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetCameraTargetDistance

// Begin Class UATPCCameraLocationObject Function GetDesiredRotation
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics
{
	struct ATPCCameraLocationObject_eventGetDesiredRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetDesiredRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetDesiredRotation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::ATPCCameraLocationObject_eventGetDesiredRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::ATPCCameraLocationObject_eventGetDesiredRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetDesiredRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRotation();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetDesiredRotation

// Begin Class UATPCCameraLocationObject Function GetOverrideCameraRotation
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics
{
	struct ATPCCameraLocationObject_eventGetOverrideCameraRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetOverrideCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetOverrideCameraRotation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::ATPCCameraLocationObject_eventGetOverrideCameraRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::ATPCCameraLocationObject_eventGetOverrideCameraRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetOverrideCameraRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetOverrideCameraRotation();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetOverrideCameraRotation

// Begin Class UATPCCameraLocationObject Function GetRealCameraDistance
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics
{
	struct ATPCCameraLocationObject_eventGetRealCameraDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return real distance between camera and character. With socket and target offsets and etc. */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return real distance between camera and character. With socket and target offsets and etc." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetRealCameraDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetRealCameraDistance", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::ATPCCameraLocationObject_eventGetRealCameraDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::ATPCCameraLocationObject_eventGetRealCameraDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetRealCameraDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRealCameraDistance();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetRealCameraDistance

// Begin Class UATPCCameraLocationObject Function GetSocketOffset
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics
{
	struct ATPCCameraLocationObject_eventGetSocketOffset_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ Begin Socket Offset Section\n" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetSocketOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetSocketOffset", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::ATPCCameraLocationObject_eventGetSocketOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::ATPCCameraLocationObject_eventGetSocketOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetSocketOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSocketOffset();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetSocketOffset

// Begin Class UATPCCameraLocationObject Function GetTargetOffset
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics
{
	struct ATPCCameraLocationObject_eventGetTargetOffset_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ Begin Target Offset Section\n" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetTargetOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetTargetOffset", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::ATPCCameraLocationObject_eventGetTargetOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::ATPCCameraLocationObject_eventGetTargetOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetTargetOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTargetOffset();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetTargetOffset

// Begin Class UATPCCameraLocationObject Function GetTargetRotation
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics
{
	struct ATPCCameraLocationObject_eventGetTargetRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetTargetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetTargetRotation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::ATPCCameraLocationObject_eventGetTargetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::ATPCCameraLocationObject_eventGetTargetRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetTargetRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetTargetRotation();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetTargetRotation

// Begin Class UATPCCameraLocationObject Function GetViewRotation
struct Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics
{
	struct ATPCCameraLocationObject_eventGetViewRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get view rotation from pawn */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get view rotation from pawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventGetViewRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "GetViewRotation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::ATPCCameraLocationObject_eventGetViewRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::ATPCCameraLocationObject_eventGetViewRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execGetViewRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function GetViewRotation

// Begin Class UATPCCameraLocationObject Function IsOverrideCameraRotation
struct Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics
{
	struct ATPCCameraLocationObject_eventIsOverrideCameraRotation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ATPCCameraLocationObject_eventIsOverrideCameraRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraLocationObject_eventIsOverrideCameraRotation_Parms), &Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "IsOverrideCameraRotation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::ATPCCameraLocationObject_eventIsOverrideCameraRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::ATPCCameraLocationObject_eventIsOverrideCameraRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execIsOverrideCameraRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOverrideCameraRotation();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function IsOverrideCameraRotation

// Begin Class UATPCCameraLocationObject Function ResetOverrideCameraRotation
struct Z_Construct_UFunction_UATPCCameraLocationObject_ResetOverrideCameraRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_ResetOverrideCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "ResetOverrideCameraRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_ResetOverrideCameraRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_ResetOverrideCameraRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_ResetOverrideCameraRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_ResetOverrideCameraRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execResetOverrideCameraRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetOverrideCameraRotation();
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function ResetOverrideCameraRotation

// Begin Class UATPCCameraLocationObject Function SetCameraDistance
struct Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics
{
	struct ATPCCameraLocationObject_eventSetCameraDistance_Parms
	{
		float NewDist;
		bool bInterpolate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDist;
	static void NewProp_bInterpolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::NewProp_NewDist = { "NewDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventSetCameraDistance_Parms, NewDist), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::NewProp_bInterpolate_SetBit(void* Obj)
{
	((ATPCCameraLocationObject_eventSetCameraDistance_Parms*)Obj)->bInterpolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraLocationObject_eventSetCameraDistance_Parms), &Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::NewProp_NewDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::NewProp_bInterpolate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "SetCameraDistance", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::ATPCCameraLocationObject_eventSetCameraDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::ATPCCameraLocationObject_eventSetCameraDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execSetCameraDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDist);
	P_GET_UBOOL(Z_Param_bInterpolate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraDistance(Z_Param_NewDist,Z_Param_bInterpolate);
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function SetCameraDistance

// Begin Class UATPCCameraLocationObject Function SetOverrideCameraRotation
struct Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics
{
	struct ATPCCameraLocationObject_eventSetOverrideCameraRotation_Parms
	{
		FRotator NewOverrideRotation;
		bool bClampByCameraModeRotationLimits;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ Begin Override Rotation Section\n" },
#endif
		{ "CPP_Default_bClampByCameraModeRotationLimits", "false" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOverrideRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewOverrideRotation;
	static void NewProp_bClampByCameraModeRotationLimits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampByCameraModeRotationLimits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::NewProp_NewOverrideRotation = { "NewOverrideRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventSetOverrideCameraRotation_Parms, NewOverrideRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOverrideRotation_MetaData), NewProp_NewOverrideRotation_MetaData) };
void Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::NewProp_bClampByCameraModeRotationLimits_SetBit(void* Obj)
{
	((ATPCCameraLocationObject_eventSetOverrideCameraRotation_Parms*)Obj)->bClampByCameraModeRotationLimits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::NewProp_bClampByCameraModeRotationLimits = { "bClampByCameraModeRotationLimits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraLocationObject_eventSetOverrideCameraRotation_Parms), &Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::NewProp_bClampByCameraModeRotationLimits_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::NewProp_NewOverrideRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::NewProp_bClampByCameraModeRotationLimits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "SetOverrideCameraRotation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::ATPCCameraLocationObject_eventSetOverrideCameraRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::ATPCCameraLocationObject_eventSetOverrideCameraRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execSetOverrideCameraRotation)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewOverrideRotation);
	P_GET_UBOOL(Z_Param_bClampByCameraModeRotationLimits);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverrideCameraRotation(Z_Param_Out_NewOverrideRotation,Z_Param_bClampByCameraModeRotationLimits);
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function SetOverrideCameraRotation

// Begin Class UATPCCameraLocationObject Function SetViewRotation
struct Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics
{
	struct ATPCCameraLocationObject_eventSetViewRotation_Parms
	{
		FRotator Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLocationObject_eventSetViewRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLocationObject, nullptr, "SetViewRotation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::ATPCCameraLocationObject_eventSetViewRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::ATPCCameraLocationObject_eventSetViewRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLocationObject::execSetViewRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewRotation(Z_Param_Rotation);
	P_NATIVE_END;
}
// End Class UATPCCameraLocationObject Function SetViewRotation

// Begin Class UATPCCameraLocationObject
void UATPCCameraLocationObject::StaticRegisterNativesUATPCCameraLocationObject()
{
	UClass* Class = UATPCCameraLocationObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachCameraToComponent", &UATPCCameraLocationObject::execAttachCameraToComponent },
		{ "GetAllSocketOffsets", &UATPCCameraLocationObject::execGetAllSocketOffsets },
		{ "GetCameraDistance", &UATPCCameraLocationObject::execGetCameraDistance },
		{ "GetCameraLocation", &UATPCCameraLocationObject::execGetCameraLocation },
		{ "GetCameraRotation", &UATPCCameraLocationObject::execGetCameraRotation },
		{ "GetCameraTargetDistance", &UATPCCameraLocationObject::execGetCameraTargetDistance },
		{ "GetDesiredRotation", &UATPCCameraLocationObject::execGetDesiredRotation },
		{ "GetOverrideCameraRotation", &UATPCCameraLocationObject::execGetOverrideCameraRotation },
		{ "GetRealCameraDistance", &UATPCCameraLocationObject::execGetRealCameraDistance },
		{ "GetSocketOffset", &UATPCCameraLocationObject::execGetSocketOffset },
		{ "GetTargetOffset", &UATPCCameraLocationObject::execGetTargetOffset },
		{ "GetTargetRotation", &UATPCCameraLocationObject::execGetTargetRotation },
		{ "GetViewRotation", &UATPCCameraLocationObject::execGetViewRotation },
		{ "IsOverrideCameraRotation", &UATPCCameraLocationObject::execIsOverrideCameraRotation },
		{ "ResetOverrideCameraRotation", &UATPCCameraLocationObject::execResetOverrideCameraRotation },
		{ "SetCameraDistance", &UATPCCameraLocationObject::execSetCameraDistance },
		{ "SetOverrideCameraRotation", &UATPCCameraLocationObject::execSetOverrideCameraRotation },
		{ "SetViewRotation", &UATPCCameraLocationObject::execSetViewRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraLocationObject);
UClass* Z_Construct_UClass_UATPCCameraLocationObject_NoRegister()
{
	return UATPCCameraLocationObject::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraLocationObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ATPC" },
		{ "IncludePath", "ATPCCameraLocationObject.h" },
		{ "ModuleRelativePath", "Public/ATPCCameraLocationObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_AttachCameraToComponent, "AttachCameraToComponent" }, // 456523506
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetAllSocketOffsets, "GetAllSocketOffsets" }, // 3156374651
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraDistance, "GetCameraDistance" }, // 2077821303
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraLocation, "GetCameraLocation" }, // 2191744470
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraRotation, "GetCameraRotation" }, // 1452158873
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetCameraTargetDistance, "GetCameraTargetDistance" }, // 2135865948
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetDesiredRotation, "GetDesiredRotation" }, // 729761474
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetOverrideCameraRotation, "GetOverrideCameraRotation" }, // 3526711282
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetRealCameraDistance, "GetRealCameraDistance" }, // 2639921975
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetSocketOffset, "GetSocketOffset" }, // 3165241013
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetOffset, "GetTargetOffset" }, // 1275222763
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetTargetRotation, "GetTargetRotation" }, // 3725008889
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_GetViewRotation, "GetViewRotation" }, // 674068445
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_IsOverrideCameraRotation, "IsOverrideCameraRotation" }, // 2107099956
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_ResetOverrideCameraRotation, "ResetOverrideCameraRotation" }, // 875436483
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_SetCameraDistance, "SetCameraDistance" }, // 1614319534
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_SetOverrideCameraRotation, "SetOverrideCameraRotation" }, // 858612609
		{ &Z_Construct_UFunction_UATPCCameraLocationObject_SetViewRotation, "SetViewRotation" }, // 275544514
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraLocationObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UATPCCameraLocationObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UATPCCameraBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraLocationObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UATPCCameraLocationObject_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister, (int32)VTABLE_OFFSET(UATPCCameraLocationObject, IVisualLoggerDebugSnapshotInterface), false },  // 1118534434
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraLocationObject_Statics::ClassParams = {
	&UATPCCameraLocationObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraLocationObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraLocationObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraLocationObject()
{
	if (!Z_Registration_Info_UClass_UATPCCameraLocationObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraLocationObject.OuterSingleton, Z_Construct_UClass_UATPCCameraLocationObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraLocationObject.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraLocationObject>()
{
	return UATPCCameraLocationObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraLocationObject);
UATPCCameraLocationObject::~UATPCCameraLocationObject() {}
// End Class UATPCCameraLocationObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraLocationObject, UATPCCameraLocationObject::StaticClass, TEXT("UATPCCameraLocationObject"), &Z_Registration_Info_UClass_UATPCCameraLocationObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraLocationObject), 33645908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_756681198(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLocationObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
