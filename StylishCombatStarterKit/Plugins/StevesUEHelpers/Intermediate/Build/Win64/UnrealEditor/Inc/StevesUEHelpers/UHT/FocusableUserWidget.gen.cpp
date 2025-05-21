// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/FocusableUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusableUserWidget() {}

// Begin Cross Module References
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableUserWidget();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UFocusableUserWidget Function IsRequestingFocus
struct FocusableUserWidget_eventIsRequestingFocus_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FocusableUserWidget_eventIsRequestingFocus_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UFocusableUserWidget_IsRequestingFocus = FName(TEXT("IsRequestingFocus"));
bool UFocusableUserWidget::IsRequestingFocus() const
{
	UFunction* Func = FindFunctionChecked(NAME_UFocusableUserWidget_IsRequestingFocus);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FocusableUserWidget_eventIsRequestingFocus_Parms Parms;
		const_cast<UFocusableUserWidget*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFocusableUserWidget*>(this)->IsRequestingFocus_Implementation();
	}
}
struct Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Whether this widget is *currently* requesting focus. Default is to use IsAutomaticFocusEnabled but subclasses\n/// may override this to be volatile\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusableUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this widget is *currently* requesting focus. Default is to use IsAutomaticFocusEnabled but subclasses\nmay override this to be volatile" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FocusableUserWidget_eventIsRequestingFocus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FocusableUserWidget_eventIsRequestingFocus_Parms), &Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableUserWidget, nullptr, "IsRequestingFocus", nullptr, nullptr, Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::PropPointers), sizeof(FocusableUserWidget_eventIsRequestingFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(FocusableUserWidget_eventIsRequestingFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusableUserWidget::execIsRequestingFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRequestingFocus_Implementation();
	P_NATIVE_END;
}
// End Class UFocusableUserWidget Function IsRequestingFocus

// Begin Class UFocusableUserWidget Function SetFocusProperly
static const FName NAME_UFocusableUserWidget_SetFocusProperly = FName(TEXT("SetFocusProperly"));
void UFocusableUserWidget::SetFocusProperly()
{
	UFunction* Func = FindFunctionChecked(NAME_UFocusableUserWidget_SetFocusProperly);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		SetFocusProperly_Implementation();
	}
}
struct Z_Construct_UFunction_UFocusableUserWidget_SetFocusProperly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// UWidget::SetFocus is not virtual FFS. This does the same as SetFocus by default but can be overridden,\n/// e.g. to delegate focus to specific children\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusableUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UWidget::SetFocus is not virtual FFS. This does the same as SetFocus by default but can be overridden,\ne.g. to delegate focus to specific children" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableUserWidget_SetFocusProperly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableUserWidget, nullptr, "SetFocusProperly", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableUserWidget_SetFocusProperly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusableUserWidget_SetFocusProperly_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFocusableUserWidget_SetFocusProperly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusableUserWidget_SetFocusProperly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusableUserWidget::execSetFocusProperly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFocusProperly_Implementation();
	P_NATIVE_END;
}
// End Class UFocusableUserWidget Function SetFocusProperly

// Begin Class UFocusableUserWidget Function TakeFocusIfDesired
struct FocusableUserWidget_eventTakeFocusIfDesired_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FocusableUserWidget_eventTakeFocusIfDesired_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UFocusableUserWidget_TakeFocusIfDesired = FName(TEXT("TakeFocusIfDesired"));
bool UFocusableUserWidget::TakeFocusIfDesired()
{
	UFunction* Func = FindFunctionChecked(NAME_UFocusableUserWidget_TakeFocusIfDesired);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FocusableUserWidget_eventTakeFocusIfDesired_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return TakeFocusIfDesired_Implementation();
	}
}
struct Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Tell this widget to take the focus if it desires to\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusableUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tell this widget to take the focus if it desires to" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FocusableUserWidget_eventTakeFocusIfDesired_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FocusableUserWidget_eventTakeFocusIfDesired_Parms), &Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableUserWidget, nullptr, "TakeFocusIfDesired", nullptr, nullptr, Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::PropPointers), sizeof(FocusableUserWidget_eventTakeFocusIfDesired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::Function_MetaDataParams) };
static_assert(sizeof(FocusableUserWidget_eventTakeFocusIfDesired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusableUserWidget::execTakeFocusIfDesired)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TakeFocusIfDesired_Implementation();
	P_NATIVE_END;
}
// End Class UFocusableUserWidget Function TakeFocusIfDesired

