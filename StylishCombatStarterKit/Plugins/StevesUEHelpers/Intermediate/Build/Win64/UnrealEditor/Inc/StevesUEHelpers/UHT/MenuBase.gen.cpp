// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/MenuBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuBase() {}

// Begin Cross Module References
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusablePanel();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UMenuBase();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UMenuBase_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UMenuStack_NoRegister();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EInputModeChange();
STEVESUEHELPERS_API UEnum* Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Delegate FOnMenuClosed
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics
{
	struct _Script_StevesUEHelpers_eventOnMenuClosed_Parms
	{
		UMenuBase* Menu;
		bool bWasCancelled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Menu;
	static void NewProp_bWasCancelled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_StevesUEHelpers_eventOnMenuClosed_Parms, Menu), Z_Construct_UClass_UMenuBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Menu_MetaData), NewProp_Menu_MetaData) };
void Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
{
	((_Script_StevesUEHelpers_eventOnMenuClosed_Parms*)Obj)->bWasCancelled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_StevesUEHelpers_eventOnMenuClosed_Parms), &Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::NewProp_Menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::NewProp_bWasCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnMenuClosed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnMenuClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::_Script_StevesUEHelpers_eventOnMenuClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMenuClosed_DelegateWrapper(const FMulticastScriptDelegate& OnMenuClosed, UMenuBase* Menu, bool bWasCancelled)
{
	struct _Script_StevesUEHelpers_eventOnMenuClosed_Parms
	{
		UMenuBase* Menu;
		bool bWasCancelled;
	};
	_Script_StevesUEHelpers_eventOnMenuClosed_Parms Parms;
	Parms.Menu=Menu;
	Parms.bWasCancelled=bWasCancelled ? true : false;
	OnMenuClosed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMenuClosed

// Begin Class UMenuBase Function Close
struct Z_Construct_UFunction_UMenuBase_Close_Statics
{
	struct MenuBase_eventClose_Parms
	{
		bool bWasCancel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Close this menu. This ALWAYS closes the menu, if you want it to be able to veto it, call RequestClose\n     * @param bWasCancel Set this to true if the reason for closure was a cancellation action\n     */" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Close this menu. This ALWAYS closes the menu, if you want it to be able to veto it, call RequestClose\n@param bWasCancel Set this to true if the reason for closure was a cancellation action" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bWasCancel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuBase_Close_Statics::NewProp_bWasCancel_SetBit(void* Obj)
{
	((MenuBase_eventClose_Parms*)Obj)->bWasCancel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuBase_Close_Statics::NewProp_bWasCancel = { "bWasCancel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuBase_eventClose_Parms), &Z_Construct_UFunction_UMenuBase_Close_Statics::NewProp_bWasCancel_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuBase_Close_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_Close_Statics::NewProp_bWasCancel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_Close_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuBase_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase, nullptr, "Close", nullptr, nullptr, Z_Construct_UFunction_UMenuBase_Close_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_Close_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuBase_Close_Statics::MenuBase_eventClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuBase_Close_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuBase_Close_Statics::MenuBase_eventClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuBase_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuBase_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuBase::execClose)
{
	P_GET_UBOOL(Z_Param_bWasCancel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close(Z_Param_bWasCancel);
	P_NATIVE_END;
}
// End Class UMenuBase Function Close

// Begin Class UMenuBase Function IsTopOfStack
struct Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics
{
	struct MenuBase_eventIsTopOfStack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Return whether this menu is currently at the top of the menu stack\n/// Note: if this menu is not owned by a stack, will always return true\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return whether this menu is currently at the top of the menu stack\nNote: if this menu is not owned by a stack, will always return true" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MenuBase_eventIsTopOfStack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuBase_eventIsTopOfStack_Parms), &Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase, nullptr, "IsTopOfStack", nullptr, nullptr, Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::MenuBase_eventIsTopOfStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::MenuBase_eventIsTopOfStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuBase_IsTopOfStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuBase_IsTopOfStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuBase::execIsTopOfStack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTopOfStack();
	P_NATIVE_END;
}
// End Class UMenuBase Function IsTopOfStack

// Begin Class UMenuBase Function OnAddedToStack
struct MenuBase_eventOnAddedToStack_Parms
{
	UMenuStack* Parent;
};
static const FName NAME_UMenuBase_OnAddedToStack = FName(TEXT("OnAddedToStack"));
void UMenuBase::OnAddedToStack(UMenuStack* Parent)
{
	UFunction* Func = FindFunctionChecked(NAME_UMenuBase_OnAddedToStack);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MenuBase_eventOnAddedToStack_Parms Parms;
		Parms.Parent=Parent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnAddedToStack_Implementation(Parent);
	}
}
struct Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuBase_eventOnAddedToStack_Parms, Parent), Z_Construct_UClass_UMenuStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase, nullptr, "OnAddedToStack", nullptr, nullptr, Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::PropPointers), sizeof(MenuBase_eventOnAddedToStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(MenuBase_eventOnAddedToStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuBase_OnAddedToStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuBase_OnAddedToStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuBase::execOnAddedToStack)
{
	P_GET_OBJECT(UMenuStack,Z_Param_Parent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAddedToStack_Implementation(Z_Param_Parent);
	P_NATIVE_END;
}
// End Class UMenuBase Function OnAddedToStack

// Begin Class UMenuBase Function OnRegainedFocusInStack
static const FName NAME_UMenuBase_OnRegainedFocusInStack = FName(TEXT("OnRegainedFocusInStack"));
void UMenuBase::OnRegainedFocusInStack()
{
	UFunction* Func = FindFunctionChecked(NAME_UMenuBase_OnRegainedFocusInStack);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnRegainedFocusInStack_Implementation();
	}
}
struct Z_Construct_UFunction_UMenuBase_OnRegainedFocusInStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Called when this menu is superceded by another menu being pushed on to this stack\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this menu is superceded by another menu being pushed on to this stack" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuBase_OnRegainedFocusInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase, nullptr, "OnRegainedFocusInStack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnRegainedFocusInStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuBase_OnRegainedFocusInStack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMenuBase_OnRegainedFocusInStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuBase_OnRegainedFocusInStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuBase::execOnRegainedFocusInStack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRegainedFocusInStack_Implementation();
	P_NATIVE_END;
}
// End Class UMenuBase Function OnRegainedFocusInStack

// Begin Class UMenuBase Function OnRemovedFromStack
struct MenuBase_eventOnRemovedFromStack_Parms
{
	UMenuStack* Parent;
};
static const FName NAME_UMenuBase_OnRemovedFromStack = FName(TEXT("OnRemovedFromStack"));
void UMenuBase::OnRemovedFromStack(UMenuStack* Parent)
{
	UFunction* Func = FindFunctionChecked(NAME_UMenuBase_OnRemovedFromStack);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MenuBase_eventOnRemovedFromStack_Parms Parms;
		Parms.Parent=Parent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnRemovedFromStack_Implementation(Parent);
	}
}
struct Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuBase_eventOnRemovedFromStack_Parms, Parent), Z_Construct_UClass_UMenuStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase, nullptr, "OnRemovedFromStack", nullptr, nullptr, Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::PropPointers), sizeof(MenuBase_eventOnRemovedFromStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(MenuBase_eventOnRemovedFromStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuBase_OnRemovedFromStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuBase_OnRemovedFromStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuBase::execOnRemovedFromStack)
{
	P_GET_OBJECT(UMenuStack,Z_Param_Parent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRemovedFromStack_Implementation(Z_Param_Parent);
	P_NATIVE_END;
}
// End Class UMenuBase Function OnRemovedFromStack

// Begin Class UMenuBase Function OnSupercededInStack
struct MenuBase_eventOnSupercededInStack_Parms
{
	UMenuBase* ByMenu;
};
static const FName NAME_UMenuBase_OnSupercededInStack = FName(TEXT("OnSupercededInStack"));
void UMenuBase::OnSupercededInStack(UMenuBase* ByMenu)
{
	UFunction* Func = FindFunctionChecked(NAME_UMenuBase_OnSupercededInStack);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MenuBase_eventOnSupercededInStack_Parms Parms;
		Parms.ByMenu=ByMenu;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnSupercededInStack_Implementation(ByMenu);
	}
}
struct Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Called when this menu is superceded by another menu being pushed on to this stack\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this menu is superceded by another menu being pushed on to this stack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ByMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::NewProp_ByMenu = { "ByMenu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuBase_eventOnSupercededInStack_Parms, ByMenu), Z_Construct_UClass_UMenuBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByMenu_MetaData), NewProp_ByMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::NewProp_ByMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase, nullptr, "OnSupercededInStack", nullptr, nullptr, Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::PropPointers), sizeof(MenuBase_eventOnSupercededInStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(MenuBase_eventOnSupercededInStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuBase_OnSupercededInStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuBase_OnSupercededInStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuBase::execOnSupercededInStack)
{
	P_GET_OBJECT(UMenuBase,Z_Param_ByMenu);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSupercededInStack_Implementation(Z_Param_ByMenu);
	P_NATIVE_END;
}
// End Class UMenuBase Function OnSupercededInStack

// Begin Class UMenuBase Function Open
struct Z_Construct_UFunction_UMenuBase_Open_Statics
{
	struct MenuBase_eventOpen_Parms
	{
		bool bIsRegainedFocus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Open this menu. You should only call this if you're NOT using this in a UMenuStack, because the stack will\n     * call it for you when you add this menu to it\n\n     * @param bIsRegainedFocus Set this to true if the reason this menu is opening is that it regained focus in a stack\n     */" },
#endif
		{ "CPP_Default_bIsRegainedFocus", "false" },
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Open this menu. You should only call this if you're NOT using this in a UMenuStack, because the stack will\ncall it for you when you add this menu to it\n\n@param bIsRegainedFocus Set this to true if the reason this menu is opening is that it regained focus in a stack" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsRegainedFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRegainedFocus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuBase_Open_Statics::NewProp_bIsRegainedFocus_SetBit(void* Obj)
{
	((MenuBase_eventOpen_Parms*)Obj)->bIsRegainedFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuBase_Open_Statics::NewProp_bIsRegainedFocus = { "bIsRegainedFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuBase_eventOpen_Parms), &Z_Construct_UFunction_UMenuBase_Open_Statics::NewProp_bIsRegainedFocus_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuBase_Open_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_Open_Statics::NewProp_bIsRegainedFocus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_Open_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuBase_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase, nullptr, "Open", nullptr, nullptr, Z_Construct_UFunction_UMenuBase_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_Open_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuBase_Open_Statics::MenuBase_eventOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_Open_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuBase_Open_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuBase_Open_Statics::MenuBase_eventOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuBase_Open()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuBase_Open_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuBase::execOpen)
{
	P_GET_UBOOL(Z_Param_bIsRegainedFocus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Open(Z_Param_bIsRegainedFocus);
	P_NATIVE_END;
}
// End Class UMenuBase Function Open

// Begin Class UMenuBase Function RequestClose
struct Z_Construct_UFunction_UMenuBase_RequestClose_Statics
{
	struct MenuBase_eventRequestClose_Parms
	{
		bool bWasCancel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Request this menu to close. The menu can veto this request.\n     * @param bWasCancel Set this to true if the reason for closure was a cancellation action\n     * @return True if the request was approved\n     */" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Request this menu to close. The menu can veto this request.\n@param bWasCancel Set this to true if the reason for closure was a cancellation action\n@return True if the request was approved" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bWasCancel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuBase_RequestClose_Statics::NewProp_bWasCancel_SetBit(void* Obj)
{
	((MenuBase_eventRequestClose_Parms*)Obj)->bWasCancel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuBase_RequestClose_Statics::NewProp_bWasCancel = { "bWasCancel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuBase_eventRequestClose_Parms), &Z_Construct_UFunction_UMenuBase_RequestClose_Statics::NewProp_bWasCancel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMenuBase_RequestClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MenuBase_eventRequestClose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuBase_RequestClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuBase_eventRequestClose_Parms), &Z_Construct_UFunction_UMenuBase_RequestClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuBase_RequestClose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_RequestClose_Statics::NewProp_bWasCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_RequestClose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_RequestClose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuBase_RequestClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase, nullptr, "RequestClose", nullptr, nullptr, Z_Construct_UFunction_UMenuBase_RequestClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_RequestClose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuBase_RequestClose_Statics::MenuBase_eventRequestClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_RequestClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuBase_RequestClose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMenuBase_RequestClose_Statics::MenuBase_eventRequestClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuBase_RequestClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuBase_RequestClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuBase::execRequestClose)
{
	P_GET_UBOOL(Z_Param_bWasCancel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestClose(Z_Param_bWasCancel);
	P_NATIVE_END;
}
// End Class UMenuBase Function RequestClose

// Begin Class UMenuBase Function ValidateClose
struct MenuBase_eventValidateClose_Parms
{
	bool bWasCancel;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MenuBase_eventValidateClose_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMenuBase_ValidateClose = FName(TEXT("ValidateClose"));
bool UMenuBase::ValidateClose(bool bWasCancel)
{
	UFunction* Func = FindFunctionChecked(NAME_UMenuBase_ValidateClose);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MenuBase_eventValidateClose_Parms Parms;
		Parms.bWasCancel=bWasCancel ? true : false;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ValidateClose_Implementation(bWasCancel);
	}
}
struct Z_Construct_UFunction_UMenuBase_ValidateClose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasCancel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::NewProp_bWasCancel_SetBit(void* Obj)
{
	((MenuBase_eventValidateClose_Parms*)Obj)->bWasCancel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::NewProp_bWasCancel = { "bWasCancel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuBase_eventValidateClose_Parms), &Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::NewProp_bWasCancel_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MenuBase_eventValidateClose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MenuBase_eventValidateClose_Parms), &Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::NewProp_bWasCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuBase, nullptr, "ValidateClose", nullptr, nullptr, Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::PropPointers), sizeof(MenuBase_eventValidateClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::Function_MetaDataParams) };
static_assert(sizeof(MenuBase_eventValidateClose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuBase_ValidateClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuBase_ValidateClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuBase::execValidateClose)
{
	P_GET_UBOOL(Z_Param_bWasCancel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateClose_Implementation(Z_Param_bWasCancel);
	P_NATIVE_END;
}
// End Class UMenuBase Function ValidateClose

// Begin Class UMenuBase
void UMenuBase::StaticRegisterNativesUMenuBase()
{
	UClass* Class = UMenuBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Close", &UMenuBase::execClose },
		{ "IsTopOfStack", &UMenuBase::execIsTopOfStack },
		{ "OnAddedToStack", &UMenuBase::execOnAddedToStack },
		{ "OnRegainedFocusInStack", &UMenuBase::execOnRegainedFocusInStack },
		{ "OnRemovedFromStack", &UMenuBase::execOnRemovedFromStack },
		{ "OnSupercededInStack", &UMenuBase::execOnSupercededInStack },
		{ "Open", &UMenuBase::execOpen },
		{ "RequestClose", &UMenuBase::execRequestClose },
		{ "ValidateClose", &UMenuBase::execValidateClose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuBase);
UClass* Z_Construct_UClass_UMenuBase_NoRegister()
{
	return UMenuBase::StaticClass();
}
struct Z_Construct_UClass_UMenuBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// This class is a type of focusable panel designed for menus or other dialogs.\n/// It can be added to a UMenuStack to put it in context of a larger navigable group,\n/// and if so represents one level in the chain of an assumed modal stack. Use UMenuStack::PushMenuByClass/Object\n/// to add an entry of this type to the stack\n/// If you use this class standalone instead without a stack, then you must call Open() on this instance to\n/// make it add itself to the viewport.\n" },
#endif
		{ "IncludePath", "StevesUI/MenuBase.h" },
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class is a type of focusable panel designed for menus or other dialogs.\nIt can be added to a UMenuStack to put it in context of a larger navigable group,\nand if so represents one level in the chain of an assumed modal stack. Use UMenuStack::PushMenuByClass/Object\nto add an entry of this type to the stack\nIf you use this class standalone instead without a stack, then you must call Open() on this instance to\nmake it add itself to the viewport." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Raised just as the menu is closing\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raised just as the menu is closing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AfterClosed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Raised just after the menu has closed\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raised just after the menu has closed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentStack_MetaData[] = {
		{ "Category", "MenuBase" },
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequestFocus_MetaData[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Whether this menu should request focus when it is displayed\n/// The widget which is focussed will either be the InitialFocusWidget on newly displayed, or\n/// the previously selected widget if regaining focus\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this menu should request focus when it is displayed\nThe widget which is focussed will either be the InitialFocusWidget on newly displayed, or\nthe previously selected widget if regaining focus" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmbedInParentContainer_MetaData[] = {
		{ "Category", "Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Set this property to true if you want this menu to embed itself in the parent UMenuStack's MenuContainer\n/// If false, this Menu will be added to the viewport independently and can float over other menus in the stack\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this property to true if you want this menu to embed itself in the parent UMenuStack's MenuContainer\nIf false, this Menu will be added to the viewport independently and can float over other menus in the stack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideWhenSuperceded_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Whether to hide this menu when it's superceded by another in the stack.\n/// If you set this to \"false\" when bEmbedInParentContainer=true, then the superceding menu should have its\n/// own bEmbedInParentContainer set to false in order to overlay on top of this one.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to hide this menu when it's superceded by another in the stack.\nIf you set this to \"false\" when bEmbedInParentContainer=true, then the superceding menu should have its\nown bEmbedInParentContainer set to false in order to overlay on top of this one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockClicks_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Whether this panel should block clicks itself (useful for preventing click-through).\n/// Set to false if you want to be able to click through the panel to other elements.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this panel should block clicks itself (useful for preventing click-through).\nSet to false if you want to be able to click through the panel to other elements." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputModeSetting_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How this menu should set the input mode when it becomes the top of the stack\n/// This can be useful if your menus have variable input settings between levels in the stack\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this menu should set the input mode when it becomes the top of the stack\nThis can be useful if your menus have variable input settings between levels in the stack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePointerVisibility_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How this menu should set the mouse pointer visibility when it becomes the top of the stack\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this menu should set the mouse pointer visibility when it becomes the top of the stack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamePauseSetting_MetaData[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// How this menu should set the game pause state when it becomes top of the stack\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/MenuBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How this menu should set the game pause state when it becomes top of the stack" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AfterClosed;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentStack;
	static void NewProp_bRequestFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestFocus;
	static void NewProp_bEmbedInParentContainer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmbedInParentContainer;
	static void NewProp_bHideWhenSuperceded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideWhenSuperceded;
	static void NewProp_bBlockClicks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockClicks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputModeSetting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputModeSetting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MousePointerVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MousePointerVisibility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GamePauseSetting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GamePauseSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuBase_Close, "Close" }, // 4140966014
		{ &Z_Construct_UFunction_UMenuBase_IsTopOfStack, "IsTopOfStack" }, // 3558574170
		{ &Z_Construct_UFunction_UMenuBase_OnAddedToStack, "OnAddedToStack" }, // 3353376849
		{ &Z_Construct_UFunction_UMenuBase_OnRegainedFocusInStack, "OnRegainedFocusInStack" }, // 2420256316
		{ &Z_Construct_UFunction_UMenuBase_OnRemovedFromStack, "OnRemovedFromStack" }, // 3029715242
		{ &Z_Construct_UFunction_UMenuBase_OnSupercededInStack, "OnSupercededInStack" }, // 95898821
		{ &Z_Construct_UFunction_UMenuBase_Open, "Open" }, // 3781220375
		{ &Z_Construct_UFunction_UMenuBase_RequestClose, "RequestClose" }, // 1959322164
		{ &Z_Construct_UFunction_UMenuBase_ValidateClose, "ValidateClose" }, // 2788806520
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuBase, OnClosed), Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClosed_MetaData), NewProp_OnClosed_MetaData) }; // 1946813866
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_AfterClosed = { "AfterClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuBase, AfterClosed), Z_Construct_UDelegateFunction_StevesUEHelpers_OnMenuClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AfterClosed_MetaData), NewProp_AfterClosed_MetaData) }; // 1946813866
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_ParentStack = { "ParentStack", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuBase, ParentStack), Z_Construct_UClass_UMenuStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentStack_MetaData), NewProp_ParentStack_MetaData) };
void Z_Construct_UClass_UMenuBase_Statics::NewProp_bRequestFocus_SetBit(void* Obj)
{
	((UMenuBase*)Obj)->bRequestFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_bRequestFocus = { "bRequestFocus", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuBase), &Z_Construct_UClass_UMenuBase_Statics::NewProp_bRequestFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequestFocus_MetaData), NewProp_bRequestFocus_MetaData) };
void Z_Construct_UClass_UMenuBase_Statics::NewProp_bEmbedInParentContainer_SetBit(void* Obj)
{
	((UMenuBase*)Obj)->bEmbedInParentContainer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_bEmbedInParentContainer = { "bEmbedInParentContainer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuBase), &Z_Construct_UClass_UMenuBase_Statics::NewProp_bEmbedInParentContainer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmbedInParentContainer_MetaData), NewProp_bEmbedInParentContainer_MetaData) };
void Z_Construct_UClass_UMenuBase_Statics::NewProp_bHideWhenSuperceded_SetBit(void* Obj)
{
	((UMenuBase*)Obj)->bHideWhenSuperceded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_bHideWhenSuperceded = { "bHideWhenSuperceded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuBase), &Z_Construct_UClass_UMenuBase_Statics::NewProp_bHideWhenSuperceded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideWhenSuperceded_MetaData), NewProp_bHideWhenSuperceded_MetaData) };
void Z_Construct_UClass_UMenuBase_Statics::NewProp_bBlockClicks_SetBit(void* Obj)
{
	((UMenuBase*)Obj)->bBlockClicks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_bBlockClicks = { "bBlockClicks", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMenuBase), &Z_Construct_UClass_UMenuBase_Statics::NewProp_bBlockClicks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockClicks_MetaData), NewProp_bBlockClicks_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_InputModeSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_InputModeSetting = { "InputModeSetting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuBase, InputModeSetting), Z_Construct_UEnum_StevesUEHelpers_EInputModeChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputModeSetting_MetaData), NewProp_InputModeSetting_MetaData) }; // 986802536
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_MousePointerVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_MousePointerVisibility = { "MousePointerVisibility", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuBase, MousePointerVisibility), Z_Construct_UEnum_StevesUEHelpers_EMousePointerVisibilityChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePointerVisibility_MetaData), NewProp_MousePointerVisibility_MetaData) }; // 3477069294
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_GamePauseSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMenuBase_Statics::NewProp_GamePauseSetting = { "GamePauseSetting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuBase, GamePauseSetting), Z_Construct_UEnum_StevesUEHelpers_EGamePauseChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamePauseSetting_MetaData), NewProp_GamePauseSetting_MetaData) }; // 4159482778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_OnClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_AfterClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_ParentStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_bRequestFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_bEmbedInParentContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_bHideWhenSuperceded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_bBlockClicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_InputModeSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_InputModeSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_MousePointerVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_MousePointerVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_GamePauseSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuBase_Statics::NewProp_GamePauseSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFocusablePanel,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuBase_Statics::ClassParams = {
	&UMenuBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenuBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuBase()
{
	if (!Z_Registration_Info_UClass_UMenuBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuBase.OuterSingleton, Z_Construct_UClass_UMenuBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuBase.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UMenuBase>()
{
	return UMenuBase::StaticClass();
}
UMenuBase::UMenuBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuBase);
UMenuBase::~UMenuBase() {}
// End Class UMenuBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuBase, UMenuBase::StaticClass, TEXT("UMenuBase"), &Z_Registration_Info_UClass_UMenuBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuBase), 3286562282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_2578561051(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_MenuBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
