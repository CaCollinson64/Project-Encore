// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/InputImage.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputImage() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UInputImage();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UInputImage_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UUiTheme_NoRegister();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputBindingType();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputMode();
UMG_API UClass* Z_Construct_UClass_UImage();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UInputImage Function GetActionOrAxisName
struct Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics
{
	struct InputImage_eventGetActionOrAxisName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If BindingType is Action/Axis, get the name of the action or axis to look up the image for\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If BindingType is Action/Axis, get the name of the action or axis to look up the image for" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputImage_eventGetActionOrAxisName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputImage, nullptr, "GetActionOrAxisName", nullptr, nullptr, Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::InputImage_eventGetActionOrAxisName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::InputImage_eventGetActionOrAxisName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputImage_GetActionOrAxisName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputImage_GetActionOrAxisName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputImage::execGetActionOrAxisName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetActionOrAxisName();
	P_NATIVE_END;
}
// End Class UInputImage Function GetActionOrAxisName

// Begin Class UInputImage Function GetBindingType
struct Z_Construct_UFunction_UInputImage_GetBindingType_Statics
{
	struct InputImage_eventGetBindingType_Parms
	{
		EInputBindingType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the binding type that we'll use to populate the image\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the binding type that we'll use to populate the image" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputImage_GetBindingType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputImage_GetBindingType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputImage_eventGetBindingType_Parms, ReturnValue), Z_Construct_UEnum_StevesUEHelpers_EInputBindingType, METADATA_PARAMS(0, nullptr) }; // 2580179460
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputImage_GetBindingType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_GetBindingType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_GetBindingType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_GetBindingType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputImage_GetBindingType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputImage, nullptr, "GetBindingType", nullptr, nullptr, Z_Construct_UFunction_UInputImage_GetBindingType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_GetBindingType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputImage_GetBindingType_Statics::InputImage_eventGetBindingType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_GetBindingType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputImage_GetBindingType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputImage_GetBindingType_Statics::InputImage_eventGetBindingType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputImage_GetBindingType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputImage_GetBindingType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputImage::execGetBindingType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInputBindingType*)Z_Param__Result=P_THIS->GetBindingType();
	P_NATIVE_END;
}
// End Class UInputImage Function GetBindingType

// Begin Class UInputImage Function GetKey
struct Z_Construct_UFunction_UInputImage_GetKey_Statics
{
	struct InputImage_eventGetKey_Parms
	{
		FKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If BindingType is Key, get the key \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If BindingType is Key, get the key" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputImage_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputImage_eventGetKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputImage_GetKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_GetKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_GetKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputImage_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputImage, nullptr, "GetKey", nullptr, nullptr, Z_Construct_UFunction_UInputImage_GetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_GetKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputImage_GetKey_Statics::InputImage_eventGetKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_GetKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputImage_GetKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputImage_GetKey_Statics::InputImage_eventGetKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputImage_GetKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputImage_GetKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputImage::execGetKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKey*)Z_Param__Result=P_THIS->GetKey();
	P_NATIVE_END;
}
// End Class UInputImage Function GetKey

// Begin Class UInputImage Function OnEnhancedInputMappingsChanged
struct Z_Construct_UFunction_UInputImage_OnEnhancedInputMappingsChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputImage_OnEnhancedInputMappingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputImage, nullptr, "OnEnhancedInputMappingsChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_OnEnhancedInputMappingsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputImage_OnEnhancedInputMappingsChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInputImage_OnEnhancedInputMappingsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputImage_OnEnhancedInputMappingsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputImage::execOnEnhancedInputMappingsChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnhancedInputMappingsChanged();
	P_NATIVE_END;
}
// End Class UInputImage Function OnEnhancedInputMappingsChanged

