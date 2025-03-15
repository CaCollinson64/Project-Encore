// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/ReplayComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplayComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UReplayComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UReplayComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UReplayComponent Function EnableInput
struct ReplayComponent_eventEnableInput_Parms
{
	bool bEnable;
};
static const FName NAME_UReplayComponent_EnableInput = FName(TEXT("EnableInput"));
void UReplayComponent::EnableInput(bool bEnable)
{
	ReplayComponent_eventEnableInput_Parms Parms;
	Parms.bEnable=bEnable ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UReplayComponent_EnableInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UReplayComponent_EnableInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Components/ReplayComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((ReplayComponent_eventEnableInput_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplayComponent_eventEnableInput_Parms), &Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplayComponent, nullptr, "EnableInput", nullptr, nullptr, Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::PropPointers), sizeof(ReplayComponent_eventEnableInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(ReplayComponent_eventEnableInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayComponent_EnableInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayComponent_EnableInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UReplayComponent Function EnableInput

// Begin Class UReplayComponent Function StartRecording
struct Z_Construct_UFunction_UReplayComponent_StartRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start recording transforms at 0.1s intervals */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ReplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start recording transforms at 0.1s intervals" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayComponent_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplayComponent, nullptr, "StartRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayComponent_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayComponent_StartRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UReplayComponent_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayComponent_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayComponent::execStartRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecording();
	P_NATIVE_END;
}
// End Class UReplayComponent Function StartRecording

// Begin Class UReplayComponent Function StartReplay
struct Z_Construct_UFunction_UReplayComponent_StartReplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Begin the replay (from end to beginning) */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ReplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin the replay (from end to beginning)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayComponent_StartReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplayComponent, nullptr, "StartReplay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayComponent_StartReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayComponent_StartReplay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UReplayComponent_StartReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayComponent_StartReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayComponent::execStartReplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartReplay();
	P_NATIVE_END;
}
// End Class UReplayComponent Function StartReplay

// Begin Class UReplayComponent Function StopRecording
struct Z_Construct_UFunction_UReplayComponent_StopRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop recording transforms */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ReplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop recording transforms" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayComponent_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplayComponent, nullptr, "StopRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayComponent_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayComponent_StopRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UReplayComponent_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayComponent_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayComponent::execStopRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecording();
	P_NATIVE_END;
}
// End Class UReplayComponent Function StopRecording

// Begin Class UReplayComponent
void UReplayComponent::StaticRegisterNativesUReplayComponent()
{
	UClass* Class = UReplayComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartRecording", &UReplayComponent::execStartRecording },
		{ "StartReplay", &UReplayComponent::execStartReplay },
		{ "StopRecording", &UReplayComponent::execStopRecording },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplayComponent);
UClass* Z_Construct_UClass_UReplayComponent_NoRegister()
{
	return UReplayComponent::StaticClass();
}
struct Z_Construct_UClass_UReplayComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Gameplay/Character/Components/ReplayComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ReplayComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformHistory_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of transforms recorded over time */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ReplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of transforms recorded over time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentDuration_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Duration (in seconds) to interpolate between each transform during replay */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ReplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration (in seconds) to interpolate between each transform during replay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReplaying_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the replay is active */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/ReplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the replay is active" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformHistory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformHistory;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentDuration;
	static void NewProp_bIsReplaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReplaying;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplayComponent_EnableInput, "EnableInput" }, // 2379250651
		{ &Z_Construct_UFunction_UReplayComponent_StartRecording, "StartRecording" }, // 2125520312
		{ &Z_Construct_UFunction_UReplayComponent_StartReplay, "StartReplay" }, // 1891615865
		{ &Z_Construct_UFunction_UReplayComponent_StopRecording, "StopRecording" }, // 2283462202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplayComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayComponent_Statics::NewProp_TransformHistory_Inner = { "TransformHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayComponent_Statics::NewProp_TransformHistory = { "TransformHistory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayComponent, TransformHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformHistory_MetaData), NewProp_TransformHistory_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplayComponent_Statics::NewProp_SegmentDuration = { "SegmentDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayComponent, SegmentDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentDuration_MetaData), NewProp_SegmentDuration_MetaData) };
void Z_Construct_UClass_UReplayComponent_Statics::NewProp_bIsReplaying_SetBit(void* Obj)
{
	((UReplayComponent*)Obj)->bIsReplaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplayComponent_Statics::NewProp_bIsReplaying = { "bIsReplaying", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReplayComponent), &Z_Construct_UClass_UReplayComponent_Statics::NewProp_bIsReplaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReplaying_MetaData), NewProp_bIsReplaying_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplayComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayComponent_Statics::NewProp_TransformHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayComponent_Statics::NewProp_TransformHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayComponent_Statics::NewProp_SegmentDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayComponent_Statics::NewProp_bIsReplaying,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReplayComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplayComponent_Statics::ClassParams = {
	&UReplayComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReplayComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReplayComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplayComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplayComponent()
{
	if (!Z_Registration_Info_UClass_UReplayComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplayComponent.OuterSingleton, Z_Construct_UClass_UReplayComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplayComponent.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UReplayComponent>()
{
	return UReplayComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplayComponent);
UReplayComponent::~UReplayComponent() {}
// End Class UReplayComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ReplayComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplayComponent, UReplayComponent::StaticClass, TEXT("UReplayComponent"), &Z_Registration_Info_UClass_UReplayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplayComponent), 3105483311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ReplayComponent_h_1140483227(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ReplayComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ReplayComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
