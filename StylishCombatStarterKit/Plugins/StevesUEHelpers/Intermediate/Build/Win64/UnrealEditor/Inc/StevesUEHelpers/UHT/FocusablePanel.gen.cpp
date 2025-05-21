// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/FocusablePanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusablePanel() {}

// Begin Cross Module References
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusablePanel();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusablePanel_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableUserWidget();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UFocusablePanel Function RestorePreviousFocus
struct Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics
{
	struct FocusablePanel_eventRestorePreviousFocus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Try to restore focus to the previously focussed child\n     * @return Whether the focus was successfully set\n     */" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusablePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Try to restore focus to the previously focussed child\n@return Whether the focus was successfully set" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FocusablePanel_eventRestorePreviousFocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FocusablePanel_eventRestorePreviousFocus_Parms), &Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusablePanel, nullptr, "RestorePreviousFocus", nullptr, nullptr, Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::FocusablePanel_eventRestorePreviousFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::FocusablePanel_eventRestorePreviousFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusablePanel::execRestorePreviousFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RestorePreviousFocus();
	P_NATIVE_END;
}
// End Class UFocusablePanel Function RestorePreviousFocus

// Begin Class UFocusablePanel Function SavePreviousFocus
struct Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics
{
	struct FocusablePanel_eventSavePreviousFocus_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Try to save the currently focussed child as something that can be restored later.\n     * @return Whether focus was saved\n     */" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusablePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Try to save the currently focussed child as something that can be restored later.\n@return Whether focus was saved" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FocusablePanel_eventSavePreviousFocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FocusablePanel_eventSavePreviousFocus_Parms), &Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusablePanel, nullptr, "SavePreviousFocus", nullptr, nullptr, Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::FocusablePanel_eventSavePreviousFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::FocusablePanel_eventSavePreviousFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusablePanel::execSavePreviousFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SavePreviousFocus();
	P_NATIVE_END;
}
// End Class UFocusablePanel Function SavePreviousFocus

// Begin Class UFocusablePanel Function SetFocusToInitialWidget
struct Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics
{
	struct FocusablePanel_eventSetFocusToInitialWidget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Set the current focus to the initial focus widget\n     * @return Whether the focus was successfully set\n     */" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusablePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set the current focus to the initial focus widget\n@return Whether the focus was successfully set" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FocusablePanel_eventSetFocusToInitialWidget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FocusablePanel_eventSetFocusToInitialWidget_Parms), &Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusablePanel, nullptr, "SetFocusToInitialWidget", nullptr, nullptr, Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::FocusablePanel_eventSetFocusToInitialWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::FocusablePanel_eventSetFocusToInitialWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusablePanel::execSetFocusToInitialWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetFocusToInitialWidget();
	P_NATIVE_END;
}
// End Class UFocusablePanel Function SetFocusToInitialWidget

// Begin Class UFocusablePanel
void UFocusablePanel::StaticRegisterNativesUFocusablePanel()
{
	UClass* Class = UFocusablePanel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RestorePreviousFocus", &UFocusablePanel::execRestorePreviousFocus },
		{ "SavePreviousFocus", &UFocusablePanel::execSavePreviousFocus },
		{ "SetFocusToInitialWidget", &UFocusablePanel::execSetFocusToInitialWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFocusablePanel);
UClass* Z_Construct_UClass_UFocusablePanel_NoRegister()
{
	return UFocusablePanel::StaticClass();
}
struct Z_Construct_UClass_UFocusablePanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Base class for a UI Panel which has the concept of having focus, delegated to one of its children.\n/// When told, it can initialise focus to a default widget. It can also remember which of its children\n/// are currently focussed and restore that later.\n/// Calling SetFocusProperly does the default behaviour of preferring previous but falling back on the default.\n" },
#endif
		{ "IncludePath", "StevesUI/FocusablePanel.h" },
		{ "ModuleRelativePath", "Public/StevesUI/FocusablePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for a UI Panel which has the concept of having focus, delegated to one of its children.\nWhen told, it can initialise focus to a default widget. It can also remember which of its children\nare currently focussed and restore that later.\nCalling SetFocusProperly does the default behaviour of preferring previous but falling back on the default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialFocusWidgetName_MetaData[] = {
		{ "Category", "FocusablePanel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The name of the widget which will be initially focussed by default\n/// This is a name because we can't link directly at edit time\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusablePanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the widget which will be initially focussed by default\nThis is a name because we can't link directly at edit time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InitialFocusWidgetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFocusablePanel_RestorePreviousFocus, "RestorePreviousFocus" }, // 900098180
		{ &Z_Construct_UFunction_UFocusablePanel_SavePreviousFocus, "SavePreviousFocus" }, // 2848269171
		{ &Z_Construct_UFunction_UFocusablePanel_SetFocusToInitialWidget, "SetFocusToInitialWidget" }, // 2233466090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFocusablePanel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFocusablePanel_Statics::NewProp_InitialFocusWidgetName = { "InitialFocusWidgetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFocusablePanel, InitialFocusWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialFocusWidgetName_MetaData), NewProp_InitialFocusWidgetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFocusablePanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFocusablePanel_Statics::NewProp_InitialFocusWidgetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusablePanel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFocusablePanel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFocusableUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusablePanel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFocusablePanel_Statics::ClassParams = {
	&UFocusablePanel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFocusablePanel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFocusablePanel_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusablePanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UFocusablePanel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFocusablePanel()
{
	if (!Z_Registration_Info_UClass_UFocusablePanel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFocusablePanel.OuterSingleton, Z_Construct_UClass_UFocusablePanel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFocusablePanel.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UFocusablePanel>()
{
	return UFocusablePanel::StaticClass();
}
UFocusablePanel::UFocusablePanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFocusablePanel);
UFocusablePanel::~UFocusablePanel() {}
// End Class UFocusablePanel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusablePanel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFocusablePanel, UFocusablePanel::StaticClass, TEXT("UFocusablePanel"), &Z_Registration_Info_UClass_UFocusablePanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFocusablePanel), 752178253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusablePanel_h_3034952716(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusablePanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusablePanel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
