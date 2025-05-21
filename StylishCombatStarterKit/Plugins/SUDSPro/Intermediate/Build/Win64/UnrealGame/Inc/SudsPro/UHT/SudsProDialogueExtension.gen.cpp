// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/SudsProDialogueExtension.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProDialogueExtension() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProDialogueExtension();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProDialogueExtension_NoRegister();
SUDSPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSudsProQueuedEvent();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin ScriptStruct FSudsProQueuedEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SudsProQueuedEvent;
class UScriptStruct* FSudsProQueuedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SudsProQueuedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SudsProQueuedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSudsProQueuedEvent, (UObject*)Z_Construct_UPackage__Script_SudsPro(), TEXT("SudsProQueuedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_SudsProQueuedEvent.OuterSingleton;
}
template<> SUDSPRO_API UScriptStruct* StaticStruct<FSudsProQueuedEvent>()
{
	return FSudsProQueuedEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/// The event name\n" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "The event name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/// The event arguments\n" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "The event arguments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLineNo_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/// The source line number the event has come from\n" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "The source line number the event has come from" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Args_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Args;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceLineNo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSudsProQueuedEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSudsProQueuedEvent, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 100687975
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSudsProQueuedEvent, Args), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Args_MetaData), NewProp_Args_MetaData) }; // 100687975
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::NewProp_SourceLineNo = { "SourceLineNo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSudsProQueuedEvent, SourceLineNo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLineNo_MetaData), NewProp_SourceLineNo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::NewProp_Args_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::NewProp_Args,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::NewProp_SourceLineNo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
	nullptr,
	&NewStructOps,
	"SudsProQueuedEvent",
	Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::PropPointers),
	sizeof(FSudsProQueuedEvent),
	alignof(FSudsProQueuedEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSudsProQueuedEvent()
{
	if (!Z_Registration_Info_UScriptStruct_SudsProQueuedEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SudsProQueuedEvent.InnerSingleton, Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SudsProQueuedEvent.InnerSingleton;
}
// End ScriptStruct FSudsProQueuedEvent

// Begin Class USudsProDialogueExtension Function DialogueFinished
struct SudsProDialogueExtension_eventDialogueFinished_Parms
{
	USUDSDialogue* Dialogue;
};
static const FName NAME_USudsProDialogueExtension_DialogueFinished = FName(TEXT("DialogueFinished"));
void USudsProDialogueExtension::DialogueFinished(USUDSDialogue* Dialogue)
{
	UFunction* Func = FindFunctionChecked(NAME_USudsProDialogueExtension_DialogueFinished);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProDialogueExtension_eventDialogueFinished_Parms Parms;
		Parms.Dialogue=Dialogue;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DialogueFinished_Implementation(Dialogue);
	}
}
struct Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/// Notification that dialogue has finished\n" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "Notification that dialogue has finished" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProDialogueExtension_eventDialogueFinished_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProDialogueExtension, nullptr, "DialogueFinished", nullptr, nullptr, Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::PropPointers), sizeof(SudsProDialogueExtension_eventDialogueFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProDialogueExtension_eventDialogueFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProDialogueExtension::execDialogueFinished)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueFinished_Implementation(Z_Param_Dialogue);
	P_NATIVE_END;
}
// End Class USudsProDialogueExtension Function DialogueFinished

// Begin Class USudsProDialogueExtension Function DialogueStarting
struct SudsProDialogueExtension_eventDialogueStarting_Parms
{
	USUDSDialogue* Dialogue;
};
static const FName NAME_USudsProDialogueExtension_DialogueStarting = FName(TEXT("DialogueStarting"));
void USudsProDialogueExtension::DialogueStarting(USUDSDialogue* Dialogue)
{
	UFunction* Func = FindFunctionChecked(NAME_USudsProDialogueExtension_DialogueStarting);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProDialogueExtension_eventDialogueStarting_Parms Parms;
		Parms.Dialogue=Dialogue;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DialogueStarting_Implementation(Dialogue);
	}
}
struct Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/// Notification that dialogue is starting\n" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "Notification that dialogue is starting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProDialogueExtension_eventDialogueStarting_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProDialogueExtension, nullptr, "DialogueStarting", nullptr, nullptr, Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::PropPointers), sizeof(SudsProDialogueExtension_eventDialogueStarting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProDialogueExtension_eventDialogueStarting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProDialogueExtension::execDialogueStarting)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueStarting_Implementation(Z_Param_Dialogue);
	P_NATIVE_END;
}
// End Class USudsProDialogueExtension Function DialogueStarting

