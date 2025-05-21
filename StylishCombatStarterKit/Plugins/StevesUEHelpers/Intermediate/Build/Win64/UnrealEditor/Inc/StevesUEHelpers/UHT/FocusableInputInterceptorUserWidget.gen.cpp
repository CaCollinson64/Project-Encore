// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/FocusableInputInterceptorUserWidget.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusableInputInterceptorUserWidget() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableInputInterceptorUserWidget();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableInputInterceptorUserWidget_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UFocusableUserWidget();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UFocusableInputInterceptorUserWidget Function HandleKeyDownEvent
struct Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics
{
	struct FocusableInputInterceptorUserWidget_eventHandleKeyDownEvent_Parms
	{
		FKeyEvent InKeyEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesUI/FocusableInputInterceptorUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FocusableInputInterceptorUserWidget_eventHandleKeyDownEvent_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKeyEvent_MetaData), NewProp_InKeyEvent_MetaData) }; // 3930076448
void Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FocusableInputInterceptorUserWidget_eventHandleKeyDownEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FocusableInputInterceptorUserWidget_eventHandleKeyDownEvent_Parms), &Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::NewProp_InKeyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFocusableInputInterceptorUserWidget, nullptr, "HandleKeyDownEvent", nullptr, nullptr, Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::FocusableInputInterceptorUserWidget_eventHandleKeyDownEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::FocusableInputInterceptorUserWidget_eventHandleKeyDownEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFocusableInputInterceptorUserWidget::execHandleKeyDownEvent)
{
	P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_InKeyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HandleKeyDownEvent(Z_Param_Out_InKeyEvent);
	P_NATIVE_END;
}
// End Class UFocusableInputInterceptorUserWidget Function HandleKeyDownEvent

// Begin Class UFocusableInputInterceptorUserWidget
void UFocusableInputInterceptorUserWidget::StaticRegisterNativesUFocusableInputInterceptorUserWidget()
{
	UClass* Class = UFocusableInputInterceptorUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleKeyDownEvent", &UFocusableInputInterceptorUserWidget::execHandleKeyDownEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFocusableInputInterceptorUserWidget);
UClass* Z_Construct_UClass_UFocusableInputInterceptorUserWidget_NoRegister()
{
	return UFocusableInputInterceptorUserWidget::StaticClass();
}
struct Z_Construct_UClass_UFocusableInputInterceptorUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StevesUI/FocusableInputInterceptorUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StevesUI/FocusableInputInterceptorUserWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFocusableInputInterceptorUserWidget_HandleKeyDownEvent, "HandleKeyDownEvent" }, // 293067180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFocusableInputInterceptorUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFocusableInputInterceptorUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFocusableUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableInputInterceptorUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFocusableInputInterceptorUserWidget_Statics::ClassParams = {
	&UFocusableInputInterceptorUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFocusableInputInterceptorUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UFocusableInputInterceptorUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFocusableInputInterceptorUserWidget()
{
	if (!Z_Registration_Info_UClass_UFocusableInputInterceptorUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFocusableInputInterceptorUserWidget.OuterSingleton, Z_Construct_UClass_UFocusableInputInterceptorUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFocusableInputInterceptorUserWidget.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UFocusableInputInterceptorUserWidget>()
{
	return UFocusableInputInterceptorUserWidget::StaticClass();
}
UFocusableInputInterceptorUserWidget::UFocusableInputInterceptorUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFocusableInputInterceptorUserWidget);
UFocusableInputInterceptorUserWidget::~UFocusableInputInterceptorUserWidget() {}
// End Class UFocusableInputInterceptorUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableInputInterceptorUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFocusableInputInterceptorUserWidget, UFocusableInputInterceptorUserWidget::StaticClass, TEXT("UFocusableInputInterceptorUserWidget"), &Z_Registration_Info_UClass_UFocusableInputInterceptorUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFocusableInputInterceptorUserWidget), 4143348427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableInputInterceptorUserWidget_h_1293100893(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableInputInterceptorUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_FocusableInputInterceptorUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
