// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/FocusableButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusableButton() {}

// Begin Cross Module References
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableButton();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableButton_NoRegister();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusLostEvent__DelegateSignature();
STEVESUEHELPERS_API UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusReceivedEvent__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Delegate FOnButtonFocusReceivedEvent
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusReceivedEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusReceivedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnButtonFocusReceivedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusReceivedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusReceivedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusReceivedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusReceivedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonFocusReceivedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonFocusReceivedEvent)
{
	OnButtonFocusReceivedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnButtonFocusReceivedEvent

// Begin Delegate FOnButtonFocusLostEvent
struct Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusLostEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusLostEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StevesUEHelpers, nullptr, "OnButtonFocusLostEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusLostEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusLostEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusLostEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusLostEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnButtonFocusLostEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonFocusLostEvent)
{
	OnButtonFocusLostEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnButtonFocusLostEvent

// Begin Class UFocusableButton Function RefreshFocussedStyle
static const FName NAME_UFocusableButton_RefreshFocussedStyle = FName(TEXT("RefreshFocussedStyle"));
void UFocusableButton::RefreshFocussedStyle()
{
	UFunction* Func = FindFunctionChecked(NAME_UFocusableButton_RefreshFocussedStyle);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RefreshFocussedStyle_Implementation();
	}
}
struct Z_Construct_UFunction_UFocusableButton_RefreshFocussedStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Update the focussed style based on changes made to the default widget style.\n/// Call this if you make runtime changes to the base style of this button.\n/// Needed because we can't override SetStyle\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the focussed style based on changes made to the default widget style.\nCall this if you make runtime changes to the base style of this button.\nNeeded because we can't override SetStyle" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableButton_RefreshFocussedStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableButton, nullptr, "RefreshFocussedStyle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableButton_RefreshFocussedStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusableButton_RefreshFocussedStyle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFocusableButton_RefreshFocussedStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusableButton_RefreshFocussedStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusableButton::execRefreshFocussedStyle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshFocussedStyle_Implementation();
	P_NATIVE_END;
}
// End Class UFocusableButton Function RefreshFocussedStyle

// Begin Class UFocusableButton Function SimulatePress
struct Z_Construct_UFunction_UFocusableButton_SimulatePress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simulate a button press\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simulate a button press" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableButton_SimulatePress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableButton, nullptr, "SimulatePress", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableButton_SimulatePress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusableButton_SimulatePress_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFocusableButton_SimulatePress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusableButton_SimulatePress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusableButton::execSimulatePress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SimulatePress();
	P_NATIVE_END;
}
// End Class UFocusableButton Function SimulatePress

// Begin Class UFocusableButton Function SimulateRelease
struct Z_Construct_UFunction_UFocusableButton_SimulateRelease_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simulate a button release\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simulate a button release" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableButton_SimulateRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableButton, nullptr, "SimulateRelease", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableButton_SimulateRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusableButton_SimulateRelease_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFocusableButton_SimulateRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusableButton_SimulateRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusableButton::execSimulateRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SimulateRelease();
	P_NATIVE_END;
}
// End Class UFocusableButton Function SimulateRelease

// Begin Class UFocusableButton
void UFocusableButton::StaticRegisterNativesUFocusableButton()
{
	UClass* Class = UFocusableButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RefreshFocussedStyle", &UFocusableButton::execRefreshFocussedStyle },
		{ "SimulatePress", &UFocusableButton::execSimulatePress },
		{ "SimulateRelease", &UFocusableButton::execSimulateRelease },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFocusableButton);