// Begin Class USudsProDialogueExtension Function FireEventCompleted
struct Z_Construct_UFunction_USudsProDialogueExtension_FireEventCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProDialogueExtension_FireEventCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProDialogueExtension, nullptr, "FireEventCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_FireEventCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProDialogueExtension_FireEventCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USudsProDialogueExtension_FireEventCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProDialogueExtension_FireEventCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProDialogueExtension::execFireEventCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireEventCompleted();
	P_NATIVE_END;
}
// End Class USudsProDialogueExtension Function FireEventCompleted

// Begin Class USudsProDialogueExtension Function GetTimeRemaining
struct SudsProDialogueExtension_eventGetTimeRemaining_Parms
{
	bool bForEndDialogue;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProDialogueExtension_eventGetTimeRemaining_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_USudsProDialogueExtension_GetTimeRemaining = FName(TEXT("GetTimeRemaining"));
float USudsProDialogueExtension::GetTimeRemaining(bool bForEndDialogue)
{
	UFunction* Func = FindFunctionChecked(NAME_USudsProDialogueExtension_GetTimeRemaining);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProDialogueExtension_eventGetTimeRemaining_Parms Parms;
		Parms.bForEndDialogue=bForEndDialogue ? true : false;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetTimeRemaining_Implementation(bForEndDialogue);
	}
}
struct Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * For all things this extension is running in parallel, get the maximum time remaining on any of them.\n\x09 * This is for if we want to wait for everything to finish before continuing.\n\x09 * @param bForEndDialogue If true, we're asking for the end of the dialogue. Do not include times for anything which\n\x09 *\x09should not delay the ending of the dialogue.\n\x09 * @return Time\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "For all things this extension is running in parallel, get the maximum time remaining on any of them.\nThis is for if we want to wait for everything to finish before continuing.\n@param bForEndDialogue If true, we're asking for the end of the dialogue. Do not include times for anything which\n     should not delay the ending of the dialogue.\n@return Time" },
	};
