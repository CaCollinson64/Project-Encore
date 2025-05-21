// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/TypewriterTextWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypewriterTextWidget() {}

// Begin Cross Module References
STEVESUEHELPERS_API UClass* Z_Construct_UClass_URichTextBlockForTypewriter();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_URichTextBlockForTypewriter_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UTypewriterTextWidget();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UTypewriterTextWidget_NoRegister();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_URichTextBlock();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Delegate FOnTypewriterLineFinished
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnTypewriterLineFinished_Parms
	{
		UTypewriterTextWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnTypewriterLineFinished_Parms, Widget), Z_Construct_UClass_UTypewriterTextWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnTypewriterLineFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnTypewriterLineFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnTypewriterLineFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTypewriterLineFinished_DelegateWrapper(const FMulticastScriptDelegate& OnTypewriterLineFinished, UTypewriterTextWidget* Widget)
{
	struct _Script_StevesUEHelpers_eventOnTypewriterLineFinished_Parms
	{
		UTypewriterTextWidget* Widget;
	};
	_Script_StevesUEHelpers_eventOnTypewriterLineFinished_Parms Parms;
	Parms.Widget=Widget;
	OnTypewriterLineFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTypewriterLineFinished

// Begin Delegate FOnTypewriterLetterAdded
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnTypewriterLetterAdded_Parms
	{
		UTypewriterTextWidget* Widget;
		FString Char;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Char_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Char;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnTypewriterLetterAdded_Parms, Widget), Z_Construct_UClass_UTypewriterTextWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::NewProp_Char = { "Char", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnTypewriterLetterAdded_Parms, Char), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Char_MetaData), NewProp_Char_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::NewProp_Char,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnTypewriterLetterAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnTypewriterLetterAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnTypewriterLetterAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTypewriterLetterAdded_DelegateWrapper(const FMulticastScriptDelegate& OnTypewriterLetterAdded, UTypewriterTextWidget* Widget, const FString& Char)
{
	struct _Script_StevesUEHelpers_eventOnTypewriterLetterAdded_Parms
	{
		UTypewriterTextWidget* Widget;
		FString Char;
	};
	_Script_StevesUEHelpers_eventOnTypewriterLetterAdded_Parms Parms;
	Parms.Widget=Widget;
	Parms.Char=Char;
	OnTypewriterLetterAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTypewriterLetterAdded

// Begin Delegate FOnTypewriterRunNameChanged
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnTypewriterRunNameChanged_Parms
	{
		UTypewriterTextWidget* Widget;
		FString NewRunName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRunName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewRunName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnTypewriterRunNameChanged_Parms, Widget), Z_Construct_UClass_UTypewriterTextWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::NewProp_NewRunName = { "NewRunName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnTypewriterRunNameChanged_Parms, NewRunName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRunName_MetaData), NewProp_NewRunName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::NewProp_NewRunName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnTypewriterRunNameChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnTypewriterRunNameChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnTypewriterRunNameChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTypewriterRunNameChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTypewriterRunNameChanged, UTypewriterTextWidget* Widget, const FString& NewRunName)
{
	struct _Script_StevesUEHelpers_eventOnTypewriterRunNameChanged_Parms
	{
		UTypewriterTextWidget* Widget;
		FString NewRunName;
	};
	_Script_StevesUEHelpers_eventOnTypewriterRunNameChanged_Parms Parms;
	Parms.Widget=Widget;
	Parms.NewRunName=NewRunName;
	OnTypewriterRunNameChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTypewriterRunNameChanged

// Begin Class URichTextBlockForTypewriter
void URichTextBlockForTypewriter::StaticRegisterNativesURichTextBlockForTypewriter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URichTextBlockForTypewriter);
UClass* Z_Construct_UClass_URichTextBlockForTypewriter_NoRegister()
{
	return URichTextBlockForTypewriter::StaticClass();
}
struct Z_Construct_UClass_URichTextBlockForTypewriter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A text block that exposes more information about text layout for typewriter widget.\n */" },
#endif
		{ "IncludePath", "StevesUI/TypewriterTextWidget.h" },
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A text block that exposes more information about text layout for typewriter widget." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlockForTypewriter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URichTextBlockForTypewriter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URichTextBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockForTypewriter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlockForTypewriter_Statics::ClassParams = {
	&URichTextBlockForTypewriter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockForTypewriter_Statics::Class_MetaDataParams), Z_Construct_UClass_URichTextBlockForTypewriter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URichTextBlockForTypewriter()
{
	if (!Z_Registration_Info_UClass_URichTextBlockForTypewriter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URichTextBlockForTypewriter.OuterSingleton, Z_Construct_UClass_URichTextBlockForTypewriter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URichTextBlockForTypewriter.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<URichTextBlockForTypewriter>()
{
	return URichTextBlockForTypewriter::StaticClass();
}
URichTextBlockForTypewriter::URichTextBlockForTypewriter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockForTypewriter);
URichTextBlockForTypewriter::~URichTextBlockForTypewriter() {}
// End Class URichTextBlockForTypewriter

// Begin Class UTypewriterTextWidget Function GetCurrentLine
struct Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics
{
	struct TypewriterTextWidget_eventGetCurrentLine_Parms
	{
		FText OutLine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::NewProp_OutLine = { "OutLine", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypewriterTextWidget_eventGetCurrentLine_Parms, OutLine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::NewProp_OutLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "GetCurrentLine", nullptr, nullptr, Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::TypewriterTextWidget_eventGetCurrentLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::TypewriterTextWidget_eventGetCurrentLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypewriterTextWidget::execGetCurrentLine)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentLine(Z_Param_Out_OutLine);
	P_NATIVE_END;
}
// End Class UTypewriterTextWidget Function GetCurrentLine

// Begin Class UTypewriterTextWidget Function GetText
struct Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics
{
	struct TypewriterTextWidget_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Set Text immediately\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Text immediately" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypewriterTextWidget_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::TypewriterTextWidget_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::TypewriterTextWidget_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypewriterTextWidget::execGetText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText();
	P_NATIVE_END;
}
// End Class UTypewriterTextWidget Function GetText

// Begin Class UTypewriterTextWidget Function HasFinishedPlayingLine
struct Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics
{
	struct TypewriterTextWidget_eventHasFinishedPlayingLine_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Return whether the entire line has finished playing\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return whether the entire line has finished playing" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypewriterTextWidget_eventHasFinishedPlayingLine_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypewriterTextWidget_eventHasFinishedPlayingLine_Parms), &Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "HasFinishedPlayingLine", nullptr, nullptr, Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::TypewriterTextWidget_eventHasFinishedPlayingLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::TypewriterTextWidget_eventHasFinishedPlayingLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypewriterTextWidget::execHasFinishedPlayingLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFinishedPlayingLine();
	P_NATIVE_END;
}
// End Class UTypewriterTextWidget Function HasFinishedPlayingLine

// Begin Class UTypewriterTextWidget Function HasMoreLineParts
struct Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics
{
	struct TypewriterTextWidget_eventHasMoreLineParts_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Returns whether the number of lines exceeded MaxNumberOfLines and there are still parts to play.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the number of lines exceeded MaxNumberOfLines and there are still parts to play." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypewriterTextWidget_eventHasMoreLineParts_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypewriterTextWidget_eventHasMoreLineParts_Parms), &Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "HasMoreLineParts", nullptr, nullptr, Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::TypewriterTextWidget_eventHasMoreLineParts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::TypewriterTextWidget_eventHasMoreLineParts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypewriterTextWidget::execHasMoreLineParts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasMoreLineParts();
	P_NATIVE_END;
}
// End Class UTypewriterTextWidget Function HasMoreLineParts

// Begin Class UTypewriterTextWidget Function OnLineFinishedPlaying
static const FName NAME_UTypewriterTextWidget_OnLineFinishedPlaying = FName(TEXT("OnLineFinishedPlaying"));
void UTypewriterTextWidget::OnLineFinishedPlaying()
{
	UFunction* Func = FindFunctionChecked(NAME_UTypewriterTextWidget_OnLineFinishedPlaying);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTypewriterTextWidget_OnLineFinishedPlaying_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_OnLineFinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "OnLineFinishedPlaying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_OnLineFinishedPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_OnLineFinishedPlaying_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_OnLineFinishedPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_OnLineFinishedPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTypewriterTextWidget Function OnLineFinishedPlaying

// Begin Class UTypewriterTextWidget Function OnPlayLetter
static const FName NAME_UTypewriterTextWidget_OnPlayLetter = FName(TEXT("OnPlayLetter"));
void UTypewriterTextWidget::OnPlayLetter()
{
	UFunction* Func = FindFunctionChecked(NAME_UTypewriterTextWidget_OnPlayLetter);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTypewriterTextWidget_OnPlayLetter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Called when on or more letters are added, if subclasses want to override\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when on or more letters are added, if subclasses want to override" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_OnPlayLetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "OnPlayLetter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_OnPlayLetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_OnPlayLetter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_OnPlayLetter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_OnPlayLetter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTypewriterTextWidget Function OnPlayLetter

// Begin Class UTypewriterTextWidget Function PlayLine
struct Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics
{
	struct TypewriterTextWidget_eventPlayLine_Parms
	{
		FText InLine;
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Play a line of text.\n\x09 * Note: if, when line splits are calculated, this line exceeds MaxNumberOfLines, then only this number of lines\n\x09 * will be played by this call. In that case, HasMoreLineParts() will return true, and you will need to call\n\x09 * PlayNextLinePart() to play the remainder of the line.\n\x09 * @param InLine The input line \n\x09 * @param Speed \n\x09 */" },
#endif
		{ "CPP_Default_Speed", "1.000000" },
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a line of text.\nNote: if, when line splits are calculated, this line exceeds MaxNumberOfLines, then only this number of lines\nwill be played by this call. In that case, HasMoreLineParts() will return true, and you will need to call\nPlayNextLinePart() to play the remainder of the line.\n@param InLine The input line\n@param Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InLine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::NewProp_InLine = { "InLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypewriterTextWidget_eventPlayLine_Parms, InLine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLine_MetaData), NewProp_InLine_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypewriterTextWidget_eventPlayLine_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::NewProp_InLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "PlayLine", nullptr, nullptr, Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::TypewriterTextWidget_eventPlayLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::TypewriterTextWidget_eventPlayLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_PlayLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_PlayLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypewriterTextWidget::execPlayLine)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InLine);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayLine(Z_Param_Out_InLine,Z_Param_Speed);
	P_NATIVE_END;
}
// End Class UTypewriterTextWidget Function PlayLine

// Begin Class UTypewriterTextWidget Function PlayNextLinePart
struct Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics
{
	struct TypewriterTextWidget_eventPlayNextLinePart_Parms
	{
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If HasMoreLineParts() is true, play the next part of the line originally requested by PlayLine\n" },
#endif
		{ "CPP_Default_Speed", "1.000000" },
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If HasMoreLineParts() is true, play the next part of the line originally requested by PlayLine" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypewriterTextWidget_eventPlayNextLinePart_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "PlayNextLinePart", nullptr, nullptr, Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::TypewriterTextWidget_eventPlayNextLinePart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::TypewriterTextWidget_eventPlayNextLinePart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypewriterTextWidget::execPlayNextLinePart)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayNextLinePart(Z_Param_Speed);
	P_NATIVE_END;
}
// End Class UTypewriterTextWidget Function PlayNextLinePart

// Begin Class UTypewriterTextWidget Function SetText
struct Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics
{
	struct TypewriterTextWidget_eventSetText_Parms
	{
		FText InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Set Text immediately\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Text immediately" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypewriterTextWidget_eventSetText_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::TypewriterTextWidget_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::TypewriterTextWidget_eventSetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypewriterTextWidget::execSetText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetText(Z_Param_Out_InText);
	P_NATIVE_END;
}
// End Class UTypewriterTextWidget Function SetText

// Begin Class UTypewriterTextWidget Function SkipToLineEnd
struct Z_Construct_UFunction_UTypewriterTextWidget_SkipToLineEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Typewriter" },
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypewriterTextWidget_SkipToLineEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypewriterTextWidget, nullptr, "SkipToLineEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypewriterTextWidget_SkipToLineEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypewriterTextWidget_SkipToLineEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTypewriterTextWidget_SkipToLineEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypewriterTextWidget_SkipToLineEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypewriterTextWidget::execSkipToLineEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SkipToLineEnd();
	P_NATIVE_END;
}
// End Class UTypewriterTextWidget Function SkipToLineEnd

// Begin Class UTypewriterTextWidget
void UTypewriterTextWidget::StaticRegisterNativesUTypewriterTextWidget()
{
	UClass* Class = UTypewriterTextWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentLine", &UTypewriterTextWidget::execGetCurrentLine },
		{ "GetText", &UTypewriterTextWidget::execGetText },
		{ "HasFinishedPlayingLine", &UTypewriterTextWidget::execHasFinishedPlayingLine },
		{ "HasMoreLineParts", &UTypewriterTextWidget::execHasMoreLineParts },
		{ "PlayLine", &UTypewriterTextWidget::execPlayLine },
		{ "PlayNextLinePart", &UTypewriterTextWidget::execPlayNextLinePart },
		{ "SetText", &UTypewriterTextWidget::execSetText },
		{ "SkipToLineEnd", &UTypewriterTextWidget::execSkipToLineEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypewriterTextWidget);
UClass* Z_Construct_UClass_UTypewriterTextWidget_NoRegister()
{
	return UTypewriterTextWidget::StaticClass();
}
struct Z_Construct_UClass_UTypewriterTextWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StevesUI/TypewriterTextWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTypewriterLineFinished_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event called when a line has finished playing, whether on its own or when skipped to end\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when a line has finished playing, whether on its own or when skipped to end" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTypewriterLetterAdded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event called when one or more new letters have been displayed\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when one or more new letters have been displayed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTypewriterRunNameChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event called when the \"run name\" of the text changes aka the rich text style markup. Also called when reverts to default.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when the \"run name\" of the text changes aka the rich text style markup. Also called when reverts to default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TypewriterTextWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LetterPlayTime_MetaData[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The amount of time between printing individual letters (for the \"typewriter\" effect).\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time between printing individual letters (for the \"typewriter\" effect)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndHoldTime_MetaData[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The amount of time to wait after finishing the line before actually marking it completed.\n/// This helps prevent accidentally progressing dialogue on short lines.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time to wait after finishing the line before actually marking it completed.\nThis helps prevent accidentally progressing dialogue on short lines." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseTimeAtSentenceTerminators_MetaData[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How long to pause at sentence terminators ('.', '!', '?') before proceeding (ignored if at end of text)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long to pause at sentence terminators ('.', '!', '?') before proceeding (ignored if at end of text)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SentenceTerminators_MetaData[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Characters which will terminate a sentence, which will potentially pause\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Characters which will terminate a sentence, which will potentially pause" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClauseTerminators_MetaData[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Characters which terminate a clause, which is a preferred place to split an overly long line\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Characters which terminate a clause, which is a preferred place to split an overly long line" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseOnlyIfWhitespaceFollowsSentenceTerminator_MetaData[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If true (default), only pauses at sentence terminators if there's whitespace following them.\n/// This prevents pausing on strings like \".txt\"\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true (default), only pauses at sentence terminators if there's whitespace following them.\nThis prevents pausing on strings like \".txt\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfLines_MetaData[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If set > 0, splits a single PlayLine into multiple segments of this number of lines maximum\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set > 0, splits a single PlayLine into multiple segments of this number of lines maximum" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRunName_MetaData[] = {
		{ "Category", "Typewriter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Name of the current rich text run, if any\n/// Can be used to identify the style of the most recently played letter\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the current rich text run, if any\nCan be used to identify the style of the most recently played letter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLine_MetaData[] = {
		{ "ModuleRelativePath", "Public/StevesUI/TypewriterTextWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTypewriterLineFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTypewriterLetterAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTypewriterRunNameChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LetterPlayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndHoldTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PauseTimeAtSentenceTerminators;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SentenceTerminators;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClauseTerminators;
	static void NewProp_bPauseOnlyIfWhitespaceFollowsSentenceTerminator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseOnlyIfWhitespaceFollowsSentenceTerminator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfLines;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentRunName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CurrentLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypewriterTextWidget_GetCurrentLine, "GetCurrentLine" }, // 4205279781
		{ &Z_Construct_UFunction_UTypewriterTextWidget_GetText, "GetText" }, // 3222421041
		{ &Z_Construct_UFunction_UTypewriterTextWidget_HasFinishedPlayingLine, "HasFinishedPlayingLine" }, // 4240109021
		{ &Z_Construct_UFunction_UTypewriterTextWidget_HasMoreLineParts, "HasMoreLineParts" }, // 1242295524
		{ &Z_Construct_UFunction_UTypewriterTextWidget_OnLineFinishedPlaying, "OnLineFinishedPlaying" }, // 3723694994
		{ &Z_Construct_UFunction_UTypewriterTextWidget_OnPlayLetter, "OnPlayLetter" }, // 2072147190
		{ &Z_Construct_UFunction_UTypewriterTextWidget_PlayLine, "PlayLine" }, // 478782328
		{ &Z_Construct_UFunction_UTypewriterTextWidget_PlayNextLinePart, "PlayNextLinePart" }, // 3319728474
		{ &Z_Construct_UFunction_UTypewriterTextWidget_SetText, "SetText" }, // 3064394336
		{ &Z_Construct_UFunction_UTypewriterTextWidget_SkipToLineEnd, "SkipToLineEnd" }, // 3795670588
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypewriterTextWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_OnTypewriterLineFinished = { "OnTypewriterLineFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, OnTypewriterLineFinished), Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLineFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTypewriterLineFinished_MetaData), NewProp_OnTypewriterLineFinished_MetaData) }; // 2517390891
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_OnTypewriterLetterAdded = { "OnTypewriterLetterAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, OnTypewriterLetterAdded), Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterLetterAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTypewriterLetterAdded_MetaData), NewProp_OnTypewriterLetterAdded_MetaData) }; // 436442484
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_OnTypewriterRunNameChanged = { "OnTypewriterRunNameChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, OnTypewriterRunNameChanged), Z_Construct_UDelegateFunction_StevesUEHelpers_OnTypewriterRunNameChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTypewriterRunNameChanged_MetaData), NewProp_OnTypewriterRunNameChanged_MetaData) }; // 1697144048
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_LineText = { "LineText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, LineText), Z_Construct_UClass_URichTextBlockForTypewriter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineText_MetaData), NewProp_LineText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_LetterPlayTime = { "LetterPlayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, LetterPlayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LetterPlayTime_MetaData), NewProp_LetterPlayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_EndHoldTime = { "EndHoldTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, EndHoldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndHoldTime_MetaData), NewProp_EndHoldTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_PauseTimeAtSentenceTerminators = { "PauseTimeAtSentenceTerminators", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, PauseTimeAtSentenceTerminators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseTimeAtSentenceTerminators_MetaData), NewProp_PauseTimeAtSentenceTerminators_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_SentenceTerminators = { "SentenceTerminators", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, SentenceTerminators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SentenceTerminators_MetaData), NewProp_SentenceTerminators_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_ClauseTerminators = { "ClauseTerminators", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, ClauseTerminators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClauseTerminators_MetaData), NewProp_ClauseTerminators_MetaData) };
void Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_bPauseOnlyIfWhitespaceFollowsSentenceTerminator_SetBit(void* Obj)
{
	((UTypewriterTextWidget*)Obj)->bPauseOnlyIfWhitespaceFollowsSentenceTerminator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_bPauseOnlyIfWhitespaceFollowsSentenceTerminator = { "bPauseOnlyIfWhitespaceFollowsSentenceTerminator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTypewriterTextWidget), &Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_bPauseOnlyIfWhitespaceFollowsSentenceTerminator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseOnlyIfWhitespaceFollowsSentenceTerminator_MetaData), NewProp_bPauseOnlyIfWhitespaceFollowsSentenceTerminator_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_MaxNumberOfLines = { "MaxNumberOfLines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, MaxNumberOfLines), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfLines_MetaData), NewProp_MaxNumberOfLines_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_CurrentRunName = { "CurrentRunName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, CurrentRunName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRunName_MetaData), NewProp_CurrentRunName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_CurrentLine = { "CurrentLine", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypewriterTextWidget, CurrentLine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLine_MetaData), NewProp_CurrentLine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypewriterTextWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_OnTypewriterLineFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_OnTypewriterLetterAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_OnTypewriterRunNameChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_LineText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_LetterPlayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_EndHoldTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_PauseTimeAtSentenceTerminators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_SentenceTerminators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_ClauseTerminators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_bPauseOnlyIfWhitespaceFollowsSentenceTerminator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_MaxNumberOfLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_CurrentRunName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypewriterTextWidget_Statics::NewProp_CurrentLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTypewriterTextWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypewriterTextWidget_Statics::ClassParams = {
	&UTypewriterTextWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTypewriterTextWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypewriterTextWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypewriterTextWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypewriterTextWidget()
{
	if (!Z_Registration_Info_UClass_UTypewriterTextWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypewriterTextWidget.OuterSingleton, Z_Construct_UClass_UTypewriterTextWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypewriterTextWidget.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UTypewriterTextWidget>()
{
	return UTypewriterTextWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypewriterTextWidget);
UTypewriterTextWidget::~UTypewriterTextWidget() {}
// End Class UTypewriterTextWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URichTextBlockForTypewriter, URichTextBlockForTypewriter::StaticClass, TEXT("URichTextBlockForTypewriter"), &Z_Registration_Info_UClass_URichTextBlockForTypewriter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URichTextBlockForTypewriter), 1023719814U) },
		{ Z_Construct_UClass_UTypewriterTextWidget, UTypewriterTextWidget::StaticClass, TEXT("UTypewriterTextWidget"), &Z_Registration_Info_UClass_UTypewriterTextWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypewriterTextWidget), 1861306499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_3884190612(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_TypewriterTextWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
