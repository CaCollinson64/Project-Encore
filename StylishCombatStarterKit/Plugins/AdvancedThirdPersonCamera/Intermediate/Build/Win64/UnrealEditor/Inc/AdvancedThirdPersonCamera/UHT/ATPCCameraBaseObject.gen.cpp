// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraBaseObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraBaseObject() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraBaseObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraBaseObject_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraBaseObject Function GetOwningActor
struct Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics
{
	struct ATPCCameraBaseObject_eventGetOwningActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraBaseObject_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "GetOwningActor", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::ATPCCameraBaseObject_eventGetOwningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::ATPCCameraBaseObject_eventGetOwningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraBaseObject::execGetOwningActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
	P_NATIVE_END;
}
// End Class UATPCCameraBaseObject Function GetOwningActor

// Begin Class UATPCCameraBaseObject Function GetOwningCamera
struct Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics
{
	struct ATPCCameraBaseObject_eventGetOwningCamera_Parms
	{
		UATPCCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraBaseObject_eventGetOwningCamera_Parms, ReturnValue), Z_Construct_UClass_UATPCCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "GetOwningCamera", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::ATPCCameraBaseObject_eventGetOwningCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::ATPCCameraBaseObject_eventGetOwningCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraBaseObject::execGetOwningCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UATPCCameraComponent**)Z_Param__Result=P_THIS->GetOwningCamera();
	P_NATIVE_END;
}
// End Class UATPCCameraBaseObject Function GetOwningCamera

// Begin Class UATPCCameraBaseObject Function GetOwningPawn
struct Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics
{
	struct ATPCCameraBaseObject_eventGetOwningPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraBaseObject_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "GetOwningPawn", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::ATPCCameraBaseObject_eventGetOwningPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::ATPCCameraBaseObject_eventGetOwningPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraBaseObject::execGetOwningPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
	P_NATIVE_END;
}
// End Class UATPCCameraBaseObject Function GetOwningPawn

// Begin Class UATPCCameraBaseObject Function GetPlayerCameraManager
struct Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics
{
	struct ATPCCameraBaseObject_eventGetPlayerCameraManager_Parms
	{
		APlayerCameraManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraBaseObject_eventGetPlayerCameraManager_Parms, ReturnValue), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "GetPlayerCameraManager", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::ATPCCameraBaseObject_eventGetPlayerCameraManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::ATPCCameraBaseObject_eventGetPlayerCameraManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraBaseObject::execGetPlayerCameraManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerCameraManager**)Z_Param__Result=P_THIS->GetPlayerCameraManager();
	P_NATIVE_END;
}
// End Class UATPCCameraBaseObject Function GetPlayerCameraManager

// Begin Class UATPCCameraBaseObject Function GetPlayerController
struct Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics
{
	struct ATPCCameraBaseObject_eventGetPlayerController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraBaseObject_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "GetPlayerController", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::ATPCCameraBaseObject_eventGetPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::ATPCCameraBaseObject_eventGetPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraBaseObject::execGetPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetPlayerController();
	P_NATIVE_END;
}
// End Class UATPCCameraBaseObject Function GetPlayerController