#endif // WITH_METADATA
	static void NewProp_bForEndDialogue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForEndDialogue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::NewProp_bForEndDialogue_SetBit(void* Obj)
{
	((SudsProDialogueExtension_eventGetTimeRemaining_Parms*)Obj)->bForEndDialogue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::NewProp_bForEndDialogue = { "bForEndDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProDialogueExtension_eventGetTimeRemaining_Parms), &Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::NewProp_bForEndDialogue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProDialogueExtension_eventGetTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::NewProp_bForEndDialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProDialogueExtension, nullptr, "GetTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::PropPointers), sizeof(SudsProDialogueExtension_eventGetTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProDialogueExtension_eventGetTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProDialogueExtension::execGetTimeRemaining)
{
	P_GET_UBOOL(Z_Param_bForEndDialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeRemaining_Implementation(Z_Param_bForEndDialogue);
	P_NATIVE_END;
}
// End Class USudsProDialogueExtension Function GetTimeRemaining

// Begin Class USudsProDialogueExtension Function PreDialogueSpeakerLineShown
struct SudsProDialogueExtension_eventPreDialogueSpeakerLineShown_Parms
{
	USUDSDialogue* Dialogue;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProDialogueExtension_eventPreDialogueSpeakerLineShown_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_USudsProDialogueExtension_PreDialogueSpeakerLineShown = FName(TEXT("PreDialogueSpeakerLineShown"));
bool USudsProDialogueExtension::PreDialogueSpeakerLineShown(USUDSDialogue* Dialogue)
{
	UFunction* Func = FindFunctionChecked(NAME_USudsProDialogueExtension_PreDialogueSpeakerLineShown);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProDialogueExtension_eventPreDialogueSpeakerLineShown_Parms Parms;
		Parms.Dialogue=Dialogue;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return PreDialogueSpeakerLineShown_Implementation(Dialogue);
	}
}
struct Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called after all events have been processed from all extensions, but just before the speaker line is displayed.\n\x09 * At this point you know you've received all the events queued before this speaker line. Use this to perform any\n\x09 * combined actions that needed to consider more than one event, or the lack of any event. This implementation\n\x09 * can be asynchronous, but if it is it must set OutIsAsync to true, and call PreSpeakerLineCompleted() when done.\n\x09 * @param Dialogue The dialogue being executed\n\x09 * @return Whether this extension is performing asynchronous tasks. If true, the speaker line\n\x09 *     will not be displayed until PreSpeakerLineCompleted() is called on USudsProSubsystem. All extensions will get\n\x09 *     to run their PreDialogueSpeakerLineShown simultaneously.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "Called after all events have been processed from all extensions, but just before the speaker line is displayed.\nAt this point you know you've received all the events queued before this speaker line. Use this to perform any\ncombined actions that needed to consider more than one event, or the lack of any event. This implementation\ncan be asynchronous, but if it is it must set OutIsAsync to true, and call PreSpeakerLineCompleted() when done.\n@param Dialogue The dialogue being executed\n@return Whether this extension is performing asynchronous tasks. If true, the speaker line\n    will not be displayed until PreSpeakerLineCompleted() is called on USudsProSubsystem. All extensions will get\n    to run their PreDialogueSpeakerLineShown simultaneously." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProDialogueExtension_eventPreDialogueSpeakerLineShown_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SudsProDialogueExtension_eventPreDialogueSpeakerLineShown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProDialogueExtension_eventPreDialogueSpeakerLineShown_Parms), &Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProDialogueExtension, nullptr, "PreDialogueSpeakerLineShown", nullptr, nullptr, Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::PropPointers), sizeof(SudsProDialogueExtension_eventPreDialogueSpeakerLineShown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProDialogueExtension_eventPreDialogueSpeakerLineShown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProDialogueExtension::execPreDialogueSpeakerLineShown)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PreDialogueSpeakerLineShown_Implementation(Z_Param_Dialogue);
	P_NATIVE_END;
}
// End Class USudsProDialogueExtension Function PreDialogueSpeakerLineShown

// Begin Class USudsProDialogueExtension Function ProcessDialogueEvent
struct SudsProDialogueExtension_eventProcessDialogueEvent_Parms
{
	USUDSDialogue* Dialogue;
	FSudsProQueuedEvent Evt;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProDialogueExtension_eventProcessDialogueEvent_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_USudsProDialogueExtension_ProcessDialogueEvent = FName(TEXT("ProcessDialogueEvent"));
bool USudsProDialogueExtension::ProcessDialogueEvent(USUDSDialogue* Dialogue, FSudsProQueuedEvent const& Evt)
{
	UFunction* Func = FindFunctionChecked(NAME_USudsProDialogueExtension_ProcessDialogueEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProDialogueExtension_eventProcessDialogueEvent_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.Evt=Evt;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ProcessDialogueEvent_Implementation(Dialogue, Evt);
	}
}
struct Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Possibly act on a queued event.\n\x09 * Every extension will be given the opportunity to act on events which occur between speaker lines. These events\n\x09 * will be queued up and issued to extensions just before the speaker line they precede. This implementation can\n\x09 * be asynchronous, but if it is it must return true, and call USudsProSubsystem's EventCompleted() when done.\n\x09 * All extensions get to process an event simultaneously, and any number of them can be async. \n\x09 * @param Dialogue The dialogue being executed\n\x09 * @return Whether this event is performing asynchronous actions in response to this event, AND subsequent events /\n\x09 *   speaker lines should not execute until it's finished. If true, you must EventCompleted() on USudsProSubsystem when done.\n\x09 *   Note: you can still do async actions and NOT make anything wait by default by returning false from this call.\n\x09 *   You could then have a different event which caused an optional wait.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "Possibly act on a queued event.\nEvery extension will be given the opportunity to act on events which occur between speaker lines. These events\nwill be queued up and issued to extensions just before the speaker line they precede. This implementation can\nbe asynchronous, but if it is it must return true, and call USudsProSubsystem's EventCompleted() when done.\nAll extensions get to process an event simultaneously, and any number of them can be async.\n@param Dialogue The dialogue being executed\n@return Whether this event is performing asynchronous actions in response to this event, AND subsequent events /\n  speaker lines should not execute until it's finished. If true, you must EventCompleted() on USudsProSubsystem when done.\n  Note: you can still do async actions and NOT make anything wait by default by returning false from this call.\n  You could then have a different event which caused an optional wait." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Evt;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProDialogueExtension_eventProcessDialogueEvent_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::NewProp_Evt = { "Evt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProDialogueExtension_eventProcessDialogueEvent_Parms, Evt), Z_Construct_UScriptStruct_FSudsProQueuedEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evt_MetaData), NewProp_Evt_MetaData) }; // 2256088383
void Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SudsProDialogueExtension_eventProcessDialogueEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProDialogueExtension_eventProcessDialogueEvent_Parms), &Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::NewProp_Evt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProDialogueExtension, nullptr, "ProcessDialogueEvent", nullptr, nullptr, Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::PropPointers), sizeof(SudsProDialogueExtension_eventProcessDialogueEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProDialogueExtension_eventProcessDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProDialogueExtension::execProcessDialogueEvent)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_STRUCT_REF(FSudsProQueuedEvent,Z_Param_Out_Evt);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProcessDialogueEvent_Implementation(Z_Param_Dialogue,Z_Param_Out_Evt);
	P_NATIVE_END;
}
// End Class USudsProDialogueExtension Function ProcessDialogueEvent