// Begin Class UInputImage Function OnInputModeChanged
struct Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics
{
	struct InputImage_eventOnInputModeChanged_Parms
	{
		int32 ChangedPlayerIdx;
		EInputMode InputMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChangedPlayerIdx;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::NewProp_ChangedPlayerIdx = { "ChangedPlayerIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputImage_eventOnInputModeChanged_Parms, ChangedPlayerIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputImage_eventOnInputModeChanged_Parms, InputMode), Z_Construct_UEnum_StevesUEHelpers_EInputMode, METADATA_PARAMS(0, nullptr) }; // 2721707288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::NewProp_ChangedPlayerIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::NewProp_InputMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputImage, nullptr, "OnInputModeChanged", nullptr, nullptr, Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::InputImage_eventOnInputModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::InputImage_eventOnInputModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputImage_OnInputModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputImage_OnInputModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputImage::execOnInputModeChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChangedPlayerIdx);
	P_GET_ENUM(EInputMode,Z_Param_InputMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInputModeChanged(Z_Param_ChangedPlayerIdx,EInputMode(Z_Param_InputMode));
	P_NATIVE_END;
}
// End Class UInputImage Function OnInputModeChanged

// Begin Class UInputImage Function SetFromAction
struct Z_Construct_UFunction_UInputImage_SetFromAction_Statics
{
	struct InputImage_eventSetFromAction_Parms
	{
		FName Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Tell this image to display the bound action for the current input method\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tell this image to display the bound action for the current input method" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputImage_SetFromAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputImage_eventSetFromAction_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputImage_SetFromAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_SetFromAction_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputImage_SetFromAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputImage, nullptr, "SetFromAction", nullptr, nullptr, Z_Construct_UFunction_UInputImage_SetFromAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputImage_SetFromAction_Statics::InputImage_eventSetFromAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputImage_SetFromAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputImage_SetFromAction_Statics::InputImage_eventSetFromAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputImage_SetFromAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputImage_SetFromAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputImage::execSetFromAction)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFromAction(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UInputImage Function SetFromAction

// Begin Class UInputImage Function SetFromAxis
struct Z_Construct_UFunction_UInputImage_SetFromAxis_Statics
{
	struct InputImage_eventSetFromAxis_Parms
	{
		FName Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Tell this image to display the bound axis for the current input method\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tell this image to display the bound axis for the current input method" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputImage_eventSetFromAxis_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputImage, nullptr, "SetFromAxis", nullptr, nullptr, Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::InputImage_eventSetFromAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::InputImage_eventSetFromAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputImage_SetFromAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputImage_SetFromAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputImage::execSetFromAxis)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFromAxis(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UInputImage Function SetFromAxis

// Begin Class UInputImage Function SetFromInputAction
struct Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics
{
	struct InputImage_eventSetFromInputAction_Parms
	{
		UInputAction* Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Tell this image to display Enhanced InputAction\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tell this image to display Enhanced InputAction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputImage_eventSetFromInputAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputImage, nullptr, "SetFromInputAction", nullptr, nullptr, Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::InputImage_eventSetFromInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::InputImage_eventSetFromInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputImage_SetFromInputAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputImage_SetFromInputAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputImage::execSetFromInputAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFromInputAction(Z_Param_Action);
	P_NATIVE_END;
}
// End Class UInputImage Function SetFromInputAction

// Begin Class UInputImage Function SetFromKey
struct Z_Construct_UFunction_UInputImage_SetFromKey_Statics
{
	struct InputImage_eventSetFromKey_Parms
	{
		FKey K;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Tell this image to display a specific key image\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tell this image to display a specific key image" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_K;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputImage_SetFromKey_Statics::NewProp_K = { "K", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputImage_eventSetFromKey_Parms, K), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputImage_SetFromKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputImage_SetFromKey_Statics::NewProp_K,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputImage_SetFromKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputImage, nullptr, "SetFromKey", nullptr, nullptr, Z_Construct_UFunction_UInputImage_SetFromKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputImage_SetFromKey_Statics::InputImage_eventSetFromKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputImage_SetFromKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputImage_SetFromKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputImage_SetFromKey_Statics::InputImage_eventSetFromKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputImage_SetFromKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputImage_SetFromKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputImage::execSetFromKey)
{
	P_GET_STRUCT(FKey,Z_Param_K);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFromKey(Z_Param_K);
	P_NATIVE_END;
}
// End Class UInputImage Function SetFromKey

// Begin Class UInputImage
void UInputImage::StaticRegisterNativesUInputImage()
{
	UClass* Class = UInputImage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActionOrAxisName", &UInputImage::execGetActionOrAxisName },
		{ "GetBindingType", &UInputImage::execGetBindingType },
		{ "GetKey", &UInputImage::execGetKey },
		{ "OnEnhancedInputMappingsChanged", &UInputImage::execOnEnhancedInputMappingsChanged },
		{ "OnInputModeChanged", &UInputImage::execOnInputModeChanged },
		{ "SetFromAction", &UInputImage::execSetFromAction },
		{ "SetFromAxis", &UInputImage::execSetFromAxis },
		{ "SetFromInputAction", &UInputImage::execSetFromInputAction },
		{ "SetFromKey", &UInputImage::execSetFromKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputImage);
UClass* Z_Construct_UClass_UInputImage_NoRegister()
{
	return UInputImage::StaticClass();
}
struct Z_Construct_UClass_UInputImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// A special widget containing an image which populates itself based on an input action / axis and can dynamically\n/// change based on the active input method.\n" },
#endif
		{ "IncludePath", "StevesUI/InputImage.h" },
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A special widget containing an image which populates itself based on an input action / axis and can dynamically\nchange based on the active input method." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingType_MetaData[] = {
		{ "Category", "InputImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// What type of an input binding this image should look up\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What type of an input binding this image should look up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionOrAxisName_MetaData[] = {
		{ "Category", "InputImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If BindingType is Action/Axis, the name of it \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If BindingType is Action/Axis, the name of it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "InputImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If binding type is EnhancedInputAction, a reference to an enhanced input action\n// can't be inside  #if\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If binding type is EnhancedInputAction, a reference to an enhanced input action\ncan't be inside  #if" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DevicePreference_MetaData[] = {
		{ "Category", "InputImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Where there are multiple mappings, which to prefer \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where there are multiple mappings, which to prefer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "InputImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If BindingType is Key, the key \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If BindingType is Key, the key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateDelay_MetaData[] = {
		{ "Category", "InputImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// When input mode changes, how quickly to update\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When input mode changes, how quickly to update" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideHiddenState_MetaData[] = {
		{ "Category", "InputImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Option to set this image as visible when bound, even if its state is hidden from outside\n/// The default behaviour is that if this image is hidden by other means, visibility is not overridden.\n/// This is safer but can result in a 1-frame blank image sometimes. Instead if you set this to true you can\n/// set your images to hidden in the designer and have them display themselves when there's something to show.\n/// You can then control invisiblity for other reasons from a parent widget.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Option to set this image as visible when bound, even if its state is hidden from outside\nThe default behaviour is that if this image is hidden by other means, visibility is not overridden.\nThis is safer but can result in a 1-frame blank image sometimes. Instead if you set this to true you can\nset your images to hidden in the designer and have them display themselves when there's something to show.\nYou can then control invisiblity for other reasons from a parent widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "InputImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The player index for which the input should be looked up \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player index for which the input should be looked up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTheme_MetaData[] = {
		{ "Category", "InputImage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Custom theme to use for this input image set; if not supplied will use UStevesGameSubsystem::DefaultUiTheme\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/InputImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom theme to use for this input image set; if not supplied will use UStevesGameSubsystem::DefaultUiTheme" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BindingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionOrAxisName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DevicePreference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DevicePreference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateDelay;
	static void NewProp_bOverrideHiddenState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideHiddenState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTheme;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputImage_GetActionOrAxisName, "GetActionOrAxisName" }, // 691203044
		{ &Z_Construct_UFunction_UInputImage_GetBindingType, "GetBindingType" }, // 3271972351
		{ &Z_Construct_UFunction_UInputImage_GetKey, "GetKey" }, // 977108362
		{ &Z_Construct_UFunction_UInputImage_OnEnhancedInputMappingsChanged, "OnEnhancedInputMappingsChanged" }, // 1210782523
		{ &Z_Construct_UFunction_UInputImage_OnInputModeChanged, "OnInputModeChanged" }, // 2478224414
		{ &Z_Construct_UFunction_UInputImage_SetFromAction, "SetFromAction" }, // 1785007024
		{ &Z_Construct_UFunction_UInputImage_SetFromAxis, "SetFromAxis" }, // 3799412021
		{ &Z_Construct_UFunction_UInputImage_SetFromInputAction, "SetFromInputAction" }, // 2087278760
		{ &Z_Construct_UFunction_UInputImage_SetFromKey, "SetFromKey" }, // 1712777646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_BindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_BindingType = { "BindingType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputImage, BindingType), Z_Construct_UEnum_StevesUEHelpers_EInputBindingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingType_MetaData), NewProp_BindingType_MetaData) }; // 2580179460
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_ActionOrAxisName = { "ActionOrAxisName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputImage, ActionOrAxisName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionOrAxisName_MetaData), NewProp_ActionOrAxisName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputImage, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_DevicePreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_DevicePreference = { "DevicePreference", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputImage, DevicePreference), Z_Construct_UEnum_StevesUEHelpers_EInputImageDevicePreference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DevicePreference_MetaData), NewProp_DevicePreference_MetaData) }; // 3636241670
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputImage, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_UpdateDelay = { "UpdateDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputImage, UpdateDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateDelay_MetaData), NewProp_UpdateDelay_MetaData) };
void Z_Construct_UClass_UInputImage_Statics::NewProp_bOverrideHiddenState_SetBit(void* Obj)
{
	((UInputImage*)Obj)->bOverrideHiddenState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_bOverrideHiddenState = { "bOverrideHiddenState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputImage), &Z_Construct_UClass_UInputImage_Statics::NewProp_bOverrideHiddenState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideHiddenState_MetaData), NewProp_bOverrideHiddenState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputImage, PlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIndex_MetaData), NewProp_PlayerIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputImage_Statics::NewProp_CustomTheme = { "CustomTheme", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputImage, CustomTheme), Z_Construct_UClass_UUiTheme_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTheme_MetaData), NewProp_CustomTheme_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_BindingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_BindingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_ActionOrAxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_DevicePreference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_DevicePreference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_UpdateDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_bOverrideHiddenState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputImage_Statics::NewProp_CustomTheme,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputImage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UImage,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputImage_Statics::ClassParams = {
	&UInputImage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputImage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputImage_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputImage()
{
	if (!Z_Registration_Info_UClass_UInputImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputImage.OuterSingleton, Z_Construct_UClass_UInputImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputImage.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UInputImage>()
{
	return UInputImage::StaticClass();
}
UInputImage::UInputImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputImage);
UInputImage::~UInputImage() {}
// End Class UInputImage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputImage, UInputImage::StaticClass, TEXT("UInputImage"), &Z_Registration_Info_UClass_UInputImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputImage), 4075556077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_373340682(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
