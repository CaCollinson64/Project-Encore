// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/OptionWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionWidgetBase() {}

// Begin Cross Module References
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableUserWidget();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UOptionWidgetBase();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UOptionWidgetBase_NoRegister();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputMode();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Delegate FOnSelectedOptionChanged
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnSelectedOptionChanged_Parms
	{
		UOptionWidgetBase* Widget;
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnSelectedOptionChanged_Parms, Widget), Z_Construct_UClass_UOptionWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnSelectedOptionChanged_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnSelectedOptionChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnSelectedOptionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnSelectedOptionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSelectedOptionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedOptionChanged, UOptionWidgetBase* Widget, int32 NewIndex)
{
	struct _Script_StevesUEHelpers_eventOnSelectedOptionChanged_Parms
	{
		UOptionWidgetBase* Widget;
		int32 NewIndex;
	};
	_Script_StevesUEHelpers_eventOnSelectedOptionChanged_Parms Parms;
	Parms.Widget=Widget;
	Parms.NewIndex=NewIndex;
	OnSelectedOptionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSelectedOptionChanged

// Begin Class UOptionWidgetBase Function AddOption
struct Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics
{
	struct OptionWidgetBase_eventAddOption_Parms
	{
		FText Option;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Adds a new option\n     * @param Option The text for the new option\n     * @return The index for the new option\n     */" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Adds a new option\n@param Option The text for the new option\n@return The index for the new option" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Option;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventAddOption_Parms, Option), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventAddOption_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::NewProp_Option,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "AddOption", nullptr, nullptr, Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::OptionWidgetBase_eventAddOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::OptionWidgetBase_eventAddOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionWidgetBase_AddOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_AddOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execAddOption)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Option);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddOption(Z_Param_Option);
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function AddOption