// Begin Class USudsProDialogueExtension Function QueueEventCompleted
struct Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics
{
	struct SudsProDialogueExtension_eventQueueEventCompleted_Parms
	{
		float Delay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/// Queue a callback to let the system know an event is completed\n" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "Queue a callback to let the system know an event is completed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProDialogueExtension_eventQueueEventCompleted_Parms, Delay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::NewProp_Delay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProDialogueExtension, nullptr, "QueueEventCompleted", nullptr, nullptr, Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::SudsProDialogueExtension_eventQueueEventCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::SudsProDialogueExtension_eventQueueEventCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProDialogueExtension::execQueueEventCompleted)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueueEventCompleted(Z_Param_Delay);
	P_NATIVE_END;
}
// End Class USudsProDialogueExtension Function QueueEventCompleted

// Begin Class USudsProDialogueExtension Function Tick
struct SudsProDialogueExtension_eventTick_Parms
{
	float DeltaTime;
};
static const FName NAME_USudsProDialogueExtension_Tick = FName(TEXT("Tick"));
void USudsProDialogueExtension::Tick(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_USudsProDialogueExtension_Tick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProDialogueExtension_eventTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Tick_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/// Tick function for extensions\n" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "Tick function for extensions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProDialogueExtension_eventTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProDialogueExtension, nullptr, "Tick", nullptr, nullptr, Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::PropPointers), sizeof(SudsProDialogueExtension_eventTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProDialogueExtension_eventTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProDialogueExtension_Tick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProDialogueExtension_Tick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProDialogueExtension::execTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Tick_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class USudsProDialogueExtension Function Tick

// Begin Class USudsProDialogueExtension
void USudsProDialogueExtension::StaticRegisterNativesUSudsProDialogueExtension()
{
	UClass* Class = USudsProDialogueExtension::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DialogueFinished", &USudsProDialogueExtension::execDialogueFinished },
		{ "DialogueStarting", &USudsProDialogueExtension::execDialogueStarting },
		{ "FireEventCompleted", &USudsProDialogueExtension::execFireEventCompleted },
		{ "GetTimeRemaining", &USudsProDialogueExtension::execGetTimeRemaining },
		{ "PreDialogueSpeakerLineShown", &USudsProDialogueExtension::execPreDialogueSpeakerLineShown },
		{ "ProcessDialogueEvent", &USudsProDialogueExtension::execProcessDialogueEvent },
		{ "QueueEventCompleted", &USudsProDialogueExtension::execQueueEventCompleted },
		{ "Tick", &USudsProDialogueExtension::execTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProDialogueExtension);
UClass* Z_Construct_UClass_USudsProDialogueExtension_NoRegister()
{
	return USudsProDialogueExtension::StaticClass();
}
struct Z_Construct_UClass_USudsProDialogueExtension_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Base class for dialogue processing extension that can perform custom actions in between dialogue lines\n/// These can be queued via dialogue script events so that we can perform fades, move characters, trigger sequences etc\n/// Each extension can provide multiple custom events\n" },
		{ "IncludePath", "SudsProDialogueExtension.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SudsProDialogueExtension.h" },
		{ "ToolTip", "Base class for dialogue processing extension that can perform custom actions in between dialogue lines\nThese can be queued via dialogue script events so that we can perform fades, move characters, trigger sequences etc\nEach extension can provide multiple custom events" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProDialogueExtension_DialogueFinished, "DialogueFinished" }, // 788141841
		{ &Z_Construct_UFunction_USudsProDialogueExtension_DialogueStarting, "DialogueStarting" }, // 494454108
		{ &Z_Construct_UFunction_USudsProDialogueExtension_FireEventCompleted, "FireEventCompleted" }, // 3572083940
		{ &Z_Construct_UFunction_USudsProDialogueExtension_GetTimeRemaining, "GetTimeRemaining" }, // 3275101033
		{ &Z_Construct_UFunction_USudsProDialogueExtension_PreDialogueSpeakerLineShown, "PreDialogueSpeakerLineShown" }, // 1283228057
		{ &Z_Construct_UFunction_USudsProDialogueExtension_ProcessDialogueEvent, "ProcessDialogueEvent" }, // 613736286
		{ &Z_Construct_UFunction_USudsProDialogueExtension_QueueEventCompleted, "QueueEventCompleted" }, // 3310423371
		{ &Z_Construct_UFunction_USudsProDialogueExtension_Tick, "Tick" }, // 428839706
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProDialogueExtension>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProDialogueExtension_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProDialogueExtension_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProDialogueExtension_Statics::ClassParams = {
	&USudsProDialogueExtension::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProDialogueExtension_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProDialogueExtension_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProDialogueExtension()
{
	if (!Z_Registration_Info_UClass_USudsProDialogueExtension.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProDialogueExtension.OuterSingleton, Z_Construct_UClass_USudsProDialogueExtension_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProDialogueExtension.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProDialogueExtension>()
{
	return USudsProDialogueExtension::StaticClass();
}
USudsProDialogueExtension::USudsProDialogueExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProDialogueExtension);
USudsProDialogueExtension::~USudsProDialogueExtension() {}
// End Class USudsProDialogueExtension

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProDialogueExtension_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSudsProQueuedEvent::StaticStruct, Z_Construct_UScriptStruct_FSudsProQueuedEvent_Statics::NewStructOps, TEXT("SudsProQueuedEvent"), &Z_Registration_Info_UScriptStruct_SudsProQueuedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSudsProQueuedEvent), 2256088383U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProDialogueExtension, USudsProDialogueExtension::StaticClass, TEXT("USudsProDialogueExtension"), &Z_Registration_Info_UClass_USudsProDialogueExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProDialogueExtension), 3107249221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProDialogueExtension_h_1175916400(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProDialogueExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProDialogueExtension_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProDialogueExtension_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProDialogueExtension_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
