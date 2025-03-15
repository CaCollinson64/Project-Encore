// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraComponent.h"
#include "AdvancedThirdPersonCamera/Public/ATPCTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraComponent() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_AATPCCameraVolume_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraBaseObject_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraComponent();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraComponent_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraFadingObject_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraFollowTerrainObject_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraFOVObject_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraLocationObject_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraLockOnTargetObject_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraShakesObject_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UFunction* Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraDebugRules();
ADVANCEDTHIRDPERSONCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FATPCCameraMode();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Delegate FOnCameraModeChangedDelegate
struct Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when camera mode is changed(set new camera mode, set override camera mode, reset override camera mode) */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when camera mode is changed(set new camera mode, set override camera mode, reset override camera mode)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "OnCameraModeChangedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UATPCCameraComponent::FOnCameraModeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCameraModeChangedDelegate)
{
	OnCameraModeChangedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnCameraModeChangedDelegate

// Begin Class UATPCCameraComponent Function AddCameraMode
struct Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics
{
	struct ATPCCameraComponent_eventAddCameraMode_Parms
	{
		UATPCCameraModeDataAsset* CameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ Begin functions for managing camera modes\n" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventAddCameraMode_Parms, CameraMode), Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::NewProp_CameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "AddCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::ATPCCameraComponent_eventAddCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::ATPCCameraComponent_eventAddCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execAddCameraMode)
{
	P_GET_OBJECT(UATPCCameraModeDataAsset,Z_Param_CameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCameraMode(Z_Param_CameraMode);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function AddCameraMode

// Begin Class UATPCCameraComponent Function CanSetCameraMode
struct ATPCCameraComponent_eventCanSetCameraMode_Parms
{
	FGameplayTag CameraModeTag;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ATPCCameraComponent_eventCanSetCameraMode_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UATPCCameraComponent_CanSetCameraMode = FName(TEXT("CanSetCameraMode"));
bool UATPCCameraComponent::CanSetCameraMode(FGameplayTag CameraModeTag) const
{
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraComponent_CanSetCameraMode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ATPCCameraComponent_eventCanSetCameraMode_Parms Parms;
		Parms.CameraModeTag=CameraModeTag;
		const_cast<UATPCCameraComponent*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UATPCCameraComponent*>(this)->CanSetCameraMode_Implementation(CameraModeTag);
	}
}
struct Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This function for override */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function for override" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::NewProp_CameraModeTag = { "CameraModeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventCanSetCameraMode_Parms, CameraModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ATPCCameraComponent_eventCanSetCameraMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraComponent_eventCanSetCameraMode_Parms), &Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::NewProp_CameraModeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "CanSetCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::PropPointers), sizeof(ATPCCameraComponent_eventCanSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(ATPCCameraComponent_eventCanSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execCanSetCameraMode)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CameraModeTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSetCameraMode_Implementation(Z_Param_CameraModeTag);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function CanSetCameraMode

// Begin Class UATPCCameraComponent Function ClearAllCameraModes
struct Z_Construct_UFunction_UATPCCameraComponent_ClearAllCameraModes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_ClearAllCameraModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "ClearAllCameraModes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_ClearAllCameraModes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_ClearAllCameraModes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UATPCCameraComponent_ClearAllCameraModes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_ClearAllCameraModes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execClearAllCameraModes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllCameraModes();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function ClearAllCameraModes

// Begin Class UATPCCameraComponent Function FindOverlapCameraVolume
struct Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics
{
	struct ATPCCameraComponent_eventFindOverlapCameraVolume_Parms
	{
		AATPCCameraVolume* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End functions for managing camera modes\n" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventFindOverlapCameraVolume_Parms, ReturnValue), Z_Construct_UClass_AATPCCameraVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "FindOverlapCameraVolume", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::ATPCCameraComponent_eventFindOverlapCameraVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::ATPCCameraComponent_eventFindOverlapCameraVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execFindOverlapCameraVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AATPCCameraVolume**)Z_Param__Result=P_THIS->FindOverlapCameraVolume();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function FindOverlapCameraVolume

// Begin Class UATPCCameraComponent Function GetCameraDistance
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics
{
	struct ATPCCameraComponent_eventGetCameraDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraDistance", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::ATPCCameraComponent_eventGetCameraDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::ATPCCameraComponent_eventGetCameraDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCameraDistance();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraDistance

// Begin Class UATPCCameraComponent Function GetCameraFadingObject
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics
{
	struct ATPCCameraComponent_eventGetCameraFadingObject_Parms
	{
		UATPCCameraFadingObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraFadingObject_Parms, ReturnValue), Z_Construct_UClass_UATPCCameraFadingObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraFadingObject", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::ATPCCameraComponent_eventGetCameraFadingObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::ATPCCameraComponent_eventGetCameraFadingObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraFadingObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UATPCCameraFadingObject**)Z_Param__Result=P_THIS->GetCameraFadingObject();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraFadingObject

// Begin Class UATPCCameraComponent Function GetCameraFollowTerrainObject
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics
{
	struct ATPCCameraComponent_eventGetCameraFollowTerrainObject_Parms
	{
		UATPCCameraFollowTerrainObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraFollowTerrainObject_Parms, ReturnValue), Z_Construct_UClass_UATPCCameraFollowTerrainObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraFollowTerrainObject", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::ATPCCameraComponent_eventGetCameraFollowTerrainObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::ATPCCameraComponent_eventGetCameraFollowTerrainObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraFollowTerrainObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UATPCCameraFollowTerrainObject**)Z_Param__Result=P_THIS->GetCameraFollowTerrainObject();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraFollowTerrainObject

// Begin Class UATPCCameraComponent Function GetCameraFOVObject
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics
{
	struct ATPCCameraComponent_eventGetCameraFOVObject_Parms
	{
		UATPCCameraFOVObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraFOVObject_Parms, ReturnValue), Z_Construct_UClass_UATPCCameraFOVObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraFOVObject", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::ATPCCameraComponent_eventGetCameraFOVObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::ATPCCameraComponent_eventGetCameraFOVObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraFOVObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UATPCCameraFOVObject**)Z_Param__Result=P_THIS->GetCameraFOVObject();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraFOVObject

// Begin Class UATPCCameraComponent Function GetCameraLocation
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics
{
	struct ATPCCameraComponent_eventGetCameraLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraLocation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::ATPCCameraComponent_eventGetCameraLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::ATPCCameraComponent_eventGetCameraLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraLocation

// Begin Class UATPCCameraComponent Function GetCameraLocationObject
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics
{
	struct ATPCCameraComponent_eventGetCameraLocationObject_Parms
	{
		UATPCCameraLocationObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraLocationObject_Parms, ReturnValue), Z_Construct_UClass_UATPCCameraLocationObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraLocationObject", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::ATPCCameraComponent_eventGetCameraLocationObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::ATPCCameraComponent_eventGetCameraLocationObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraLocationObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UATPCCameraLocationObject**)Z_Param__Result=P_THIS->GetCameraLocationObject();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraLocationObject

// Begin Class UATPCCameraComponent Function GetCameraLockOnTargetObject
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics
{
	struct ATPCCameraComponent_eventGetCameraLockOnTargetObject_Parms
	{
		UATPCCameraLockOnTargetObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraLockOnTargetObject_Parms, ReturnValue), Z_Construct_UClass_UATPCCameraLockOnTargetObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraLockOnTargetObject", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::ATPCCameraComponent_eventGetCameraLockOnTargetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::ATPCCameraComponent_eventGetCameraLockOnTargetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraLockOnTargetObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UATPCCameraLockOnTargetObject**)Z_Param__Result=P_THIS->GetCameraLockOnTargetObject();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraLockOnTargetObject

// Begin Class UATPCCameraComponent Function GetCameraMode
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics
{
	struct ATPCCameraComponent_eventGetCameraMode_Parms
	{
		FGameplayTag CameraModeName;
		UATPCCameraModeDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::NewProp_CameraModeName = { "CameraModeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraMode_Parms, CameraModeName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraMode_Parms, ReturnValue), Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::NewProp_CameraModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::ATPCCameraComponent_eventGetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::ATPCCameraComponent_eventGetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraMode)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CameraModeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UATPCCameraModeDataAsset**)Z_Param__Result=P_THIS->GetCameraMode(Z_Param_CameraModeName);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraMode

// Begin Class UATPCCameraComponent Function GetCameraModeTagFromOverlapCameraVolume
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics
{
	struct ATPCCameraComponent_eventGetCameraModeTagFromOverlapCameraVolume_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Find overlap camera volume via @FindOverlapCameraVolume and if volume and tag is valid return tag. Otherwise return invalid tag */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find overlap camera volume via @FindOverlapCameraVolume and if volume and tag is valid return tag. Otherwise return invalid tag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraModeTagFromOverlapCameraVolume_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraModeTagFromOverlapCameraVolume", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::ATPCCameraComponent_eventGetCameraModeTagFromOverlapCameraVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::ATPCCameraComponent_eventGetCameraModeTagFromOverlapCameraVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraModeTagFromOverlapCameraVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetCameraModeTagFromOverlapCameraVolume();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraModeTagFromOverlapCameraVolume

// Begin Class UATPCCameraComponent Function GetCameraRotation
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics
{
	struct ATPCCameraComponent_eventGetCameraRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraRotation", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::ATPCCameraComponent_eventGetCameraRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::ATPCCameraComponent_eventGetCameraRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraRotation

// Begin Class UATPCCameraComponent Function GetCameraShakesObject
struct Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics
{
	struct ATPCCameraComponent_eventGetCameraShakesObject_Parms
	{
		UATPCCameraShakesObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCameraShakesObject_Parms, ReturnValue), Z_Construct_UClass_UATPCCameraShakesObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCameraShakesObject", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::ATPCCameraComponent_eventGetCameraShakesObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::ATPCCameraComponent_eventGetCameraShakesObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCameraShakesObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UATPCCameraShakesObject**)Z_Param__Result=P_THIS->GetCameraShakesObject();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCameraShakesObject

// Begin Class UATPCCameraComponent Function GetCurrentCameraMode
struct Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics
{
	struct ATPCCameraComponent_eventGetCurrentCameraMode_Parms
	{
		UATPCCameraModeDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCurrentCameraMode_Parms, ReturnValue), Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCurrentCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::ATPCCameraComponent_eventGetCurrentCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::ATPCCameraComponent_eventGetCurrentCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCurrentCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UATPCCameraModeDataAsset**)Z_Param__Result=P_THIS->GetCurrentCameraMode();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCurrentCameraMode

// Begin Class UATPCCameraComponent Function GetCurrentCameraModeTag
struct Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics
{
	struct ATPCCameraComponent_eventGetCurrentCameraModeTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetCurrentCameraModeTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetCurrentCameraModeTag", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::ATPCCameraComponent_eventGetCurrentCameraModeTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::ATPCCameraComponent_eventGetCurrentCameraModeTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetCurrentCameraModeTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentCameraModeTag();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetCurrentCameraModeTag

// Begin Class UATPCCameraComponent Function GetDesiredCameraModeTag
struct ATPCCameraComponent_eventGetDesiredCameraModeTag_Parms
{
	FGameplayTag ReturnValue;
};
static const FName NAME_UATPCCameraComponent_GetDesiredCameraModeTag = FName(TEXT("GetDesiredCameraModeTag"));
FGameplayTag UATPCCameraComponent::GetDesiredCameraModeTag() const
{
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraComponent_GetDesiredCameraModeTag);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ATPCCameraComponent_eventGetDesiredCameraModeTag_Parms Parms;
		const_cast<UATPCCameraComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UATPCCameraComponent*>(this)->GetDesiredCameraModeTag_Implementation();
	}
}
struct Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This function for override. By default return current tag if it is valid, otherwise return @DefaultCameraModeTag */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function for override. By default return current tag if it is valid, otherwise return @DefaultCameraModeTag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetDesiredCameraModeTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetDesiredCameraModeTag", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::PropPointers), sizeof(ATPCCameraComponent_eventGetDesiredCameraModeTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(ATPCCameraComponent_eventGetDesiredCameraModeTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetDesiredCameraModeTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetDesiredCameraModeTag_Implementation();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetDesiredCameraModeTag

// Begin Class UATPCCameraComponent Function GetInitialCameraModeTag
struct ATPCCameraComponent_eventGetInitialCameraModeTag_Parms
{
	FGameplayTag ReturnValue;
};
static const FName NAME_UATPCCameraComponent_GetInitialCameraModeTag = FName(TEXT("GetInitialCameraModeTag"));
FGameplayTag UATPCCameraComponent::GetInitialCameraModeTag() const
{
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraComponent_GetInitialCameraModeTag);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ATPCCameraComponent_eventGetInitialCameraModeTag_Parms Parms;
		const_cast<UATPCCameraComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UATPCCameraComponent*>(this)->GetInitialCameraModeTag_Implementation();
	}
}
struct Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Find cameraVolume and return tag if volume is valid, otherwise return @DefaultCameraModeTag */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find cameraVolume and return tag if volume is valid, otherwise return @DefaultCameraModeTag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetInitialCameraModeTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetInitialCameraModeTag", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::PropPointers), sizeof(ATPCCameraComponent_eventGetInitialCameraModeTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(ATPCCameraComponent_eventGetInitialCameraModeTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetInitialCameraModeTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetInitialCameraModeTag_Implementation();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetInitialCameraModeTag

// Begin Class UATPCCameraComponent Function GetOwningPawn
struct Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics
{
	struct ATPCCameraComponent_eventGetOwningPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetOwningPawn", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::ATPCCameraComponent_eventGetOwningPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::ATPCCameraComponent_eventGetOwningPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetOwningPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetOwningPawn

// Begin Class UATPCCameraComponent Function GetPlayerCameraManager
struct Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics
{
	struct ATPCCameraComponent_eventGetPlayerCameraManager_Parms
	{
		APlayerCameraManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetPlayerCameraManager_Parms, ReturnValue), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetPlayerCameraManager", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::ATPCCameraComponent_eventGetPlayerCameraManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::ATPCCameraComponent_eventGetPlayerCameraManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetPlayerCameraManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerCameraManager**)Z_Param__Result=P_THIS->GetPlayerCameraManager();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetPlayerCameraManager

// Begin Class UATPCCameraComponent Function GetPlayerController
struct Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics
{
	struct ATPCCameraComponent_eventGetPlayerController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "GetPlayerController", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::ATPCCameraComponent_eventGetPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::ATPCCameraComponent_eventGetPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execGetPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetPlayerController();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function GetPlayerController

// Begin Class UATPCCameraComponent Function HasCameraMode
struct Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics
{
	struct ATPCCameraComponent_eventHasCameraMode_Parms
	{
		FGameplayTag CameraModeName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::NewProp_CameraModeName = { "CameraModeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventHasCameraMode_Parms, CameraModeName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ATPCCameraComponent_eventHasCameraMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraComponent_eventHasCameraMode_Parms), &Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::NewProp_CameraModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "HasCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::ATPCCameraComponent_eventHasCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::ATPCCameraComponent_eventHasCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execHasCameraMode)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CameraModeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCameraMode(Z_Param_CameraModeName);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function HasCameraMode

// Begin Class UATPCCameraComponent Function IsSetCustomCameraMode
struct Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics
{
	struct ATPCCameraComponent_eventIsSetCustomCameraMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ATPCCameraComponent_eventIsSetCustomCameraMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraComponent_eventIsSetCustomCameraMode_Parms), &Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "IsSetCustomCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::ATPCCameraComponent_eventIsSetCustomCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::ATPCCameraComponent_eventIsSetCustomCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execIsSetCustomCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSetCustomCameraMode();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function IsSetCustomCameraMode

// Begin Class UATPCCameraComponent Function RemoveCameraMode
struct Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics
{
	struct ATPCCameraComponent_eventRemoveCameraMode_Parms
	{
		FGameplayTag CameraModeName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::NewProp_CameraModeName = { "CameraModeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventRemoveCameraMode_Parms, CameraModeName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::NewProp_CameraModeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "RemoveCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::ATPCCameraComponent_eventRemoveCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::ATPCCameraComponent_eventRemoveCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execRemoveCameraMode)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CameraModeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCameraMode(Z_Param_CameraModeName);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function RemoveCameraMode

// Begin Class UATPCCameraComponent Function ResetCustomCameraMode
struct Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics
{
	struct ATPCCameraComponent_eventResetCustomCameraMode_Parms
	{
		bool bWithInterpolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWithInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::NewProp_bWithInterpolation_SetBit(void* Obj)
{
	((ATPCCameraComponent_eventResetCustomCameraMode_Parms*)Obj)->bWithInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::NewProp_bWithInterpolation = { "bWithInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraComponent_eventResetCustomCameraMode_Parms), &Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::NewProp_bWithInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::NewProp_bWithInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "ResetCustomCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::ATPCCameraComponent_eventResetCustomCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::ATPCCameraComponent_eventResetCustomCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execResetCustomCameraMode)
{
	P_GET_UBOOL(Z_Param_bWithInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCustomCameraMode(Z_Param_bWithInterpolation);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function ResetCustomCameraMode

// Begin Class UATPCCameraComponent Function SetCameraDistance
struct Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics
{
	struct ATPCCameraComponent_eventSetCameraDistance_Parms
	{
		float NewDistance;
		bool bInterpolate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Zoom" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDistance;
	static void NewProp_bInterpolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::NewProp_NewDistance = { "NewDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventSetCameraDistance_Parms, NewDistance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::NewProp_bInterpolate_SetBit(void* Obj)
{
	((ATPCCameraComponent_eventSetCameraDistance_Parms*)Obj)->bInterpolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraComponent_eventSetCameraDistance_Parms), &Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::NewProp_NewDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::NewProp_bInterpolate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "SetCameraDistance", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::ATPCCameraComponent_eventSetCameraDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::ATPCCameraComponent_eventSetCameraDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execSetCameraDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDistance);
	P_GET_UBOOL(Z_Param_bInterpolate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraDistance(Z_Param_NewDistance,Z_Param_bInterpolate);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function SetCameraDistance

// Begin Class UATPCCameraComponent Function SetCameraMode
struct Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics
{
	struct ATPCCameraComponent_eventSetCameraMode_Parms
	{
		FGameplayTag CameraModeTag;
		bool bWithInterpolation;
		bool bForceSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Set camera mode with @CameraModeTag from CameraModesAssets\n\x09* @param bForceSet - if set true, ignores CanSetCameraMode\n\x09*/" },
#endif
		{ "CPP_Default_bForceSet", "false" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set camera mode with @CameraModeTag from CameraModesAssets\n@param bForceSet - if set true, ignores CanSetCameraMode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeTag;
	static void NewProp_bWithInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithInterpolation;
	static void NewProp_bForceSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_CameraModeTag = { "CameraModeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventSetCameraMode_Parms, CameraModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_bWithInterpolation_SetBit(void* Obj)
{
	((ATPCCameraComponent_eventSetCameraMode_Parms*)Obj)->bWithInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_bWithInterpolation = { "bWithInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraComponent_eventSetCameraMode_Parms), &Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_bWithInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_bForceSet_SetBit(void* Obj)
{
	((ATPCCameraComponent_eventSetCameraMode_Parms*)Obj)->bForceSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_bForceSet = { "bForceSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraComponent_eventSetCameraMode_Parms), &Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_bForceSet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_CameraModeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_bWithInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::NewProp_bForceSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "SetCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::ATPCCameraComponent_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::ATPCCameraComponent_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execSetCameraMode)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CameraModeTag);
	P_GET_UBOOL(Z_Param_bWithInterpolation);
	P_GET_UBOOL(Z_Param_bForceSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(Z_Param_CameraModeTag,Z_Param_bWithInterpolation,Z_Param_bForceSet);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function SetCameraMode

// Begin Class UATPCCameraComponent Function SetCustomCameraMode
struct Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics
{
	struct ATPCCameraComponent_eventSetCustomCameraMode_Parms
	{
		UATPCCameraModeDataAsset* CameraMode;
		bool bWithInterpolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|CameraMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override current camera mode(don't change current camera mode. For override used other variable) */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override current camera mode(don't change current camera mode. For override used other variable)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMode;
	static void NewProp_bWithInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraComponent_eventSetCustomCameraMode_Parms, CameraMode), Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::NewProp_bWithInterpolation_SetBit(void* Obj)
{
	((ATPCCameraComponent_eventSetCustomCameraMode_Parms*)Obj)->bWithInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::NewProp_bWithInterpolation = { "bWithInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraComponent_eventSetCustomCameraMode_Parms), &Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::NewProp_bWithInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::NewProp_CameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::NewProp_bWithInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "SetCustomCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::ATPCCameraComponent_eventSetCustomCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::ATPCCameraComponent_eventSetCustomCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execSetCustomCameraMode)
{
	P_GET_OBJECT(UATPCCameraModeDataAsset,Z_Param_CameraMode);
	P_GET_UBOOL(Z_Param_bWithInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomCameraMode(Z_Param_CameraMode,Z_Param_bWithInterpolation);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function SetCustomCameraMode

// Begin Class UATPCCameraComponent Function ValidateComponents
struct Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics
{
	struct ATPCCameraComponent_eventValidateComponents_Parms
	{
		bool bWithInterpolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UActorComponent Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWithInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::NewProp_bWithInterpolation_SetBit(void* Obj)
{
	((ATPCCameraComponent_eventValidateComponents_Parms*)Obj)->bWithInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::NewProp_bWithInterpolation = { "bWithInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraComponent_eventValidateComponents_Parms), &Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::NewProp_bWithInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::NewProp_bWithInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "ValidateComponents", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::ATPCCameraComponent_eventValidateComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::ATPCCameraComponent_eventValidateComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execValidateComponents)
{
	P_GET_UBOOL(Z_Param_bWithInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ValidateComponents(Z_Param_bWithInterpolation);
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function ValidateComponents

// Begin Class UATPCCameraComponent Function ZoomIn
struct Z_Construct_UFunction_UATPCCameraComponent_ZoomIn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Zoom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ Begin Zoom Func\n" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "ZoomIn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_ZoomIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_ZoomIn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UATPCCameraComponent_ZoomIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_ZoomIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execZoomIn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ZoomIn();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function ZoomIn

// Begin Class UATPCCameraComponent Function ZoomOut
struct Z_Construct_UFunction_UATPCCameraComponent_ZoomOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC|Zoom" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraComponent_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraComponent, nullptr, "ZoomOut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraComponent_ZoomOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraComponent_ZoomOut_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UATPCCameraComponent_ZoomOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraComponent_ZoomOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraComponent::execZoomOut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ZoomOut();
	P_NATIVE_END;
}
// End Class UATPCCameraComponent Function ZoomOut

// Begin Class UATPCCameraComponent
void UATPCCameraComponent::StaticRegisterNativesUATPCCameraComponent()
{
	UClass* Class = UATPCCameraComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCameraMode", &UATPCCameraComponent::execAddCameraMode },
		{ "CanSetCameraMode", &UATPCCameraComponent::execCanSetCameraMode },
		{ "ClearAllCameraModes", &UATPCCameraComponent::execClearAllCameraModes },
		{ "FindOverlapCameraVolume", &UATPCCameraComponent::execFindOverlapCameraVolume },
		{ "GetCameraDistance", &UATPCCameraComponent::execGetCameraDistance },
		{ "GetCameraFadingObject", &UATPCCameraComponent::execGetCameraFadingObject },
		{ "GetCameraFollowTerrainObject", &UATPCCameraComponent::execGetCameraFollowTerrainObject },
		{ "GetCameraFOVObject", &UATPCCameraComponent::execGetCameraFOVObject },
		{ "GetCameraLocation", &UATPCCameraComponent::execGetCameraLocation },
		{ "GetCameraLocationObject", &UATPCCameraComponent::execGetCameraLocationObject },
		{ "GetCameraLockOnTargetObject", &UATPCCameraComponent::execGetCameraLockOnTargetObject },
		{ "GetCameraMode", &UATPCCameraComponent::execGetCameraMode },
		{ "GetCameraModeTagFromOverlapCameraVolume", &UATPCCameraComponent::execGetCameraModeTagFromOverlapCameraVolume },
		{ "GetCameraRotation", &UATPCCameraComponent::execGetCameraRotation },
		{ "GetCameraShakesObject", &UATPCCameraComponent::execGetCameraShakesObject },
		{ "GetCurrentCameraMode", &UATPCCameraComponent::execGetCurrentCameraMode },
		{ "GetCurrentCameraModeTag", &UATPCCameraComponent::execGetCurrentCameraModeTag },
		{ "GetDesiredCameraModeTag", &UATPCCameraComponent::execGetDesiredCameraModeTag },
		{ "GetInitialCameraModeTag", &UATPCCameraComponent::execGetInitialCameraModeTag },
		{ "GetOwningPawn", &UATPCCameraComponent::execGetOwningPawn },
		{ "GetPlayerCameraManager", &UATPCCameraComponent::execGetPlayerCameraManager },
		{ "GetPlayerController", &UATPCCameraComponent::execGetPlayerController },
		{ "HasCameraMode", &UATPCCameraComponent::execHasCameraMode },
		{ "IsSetCustomCameraMode", &UATPCCameraComponent::execIsSetCustomCameraMode },
		{ "RemoveCameraMode", &UATPCCameraComponent::execRemoveCameraMode },
		{ "ResetCustomCameraMode", &UATPCCameraComponent::execResetCustomCameraMode },
		{ "SetCameraDistance", &UATPCCameraComponent::execSetCameraDistance },
		{ "SetCameraMode", &UATPCCameraComponent::execSetCameraMode },
		{ "SetCustomCameraMode", &UATPCCameraComponent::execSetCustomCameraMode },
		{ "ValidateComponents", &UATPCCameraComponent::execValidateComponents },
		{ "ZoomIn", &UATPCCameraComponent::execZoomIn },
		{ "ZoomOut", &UATPCCameraComponent::execZoomOut },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraComponent);
UClass* Z_Construct_UClass_UATPCCameraComponent_NoRegister()
{
	return UATPCCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Main component in plugin*/" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ATPCCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main component in plugin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCameraMode_MetaData[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraModeChangedDelegate_MetaData[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugRules_MetaData[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraModeTag_MetaData[] = {
		{ "Category", "ATPC|Settings" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModesAssets_MetaData[] = {
		{ "Category", "ATPC|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data assets with camera modes */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data assets with camera modes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortedCameraModes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Storage for instanced camera modes sorted by FGameplayTag */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Storage for instanced camera modes sorted by FGameplayTag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCameraMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationObjectClass_MetaData[] = {
		{ "Category", "ATPC|Settings|CameraObjects" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVObjectClass_MetaData[] = {
		{ "Category", "ATPC|Settings|CameraObjects" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadingObjectClass_MetaData[] = {
		{ "Category", "ATPC|Settings|CameraObjects" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowTerrainObjectClass_MetaData[] = {
		{ "Category", "ATPC|Settings|CameraObjects" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakesObjectClass_MetaData[] = {
		{ "Category", "ATPC|Settings|CameraObjects" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnTargetObjectClass_MetaData[] = {
		{ "Category", "ATPC|Settings|CameraObjects" },
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadingObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowTerrainObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakesObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnTargetObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraObjList_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyCameraMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeDEV_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* For correct view FATPCCameraMode in Blueprints Details panel */" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For correct view FATPCCameraMode in Blueprints Details panel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldCameraMode;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraModeChangedDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugRules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCameraModeTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModesAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModesAssets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SortedCameraModes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortedCameraModes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SortedCameraModes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCameraMode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LocationObjectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FOVObjectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FadingObjectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FollowTerrainObjectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakesObjectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LockOnTargetObjectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FOVObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadingObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowTerrainObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShakesObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnTargetObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraObjList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraObjList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyCameraMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeDEV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UATPCCameraComponent_AddCameraMode, "AddCameraMode" }, // 2334557023
		{ &Z_Construct_UFunction_UATPCCameraComponent_CanSetCameraMode, "CanSetCameraMode" }, // 490217692
		{ &Z_Construct_UFunction_UATPCCameraComponent_ClearAllCameraModes, "ClearAllCameraModes" }, // 1652573469
		{ &Z_Construct_UFunction_UATPCCameraComponent_FindOverlapCameraVolume, "FindOverlapCameraVolume" }, // 825945276
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraDistance, "GetCameraDistance" }, // 54736072
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraFadingObject, "GetCameraFadingObject" }, // 1368225718
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraFollowTerrainObject, "GetCameraFollowTerrainObject" }, // 3947254477
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraFOVObject, "GetCameraFOVObject" }, // 456787199
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocation, "GetCameraLocation" }, // 4256774538
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraLocationObject, "GetCameraLocationObject" }, // 2151550029
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraLockOnTargetObject, "GetCameraLockOnTargetObject" }, // 2615739137
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraMode, "GetCameraMode" }, // 2015599061
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraModeTagFromOverlapCameraVolume, "GetCameraModeTagFromOverlapCameraVolume" }, // 1037215314
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraRotation, "GetCameraRotation" }, // 1272789610
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCameraShakesObject, "GetCameraShakesObject" }, // 1898353857
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraMode, "GetCurrentCameraMode" }, // 1579422470
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetCurrentCameraModeTag, "GetCurrentCameraModeTag" }, // 1770710987
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetDesiredCameraModeTag, "GetDesiredCameraModeTag" }, // 2575303731
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetInitialCameraModeTag, "GetInitialCameraModeTag" }, // 754994339
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetOwningPawn, "GetOwningPawn" }, // 3410744076
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetPlayerCameraManager, "GetPlayerCameraManager" }, // 1500351253
		{ &Z_Construct_UFunction_UATPCCameraComponent_GetPlayerController, "GetPlayerController" }, // 1552424608
		{ &Z_Construct_UFunction_UATPCCameraComponent_HasCameraMode, "HasCameraMode" }, // 189742828
		{ &Z_Construct_UFunction_UATPCCameraComponent_IsSetCustomCameraMode, "IsSetCustomCameraMode" }, // 2086753156
		{ &Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature, "OnCameraModeChangedDelegate__DelegateSignature" }, // 1777590542
		{ &Z_Construct_UFunction_UATPCCameraComponent_RemoveCameraMode, "RemoveCameraMode" }, // 2723332406
		{ &Z_Construct_UFunction_UATPCCameraComponent_ResetCustomCameraMode, "ResetCustomCameraMode" }, // 974408084
		{ &Z_Construct_UFunction_UATPCCameraComponent_SetCameraDistance, "SetCameraDistance" }, // 3529050384
		{ &Z_Construct_UFunction_UATPCCameraComponent_SetCameraMode, "SetCameraMode" }, // 670442632
		{ &Z_Construct_UFunction_UATPCCameraComponent_SetCustomCameraMode, "SetCustomCameraMode" }, // 2675354906
		{ &Z_Construct_UFunction_UATPCCameraComponent_ValidateComponents, "ValidateComponents" }, // 453312230
		{ &Z_Construct_UFunction_UATPCCameraComponent_ZoomIn, "ZoomIn" }, // 36762281
		{ &Z_Construct_UFunction_UATPCCameraComponent_ZoomOut, "ZoomOut" }, // 135421915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_OldCameraMode = { "OldCameraMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, OldCameraMode), Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCameraMode_MetaData), NewProp_OldCameraMode_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_OnCameraModeChangedDelegate = { "OnCameraModeChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, OnCameraModeChangedDelegate), Z_Construct_UDelegateFunction_UATPCCameraComponent_OnCameraModeChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCameraModeChangedDelegate_MetaData), NewProp_OnCameraModeChangedDelegate_MetaData) }; // 1777590542
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_DebugRules = { "DebugRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, DebugRules), Z_Construct_UScriptStruct_FATPCCameraDebugRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugRules_MetaData), NewProp_DebugRules_MetaData) }; // 2895171853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_DefaultCameraModeTag = { "DefaultCameraModeTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, DefaultCameraModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraModeTag_MetaData), NewProp_DefaultCameraModeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraModesAssets_Inner = { "CameraModesAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraModesAssets = { "CameraModesAssets", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, CameraModesAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModesAssets_MetaData), NewProp_CameraModesAssets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_SortedCameraModes_ValueProp = { "SortedCameraModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_SortedCameraModes_Key_KeyProp = { "SortedCameraModes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_SortedCameraModes = { "SortedCameraModes", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, SortedCameraModes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortedCameraModes_MetaData), NewProp_SortedCameraModes_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CustomCameraMode = { "CustomCameraMode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, CustomCameraMode), Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCameraMode_MetaData), NewProp_CustomCameraMode_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_LocationObjectClass = { "LocationObjectClass", nullptr, (EPropertyFlags)0x0024080002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, LocationObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UATPCCameraLocationObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationObjectClass_MetaData), NewProp_LocationObjectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FOVObjectClass = { "FOVObjectClass", nullptr, (EPropertyFlags)0x0024080002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, FOVObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UATPCCameraFOVObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVObjectClass_MetaData), NewProp_FOVObjectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FadingObjectClass = { "FadingObjectClass", nullptr, (EPropertyFlags)0x0024080002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, FadingObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UATPCCameraFadingObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadingObjectClass_MetaData), NewProp_FadingObjectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FollowTerrainObjectClass = { "FollowTerrainObjectClass", nullptr, (EPropertyFlags)0x0024080002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, FollowTerrainObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UATPCCameraFollowTerrainObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowTerrainObjectClass_MetaData), NewProp_FollowTerrainObjectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraShakesObjectClass = { "CameraShakesObjectClass", nullptr, (EPropertyFlags)0x0024080002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, CameraShakesObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UATPCCameraShakesObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakesObjectClass_MetaData), NewProp_CameraShakesObjectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_LockOnTargetObjectClass = { "LockOnTargetObjectClass", nullptr, (EPropertyFlags)0x0024080002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, LockOnTargetObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UATPCCameraLockOnTargetObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnTargetObjectClass_MetaData), NewProp_LockOnTargetObjectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_LocationObject = { "LocationObject", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, LocationObject), Z_Construct_UClass_UATPCCameraLocationObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationObject_MetaData), NewProp_LocationObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FOVObject = { "FOVObject", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, FOVObject), Z_Construct_UClass_UATPCCameraFOVObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVObject_MetaData), NewProp_FOVObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FadingObject = { "FadingObject", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, FadingObject), Z_Construct_UClass_UATPCCameraFadingObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadingObject_MetaData), NewProp_FadingObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FollowTerrainObject = { "FollowTerrainObject", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, FollowTerrainObject), Z_Construct_UClass_UATPCCameraFollowTerrainObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowTerrainObject_MetaData), NewProp_FollowTerrainObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraShakesObject = { "CameraShakesObject", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, CameraShakesObject), Z_Construct_UClass_UATPCCameraShakesObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakesObject_MetaData), NewProp_CameraShakesObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_LockOnTargetObject = { "LockOnTargetObject", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, LockOnTargetObject), Z_Construct_UClass_UATPCCameraLockOnTargetObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnTargetObject_MetaData), NewProp_LockOnTargetObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraObjList_Inner = { "CameraObjList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UATPCCameraBaseObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraObjList = { "CameraObjList", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, CameraObjList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraObjList_MetaData), NewProp_CameraObjList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_EmptyCameraMode = { "EmptyCameraMode", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, EmptyCameraMode), Z_Construct_UClass_UATPCCameraModeDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyCameraMode_MetaData), NewProp_EmptyCameraMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraModeDEV = { "CameraModeDEV", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraComponent, CameraModeDEV), Z_Construct_UScriptStruct_FATPCCameraMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeDEV_MetaData), NewProp_CameraModeDEV_MetaData) }; // 1519354485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATPCCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_OldCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_OnCameraModeChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_DebugRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_DefaultCameraModeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraModesAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraModesAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_SortedCameraModes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_SortedCameraModes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_SortedCameraModes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CustomCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_LocationObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FOVObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FadingObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FollowTerrainObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraShakesObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_LockOnTargetObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_LocationObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FOVObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FadingObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_FollowTerrainObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraShakesObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_LockOnTargetObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraObjList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraObjList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_EmptyCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraComponent_Statics::NewProp_CameraModeDEV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UATPCCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraComponent_Statics::ClassParams = {
	&UATPCCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UATPCCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraComponent()
{
	if (!Z_Registration_Info_UClass_UATPCCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraComponent.OuterSingleton, Z_Construct_UClass_UATPCCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraComponent.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraComponent>()
{
	return UATPCCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraComponent);
UATPCCameraComponent::~UATPCCameraComponent() {}
// End Class UATPCCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraComponent, UATPCCameraComponent::StaticClass, TEXT("UATPCCameraComponent"), &Z_Registration_Info_UClass_UATPCCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraComponent), 2108820806U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_33408115(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