// Begin Class UFocusableUserWidget
void UFocusableUserWidget::StaticRegisterNativesUFocusableUserWidget()
{
	UClass* Class = UFocusableUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsRequestingFocus", &UFocusableUserWidget::execIsRequestingFocus },
		{ "SetFocusProperly", &UFocusableUserWidget::execSetFocusProperly },
		{ "TakeFocusIfDesired", &UFocusableUserWidget::execTakeFocusIfDesired },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFocusableUserWidget);
UClass* Z_Construct_UClass_UFocusableUserWidget_NoRegister()
{
	return UFocusableUserWidget::StaticClass();
}
struct Z_Construct_UClass_UFocusableUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hacky intermediate type for UUserWidget so that we can have focusable child widgets via SetFocusProperly\n" },
#endif
		{ "IncludePath", "StevesUI/FocusableUserWidget.h" },
		{ "ModuleRelativePath", "Public/StevesUI/FocusableUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hacky intermediate type for UUserWidget so that we can have focusable child widgets via SetFocusProperly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticFocus_MetaData[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If enabled, this widget will opt-in to the list of widgets which can be given focus\n/// automatically when another UFocusableUserWidget with focus is removed from the viewport.\n/// Useful for making sure something has the focus at all times without having to have cross-dependencies\n/// between UI parts, or events everywhere\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusableUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, this widget will opt-in to the list of widgets which can be given focus\nautomatically when another UFocusableUserWidget with focus is removed from the viewport.\nUseful for making sure something has the focus at all times without having to have cross-dependencies\nbetween UI parts, or events everywhere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticFocusPriority_MetaData[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// If bEnableAutomaticFocus is enabled, then this is the focus priority associated with this widget.\n/// In the event that there is more than one auto focus widget available, the highest priority widget will win. \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/FocusableUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If bEnableAutomaticFocus is enabled, then this is the focus priority associated with this widget.\nIn the event that there is more than one auto focus widget available, the highest priority widget will win." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAutomaticFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticFocus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutomaticFocusPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFocusableUserWidget_IsRequestingFocus, "IsRequestingFocus" }, // 1396720959
		{ &Z_Construct_UFunction_UFocusableUserWidget_SetFocusProperly, "SetFocusProperly" }, // 3321442116
		{ &Z_Construct_UFunction_UFocusableUserWidget_TakeFocusIfDesired, "TakeFocusIfDesired" }, // 1566939319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFocusableUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UFocusableUserWidget_Statics::NewProp_bEnableAutomaticFocus_SetBit(void* Obj)
{
	((UFocusableUserWidget*)Obj)->bEnableAutomaticFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFocusableUserWidget_Statics::NewProp_bEnableAutomaticFocus = { "bEnableAutomaticFocus", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFocusableUserWidget), &Z_Construct_UClass_UFocusableUserWidget_Statics::NewProp_bEnableAutomaticFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutomaticFocus_MetaData), NewProp_bEnableAutomaticFocus_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFocusableUserWidget_Statics::NewProp_AutomaticFocusPriority = { "AutomaticFocusPriority", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFocusableUserWidget, AutomaticFocusPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomaticFocusPriority_MetaData), NewProp_AutomaticFocusPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFocusableUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFocusableUserWidget_Statics::NewProp_bEnableAutomaticFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFocusableUserWidget_Statics::NewProp_AutomaticFocusPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFocusableUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFocusableUserWidget_Statics::ClassParams = {
	&UFocusableUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFocusableUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UFocusableUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFocusableUserWidget()
{
	if (!Z_Registration_Info_UClass_UFocusableUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFocusableUserWidget.OuterSingleton, Z_Construct_UClass_UFocusableUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFocusableUserWidget.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UFocusableUserWidget>()
{
	return UFocusableUserWidget::StaticClass();
}
UFocusableUserWidget::UFocusableUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFocusableUserWidget);
UFocusableUserWidget::~UFocusableUserWidget() {}
// End Class UFocusableUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFocusableUserWidget, UFocusableUserWidget::StaticClass, TEXT("UFocusableUserWidget"), &Z_Registration_Info_UClass_UFocusableUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFocusableUserWidget), 1419982527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_2730519358(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
