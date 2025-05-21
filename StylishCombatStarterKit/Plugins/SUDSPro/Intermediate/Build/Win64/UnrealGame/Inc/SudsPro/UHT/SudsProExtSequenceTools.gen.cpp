// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProExtSequenceTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProExtSequenceTools() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProDialogueExtension();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProExtSequenceTools();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProExtSequenceTools_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Class USudsProExtSequenceTools Function CancelSequence
struct Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics
{
	struct SudsProExtSequenceTools_eventCancelSequence_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Sequence" },
		{ "Comment", "/**\n\x09 * Cancel a level sequence being played by dialogue. Useful for cancelling cutscenes.\n\x09 * @param WorldContextObject Required world context object (automatically provided in Blueprints)\n\x09 */" },
		{ "DisplayName", "Cancel Dialogue Sequence" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtSequenceTools.h" },
		{ "ToolTip", "Cancel a level sequence being played by dialogue. Useful for cancelling cutscenes.\n@param WorldContextObject Required world context object (automatically provided in Blueprints)" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtSequenceTools_eventCancelSequence_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProExtSequenceTools, nullptr, "CancelSequence", nullptr, nullptr, Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::SudsProExtSequenceTools_eventCancelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::SudsProExtSequenceTools_eventCancelSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProExtSequenceTools::execCancelSequence)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USudsProExtSequenceTools::CancelSequence(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USudsProExtSequenceTools Function CancelSequence

// Begin Class USudsProExtSequenceTools Function IsSequenceActive
struct Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics
{
	struct SudsProExtSequenceTools_eventIsSequenceActive_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Sequence" },
		{ "Comment", "/**\n\x09 * Return whether a level sequence is currently active; which means either playing, or paused but not at the end.\n\x09 * @param WorldContextObject Required world context object (automatically provided in Blueprints)\n\x09 */" },
		{ "DisplayName", "Is Dialogue Sequence Active" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtSequenceTools.h" },
		{ "ToolTip", "Return whether a level sequence is currently active; which means either playing, or paused but not at the end.\n@param WorldContextObject Required world context object (automatically provided in Blueprints)" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtSequenceTools_eventIsSequenceActive_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SudsProExtSequenceTools_eventIsSequenceActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProExtSequenceTools_eventIsSequenceActive_Parms), &Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProExtSequenceTools, nullptr, "IsSequenceActive", nullptr, nullptr, Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::SudsProExtSequenceTools_eventIsSequenceActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::SudsProExtSequenceTools_eventIsSequenceActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProExtSequenceTools::execIsSequenceActive)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USudsProExtSequenceTools::IsSequenceActive(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USudsProExtSequenceTools Function IsSequenceActive

// Begin Class USudsProExtSequenceTools Function NotifyFromSequence
struct Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics
{
	struct SudsProExtSequenceTools_eventNotifyFromSequence_Parms
	{
		const UObject* WorldContextObject;
		FName NotificationName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Sequence" },
		{ "Comment", "/**\n\x09 * Send a notification to dialogue that an event has occurred. Dialogue which is waiting on this notification\n\x09 * will then continue.\n\x09 * @param WorldContextObject Required world context object (automatically provided in Blueprints)\n\x09 * @param NotificationName Optional notification name, for if you need to wait on different notifications.\n\x09 */" },
		{ "CPP_Default_NotificationName", "None" },
		{ "DisplayName", "Notify Dialogue Of Sequence Event" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtSequenceTools.h" },
		{ "ToolTip", "Send a notification to dialogue that an event has occurred. Dialogue which is waiting on this notification\nwill then continue.\n@param WorldContextObject Required world context object (automatically provided in Blueprints)\n@param NotificationName Optional notification name, for if you need to wait on different notifications." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotificationName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtSequenceTools_eventNotifyFromSequence_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::NewProp_NotificationName = { "NotificationName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtSequenceTools_eventNotifyFromSequence_Parms, NotificationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationName_MetaData), NewProp_NotificationName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::NewProp_NotificationName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProExtSequenceTools, nullptr, "NotifyFromSequence", nullptr, nullptr, Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::SudsProExtSequenceTools_eventNotifyFromSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::SudsProExtSequenceTools_eventNotifyFromSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProExtSequenceTools::execNotifyFromSequence)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_NotificationName);
	P_FINISH;
	P_NATIVE_BEGIN;
	USudsProExtSequenceTools::NotifyFromSequence(Z_Param_WorldContextObject,Z_Param_NotificationName);
	P_NATIVE_END;
}
// End Class USudsProExtSequenceTools Function NotifyFromSequence

// Begin Class USudsProExtSequenceTools Function OnSequenceFinished
struct Z_Construct_UFunction_USudsProExtSequenceTools_OnSequenceFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtSequenceTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProExtSequenceTools_OnSequenceFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProExtSequenceTools, nullptr, "OnSequenceFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_OnSequenceFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProExtSequenceTools_OnSequenceFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USudsProExtSequenceTools_OnSequenceFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProExtSequenceTools_OnSequenceFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProExtSequenceTools::execOnSequenceFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSequenceFinished();
	P_NATIVE_END;
}
// End Class USudsProExtSequenceTools Function OnSequenceFinished

// Begin Class USudsProExtSequenceTools Function PauseSequence
struct Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics
{
	struct SudsProExtSequenceTools_eventPauseSequence_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Sequence" },
		{ "Comment", "/**\n\x09 * Pause a level sequence being played by dialogue. \n\x09 * @param WorldContextObject Required world context object (automatically provided in Blueprints)\n\x09 */" },
		{ "DisplayName", "Pause Dialogue Sequence" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtSequenceTools.h" },
		{ "ToolTip", "Pause a level sequence being played by dialogue.\n@param WorldContextObject Required world context object (automatically provided in Blueprints)" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtSequenceTools_eventPauseSequence_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProExtSequenceTools, nullptr, "PauseSequence", nullptr, nullptr, Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::SudsProExtSequenceTools_eventPauseSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::SudsProExtSequenceTools_eventPauseSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProExtSequenceTools::execPauseSequence)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USudsProExtSequenceTools::PauseSequence(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USudsProExtSequenceTools Function PauseSequence

// Begin Class USudsProExtSequenceTools
void USudsProExtSequenceTools::StaticRegisterNativesUSudsProExtSequenceTools()
{
	UClass* Class = USudsProExtSequenceTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelSequence", &USudsProExtSequenceTools::execCancelSequence },
		{ "IsSequenceActive", &USudsProExtSequenceTools::execIsSequenceActive },
		{ "NotifyFromSequence", &USudsProExtSequenceTools::execNotifyFromSequence },
		{ "OnSequenceFinished", &USudsProExtSequenceTools::execOnSequenceFinished },
		{ "PauseSequence", &USudsProExtSequenceTools::execPauseSequence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProExtSequenceTools);
UClass* Z_Construct_UClass_USudsProExtSequenceTools_NoRegister()
{
	return USudsProExtSequenceTools::StaticClass();
}
struct Z_Construct_UClass_USudsProExtSequenceTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Extensions/SudsProExtSequenceTools.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtSequenceTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtSequenceTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProExtSequenceTools_CancelSequence, "CancelSequence" }, // 2359894122
		{ &Z_Construct_UFunction_USudsProExtSequenceTools_IsSequenceActive, "IsSequenceActive" }, // 2009232486
		{ &Z_Construct_UFunction_USudsProExtSequenceTools_NotifyFromSequence, "NotifyFromSequence" }, // 3933282814
		{ &Z_Construct_UFunction_USudsProExtSequenceTools_OnSequenceFinished, "OnSequenceFinished" }, // 101809905
		{ &Z_Construct_UFunction_USudsProExtSequenceTools_PauseSequence, "PauseSequence" }, // 321139139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProExtSequenceTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USudsProExtSequenceTools_Statics::NewProp_SequenceActor = { "SequenceActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProExtSequenceTools, SequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceActor_MetaData), NewProp_SequenceActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USudsProExtSequenceTools_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProExtSequenceTools_Statics::NewProp_SequenceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtSequenceTools_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USudsProExtSequenceTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USudsProDialogueExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtSequenceTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProExtSequenceTools_Statics::ClassParams = {
	&USudsProExtSequenceTools::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USudsProExtSequenceTools_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtSequenceTools_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtSequenceTools_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProExtSequenceTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProExtSequenceTools()
{
	if (!Z_Registration_Info_UClass_USudsProExtSequenceTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProExtSequenceTools.OuterSingleton, Z_Construct_UClass_USudsProExtSequenceTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProExtSequenceTools.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProExtSequenceTools>()
{
	return USudsProExtSequenceTools::StaticClass();
}
USudsProExtSequenceTools::USudsProExtSequenceTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProExtSequenceTools);
USudsProExtSequenceTools::~USudsProExtSequenceTools() {}
// End Class USudsProExtSequenceTools

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProExtSequenceTools_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProExtSequenceTools, USudsProExtSequenceTools::StaticClass, TEXT("USudsProExtSequenceTools"), &Z_Registration_Info_UClass_USudsProExtSequenceTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProExtSequenceTools), 2407864745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProExtSequenceTools_h_3409804100(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProExtSequenceTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProExtSequenceTools_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