// Begin Class UATPCCameraBaseObject Function K2_OnEnterCameraMode
struct ATPCCameraBaseObject_eventK2_OnEnterCameraMode_Parms
{
	bool bWithInterpolation;
};
static const FName NAME_UATPCCameraBaseObject_K2_OnEnterCameraMode = FName(TEXT("K2_OnEnterCameraMode"));
void UATPCCameraBaseObject::K2_OnEnterCameraMode(bool bWithInterpolation)
{
	ATPCCameraBaseObject_eventK2_OnEnterCameraMode_Parms Parms;
	Parms.bWithInterpolation=bWithInterpolation ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraBaseObject_K2_OnEnterCameraMode);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnEnterCameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWithInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::NewProp_bWithInterpolation_SetBit(void* Obj)
{
	((ATPCCameraBaseObject_eventK2_OnEnterCameraMode_Parms*)Obj)->bWithInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::NewProp_bWithInterpolation = { "bWithInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraBaseObject_eventK2_OnEnterCameraMode_Parms), &Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::NewProp_bWithInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::NewProp_bWithInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "K2_OnEnterCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::PropPointers), sizeof(ATPCCameraBaseObject_eventK2_OnEnterCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(ATPCCameraBaseObject_eventK2_OnEnterCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UATPCCameraBaseObject Function K2_OnEnterCameraMode

// Begin Class UATPCCameraBaseObject Function K2_OnExitCameraMode
static const FName NAME_UATPCCameraBaseObject_K2_OnExitCameraMode = FName(TEXT("K2_OnExitCameraMode"));
void UATPCCameraBaseObject::K2_OnExitCameraMode()
{
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraBaseObject_K2_OnExitCameraMode);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnExitCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnExitCameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnExitCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "K2_OnExitCameraMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnExitCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnExitCameraMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnExitCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnExitCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UATPCCameraBaseObject Function K2_OnExitCameraMode

// Begin Class UATPCCameraBaseObject Function K2_Tick
struct ATPCCameraBaseObject_eventK2_Tick_Parms
{
	float DeltaSeconds;
};
static const FName NAME_UATPCCameraBaseObject_K2_Tick = FName(TEXT("K2_Tick"));
void UATPCCameraBaseObject::K2_Tick(float DeltaSeconds)
{
	ATPCCameraBaseObject_eventK2_Tick_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraBaseObject_K2_Tick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraBaseObject_eventK2_Tick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "K2_Tick", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::PropPointers), sizeof(ATPCCameraBaseObject_eventK2_Tick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::Function_MetaDataParams) };
static_assert(sizeof(ATPCCameraBaseObject_eventK2_Tick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UATPCCameraBaseObject Function K2_Tick

// Begin Class UATPCCameraBaseObject Function K2_Validate
struct ATPCCameraBaseObject_eventK2_Validate_Parms
{
	bool bWithInterpolation;
};
static const FName NAME_UATPCCameraBaseObject_K2_Validate = FName(TEXT("K2_Validate"));
void UATPCCameraBaseObject::K2_Validate(bool bWithInterpolation)
{
	ATPCCameraBaseObject_eventK2_Validate_Parms Parms;
	Parms.bWithInterpolation=bWithInterpolation ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraBaseObject_K2_Validate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Validate" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWithInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::NewProp_bWithInterpolation_SetBit(void* Obj)
{
	((ATPCCameraBaseObject_eventK2_Validate_Parms*)Obj)->bWithInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::NewProp_bWithInterpolation = { "bWithInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraBaseObject_eventK2_Validate_Parms), &Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::NewProp_bWithInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::NewProp_bWithInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "K2_Validate", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::PropPointers), sizeof(ATPCCameraBaseObject_eventK2_Validate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::Function_MetaDataParams) };
static_assert(sizeof(ATPCCameraBaseObject_eventK2_Validate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UATPCCameraBaseObject Function K2_Validate

// Begin Class UATPCCameraBaseObject Function Validate
struct Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics
{
	struct ATPCCameraBaseObject_eventValidate_Parms
	{
		bool bWithInterpolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Validate params in object */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate params in object" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bWithInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::NewProp_bWithInterpolation_SetBit(void* Obj)
{
	((ATPCCameraBaseObject_eventValidate_Parms*)Obj)->bWithInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::NewProp_bWithInterpolation = { "bWithInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraBaseObject_eventValidate_Parms), &Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::NewProp_bWithInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::NewProp_bWithInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraBaseObject, nullptr, "Validate", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::ATPCCameraBaseObject_eventValidate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::ATPCCameraBaseObject_eventValidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraBaseObject_Validate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraBaseObject_Validate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraBaseObject::execValidate)
{
	P_GET_UBOOL(Z_Param_bWithInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Validate(Z_Param_bWithInterpolation);
	P_NATIVE_END;
}
// End Class UATPCCameraBaseObject Function Validate

// Begin Class UATPCCameraBaseObject
void UATPCCameraBaseObject::StaticRegisterNativesUATPCCameraBaseObject()
{
	UClass* Class = UATPCCameraBaseObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwningActor", &UATPCCameraBaseObject::execGetOwningActor },
		{ "GetOwningCamera", &UATPCCameraBaseObject::execGetOwningCamera },
		{ "GetOwningPawn", &UATPCCameraBaseObject::execGetOwningPawn },
		{ "GetPlayerCameraManager", &UATPCCameraBaseObject::execGetPlayerCameraManager },
		{ "GetPlayerController", &UATPCCameraBaseObject::execGetPlayerController },
		{ "Validate", &UATPCCameraBaseObject::execValidate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraBaseObject);
UClass* Z_Construct_UClass_UATPCCameraBaseObject_NoRegister()
{
	return UATPCCameraBaseObject::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraBaseObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* Base object for all camera objects in this plugin \n* All K2(blueprint) functions are called from native functions(example: K2Tick from Tick)\n*/" },
#endif
		{ "IncludePath", "ATPCCameraBaseObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base object for all camera objects in this plugin\nAll K2(blueprint) functions are called from native functions(example: K2Tick from Tick)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATPCCameraBaseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningActor, "GetOwningActor" }, // 3260171264
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningCamera, "GetOwningCamera" }, // 1176879317
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_GetOwningPawn, "GetOwningPawn" }, // 1873118711
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerCameraManager, "GetPlayerCameraManager" }, // 1364808248
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_GetPlayerController, "GetPlayerController" }, // 1053458648
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnEnterCameraMode, "K2_OnEnterCameraMode" }, // 2922775959
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_K2_OnExitCameraMode, "K2_OnExitCameraMode" }, // 1938733681
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_K2_Tick, "K2_Tick" }, // 1985043193
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_K2_Validate, "K2_Validate" }, // 1342399561
		{ &Z_Construct_UFunction_UATPCCameraBaseObject_Validate, "Validate" }, // 4018626319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraBaseObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraBaseObject_Statics::NewProp_OwningCamera = { "OwningCamera", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraBaseObject, OwningCamera), Z_Construct_UClass_UATPCCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCamera_MetaData), NewProp_OwningCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATPCCameraBaseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraBaseObject_Statics::NewProp_OwningCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraBaseObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UATPCCameraBaseObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraBaseObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraBaseObject_Statics::ClassParams = {
	&UATPCCameraBaseObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UATPCCameraBaseObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraBaseObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraBaseObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraBaseObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraBaseObject()
{
	if (!Z_Registration_Info_UClass_UATPCCameraBaseObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraBaseObject.OuterSingleton, Z_Construct_UClass_UATPCCameraBaseObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraBaseObject.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraBaseObject>()
{
	return UATPCCameraBaseObject::StaticClass();
}
UATPCCameraBaseObject::UATPCCameraBaseObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraBaseObject);
UATPCCameraBaseObject::~UATPCCameraBaseObject() {}
// End Class UATPCCameraBaseObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraBaseObject, UATPCCameraBaseObject::StaticClass, TEXT("UATPCCameraBaseObject"), &Z_Registration_Info_UClass_UATPCCameraBaseObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraBaseObject), 2245628501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_3850295947(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraBaseObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
