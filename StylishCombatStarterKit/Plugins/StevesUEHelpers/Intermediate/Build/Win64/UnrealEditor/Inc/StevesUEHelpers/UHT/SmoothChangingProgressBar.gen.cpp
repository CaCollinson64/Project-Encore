// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/SmoothChangingProgressBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmoothChangingProgressBar() {}

// Begin Cross Module References
STEVESUEHELPERS_API UClass* Z_Construct_UClass_USmoothChangingProgressBar();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_USmoothChangingProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class USmoothChangingProgressBar Function SetPercentSmoothly
struct Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics
{
	struct SmoothChangingProgressBar_eventSetPercentSmoothly_Parms
	{
		float InPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Changes the bar percentage smoothly from its current value.\n/// Automatically interrupts any existing smooth change.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/SmoothChangingProgressBar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the bar percentage smoothly from its current value.\nAutomatically interrupts any existing smooth change." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::NewProp_InPercent = { "InPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmoothChangingProgressBar_eventSetPercentSmoothly_Parms, InPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::NewProp_InPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothChangingProgressBar, nullptr, "SetPercentSmoothly", nullptr, nullptr, Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::SmoothChangingProgressBar_eventSetPercentSmoothly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::SmoothChangingProgressBar_eventSetPercentSmoothly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmoothChangingProgressBar::execSetPercentSmoothly)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPercentSmoothly(Z_Param_InPercent);
	P_NATIVE_END;
}
// End Class USmoothChangingProgressBar Function SetPercentSmoothly

// Begin Class USmoothChangingProgressBar Function StopSmoothPercentChange
struct Z_Construct_UFunction_USmoothChangingProgressBar_StopSmoothPercentChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Stop any pending smooth changes to percent\n/// Call this if you need to interrupt any current smooth change and\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/SmoothChangingProgressBar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop any pending smooth changes to percent\nCall this if you need to interrupt any current smooth change and" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmoothChangingProgressBar_StopSmoothPercentChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmoothChangingProgressBar, nullptr, "StopSmoothPercentChange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmoothChangingProgressBar_StopSmoothPercentChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmoothChangingProgressBar_StopSmoothPercentChange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USmoothChangingProgressBar_StopSmoothPercentChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmoothChangingProgressBar_StopSmoothPercentChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmoothChangingProgressBar::execStopSmoothPercentChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSmoothPercentChange();
	P_NATIVE_END;
}
// End Class USmoothChangingProgressBar Function StopSmoothPercentChange

// Begin Class USmoothChangingProgressBar
void USmoothChangingProgressBar::StaticRegisterNativesUSmoothChangingProgressBar()
{
	UClass* Class = USmoothChangingProgressBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPercentSmoothly", &USmoothChangingProgressBar::execSetPercentSmoothly },
		{ "StopSmoothPercentChange", &USmoothChangingProgressBar::execStopSmoothPercentChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothChangingProgressBar);
UClass* Z_Construct_UClass_USmoothChangingProgressBar_NoRegister()
{
	return USmoothChangingProgressBar::StaticClass();
}
struct Z_Construct_UClass_USmoothChangingProgressBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A specialised progress bar that can be told to change its percent smoothly instead of all at once.\n * Note: Because SetPercent isn't virtual on UProgressBar, you need to use the alternate SetPercentSmoothly\n * function instead, and call StopSmoothPercentChange to interrupt it if you need to manually set it using\n * SetPercent.\n */" },
#endif
		{ "IncludePath", "StevesUI/SmoothChangingProgressBar.h" },
		{ "ModuleRelativePath", "Public/StevesUI/SmoothChangingProgressBar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A specialised progress bar that can be told to change its percent smoothly instead of all at once.\nNote: Because SetPercent isn't virtual on UProgressBar, you need to use the alternate SetPercentSmoothly\nfunction instead, and call StopSmoothPercentChange to interrupt it if you need to manually set it using\nSetPercent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentChangeSpeed_MetaData[] = {
		{ "Category", "Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The speed at which the progress bar changes. This value means the max percentage changes\n/// in one second. Set this to 0 to make changes instant. Changes to this value only affect\n/// the next call to SetPercentSmoothly.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/SmoothChangingProgressBar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speed at which the progress bar changes. This value means the max percentage changes\nin one second. Set this to 0 to make changes instant. Changes to this value only affect\nthe next call to SetPercentSmoothly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentChangeFrequency_MetaData[] = {
		{ "Category", "Progress" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The frequency at which we should update the bar. Set this to 0 to update every frame,\n/// or > 0 to update every X seconds (useful to save tick time for slow updates).\n/// Changes to this value only affect the next call to SetPercentSmoothly.\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesUI/SmoothChangingProgressBar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The frequency at which we should update the bar. Set this to 0 to update every frame,\nor > 0 to update every X seconds (useful to save tick time for slow updates).\nChanges to this value only affect the next call to SetPercentSmoothly." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentChangeSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentChangeFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USmoothChangingProgressBar_SetPercentSmoothly, "SetPercentSmoothly" }, // 154322926
		{ &Z_Construct_UFunction_USmoothChangingProgressBar_StopSmoothPercentChange, "StopSmoothPercentChange" }, // 2412515033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothChangingProgressBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothChangingProgressBar_Statics::NewProp_PercentChangeSpeed = { "PercentChangeSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothChangingProgressBar, PercentChangeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentChangeSpeed_MetaData), NewProp_PercentChangeSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothChangingProgressBar_Statics::NewProp_PercentChangeFrequency = { "PercentChangeFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothChangingProgressBar, PercentChangeFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentChangeFrequency_MetaData), NewProp_PercentChangeFrequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothChangingProgressBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothChangingProgressBar_Statics::NewProp_PercentChangeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothChangingProgressBar_Statics::NewProp_PercentChangeFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothChangingProgressBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmoothChangingProgressBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProgressBar,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothChangingProgressBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothChangingProgressBar_Statics::ClassParams = {
	&USmoothChangingProgressBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USmoothChangingProgressBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USmoothChangingProgressBar_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothChangingProgressBar_Statics::Class_MetaDataParams), Z_Construct_UClass_USmoothChangingProgressBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmoothChangingProgressBar()
{
	if (!Z_Registration_Info_UClass_USmoothChangingProgressBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothChangingProgressBar.OuterSingleton, Z_Construct_UClass_USmoothChangingProgressBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmoothChangingProgressBar.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<USmoothChangingProgressBar>()
{
	return USmoothChangingProgressBar::StaticClass();
}
USmoothChangingProgressBar::USmoothChangingProgressBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothChangingProgressBar);
USmoothChangingProgressBar::~USmoothChangingProgressBar() {}
// End Class USmoothChangingProgressBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USmoothChangingProgressBar, USmoothChangingProgressBar::StaticClass, TEXT("USmoothChangingProgressBar"), &Z_Registration_Info_UClass_USmoothChangingProgressBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothChangingProgressBar), 3183882035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_3441931918(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_SmoothChangingProgressBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
