// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesGameSubsystem.h"
#include "EnhancedInput/Public/InputAction.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesGameSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesGameSubsystem();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesGameSubsystem_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UUiTheme_NoRegister();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputBindingType();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputMode();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputMappingsChanged__DelegateSignature();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Delegate FOnInputModeChanged
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnInputModeChanged_Parms
	{
		int32 PlayerIndex;
		EInputMode InputMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnInputModeChanged_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnInputModeChanged_Parms, InputMode), Z_Construct_UEnum_StevesUEHelpers_EInputMode, METADATA_PARAMS(0, nullptr) }; // 2721707288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::NewProp_InputMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnInputModeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnInputModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnInputModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInputModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInputModeChanged, int32 PlayerIndex, EInputMode InputMode)
{
	struct _Script_StevesUEHelpers_eventOnInputModeChanged_Parms
	{
		int32 PlayerIndex;
		EInputMode InputMode;
	};
	_Script_StevesUEHelpers_eventOnInputModeChanged_Parms Parms;
	Parms.PlayerIndex=PlayerIndex;
	Parms.InputMode=InputMode;
	OnInputModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInputModeChanged

// Begin Delegate FOnEnhancedInputMappingsChanged
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputMappingsChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputMappingsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnEnhancedInputMappingsChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputMappingsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputMappingsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputMappingsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputMappingsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnhancedInputMappingsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEnhancedInputMappingsChanged)
{
	OnEnhancedInputMappingsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnEnhancedInputMappingsChanged

// Begin Delegate FOnWindowForegroundChanged
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnWindowForegroundChanged_Parms
	{
		bool bFocussed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFocussed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocussed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::NewProp_bFocussed_SetBit(void* Obj)
{
	((_Script_StevesUEHelpers_eventOnWindowForegroundChanged_Parms*)Obj)->bFocussed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::NewProp_bFocussed = { "bFocussed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_StevesUEHelpers_eventOnWindowForegroundChanged_Parms), &Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::NewProp_bFocussed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::NewProp_bFocussed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnWindowForegroundChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnWindowForegroundChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnWindowForegroundChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWindowForegroundChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWindowForegroundChanged, bool bFocussed)
{
	struct _Script_StevesUEHelpers_eventOnWindowForegroundChanged_Parms
	{
		bool bFocussed;
	};
	_Script_StevesUEHelpers_eventOnWindowForegroundChanged_Parms Parms;
	Parms.bFocussed=bFocussed ? true : false;
	OnWindowForegroundChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnWindowForegroundChanged

// Begin Delegate FOnEnhancedInputActionTriggered
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnEnhancedInputActionTriggered_Parms
	{
		const UInputAction* Action;
		ETriggerEvent TriggeredEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggeredEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggeredEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnEnhancedInputActionTriggered_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::NewProp_TriggeredEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::NewProp_TriggeredEvent = { "TriggeredEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnEnhancedInputActionTriggered_Parms, TriggeredEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(0, nullptr) }; // 3771639830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::NewProp_TriggeredEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::NewProp_TriggeredEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnEnhancedInputActionTriggered__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnEnhancedInputActionTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnEnhancedInputActionTriggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnhancedInputActionTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnEnhancedInputActionTriggered, const UInputAction* Action, ETriggerEvent TriggeredEvent)
{
	struct _Script_StevesUEHelpers_eventOnEnhancedInputActionTriggered_Parms
	{
		const UInputAction* Action;
		ETriggerEvent TriggeredEvent;
	};
	_Script_StevesUEHelpers_eventOnEnhancedInputActionTriggered_Parms Parms;
	Parms.Action=Action;
	Parms.TriggeredEvent=TriggeredEvent;
	OnEnhancedInputActionTriggered.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEnhancedInputActionTriggered

// Begin Class UStevesGameSubsystem Function EnhancedInputActionTriggered
struct Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics
{
	struct StevesGameSubsystem_eventEnhancedInputActionTriggered_Parms
	{
		FInputActionInstance InputActionInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::NewProp_InputActionInstance = { "InputActionInstance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventEnhancedInputActionTriggered_Parms, InputActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionInstance_MetaData), NewProp_InputActionInstance_MetaData) }; // 1467082250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::NewProp_InputActionInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesGameSubsystem, nullptr, "EnhancedInputActionTriggered", nullptr, nullptr, Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::StevesGameSubsystem_eventEnhancedInputActionTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::StevesGameSubsystem_eventEnhancedInputActionTriggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesGameSubsystem::execEnhancedInputActionTriggered)
{
	P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_InputActionInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnhancedInputActionTriggered(Z_Param_Out_InputActionInstance);
	P_NATIVE_END;
}
// End Class UStevesGameSubsystem Function EnhancedInputActionTriggered

// Begin Class UStevesGameSubsystem Function GetInputImageSprite
struct Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics
{
	struct StevesGameSubsystem_eventGetInputImageSprite_Parms
	{
		EInputBindingType BindingType;
		FName ActionOrAxis;
		FKey Key;
		EInputImageDevicePreference DevicePreference;
		int32 PlayerIndex;
		const UUiTheme* Theme;
		UPaperSprite* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Get an input button / key / axis image as a sprite based on any combination of action / axis binding or manual key\n     * @param BindingType The type of input binding to look up \n     * @param ActionOrAxis The name of the action or axis, if BindingType is looking for that\n     * @param Key The explicit key you want to display, if the BindingType is set to custom key\n     * @param DevicePreference The order of preference for images where multiple devices have mappings. In the case of multiple mappings for the same device, the first one will be used.\n     * @param PlayerIndex The player index to look up the binding for \n     * @param Theme Optional explicit theme, if blank use the default theme\n     * @return \n     */" },
#endif
		{ "CPP_Default_PlayerIndex", "0" },
		{ "CPP_Default_Theme", "None" },
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Get an input button / key / axis image as a sprite based on any combination of action / axis binding or manual key\n@param BindingType The type of input binding to look up\n@param ActionOrAxis The name of the action or axis, if BindingType is looking for that\n@param Key The explicit key you want to display, if the BindingType is set to custom key\n@param DevicePreference The order of preference for images where multiple devices have mappings. In the case of multiple mappings for the same device, the first one will be used.\n@param PlayerIndex The player index to look up the binding for\n@param Theme Optional explicit theme, if blank use the default theme\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Theme_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BindingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionOrAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DevicePreference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DevicePreference;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Theme;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_BindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_BindingType = { "BindingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetInputImageSprite_Parms, BindingType), Z_Construct_UEnum_StevesUEHelpers_EInputBindingType, METADATA_PARAMS(0, nullptr) }; // 2580179460
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_ActionOrAxis = { "ActionOrAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetInputImageSprite_Parms, ActionOrAxis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetInputImageSprite_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_DevicePreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_DevicePreference = { "DevicePreference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetInputImageSprite_Parms, DevicePreference), Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference, METADATA_PARAMS(0, nullptr) }; // 3636241670
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetInputImageSprite_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_Theme = { "Theme", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetInputImageSprite_Parms, Theme), Z_Construct_UClass_UUiTheme_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Theme_MetaData), NewProp_Theme_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetInputImageSprite_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_BindingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_BindingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_ActionOrAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_DevicePreference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_DevicePreference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_Theme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesGameSubsystem, nullptr, "GetInputImageSprite", nullptr, nullptr, Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::StevesGameSubsystem_eventGetInputImageSprite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::StevesGameSubsystem_eventGetInputImageSprite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesGameSubsystem::execGetInputImageSprite)
{
	P_GET_ENUM(EInputBindingType,Z_Param_BindingType);
	P_GET_PROPERTY(FNameProperty,Z_Param_ActionOrAxis);
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_GET_ENUM(EInputImageDevicePreference,Z_Param_DevicePreference);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_GET_OBJECT(UUiTheme,Z_Param_Theme);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPaperSprite**)Z_Param__Result=P_THIS->GetInputImageSprite(EInputBindingType(Z_Param_BindingType),Z_Param_ActionOrAxis,Z_Param_Key,EInputImageDevicePreference(Z_Param_DevicePreference),Z_Param_PlayerIndex,Z_Param_Theme);
	P_NATIVE_END;
}
// End Class UStevesGameSubsystem Function GetInputImageSprite

// Begin Class UStevesGameSubsystem Function GetLastInputAxisMoved
struct Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics
{
	struct StevesGameSubsystem_eventGetLastInputAxisMoved_Parms
	{
		int32 PlayerIndex;
		EInputMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Gets the device where the most recent axis move happened\n" },
#endif
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the device where the most recent axis move happened" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetLastInputAxisMoved_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetLastInputAxisMoved_Parms, ReturnValue), Z_Construct_UEnum_StevesUEHelpers_EInputMode, METADATA_PARAMS(0, nullptr) }; // 2721707288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesGameSubsystem, nullptr, "GetLastInputAxisMoved", nullptr, nullptr, Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::StevesGameSubsystem_eventGetLastInputAxisMoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::StevesGameSubsystem_eventGetLastInputAxisMoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesGameSubsystem::execGetLastInputAxisMoved)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInputMode*)Z_Param__Result=P_THIS->GetLastInputAxisMoved(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UStevesGameSubsystem Function GetLastInputAxisMoved

// Begin Class UStevesGameSubsystem Function GetLastInputButtonPressed
struct Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics
{
	struct StevesGameSubsystem_eventGetLastInputButtonPressed_Parms
	{
		int32 PlayerIndex;
		EInputMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Gets the device where the most recent button press happened\n" },
#endif
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the device where the most recent button press happened" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetLastInputButtonPressed_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetLastInputButtonPressed_Parms, ReturnValue), Z_Construct_UEnum_StevesUEHelpers_EInputMode, METADATA_PARAMS(0, nullptr) }; // 2721707288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesGameSubsystem, nullptr, "GetLastInputButtonPressed", nullptr, nullptr, Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::StevesGameSubsystem_eventGetLastInputButtonPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::StevesGameSubsystem_eventGetLastInputButtonPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesGameSubsystem::execGetLastInputButtonPressed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInputMode*)Z_Param__Result=P_THIS->GetLastInputButtonPressed(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UStevesGameSubsystem Function GetLastInputButtonPressed

// Begin Class UStevesGameSubsystem Function GetLastInputModeUsed
struct Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics
{
	struct StevesGameSubsystem_eventGetLastInputModeUsed_Parms
	{
		int32 PlayerIndex;
		EInputMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Gets the device where the most recent input event of any kind happened\n" },
#endif
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the device where the most recent input event of any kind happened" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetLastInputModeUsed_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventGetLastInputModeUsed_Parms, ReturnValue), Z_Construct_UEnum_StevesUEHelpers_EInputMode, METADATA_PARAMS(0, nullptr) }; // 2721707288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesGameSubsystem, nullptr, "GetLastInputModeUsed", nullptr, nullptr, Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::StevesGameSubsystem_eventGetLastInputModeUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::StevesGameSubsystem_eventGetLastInputModeUsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesGameSubsystem::execGetLastInputModeUsed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInputMode*)Z_Param__Result=P_THIS->GetLastInputModeUsed(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UStevesGameSubsystem Function GetLastInputModeUsed

// Begin Class UStevesGameSubsystem Function LastInputWasGamePad
struct Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics
{
	struct StevesGameSubsystem_eventLastInputWasGamePad_Parms
	{
		int32 PlayerIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventLastInputWasGamePad_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StevesGameSubsystem_eventLastInputWasGamePad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StevesGameSubsystem_eventLastInputWasGamePad_Parms), &Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesGameSubsystem, nullptr, "LastInputWasGamePad", nullptr, nullptr, Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::StevesGameSubsystem_eventLastInputWasGamePad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::StevesGameSubsystem_eventLastInputWasGamePad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesGameSubsystem::execLastInputWasGamePad)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LastInputWasGamePad(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UStevesGameSubsystem Function LastInputWasGamePad

// Begin Class UStevesGameSubsystem Function MoveMouseOffScreen
struct Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics
{
	struct StevesGameSubsystem_eventMoveMouseOffScreen_Parms
	{
		bool bAlsoHide;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Moves the mouse pointer offscreen so that it can't trigger hovers on anything. This happens by\n/// default when switching to gamepad mode, but in edge cases I've found it useful to ensure that\n/// some other effect doesn't interfere with gamepad navigation by relocating the mouse pointer to\n/// the centre (I've seen this rarely but can't fully explain it). By default all MenuStacks call this\n/// on open if the current input is gamepad, to ensure the mouse is out of the way.\n" },
#endif
		{ "CPP_Default_bAlsoHide", "true" },
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves the mouse pointer offscreen so that it can't trigger hovers on anything. This happens by\ndefault when switching to gamepad mode, but in edge cases I've found it useful to ensure that\nsome other effect doesn't interfere with gamepad navigation by relocating the mouse pointer to\nthe centre (I've seen this rarely but can't fully explain it). By default all MenuStacks call this\non open if the current input is gamepad, to ensure the mouse is out of the way." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAlsoHide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlsoHide;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::NewProp_bAlsoHide_SetBit(void* Obj)
{
	((StevesGameSubsystem_eventMoveMouseOffScreen_Parms*)Obj)->bAlsoHide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::NewProp_bAlsoHide = { "bAlsoHide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StevesGameSubsystem_eventMoveMouseOffScreen_Parms), &Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::NewProp_bAlsoHide_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::NewProp_bAlsoHide,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesGameSubsystem, nullptr, "MoveMouseOffScreen", nullptr, nullptr, Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::StevesGameSubsystem_eventMoveMouseOffScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::StevesGameSubsystem_eventMoveMouseOffScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesGameSubsystem::execMoveMouseOffScreen)
{
	P_GET_UBOOL(Z_Param_bAlsoHide);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveMouseOffScreen(Z_Param_bAlsoHide);
	P_NATIVE_END;
}
// End Class UStevesGameSubsystem Function MoveMouseOffScreen

// Begin Class UStevesGameSubsystem Function NotifyEnhancedInputMappingsChanged
struct Z_Construct_UFunction_UStevesGameSubsystem_NotifyEnhancedInputMappingsChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Notify this subsystem that changes have been made to the Enhanced Input mappings, e.g. adding or removing a context.\n     * Unfortunately, the Enhanced Input plugin currently provides NO WAY for us to monitor context changes automatically,\n     * so we need the user to tell us when they make a change.\n     * This call is however slightly delayed before being acted upon, because EI defers the rebuild of mappings until the next tick.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify this subsystem that changes have been made to the Enhanced Input mappings, e.g. adding or removing a context.\nUnfortunately, the Enhanced Input plugin currently provides NO WAY for us to monitor context changes automatically,\nso we need the user to tell us when they make a change.\nThis call is however slightly delayed before being acted upon, because EI defers the rebuild of mappings until the next tick." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesGameSubsystem_NotifyEnhancedInputMappingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesGameSubsystem, nullptr, "NotifyEnhancedInputMappingsChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_NotifyEnhancedInputMappingsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesGameSubsystem_NotifyEnhancedInputMappingsChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStevesGameSubsystem_NotifyEnhancedInputMappingsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesGameSubsystem_NotifyEnhancedInputMappingsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesGameSubsystem::execNotifyEnhancedInputMappingsChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyEnhancedInputMappingsChanged();
	P_NATIVE_END;
}
// End Class UStevesGameSubsystem Function NotifyEnhancedInputMappingsChanged

// Begin Class UStevesGameSubsystem Function RegisterInterestInEnhancedInputAction
struct Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics
{
	struct StevesGameSubsystem_eventRegisterInterestInEnhancedInputAction_Parms
	{
		const UInputAction* Action;
		ETriggerEvent TriggerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Register an interest in an enhanced input action. Calling this will result in OnEnhancedInputActionTriggered being called\n/// when this action is triggered.\n/// This is mainly for use in UI bindings. You only need to call it once for each UI-specific action.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register an interest in an enhanced input action. Calling this will result in OnEnhancedInputActionTriggered being called\nwhen this action is triggered.\nThis is mainly for use in UI bindings. You only need to call it once for each UI-specific action." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventRegisterInterestInEnhancedInputAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesGameSubsystem_eventRegisterInterestInEnhancedInputAction_Parms, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(0, nullptr) }; // 3771639830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::NewProp_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::NewProp_TriggerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesGameSubsystem, nullptr, "RegisterInterestInEnhancedInputAction", nullptr, nullptr, Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::StevesGameSubsystem_eventRegisterInterestInEnhancedInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::StevesGameSubsystem_eventRegisterInterestInEnhancedInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesGameSubsystem::execRegisterInterestInEnhancedInputAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_GET_ENUM(ETriggerEvent,Z_Param_TriggerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterInterestInEnhancedInputAction(Z_Param_Action,ETriggerEvent(Z_Param_TriggerEvent));
	P_NATIVE_END;
}
// End Class UStevesGameSubsystem Function RegisterInterestInEnhancedInputAction

// Begin Class UStevesGameSubsystem
void UStevesGameSubsystem::StaticRegisterNativesUStevesGameSubsystem()
{
	UClass* Class = UStevesGameSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnhancedInputActionTriggered", &UStevesGameSubsystem::execEnhancedInputActionTriggered },
		{ "GetInputImageSprite", &UStevesGameSubsystem::execGetInputImageSprite },
		{ "GetLastInputAxisMoved", &UStevesGameSubsystem::execGetLastInputAxisMoved },
		{ "GetLastInputButtonPressed", &UStevesGameSubsystem::execGetLastInputButtonPressed },
		{ "GetLastInputModeUsed", &UStevesGameSubsystem::execGetLastInputModeUsed },
		{ "LastInputWasGamePad", &UStevesGameSubsystem::execLastInputWasGamePad },
		{ "MoveMouseOffScreen", &UStevesGameSubsystem::execMoveMouseOffScreen },
		{ "NotifyEnhancedInputMappingsChanged", &UStevesGameSubsystem::execNotifyEnhancedInputMappingsChanged },
		{ "RegisterInterestInEnhancedInputAction", &UStevesGameSubsystem::execRegisterInterestInEnhancedInputAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesGameSubsystem);
UClass* Z_Construct_UClass_UStevesGameSubsystem_NoRegister()
{
	return UStevesGameSubsystem::StaticClass();
}
struct Z_Construct_UClass_UStevesGameSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Entry point for all the top-level features of the helper system\n" },
#endif
		{ "IncludePath", "StevesGameSubsystem.h" },
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry point for all the top-level features of the helper system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUiThemePath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The default UiTheme path, the theme to use if controls don't specifically link to one.\n/// Customise this in DefaultGame.ini\n/// [/Script/StevesUEHelpers.StevesGameSubsystem]\n/// DefaultUiThemePath=\"/Game/Some/Other/UiTheme.UiTheme\"\n/// Regardless, remember to register this file as a Primary Asset in Project Settings,\n/// as described in https://docs.unrealengine.com/en-US/Engine/Basics/AssetsAndPackages/AssetManagement/index.html\n/// so that it's included when packaging\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default UiTheme path, the theme to use if controls don't specifically link to one.\nCustomise this in DefaultGame.ini\n[/Script/StevesUEHelpers.StevesGameSubsystem]\nDefaultUiThemePath=\"/Game/Some/Other/UiTheme.UiTheme\"\nRegardless, remember to register this file as a Primary Asset in Project Settings,\nas described in https:docs.unrealengine.com/en-US/Engine/Basics/AssetsAndPackages/AssetManagement/index.html\nso that it's included when packaging" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsForeground_MetaData[] = {
		{ "Category", "StevesGameSubsystem" },
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUiTheme_MetaData[] = {
		{ "Category", "StevesGameSubsystem" },
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputModeChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when main input mode changed between gamepad and keyboard / mouse (for any of axis / button events)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when main input mode changed between gamepad and keyboard / mouse (for any of axis / button events)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonInputModeChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when the last button input changed between gamepad / keyboard / mouse\n/// This can happen at a different time to OnInputModeChanged, e.g. if that was triggered by a mouse move, but the\n/// last button pressed was still keyboard, you'd get this event later\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when the last button input changed between gamepad / keyboard / mouse\nThis can happen at a different time to OnInputModeChanged, e.g. if that was triggered by a mouse move, but the\nlast button pressed was still keyboard, you'd get this event later" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAxisInputModeChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when the last axis input changed between gamepad / keyboard / mouse\n/// This can happen at a different time to OnInputModeChanged, e.g. if that was triggered by a button press, but the\n/// last axis moved was still mouse, you'd get this event later\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when the last axis input changed between gamepad / keyboard / mouse\nThis can happen at a different time to OnInputModeChanged, e.g. if that was triggered by a button press, but the\nlast axis moved was still mouse, you'd get this event later" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnhancedInputMappingsChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised justr after the Enhanced Input mappings have changed\n/// Right now, this has to be user-triggered via NotifyEnhancedInputMappingsChanged, because the Enhanced Input\n/// plugin provides NO events to monitor it (sigh)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised justr after the Enhanced Input mappings have changed\nRight now, this has to be user-triggered via NotifyEnhancedInputMappingsChanged, because the Enhanced Input\nplugin provides NO events to monitor it (sigh)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnhancedInputActionTriggered_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event fired when an enhanced input event that an interest has previously been registered in triggers.\n/// Nothing will fire on this event unless you call RegisterInterestInEnhancedInputAction to listen for it.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event fired when an enhanced input event that an interest has previously been registered in triggers.\nNothing will fire on this event unless you call RegisterInterestInEnhancedInputAction to listen for it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWindowForegroundChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when the game window's foreground status changes\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesGameSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when the game window's foreground status changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultUiThemePath;
	static void NewProp_bIsForeground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsForeground;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultUiTheme;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputModeChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonInputModeChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAxisInputModeChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnhancedInputMappingsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnhancedInputActionTriggered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWindowForegroundChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStevesGameSubsystem_EnhancedInputActionTriggered, "EnhancedInputActionTriggered" }, // 2049271365
		{ &Z_Construct_UFunction_UStevesGameSubsystem_GetInputImageSprite, "GetInputImageSprite" }, // 2065563544
		{ &Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputAxisMoved, "GetLastInputAxisMoved" }, // 4064178912
		{ &Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputButtonPressed, "GetLastInputButtonPressed" }, // 1872413097
		{ &Z_Construct_UFunction_UStevesGameSubsystem_GetLastInputModeUsed, "GetLastInputModeUsed" }, // 1705300725
		{ &Z_Construct_UFunction_UStevesGameSubsystem_LastInputWasGamePad, "LastInputWasGamePad" }, // 4290544165
		{ &Z_Construct_UFunction_UStevesGameSubsystem_MoveMouseOffScreen, "MoveMouseOffScreen" }, // 35864259
		{ &Z_Construct_UFunction_UStevesGameSubsystem_NotifyEnhancedInputMappingsChanged, "NotifyEnhancedInputMappingsChanged" }, // 1275379446
		{ &Z_Construct_UFunction_UStevesGameSubsystem_RegisterInterestInEnhancedInputAction, "RegisterInterestInEnhancedInputAction" }, // 118590470
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesGameSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_DefaultUiThemePath = { "DefaultUiThemePath", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesGameSubsystem, DefaultUiThemePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultUiThemePath_MetaData), NewProp_DefaultUiThemePath_MetaData) };
void Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_bIsForeground_SetBit(void* Obj)
{
	((UStevesGameSubsystem*)Obj)->bIsForeground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_bIsForeground = { "bIsForeground", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStevesGameSubsystem), &Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_bIsForeground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsForeground_MetaData), NewProp_bIsForeground_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_DefaultUiTheme = { "DefaultUiTheme", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesGameSubsystem, DefaultUiTheme), Z_Construct_UClass_UUiTheme_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultUiTheme_MetaData), NewProp_DefaultUiTheme_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnInputModeChanged = { "OnInputModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesGameSubsystem, OnInputModeChanged), Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputModeChanged_MetaData), NewProp_OnInputModeChanged_MetaData) }; // 3851005142
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnButtonInputModeChanged = { "OnButtonInputModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesGameSubsystem, OnButtonInputModeChanged), Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnButtonInputModeChanged_MetaData), NewProp_OnButtonInputModeChanged_MetaData) }; // 3851005142
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnAxisInputModeChanged = { "OnAxisInputModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesGameSubsystem, OnAxisInputModeChanged), Z_Construct_UDelegateFunction_StevesUEHelpers_OnInputModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAxisInputModeChanged_MetaData), NewProp_OnAxisInputModeChanged_MetaData) }; // 3851005142
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnEnhancedInputMappingsChanged = { "OnEnhancedInputMappingsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesGameSubsystem, OnEnhancedInputMappingsChanged), Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputMappingsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnhancedInputMappingsChanged_MetaData), NewProp_OnEnhancedInputMappingsChanged_MetaData) }; // 782400412
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnEnhancedInputActionTriggered = { "OnEnhancedInputActionTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesGameSubsystem, OnEnhancedInputActionTriggered), Z_Construct_UDelegateFunction_StevesUEHelpers_OnEnhancedInputActionTriggered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnhancedInputActionTriggered_MetaData), NewProp_OnEnhancedInputActionTriggered_MetaData) }; // 3363544843
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnWindowForegroundChanged = { "OnWindowForegroundChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesGameSubsystem, OnWindowForegroundChanged), Z_Construct_UDelegateFunction_StevesUEHelpers_OnWindowForegroundChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWindowForegroundChanged_MetaData), NewProp_OnWindowForegroundChanged_MetaData) }; // 3372857903
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStevesGameSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_DefaultUiThemePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_bIsForeground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_DefaultUiTheme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnInputModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnButtonInputModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnAxisInputModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnEnhancedInputMappingsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnEnhancedInputActionTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesGameSubsystem_Statics::NewProp_OnWindowForegroundChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesGameSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStevesGameSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesGameSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesGameSubsystem_Statics::ClassParams = {
	&UStevesGameSubsystem::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStevesGameSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStevesGameSubsystem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesGameSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesGameSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesGameSubsystem()
{
	if (!Z_Registration_Info_UClass_UStevesGameSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesGameSubsystem.OuterSingleton, Z_Construct_UClass_UStevesGameSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesGameSubsystem.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesGameSubsystem>()
{
	return UStevesGameSubsystem::StaticClass();
}
UStevesGameSubsystem::UStevesGameSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesGameSubsystem);
UStevesGameSubsystem::~UStevesGameSubsystem() {}
// End Class UStevesGameSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesGameSubsystem, UStevesGameSubsystem::StaticClass, TEXT("UStevesGameSubsystem"), &Z_Registration_Info_UClass_UStevesGameSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesGameSubsystem), 800140398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_931124011(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
