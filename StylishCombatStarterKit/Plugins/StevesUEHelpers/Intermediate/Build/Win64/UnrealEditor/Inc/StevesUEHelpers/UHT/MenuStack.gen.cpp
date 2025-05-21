// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/MenuStack.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuStack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableInputInterceptorUserWidget();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UMenuBase_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UMenuStack();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UMenuStack_NoRegister();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputMode();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputModeChange();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UContentWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Delegate FOnMenuStackClosed
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnMenuStackClosed_Parms
	{
		UMenuStack* Stack;
		bool bWasCancel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stack;
	static void NewProp_bWasCancel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnMenuStackClosed_Parms, Stack), Z_Construct_UClass_UMenuStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stack_MetaData), NewProp_Stack_MetaData) };
void Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::NewProp_bWasCancel_SetBit(void* Obj)
{
	((_Script_StevesUEHelpers_eventOnMenuStackClosed_Parms*)Obj)->bWasCancel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::NewProp_bWasCancel = { "bWasCancel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_StevesUEHelpers_eventOnMenuStackClosed_Parms), &Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::NewProp_bWasCancel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::NewProp_Stack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::NewProp_bWasCancel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnMenuStackClosed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnMenuStackClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnMenuStackClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMenuStackClosed_DelegateWrapper(const FMulticastScriptDelegate& OnMenuStackClosed, UMenuStack* Stack, bool bWasCancel)
{
	struct _Script_StevesUEHelpers_eventOnMenuStackClosed_Parms
	{
		UMenuStack* Stack;
		bool bWasCancel;
	};
	_Script_StevesUEHelpers_eventOnMenuStackClosed_Parms Parms;
	Parms.Stack=Stack;
	Parms.bWasCancel=bWasCancel ? true : false;
	OnMenuStackClosed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMenuStackClosed

// Begin Class UMenuStack Function CloseAll
struct Z_Construct_UFunction_UMenuStack_CloseAll_Statics
{
	struct MenuStack_eventCloseAll_Parms
	{
		bool bWasCancel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Close the entire stack at once. This does not give any of the menus chance to do anything before close, so if you\n/// want them to do that, use PopMenu() until Count() == 0 instead\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Close the entire stack at once. This does not give any of the menus chance to do anything before close, so if you\nwant them to do that, use PopMenu() until Count() == 0 instead" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bWasCancel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuStack_CloseAll_Statics::NewProp_bWasCancel_SetBit(void* Obj)
{
	((MenuStack_eventCloseAll_Parms*)Obj)->bWasCancel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuStack_CloseAll_Statics::NewProp_bWasCancel = { "bWasCancel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuStack_eventCloseAll_Parms), &Z_Construct_UFunction_UMenuStack_CloseAll_Statics::NewProp_bWasCancel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuStack_CloseAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_CloseAll_Statics::NewProp_bWasCancel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_CloseAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuStack_CloseAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuStack, nullptr, "CloseAll", nullptr, nullptr, Z_Construct_UFunction_UMenuStack_CloseAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_CloseAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuStack_CloseAll_Statics::MenuStack_eventCloseAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_CloseAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuStack_CloseAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuStack_CloseAll_Statics::MenuStack_eventCloseAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuStack_CloseAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuStack_CloseAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuStack::execCloseAll)
{
	P_GET_UBOOL(Z_Param_bWasCancel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseAll(Z_Param_bWasCancel);
	P_NATIVE_END;
}
// End Class UMenuStack Function CloseAll

// Begin Class UMenuStack Function Count
struct Z_Construct_UFunction_UMenuStack_Count_Statics
{
	struct MenuStack_eventCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the number of active levels in the menu\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of active levels in the menu" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMenuStack_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuStack_eventCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuStack_Count_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_Count_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_Count_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuStack_Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuStack, nullptr, "Count", nullptr, nullptr, Z_Construct_UFunction_UMenuStack_Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_Count_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuStack_Count_Statics::MenuStack_eventCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_Count_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuStack_Count_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuStack_Count_Statics::MenuStack_eventCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuStack_Count()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuStack_Count_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuStack::execCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Count();
	P_NATIVE_END;
}
// End Class UMenuStack Function Count

// Begin Class UMenuStack Function GetTopMenu
struct Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics
{
	struct MenuStack_eventGetTopMenu_Parms
	{
		UMenuBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Return the menu which is currently top of the stack\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the menu which is currently top of the stack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuStack_eventGetTopMenu_Parms, ReturnValue), Z_Construct_UClass_UMenuBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuStack, nullptr, "GetTopMenu", nullptr, nullptr, Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::MenuStack_eventGetTopMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::MenuStack_eventGetTopMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuStack_GetTopMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuStack_GetTopMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuStack::execGetTopMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMenuBase**)Z_Param__Result=P_THIS->GetTopMenu();
	P_NATIVE_END;
}
// End Class UMenuStack Function GetTopMenu

// Begin Class UMenuStack Function InputModeChanged
struct Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics
{
	struct MenuStack_eventInputModeChanged_Parms
	{
		int32 PlayerIndex;
		EInputMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuStack_eventInputModeChanged_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuStack_eventInputModeChanged_Parms, NewMode), Z_Construct_UEnum_StevesUEHelpers_EInputMode, METADATA_PARAMS(0, nullptr) }; // 2721707288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuStack, nullptr, "InputModeChanged", nullptr, nullptr, Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::MenuStack_eventInputModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::MenuStack_eventInputModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuStack_InputModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuStack_InputModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuStack::execInputModeChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_GET_ENUM(EInputMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InputModeChanged(Z_Param_PlayerIndex,EInputMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// End Class UMenuStack Function InputModeChanged

// Begin Class UMenuStack Function PopMenu
struct Z_Construct_UFunction_UMenuStack_PopMenu_Statics
{
	struct MenuStack_eventPopMenu_Parms
	{
		bool bWasCancel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Pop the top level of the menu stack. This *destroys* the top level menu, meaning it will lose all of its state.\n/// You won't need to call this manually most of the time, because calling Close() on the MenuBase will do it.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pop the top level of the menu stack. This *destroys* the top level menu, meaning it will lose all of its state.\nYou won't need to call this manually most of the time, because calling Close() on the MenuBase will do it." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bWasCancel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuStack_PopMenu_Statics::NewProp_bWasCancel_SetBit(void* Obj)
{
	((MenuStack_eventPopMenu_Parms*)Obj)->bWasCancel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuStack_PopMenu_Statics::NewProp_bWasCancel = { "bWasCancel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuStack_eventPopMenu_Parms), &Z_Construct_UFunction_UMenuStack_PopMenu_Statics::NewProp_bWasCancel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuStack_PopMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_PopMenu_Statics::NewProp_bWasCancel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_PopMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuStack_PopMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuStack, nullptr, "PopMenu", nullptr, nullptr, Z_Construct_UFunction_UMenuStack_PopMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_PopMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuStack_PopMenu_Statics::MenuStack_eventPopMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_PopMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuStack_PopMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuStack_PopMenu_Statics::MenuStack_eventPopMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuStack_PopMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuStack_PopMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuStack::execPopMenu)
{
	P_GET_UBOOL(Z_Param_bWasCancel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopMenu(Z_Param_bWasCancel);
	P_NATIVE_END;
}
// End Class UMenuStack Function PopMenu

// Begin Class UMenuStack Function PushMenuByClass
struct Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics
{
	struct MenuStack_eventPushMenuByClass_Parms
	{
		TSubclassOf<UMenuBase> MenuClass;
		UMenuBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Push a new menu level by class. This will instantiate the new menu, display it, and inform the previous menu that it's\n/// been superceded. Use the returned instance if you want to cache it\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Push a new menu level by class. This will instantiate the new menu, display it, and inform the previous menu that it's\nbeen superceded. Use the returned instance if you want to cache it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::NewProp_MenuClass = { "MenuClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuStack_eventPushMenuByClass_Parms, MenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMenuBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuStack_eventPushMenuByClass_Parms, ReturnValue), Z_Construct_UClass_UMenuBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::NewProp_MenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuStack, nullptr, "PushMenuByClass", nullptr, nullptr, Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::MenuStack_eventPushMenuByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::MenuStack_eventPushMenuByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuStack_PushMenuByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuStack_PushMenuByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuStack::execPushMenuByClass)
{
	P_GET_OBJECT(UClass,Z_Param_MenuClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMenuBase**)Z_Param__Result=P_THIS->PushMenuByClass(Z_Param_MenuClass);
	P_NATIVE_END;
}
// End Class UMenuStack Function PushMenuByClass

// Begin Class UMenuStack Function PushMenuByObject
struct Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics
{
	struct MenuStack_eventPushMenuByObject_Parms
	{
		UMenuBase* NewMenu;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Push a new menu level by instance on to the stack. This will display the new menu and inform the previous menu that it's\n/// been superceded, which will most likely mean it will be hidden (but will retain its state)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Push a new menu level by instance on to the stack. This will display the new menu and inform the previous menu that it's\nbeen superceded, which will most likely mean it will be hidden (but will retain its state)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::NewProp_NewMenu = { "NewMenu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuStack_eventPushMenuByObject_Parms, NewMenu), Z_Construct_UClass_UMenuBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMenu_MetaData), NewProp_NewMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::NewProp_NewMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuStack, nullptr, "PushMenuByObject", nullptr, nullptr, Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::MenuStack_eventPushMenuByObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::MenuStack_eventPushMenuByObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuStack_PushMenuByObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuStack_PushMenuByObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuStack::execPushMenuByObject)
{
	P_GET_OBJECT(UMenuBase,Z_Param_NewMenu);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PushMenuByObject(Z_Param_NewMenu);
	P_NATIVE_END;
}
// End Class UMenuStack Function PushMenuByObject

// Begin Class UMenuStack
void UMenuStack::StaticRegisterNativesUMenuStack()
{
	UClass* Class = UMenuStack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseAll", &UMenuStack::execCloseAll },
		{ "Count", &UMenuStack::execCount },
		{ "GetTopMenu", &UMenuStack::execGetTopMenu },
		{ "InputModeChanged", &UMenuStack::execInputModeChanged },
		{ "PopMenu", &UMenuStack::execPopMenu },
		{ "PushMenuByClass", &UMenuStack::execPushMenuByClass },
		{ "PushMenuByObject", &UMenuStack::execPushMenuByObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuStack);
UClass* Z_Construct_UClass_UMenuStack_NoRegister()
{
	return UMenuStack::StaticClass();
}
struct Z_Construct_UClass_UMenuStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Represents a modal stack of menus which take focus and have a concept of \"Back\"\n/// Each level within is a MenuBase, which must be \"pushed\" on to the stack.\n/// Contained within MenuSystem (multiple menu stacks supported)\n/// Has a Priority so that when multiple menu stacks are open, higher priority gets focus,\n/// and when closed, next highest priority gets focus back. Focus is given when the first MenuBase is pushed onto the stack,\n/// and given up when the last one is popped.\n/// You can style this widget to be the general surrounds in which all MenuBase levels live inside\n/// Create a Blueprint subclass of this and make sure you include a UContentWidget with the name\n/// \"MenuContainer\" somewhere in the tree, which is where the menu contents will be placed. \n" },
#endif
		{ "IncludePath", "StevesUI/MenuStack.h" },
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a modal stack of menus which take focus and have a concept of \"Back\"\nEach level within is a MenuBase, which must be \"pushed\" on to the stack.\nContained within MenuSystem (multiple menu stacks supported)\nHas a Priority so that when multiple menu stacks are open, higher priority gets focus,\nand when closed, next highest priority gets focus back. Focus is given when the first MenuBase is pushed onto the stack,\nand given up when the last one is popped.\nYou can style this widget to be the general surrounds in which all MenuBase levels live inside\nCreate a Blueprint subclass of this and make sure you include a UContentWidget with the name\n\"MenuContainer\" somewhere in the tree, which is where the menu contents will be placed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackKeys_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Input keys which go back a level in the menu stack (default Esc and B gamepad button)\n/// Clear this list if you don't want this behaviour\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input keys which go back a level in the menu stack (default Esc and B gamepad button)\nClear this list if you don't want this behaviour" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantCloseKeys_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Input keys which instantly close the menu stack (default gamepad start)\n/// Clear this list if you don't want this behaviour\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input keys which instantly close the menu stack (default gamepad start)\nClear this list if you don't want this behaviour" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuStack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// This property will bind to a blueprint variable of the same name to contain the actual menu content\n/// If not set, or the UiMenuBase is set to not use this container, levels are added independently to viewport\n/// Use a NamedSlot for this most of the time, it gives you the most layout flexibility.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This property will bind to a blueprint variable of the same name to contain the actual menu content\nIf not set, or the UiMenuBase is set to not use this container, levels are added independently to viewport\nUse a NamedSlot for this most of the time, it gives you the most layout flexibility." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when the stack is closed for any reason. If bWasCancel, the menu stack was closed because the\n/// last item was cancelled.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when the stack is closed for any reason. If bWasCancel, the menu stack was closed because the\nlast item was cancelled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputModeSettingOnOpen_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How this stack should change the input mode when it opens (default no change)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this stack should change the input mode when it opens (default no change)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushOnInputModeChange_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// When changing input mode, whether to flush pressed keys so we start fresh\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When changing input mode, whether to flush pressed keys so we start fresh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePointerVisibilityOnOpen_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How this stack should set the mouse pointer visibility when it opens (default no change)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this stack should set the mouse pointer visibility when it opens (default no change)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePauseSettingOnOpen_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How this stack should set the game pause state when it opens (default no change)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this stack should set the game pause state when it opens (default no change)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputModeSettingOnClose_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How this stack should change the input mode when it closes (default no change)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this stack should change the input mode when it closes (default no change)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePointerVisibilityOnClose_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How this stack should set the mouse pointer visibility when it closes (default no change)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this stack should set the mouse pointer visibility when it closes (default no change)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePauseSettingOnClose_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How this stack should set the game pause state when it closes (default no change)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this stack should set the game pause state when it closes (default no change)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTimeOpen_MetaData[] = {
		{ "Category", "Behaviour" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Minimum amount of time a menu should be open before responding to instant close key (prevent fast close because of leaked input)\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum amount of time a menu should be open before responding to instant close key (prevent fast close because of leaked input)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstantCloseKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstantCloseKeys;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuContainer;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputModeSettingOnOpen_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputModeSettingOnOpen;
	static void NewProp_bFlushOnInputModeChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushOnInputModeChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MousePointerVisibilityOnOpen_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MousePointerVisibilityOnOpen;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GamePauseSettingOnOpen_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GamePauseSettingOnOpen;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputModeSettingOnClose_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputModeSettingOnClose;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MousePointerVisibilityOnClose_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MousePointerVisibilityOnClose;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GamePauseSettingOnClose_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GamePauseSettingOnClose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTimeOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuStack_CloseAll, "CloseAll" }, // 2368412507
		{ &Z_Construct_UFunction_UMenuStack_Count, "Count" }, // 2174620292
		{ &Z_Construct_UFunction_UMenuStack_GetTopMenu, "GetTopMenu" }, // 2083557798
		{ &Z_Construct_UFunction_UMenuStack_InputModeChanged, "InputModeChanged" }, // 2683544676
		{ &Z_Construct_UFunction_UMenuStack_PopMenu, "PopMenu" }, // 1472315888
		{ &Z_Construct_UFunction_UMenuStack_PushMenuByClass, "PushMenuByClass" }, // 4099050158
		{ &Z_Construct_UFunction_UMenuStack_PushMenuByObject, "PushMenuByObject" }, // 2082541544
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_BackKeys_Inner = { "BackKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_BackKeys = { "BackKeys", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, BackKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackKeys_MetaData), NewProp_BackKeys_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_InstantCloseKeys_Inner = { "InstantCloseKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_InstantCloseKeys = { "InstantCloseKeys", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, InstantCloseKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantCloseKeys_MetaData), NewProp_InstantCloseKeys_MetaData) }; // 658672854
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_MenuContainer = { "MenuContainer", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, MenuContainer), Z_Construct_UClass_UContentWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuContainer_MetaData), NewProp_MenuContainer_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, OnClosed), Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuStackClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClosed_MetaData), NewProp_OnClosed_MetaData) }; // 1664610067
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_InputModeSettingOnOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_InputModeSettingOnOpen = { "InputModeSettingOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, InputModeSettingOnOpen), Z_Construct_UEnum_StevesUEHelpers_EInputModeChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputModeSettingOnOpen_MetaData), NewProp_InputModeSettingOnOpen_MetaData) }; // 986802536
void Z_Construct_UClass_UMenuStack_Statics::NewProp_bFlushOnInputModeChange_SetBit(void* Obj)
{
	((UMenuStack*)Obj)->bFlushOnInputModeChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_bFlushOnInputModeChange = { "bFlushOnInputModeChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuStack), &Z_Construct_UClass_UMenuStack_Statics::NewProp_bFlushOnInputModeChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushOnInputModeChange_MetaData), NewProp_bFlushOnInputModeChange_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_MousePointerVisibilityOnOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_MousePointerVisibilityOnOpen = { "MousePointerVisibilityOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, MousePointerVisibilityOnOpen), Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePointerVisibilityOnOpen_MetaData), NewProp_MousePointerVisibilityOnOpen_MetaData) }; // 3477069294
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_GamePauseSettingOnOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_GamePauseSettingOnOpen = { "GamePauseSettingOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, GamePauseSettingOnOpen), Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePauseSettingOnOpen_MetaData), NewProp_GamePauseSettingOnOpen_MetaData) }; // 4159482778
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_InputModeSettingOnClose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_InputModeSettingOnClose = { "InputModeSettingOnClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, InputModeSettingOnClose), Z_Construct_UEnum_StevesUEHelpers_EInputModeChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputModeSettingOnClose_MetaData), NewProp_InputModeSettingOnClose_MetaData) }; // 986802536
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_MousePointerVisibilityOnClose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_MousePointerVisibilityOnClose = { "MousePointerVisibilityOnClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, MousePointerVisibilityOnClose), Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePointerVisibilityOnClose_MetaData), NewProp_MousePointerVisibilityOnClose_MetaData) }; // 3477069294
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_GamePauseSettingOnClose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_GamePauseSettingOnClose = { "GamePauseSettingOnClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, GamePauseSettingOnClose), Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePauseSettingOnClose_MetaData), NewProp_GamePauseSettingOnClose_MetaData) }; // 4159482778
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMenuStack_Statics::NewProp_MinTimeOpen = { "MinTimeOpen", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuStack, MinTimeOpen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTimeOpen_MetaData), NewProp_MinTimeOpen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_BackKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_BackKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_InstantCloseKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_InstantCloseKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_MenuContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_OnClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_InputModeSettingOnOpen_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_InputModeSettingOnOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_bFlushOnInputModeChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_MousePointerVisibilityOnOpen_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_MousePointerVisibilityOnOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_GamePauseSettingOnOpen_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_GamePauseSettingOnOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_InputModeSettingOnClose_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_InputModeSettingOnClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_MousePointerVisibilityOnClose_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_MousePointerVisibilityOnClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_GamePauseSettingOnClose_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_GamePauseSettingOnClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuStack_Statics::NewProp_MinTimeOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFocusableInputInterceptorUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuStack_Statics::ClassParams = {
	&UMenuStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenuStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuStack_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuStack()
{
	if (!Z_Registration_Info_UClass_UMenuStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuStack.OuterSingleton, Z_Construct_UClass_UMenuStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuStack.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UMenuStack>()
{
	return UMenuStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuStack);
UMenuStack::~UMenuStack() {}
// End Class UMenuStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuStack, UMenuStack::StaticClass, TEXT("UMenuStack"), &Z_Registration_Info_UClass_UMenuStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuStack), 1739659921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_2844685294(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuStack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