UClass* Z_Construct_UClass_UFocusableButton_NoRegister()
{
	return UFocusableButton::StaticClass();
}
struct Z_Construct_UClass_UFocusableButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This is a simple subclass of UButton to provide some missing features\n*\n*  * Focus events\n*  * Focus style based on hover style\n*  * Assign focus to self on hover to prevent double-highlighting\n*/" },
#endif
		{ "IncludePath", "StevesUI/FocusableButton.h" },
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a simple subclass of UButton to provide some missing features\n\n * Focus events\n * Focus style based on hover style\n * Assign focus to self on hover to prevent double-highlighting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHoverStyleWhenFocussed_MetaData[] = {
		{ "Category", "FocusableButton" },
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFocusReceived_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFocusLost_MetaData[] = {
		{ "Category", "Button|Event" },
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTakeFocusOnHover_MetaData[] = {
		{ "Category", "FocusableButton" },
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoseFocusOnUnhover_MetaData[] = {
		{ "Category", "FocusableButton" },
		{ "ModuleRelativePath", "Public/StevesUI/FocusableButton.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseHoverStyleWhenFocussed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHoverStyleWhenFocussed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusLost;
	static void NewProp_bTakeFocusOnHover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTakeFocusOnHover;
	static void NewProp_bLoseFocusOnUnhover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoseFocusOnUnhover;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFocusableButton_RefreshFocussedStyle, "RefreshFocussedStyle" }, // 1285967534
		{ &Z_Construct_UFunction_UFocusableButton_SimulatePress, "SimulatePress" }, // 3834751040
		{ &Z_Construct_UFunction_UFocusableButton_SimulateRelease, "SimulateRelease" }, // 663925610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFocusableButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UFocusableButton_Statics::NewProp_bUseHoverStyleWhenFocussed_SetBit(void* Obj)
{
	((UFocusableButton*)Obj)->bUseHoverStyleWhenFocussed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFocusableButton_Statics::NewProp_bUseHoverStyleWhenFocussed = { "bUseHoverStyleWhenFocussed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFocusableButton), &Z_Construct_UClass_UFocusableButton_Statics::NewProp_bUseHoverStyleWhenFocussed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHoverStyleWhenFocussed_MetaData), NewProp_bUseHoverStyleWhenFocussed_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFocusableButton_Statics::NewProp_OnFocusReceived = { "OnFocusReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFocusableButton, OnFocusReceived), Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusReceivedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFocusReceived_MetaData), NewProp_OnFocusReceived_MetaData) }; // 43431797
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFocusableButton_Statics::NewProp_OnFocusLost = { "OnFocusLost", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFocusableButton, OnFocusLost), Z_Construct_UDelegateFunction_StevesUEHelpers_OnButtonFocusLostEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFocusLost_MetaData), NewProp_OnFocusLost_MetaData) }; // 1147610135
void Z_Construct_UClass_UFocusableButton_Statics::NewProp_bTakeFocusOnHover_SetBit(void* Obj)
{
	((UFocusableButton*)Obj)->bTakeFocusOnHover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFocusableButton_Statics::NewProp_bTakeFocusOnHover = { "bTakeFocusOnHover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFocusableButton), &Z_Construct_UClass_UFocusableButton_Statics::NewProp_bTakeFocusOnHover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTakeFocusOnHover_MetaData), NewProp_bTakeFocusOnHover_MetaData) };
void Z_Construct_UClass_UFocusableButton_Statics::NewProp_bLoseFocusOnUnhover_SetBit(void* Obj)
{
	((UFocusableButton*)Obj)->bLoseFocusOnUnhover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFocusableButton_Statics::NewProp_bLoseFocusOnUnhover = { "bLoseFocusOnUnhover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFocusableButton), &Z_Construct_UClass_UFocusableButton_Statics::NewProp_bLoseFocusOnUnhover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoseFocusOnUnhover_MetaData), NewProp_bLoseFocusOnUnhover_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFocusableButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFocusableButton_Statics::NewProp_bUseHoverStyleWhenFocussed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFocusableButton_Statics::NewProp_OnFocusReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFocusableButton_Statics::NewProp_OnFocusLost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFocusableButton_Statics::NewProp_bTakeFocusOnHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFocusableButton_Statics::NewProp_bLoseFocusOnUnhover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFocusableButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFocusableButton_Statics::ClassParams = {
	&UFocusableButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFocusableButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UFocusableButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFocusableButton()
{
	if (!Z_Registration_Info_UClass_UFocusableButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFocusableButton.OuterSingleton, Z_Construct_UClass_UFocusableButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFocusableButton.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UFocusableButton>()
{
	return UFocusableButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFocusableButton);
UFocusableButton::~UFocusableButton() {}
// End Class UFocusableButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFocusableButton, UFocusableButton::StaticClass, TEXT("UFocusableButton"), &Z_Registration_Info_UClass_UFocusableButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFocusableButton), 1796697017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_2356874023(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