// Begin Class UOptionWidgetBase Function ChangeOption
struct Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics
{
	struct OptionWidgetBase_eventChangeOption_Parms
	{
		int32 Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventChangeOption_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "ChangeOption", nullptr, nullptr, Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::OptionWidgetBase_eventChangeOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::OptionWidgetBase_eventChangeOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionWidgetBase_ChangeOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_ChangeOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execChangeOption)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeOption(Z_Param_Delta);
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function ChangeOption

// Begin Class UOptionWidgetBase Function ClearOptions
struct Z_Construct_UFunction_UOptionWidgetBase_ClearOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Remove all options\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove all options" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_ClearOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "ClearOptions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_ClearOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_ClearOptions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOptionWidgetBase_ClearOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_ClearOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execClearOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearOptions();
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function ClearOptions

// Begin Class UOptionWidgetBase Function GetCurrentInputMode
struct Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics
{
	struct OptionWidgetBase_eventGetCurrentInputMode_Parms
	{
		EInputMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventGetCurrentInputMode_Parms, ReturnValue), Z_Construct_UEnum_StevesUEHelpers_EInputMode, METADATA_PARAMS(0, nullptr) }; // 2721707288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "GetCurrentInputMode", nullptr, nullptr, Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::OptionWidgetBase_eventGetCurrentInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::OptionWidgetBase_eventGetCurrentInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execGetCurrentInputMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInputMode*)Z_Param__Result=P_THIS->GetCurrentInputMode();
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function GetCurrentInputMode

// Begin Class UOptionWidgetBase Function GetSelectedIndex
struct Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics
{
	struct OptionWidgetBase_eventGetSelectedIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventGetSelectedIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "GetSelectedIndex", nullptr, nullptr, Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::OptionWidgetBase_eventGetSelectedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::OptionWidgetBase_eventGetSelectedIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execGetSelectedIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex();
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function GetSelectedIndex

// Begin Class UOptionWidgetBase Function GetSelectedOption
struct Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics
{
	struct OptionWidgetBase_eventGetSelectedOption_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "GetSelectedOption", nullptr, nullptr, Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::OptionWidgetBase_eventGetSelectedOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::OptionWidgetBase_eventGetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execGetSelectedOption)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetSelectedOption();
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function GetSelectedOption

// Begin Class UOptionWidgetBase Function InputModeChanged
struct Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics
{
	struct OptionWidgetBase_eventInputModeChanged_Parms
	{
		int32 PlayerIndex;
		EInputMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventInputModeChanged_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventInputModeChanged_Parms, NewMode), Z_Construct_UEnum_StevesUEHelpers_EInputMode, METADATA_PARAMS(0, nullptr) }; // 2721707288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "InputModeChanged", nullptr, nullptr, Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::OptionWidgetBase_eventInputModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::OptionWidgetBase_eventInputModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execInputModeChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_GET_ENUM(EInputMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InputModeChanged(Z_Param_PlayerIndex,EInputMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function InputModeChanged

// Begin Class UOptionWidgetBase Function MouseDownClicked
struct Z_Construct_UFunction_UOptionWidgetBase_MouseDownClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_MouseDownClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "MouseDownClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_MouseDownClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_MouseDownClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOptionWidgetBase_MouseDownClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_MouseDownClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execMouseDownClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MouseDownClicked();
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function MouseDownClicked

// Begin Class UOptionWidgetBase Function MouseUpClicked
struct Z_Construct_UFunction_UOptionWidgetBase_MouseUpClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_MouseUpClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "MouseUpClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_MouseUpClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_MouseUpClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOptionWidgetBase_MouseUpClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_MouseUpClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execMouseUpClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MouseUpClicked();
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function MouseUpClicked

// Begin Class UOptionWidgetBase Function SetButtonMode
struct Z_Construct_UFunction_UOptionWidgetBase_SetButtonMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_SetButtonMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "SetButtonMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_SetButtonMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_SetButtonMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOptionWidgetBase_SetButtonMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_SetButtonMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execSetButtonMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonMode();
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function SetButtonMode

// Begin Class UOptionWidgetBase Function SetMouseMode
struct Z_Construct_UFunction_UOptionWidgetBase_SetMouseMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_SetMouseMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "SetMouseMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_SetMouseMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_SetMouseMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOptionWidgetBase_SetMouseMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_SetMouseMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execSetMouseMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseMode();
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function SetMouseMode

// Begin Class UOptionWidgetBase Function SetOptions
struct Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics
{
	struct OptionWidgetBase_eventSetOptions_Parms
	{
		TArray<FText> Options;
		int32 NewSelectedIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Sets all of the options available for this control\n     * @param Options All options to be available\n     * @param NewSelectedIndex Which of the options to select by default\n     */" },
#endif
		{ "CPP_Default_NewSelectedIndex", "0" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sets all of the options available for this control\n@param Options All options to be available\n@param NewSelectedIndex Which of the options to select by default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSelectedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventSetOptions_Parms, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::NewProp_NewSelectedIndex = { "NewSelectedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventSetOptions_Parms, NewSelectedIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::NewProp_NewSelectedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "SetOptions", nullptr, nullptr, Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::OptionWidgetBase_eventSetOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::OptionWidgetBase_eventSetOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionWidgetBase_SetOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_SetOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execSetOptions)
{
	P_GET_TARRAY_REF(FText,Z_Param_Out_Options);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSelectedIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOptions(Z_Param_Out_Options,Z_Param_NewSelectedIndex);
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function SetOptions

// Begin Class UOptionWidgetBase Function SetSelectedIndex
struct Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics
{
	struct OptionWidgetBase_eventSetSelectedIndex_Parms
	{
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Change the selected index option\n     * @param NewIndex The new index to set, can be -1 for no selection\n     */" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Change the selected index option\n@param NewIndex The new index to set, can be -1 for no selection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventSetSelectedIndex_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "SetSelectedIndex", nullptr, nullptr, Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::OptionWidgetBase_eventSetSelectedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::OptionWidgetBase_eventSetSelectedIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execSetSelectedIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedIndex(Z_Param_NewIndex);
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function SetSelectedIndex

// Begin Class UOptionWidgetBase Function UpdateFromInputMode
struct Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics
{
	struct OptionWidgetBase_eventUpdateFromInputMode_Parms
	{
		EInputMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OptionWidgetBase_eventUpdateFromInputMode_Parms, Mode), Z_Construct_UEnum_StevesUEHelpers_EInputMode, METADATA_PARAMS(0, nullptr) }; // 2721707288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionWidgetBase, nullptr, "UpdateFromInputMode", nullptr, nullptr, Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::OptionWidgetBase_eventUpdateFromInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::OptionWidgetBase_eventUpdateFromInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOptionWidgetBase::execUpdateFromInputMode)
{
	P_GET_ENUM(EInputMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFromInputMode(EInputMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class UOptionWidgetBase Function UpdateFromInputMode

// Begin Class UOptionWidgetBase
void UOptionWidgetBase::StaticRegisterNativesUOptionWidgetBase()
{
	UClass* Class = UOptionWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOption", &UOptionWidgetBase::execAddOption },
		{ "ChangeOption", &UOptionWidgetBase::execChangeOption },
		{ "ClearOptions", &UOptionWidgetBase::execClearOptions },
		{ "GetCurrentInputMode", &UOptionWidgetBase::execGetCurrentInputMode },
		{ "GetSelectedIndex", &UOptionWidgetBase::execGetSelectedIndex },
		{ "GetSelectedOption", &UOptionWidgetBase::execGetSelectedOption },
		{ "InputModeChanged", &UOptionWidgetBase::execInputModeChanged },
		{ "MouseDownClicked", &UOptionWidgetBase::execMouseDownClicked },
		{ "MouseUpClicked", &UOptionWidgetBase::execMouseUpClicked },
		{ "SetButtonMode", &UOptionWidgetBase::execSetButtonMode },
		{ "SetMouseMode", &UOptionWidgetBase::execSetMouseMode },
		{ "SetOptions", &UOptionWidgetBase::execSetOptions },
		{ "SetSelectedIndex", &UOptionWidgetBase::execSetSelectedIndex },
		{ "UpdateFromInputMode", &UOptionWidgetBase::execUpdateFromInputMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionWidgetBase);
UClass* Z_Construct_UClass_UOptionWidgetBase_NoRegister()
{
	return UOptionWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UOptionWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StevesUI/OptionWidgetBase.h" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseVersion_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Properties automatically bound to Blueprint widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Properties automatically bound to Blueprint widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseUpButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseDownButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseUpImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseDownImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadVersion_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadUpImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadDownImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OptionWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectedOptionChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when the selected option changes\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when the selected option changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedIndex_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/StevesUI/OptionWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseUpButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseDownButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseUpImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseDownImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadVersion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadUpImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadDownImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadText;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedOptionChanged;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptionWidgetBase_AddOption, "AddOption" }, // 2537896377
		{ &Z_Construct_UFunction_UOptionWidgetBase_ChangeOption, "ChangeOption" }, // 3105150873
		{ &Z_Construct_UFunction_UOptionWidgetBase_ClearOptions, "ClearOptions" }, // 2028782634
		{ &Z_Construct_UFunction_UOptionWidgetBase_GetCurrentInputMode, "GetCurrentInputMode" }, // 3813115272
		{ &Z_Construct_UFunction_UOptionWidgetBase_GetSelectedIndex, "GetSelectedIndex" }, // 3724414826
		{ &Z_Construct_UFunction_UOptionWidgetBase_GetSelectedOption, "GetSelectedOption" }, // 3418543747
		{ &Z_Construct_UFunction_UOptionWidgetBase_InputModeChanged, "InputModeChanged" }, // 1838363357
		{ &Z_Construct_UFunction_UOptionWidgetBase_MouseDownClicked, "MouseDownClicked" }, // 3431310717
		{ &Z_Construct_UFunction_UOptionWidgetBase_MouseUpClicked, "MouseUpClicked" }, // 1056593823
		{ &Z_Construct_UFunction_UOptionWidgetBase_SetButtonMode, "SetButtonMode" }, // 4252454346
		{ &Z_Construct_UFunction_UOptionWidgetBase_SetMouseMode, "SetMouseMode" }, // 3863129723
		{ &Z_Construct_UFunction_UOptionWidgetBase_SetOptions, "SetOptions" }, // 1196551751
		{ &Z_Construct_UFunction_UOptionWidgetBase_SetSelectedIndex, "SetSelectedIndex" }, // 2487173569
		{ &Z_Construct_UFunction_UOptionWidgetBase_UpdateFromInputMode, "UpdateFromInputMode" }, // 3270407754
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseVersion = { "MouseVersion", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, MouseVersion), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseVersion_MetaData), NewProp_MouseVersion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseUpButton = { "MouseUpButton", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, MouseUpButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseUpButton_MetaData), NewProp_MouseUpButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseDownButton = { "MouseDownButton", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, MouseDownButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseDownButton_MetaData), NewProp_MouseDownButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseUpImage = { "MouseUpImage", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, MouseUpImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseUpImage_MetaData), NewProp_MouseUpImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseDownImage = { "MouseDownImage", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, MouseDownImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseDownImage_MetaData), NewProp_MouseDownImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseText = { "MouseText", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, MouseText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseText_MetaData), NewProp_MouseText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_GamepadVersion = { "GamepadVersion", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, GamepadVersion), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadVersion_MetaData), NewProp_GamepadVersion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_GamepadUpImage = { "GamepadUpImage", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, GamepadUpImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadUpImage_MetaData), NewProp_GamepadUpImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_GamepadDownImage = { "GamepadDownImage", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, GamepadDownImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadDownImage_MetaData), NewProp_GamepadDownImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_GamepadText = { "GamepadText", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, GamepadText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadText_MetaData), NewProp_GamepadText_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_OnSelectedOptionChanged = { "OnSelectedOptionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, OnSelectedOptionChanged), Z_Construct_UDelegateFunction_StevesUEHelpers_OnSelectedOptionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectedOptionChanged_MetaData), NewProp_OnSelectedOptionChanged_MetaData) }; // 3686660616
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_SelectedIndex = { "SelectedIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionWidgetBase, SelectedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedIndex_MetaData), NewProp_SelectedIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseUpButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseDownButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseUpImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseDownImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_MouseText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_GamepadVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_GamepadUpImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_GamepadDownImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_GamepadText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_OnSelectedOptionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionWidgetBase_Statics::NewProp_SelectedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptionWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFocusableUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionWidgetBase_Statics::ClassParams = {
	&UOptionWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOptionWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptionWidgetBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptionWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptionWidgetBase()
{
	if (!Z_Registration_Info_UClass_UOptionWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionWidgetBase.OuterSingleton, Z_Construct_UClass_UOptionWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptionWidgetBase.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UOptionWidgetBase>()
{
	return UOptionWidgetBase::StaticClass();
}
UOptionWidgetBase::UOptionWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionWidgetBase);
UOptionWidgetBase::~UOptionWidgetBase() {}
// End Class UOptionWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptionWidgetBase, UOptionWidgetBase::StaticClass, TEXT("UOptionWidgetBase"), &Z_Registration_Info_UClass_UOptionWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionWidgetBase), 147472934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_261669785(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_OptionWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
