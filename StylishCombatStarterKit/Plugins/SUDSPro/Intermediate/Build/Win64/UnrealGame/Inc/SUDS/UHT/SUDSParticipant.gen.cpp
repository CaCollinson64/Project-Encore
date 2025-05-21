// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSParticipant.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSParticipant() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSParticipant();
SUDS_API UClass* Z_Construct_UClass_USUDSParticipant_NoRegister();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Interface USUDSParticipant Function GetDialogueParticipantPriority
struct SUDSParticipant_eventGetDialogueParticipantPriority_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	SUDSParticipant_eventGetDialogueParticipantPriority_Parms()
		: ReturnValue(0)
	{
	}
};
int32 ISUDSParticipant::GetDialogueParticipantPriority() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueParticipantPriority instead.");
	SUDSParticipant_eventGetDialogueParticipantPriority_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USUDSParticipant_GetDialogueParticipantPriority = FName(TEXT("GetDialogueParticipantPriority"));
int32 ISUDSParticipant::Execute_GetDialogueParticipantPriority(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USUDSParticipant::StaticClass()));
	SUDSParticipant_eventGetDialogueParticipantPriority_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USUDSParticipant_GetDialogueParticipantPriority);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISUDSParticipant*)(O->GetNativeInterfaceAddress(USUDSParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueParticipantPriority_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/**\n\x09 * Return the priority of this participant (default 0).\n\x09 * If for some reason you need to control the order multiple participants in a dialogue are called, \n\x09 * override this method; higher priority participants will be called *later* so that their variables etc override\n\x09 * previously set values.\n\x09 * @return Relative priority, default 0, higher numbers override lower ones. \n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
		{ "ToolTip", "Return the priority of this participant (default 0).\nIf for some reason you need to control the order multiple participants in a dialogue are called,\noverride this method; higher priority participants will be called *later* so that their variables etc override\npreviously set values.\n@return Relative priority, default 0, higher numbers override lower ones." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventGetDialogueParticipantPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSParticipant, nullptr, "GetDialogueParticipantPriority", nullptr, nullptr, Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::PropPointers), sizeof(SUDSParticipant_eventGetDialogueParticipantPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(SUDSParticipant_eventGetDialogueParticipantPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISUDSParticipant::execGetDialogueParticipantPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDialogueParticipantPriority_Implementation();
	P_NATIVE_END;
}
// End Interface USUDSParticipant Function GetDialogueParticipantPriority

// Begin Interface USUDSParticipant Function OnDialogueChoiceMade
struct SUDSParticipant_eventOnDialogueChoiceMade_Parms
{
	USUDSDialogue* Dialogue;
	int32 ChoiceIndex;
};
void ISUDSParticipant::OnDialogueChoiceMade(USUDSDialogue* Dialogue, int32 ChoiceIndex)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueChoiceMade instead.");
}
static FName NAME_USUDSParticipant_OnDialogueChoiceMade = FName(TEXT("OnDialogueChoiceMade"));
void ISUDSParticipant::Execute_OnDialogueChoiceMade(UObject* O, USUDSDialogue* Dialogue, int32 ChoiceIndex)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USUDSParticipant::StaticClass()));
	SUDSParticipant_eventOnDialogueChoiceMade_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USUDSParticipant_OnDialogueChoiceMade);
	if (Func)
	{
		Parms.Dialogue=Dialogue;
		Parms.ChoiceIndex=ChoiceIndex;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISUDSParticipant*)(O->GetNativeInterfaceAddress(USUDSParticipant::StaticClass())))
	{
		I->OnDialogueChoiceMade_Implementation(Dialogue,ChoiceIndex);
	}
}
struct Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/**\n\x09 * Called when a choice is made by the player.\n\x09 * At this point, the dialogue has not progressed as a result of that choice, so the index passed can be used to\n\x09 * reference the choice.\n\x09 * This event is ONLY raised if there's a choice of paths, not for just continuing a linear path.\n\x09 * See OnDialogueProceeding for a more general callback.\n\x09 * Participants will be called before any dialogue event listeners.\n\x09 * @param Dialogue The dialogue\n\x09 * @param ChoiceIndex The index of the choice that was made\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
		{ "ToolTip", "Called when a choice is made by the player.\nAt this point, the dialogue has not progressed as a result of that choice, so the index passed can be used to\nreference the choice.\nThis event is ONLY raised if there's a choice of paths, not for just continuing a linear path.\nSee OnDialogueProceeding for a more general callback.\nParticipants will be called before any dialogue event listeners.\n@param Dialogue The dialogue\n@param ChoiceIndex The index of the choice that was made" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueChoiceMade_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueChoiceMade_Parms, ChoiceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::NewProp_ChoiceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSParticipant, nullptr, "OnDialogueChoiceMade", nullptr, nullptr, Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::PropPointers), sizeof(SUDSParticipant_eventOnDialogueChoiceMade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::Function_MetaDataParams) };
static_assert(sizeof(SUDSParticipant_eventOnDialogueChoiceMade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISUDSParticipant::execOnDialogueChoiceMade)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChoiceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogueChoiceMade_Implementation(Z_Param_Dialogue,Z_Param_ChoiceIndex);
	P_NATIVE_END;
}
// End Interface USUDSParticipant Function OnDialogueChoiceMade

// Begin Interface USUDSParticipant Function OnDialogueEvent
struct SUDSParticipant_eventOnDialogueEvent_Parms
{
	USUDSDialogue* Dialogue;
	FName EventName;
	TArray<FSUDSValue> Arguments;
};
void ISUDSParticipant::OnDialogueEvent(USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueEvent instead.");
}
static FName NAME_USUDSParticipant_OnDialogueEvent = FName(TEXT("OnDialogueEvent"));
void ISUDSParticipant::Execute_OnDialogueEvent(UObject* O, USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USUDSParticipant::StaticClass()));
	SUDSParticipant_eventOnDialogueEvent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USUDSParticipant_OnDialogueEvent);
	if (Func)
	{
		Parms.Dialogue=Dialogue;
		Parms.EventName=EventName;
		Parms.Arguments=Arguments;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISUDSParticipant*)(O->GetNativeInterfaceAddress(USUDSParticipant::StaticClass())))
	{
		I->OnDialogueEvent_Implementation(Dialogue,EventName,Arguments);
	}
}
struct Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/**\n\x09 * Called when an event is raised from dialogue \n\x09 * @param Dialogue The dialogue instance\n\x09 * @param EventName The name of the event that has been raised\n\x09 * @param Arguments \n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
		{ "ToolTip", "Called when an event is raised from dialogue\n@param Dialogue The dialogue instance\n@param EventName The name of the event that has been raised\n@param Arguments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Arguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueEvent_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueEvent_Parms, EventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 100687975
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueEvent_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) }; // 100687975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::NewProp_Arguments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSParticipant, nullptr, "OnDialogueEvent", nullptr, nullptr, Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::PropPointers), sizeof(SUDSParticipant_eventOnDialogueEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(SUDSParticipant_eventOnDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISUDSParticipant::execOnDialogueEvent)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
	P_GET_TARRAY_REF(FSUDSValue,Z_Param_Out_Arguments);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogueEvent_Implementation(Z_Param_Dialogue,Z_Param_EventName,Z_Param_Out_Arguments);
	P_NATIVE_END;
}
// End Interface USUDSParticipant Function OnDialogueEvent

// Begin Interface USUDSParticipant Function OnDialogueFinished
struct SUDSParticipant_eventOnDialogueFinished_Parms
{
	USUDSDialogue* Dialogue;
};
void ISUDSParticipant::OnDialogueFinished(USUDSDialogue* Dialogue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueFinished instead.");
}
static FName NAME_USUDSParticipant_OnDialogueFinished = FName(TEXT("OnDialogueFinished"));
void ISUDSParticipant::Execute_OnDialogueFinished(UObject* O, USUDSDialogue* Dialogue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USUDSParticipant::StaticClass()));
	SUDSParticipant_eventOnDialogueFinished_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USUDSParticipant_OnDialogueFinished);
	if (Func)
	{
		Parms.Dialogue=Dialogue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISUDSParticipant*)(O->GetNativeInterfaceAddress(USUDSParticipant::StaticClass())))
	{
		I->OnDialogueFinished_Implementation(Dialogue);
	}
}
struct Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/**\n\x09 * Called when a dialogue finishes.\n\x09 * @param Dialogue The dialogue\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
		{ "ToolTip", "Called when a dialogue finishes.\n@param Dialogue The dialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueFinished_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSParticipant, nullptr, "OnDialogueFinished", nullptr, nullptr, Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::PropPointers), sizeof(SUDSParticipant_eventOnDialogueFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(SUDSParticipant_eventOnDialogueFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISUDSParticipant::execOnDialogueFinished)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogueFinished_Implementation(Z_Param_Dialogue);
	P_NATIVE_END;
}
// End Interface USUDSParticipant Function OnDialogueFinished

// Begin Interface USUDSParticipant Function OnDialogueProceeding
struct SUDSParticipant_eventOnDialogueProceeding_Parms
{
	USUDSDialogue* Dialogue;
};
void ISUDSParticipant::OnDialogueProceeding(USUDSDialogue* Dialogue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueProceeding instead.");
}
static FName NAME_USUDSParticipant_OnDialogueProceeding = FName(TEXT("OnDialogueProceeding"));
void ISUDSParticipant::Execute_OnDialogueProceeding(UObject* O, USUDSDialogue* Dialogue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USUDSParticipant::StaticClass()));
	SUDSParticipant_eventOnDialogueProceeding_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USUDSParticipant_OnDialogueProceeding);
	if (Func)
	{
		Parms.Dialogue=Dialogue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISUDSParticipant*)(O->GetNativeInterfaceAddress(USUDSParticipant::StaticClass())))
	{
		I->OnDialogueProceeding_Implementation(Dialogue);
	}
}
struct Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/**\n\x09 * Called just before proceeding with the dialogue from the current speaker line; just after either a choice is made by the player\n\x09 * or the dialogue is just prompted to proceed with its single path.\n\x09 * Participants will be called before any dialogue event listeners.\n\x09 * @param Dialogue The dialogue\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
		{ "ToolTip", "Called just before proceeding with the dialogue from the current speaker line; just after either a choice is made by the player\nor the dialogue is just prompted to proceed with its single path.\nParticipants will be called before any dialogue event listeners.\n@param Dialogue The dialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueProceeding_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSParticipant, nullptr, "OnDialogueProceeding", nullptr, nullptr, Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::PropPointers), sizeof(SUDSParticipant_eventOnDialogueProceeding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::Function_MetaDataParams) };
static_assert(sizeof(SUDSParticipant_eventOnDialogueProceeding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISUDSParticipant::execOnDialogueProceeding)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogueProceeding_Implementation(Z_Param_Dialogue);
	P_NATIVE_END;
}
// End Interface USUDSParticipant Function OnDialogueProceeding

// Begin Interface USUDSParticipant Function OnDialogueSpeakerLine
struct SUDSParticipant_eventOnDialogueSpeakerLine_Parms
{
	USUDSDialogue* Dialogue;
};
void ISUDSParticipant::OnDialogueSpeakerLine(USUDSDialogue* Dialogue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueSpeakerLine instead.");
}
static FName NAME_USUDSParticipant_OnDialogueSpeakerLine = FName(TEXT("OnDialogueSpeakerLine"));
void ISUDSParticipant::Execute_OnDialogueSpeakerLine(UObject* O, USUDSDialogue* Dialogue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USUDSParticipant::StaticClass()));
	SUDSParticipant_eventOnDialogueSpeakerLine_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USUDSParticipant_OnDialogueSpeakerLine);
	if (Func)
	{
		Parms.Dialogue=Dialogue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISUDSParticipant*)(O->GetNativeInterfaceAddress(USUDSParticipant::StaticClass())))
	{
		I->OnDialogueSpeakerLine_Implementation(Dialogue);
	}
}
struct Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/**\n\x09 * Called when a new speaker line, potentially with attached choices, has become active in the dialogue.\n\x09 * This participant can provide any variable updates if it needs to at this point.\n\x09 * Participants will be called before any dialogue event listeners.\n\x09 * @param Dialogue The dialogue\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
		{ "ToolTip", "Called when a new speaker line, potentially with attached choices, has become active in the dialogue.\nThis participant can provide any variable updates if it needs to at this point.\nParticipants will be called before any dialogue event listeners.\n@param Dialogue The dialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueSpeakerLine_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSParticipant, nullptr, "OnDialogueSpeakerLine", nullptr, nullptr, Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::PropPointers), sizeof(SUDSParticipant_eventOnDialogueSpeakerLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(SUDSParticipant_eventOnDialogueSpeakerLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISUDSParticipant::execOnDialogueSpeakerLine)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogueSpeakerLine_Implementation(Z_Param_Dialogue);
	P_NATIVE_END;
}
// End Interface USUDSParticipant Function OnDialogueSpeakerLine

// Begin Interface USUDSParticipant Function OnDialogueStarting
struct SUDSParticipant_eventOnDialogueStarting_Parms
{
	USUDSDialogue* Dialogue;
	FName AtLabel;
};
void ISUDSParticipant::OnDialogueStarting(USUDSDialogue* Dialogue, FName AtLabel)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueStarting instead.");
}
static FName NAME_USUDSParticipant_OnDialogueStarting = FName(TEXT("OnDialogueStarting"));
void ISUDSParticipant::Execute_OnDialogueStarting(UObject* O, USUDSDialogue* Dialogue, FName AtLabel)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USUDSParticipant::StaticClass()));
	SUDSParticipant_eventOnDialogueStarting_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USUDSParticipant_OnDialogueStarting);
	if (Func)
	{
		Parms.Dialogue=Dialogue;
		Parms.AtLabel=AtLabel;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISUDSParticipant*)(O->GetNativeInterfaceAddress(USUDSParticipant::StaticClass())))
	{
		I->OnDialogueStarting_Implementation(Dialogue,AtLabel);
	}
}
struct Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/**\n\x09 * Called when a dialogue involving this participant is starting.\n\x09 * The implementation should probably set any starting variables referenced by the dialogue here (or you can do that\n\x09 * later during other functions). At this point there is no active speaker line, we're bootstrapping.\n\x09 * @param Dialogue The dialogue\n\x09 * @param AtLabel The label that the dialogue has started at (None if starting at the beginning)\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
		{ "ToolTip", "Called when a dialogue involving this participant is starting.\nThe implementation should probably set any starting variables referenced by the dialogue here (or you can do that\nlater during other functions). At this point there is no active speaker line, we're bootstrapping.\n@param Dialogue The dialogue\n@param AtLabel The label that the dialogue has started at (None if starting at the beginning)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AtLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueStarting_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::NewProp_AtLabel = { "AtLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueStarting_Parms, AtLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::NewProp_AtLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSParticipant, nullptr, "OnDialogueStarting", nullptr, nullptr, Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::PropPointers), sizeof(SUDSParticipant_eventOnDialogueStarting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::Function_MetaDataParams) };
static_assert(sizeof(SUDSParticipant_eventOnDialogueStarting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISUDSParticipant::execOnDialogueStarting)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_AtLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogueStarting_Implementation(Z_Param_Dialogue,Z_Param_AtLabel);
	P_NATIVE_END;
}
// End Interface USUDSParticipant Function OnDialogueStarting

// Begin Interface USUDSParticipant Function OnDialogueVariableChanged
struct SUDSParticipant_eventOnDialogueVariableChanged_Parms
{
	USUDSDialogue* Dialogue;
	FName VariableName;
	FSUDSValue Value;
	bool bFromScript;
};
void ISUDSParticipant::OnDialogueVariableChanged(USUDSDialogue* Dialogue, FName VariableName, FSUDSValue const& Value, bool bFromScript)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueVariableChanged instead.");
}
static FName NAME_USUDSParticipant_OnDialogueVariableChanged = FName(TEXT("OnDialogueVariableChanged"));
void ISUDSParticipant::Execute_OnDialogueVariableChanged(UObject* O, USUDSDialogue* Dialogue, FName VariableName, FSUDSValue const& Value, bool bFromScript)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USUDSParticipant::StaticClass()));
	SUDSParticipant_eventOnDialogueVariableChanged_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USUDSParticipant_OnDialogueVariableChanged);
	if (Func)
	{
		Parms.Dialogue=Dialogue;
		Parms.VariableName=VariableName;
		Parms.Value=Value;
		Parms.bFromScript=bFromScript;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISUDSParticipant*)(O->GetNativeInterfaceAddress(USUDSParticipant::StaticClass())))
	{
		I->OnDialogueVariableChanged_Implementation(Dialogue,VariableName,Value,bFromScript);
	}
}
struct Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/**\n\x09 * Called when a variable changes value in the dialogue \n\x09 * @param Dialogue The dialogue instance\n\x09 * @param VariableName The name of the variable which has changed value\n\x09 * @param Value The new value\n\x09 * @param bFromScript True if the value changed because of a script line, false if it changed because of code calling SetVariable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
		{ "ToolTip", "Called when a variable changes value in the dialogue\n@param Dialogue The dialogue instance\n@param VariableName The name of the variable which has changed value\n@param Value The new value\n@param bFromScript True if the value changed because of a script line, false if it changed because of code calling SetVariable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bFromScript_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromScript;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueVariableChanged_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueVariableChanged_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueVariableChanged_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 100687975
void Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_bFromScript_SetBit(void* Obj)
{
	((SUDSParticipant_eventOnDialogueVariableChanged_Parms*)Obj)->bFromScript = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_bFromScript = { "bFromScript", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSParticipant_eventOnDialogueVariableChanged_Parms), &Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_bFromScript_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::NewProp_bFromScript,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSParticipant, nullptr, "OnDialogueVariableChanged", nullptr, nullptr, Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::PropPointers), sizeof(SUDSParticipant_eventOnDialogueVariableChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(SUDSParticipant_eventOnDialogueVariableChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISUDSParticipant::execOnDialogueVariableChanged)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_GET_UBOOL(Z_Param_bFromScript);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogueVariableChanged_Implementation(Z_Param_Dialogue,Z_Param_VariableName,Z_Param_Out_Value,Z_Param_bFromScript);
	P_NATIVE_END;
}
// End Interface USUDSParticipant Function OnDialogueVariableChanged

// Begin Interface USUDSParticipant Function OnDialogueVariableRequested
struct SUDSParticipant_eventOnDialogueVariableRequested_Parms
{
	USUDSDialogue* Dialogue;
	FName VariableName;
};
void ISUDSParticipant::OnDialogueVariableRequested(USUDSDialogue* Dialogue, FName VariableName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueVariableRequested instead.");
}
static FName NAME_USUDSParticipant_OnDialogueVariableRequested = FName(TEXT("OnDialogueVariableRequested"));
void ISUDSParticipant::Execute_OnDialogueVariableRequested(UObject* O, USUDSDialogue* Dialogue, FName VariableName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USUDSParticipant::StaticClass()));
	SUDSParticipant_eventOnDialogueVariableRequested_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USUDSParticipant_OnDialogueVariableRequested);
	if (Func)
	{
		Parms.Dialogue=Dialogue;
		Parms.VariableName=VariableName;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISUDSParticipant*)(O->GetNativeInterfaceAddress(USUDSParticipant::StaticClass())))
	{
		I->OnDialogueVariableRequested_Implementation(Dialogue,VariableName);
	}
}
struct Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
		{ "Comment", "/**\n\x09 * Called when a variable value is requested by the dialogue script.\n\x09 * While you can set variables on the dialogue at any time and they're persistent, you can implement this method to\n\x09 * provide on-demand variable values (call SetVariable on the dialogue) if you want. This hook is called just before\n\x09 * the variables are used.\n\x09 * @param Dialogue The dialogue instance\n\x09 * @param VariableName The name of the variable which has changed value\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
		{ "ToolTip", "Called when a variable value is requested by the dialogue script.\nWhile you can set variables on the dialogue at any time and they're persistent, you can implement this method to\nprovide on-demand variable values (call SetVariable on the dialogue) if you want. This hook is called just before\nthe variables are used.\n@param Dialogue The dialogue instance\n@param VariableName The name of the variable which has changed value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueVariableRequested_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSParticipant_eventOnDialogueVariableRequested_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::NewProp_VariableName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSParticipant, nullptr, "OnDialogueVariableRequested", nullptr, nullptr, Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::PropPointers), sizeof(SUDSParticipant_eventOnDialogueVariableRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(SUDSParticipant_eventOnDialogueVariableRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISUDSParticipant::execOnDialogueVariableRequested)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogueVariableRequested_Implementation(Z_Param_Dialogue,Z_Param_VariableName);
	P_NATIVE_END;
}
// End Interface USUDSParticipant Function OnDialogueVariableRequested

// Begin Interface USUDSParticipant
void USUDSParticipant::StaticRegisterNativesUSUDSParticipant()
{
	UClass* Class = USUDSParticipant::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueParticipantPriority", &ISUDSParticipant::execGetDialogueParticipantPriority },
		{ "OnDialogueChoiceMade", &ISUDSParticipant::execOnDialogueChoiceMade },
		{ "OnDialogueEvent", &ISUDSParticipant::execOnDialogueEvent },
		{ "OnDialogueFinished", &ISUDSParticipant::execOnDialogueFinished },
		{ "OnDialogueProceeding", &ISUDSParticipant::execOnDialogueProceeding },
		{ "OnDialogueSpeakerLine", &ISUDSParticipant::execOnDialogueSpeakerLine },
		{ "OnDialogueStarting", &ISUDSParticipant::execOnDialogueStarting },
		{ "OnDialogueVariableChanged", &ISUDSParticipant::execOnDialogueVariableChanged },
		{ "OnDialogueVariableRequested", &ISUDSParticipant::execOnDialogueVariableRequested },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSParticipant);
UClass* Z_Construct_UClass_USUDSParticipant_NoRegister()
{
	return USUDSParticipant::StaticClass();
}
struct Z_Construct_UClass_USUDSParticipant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSParticipant.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USUDSParticipant_GetDialogueParticipantPriority, "GetDialogueParticipantPriority" }, // 2155940891
		{ &Z_Construct_UFunction_USUDSParticipant_OnDialogueChoiceMade, "OnDialogueChoiceMade" }, // 3408938299
		{ &Z_Construct_UFunction_USUDSParticipant_OnDialogueEvent, "OnDialogueEvent" }, // 544518713
		{ &Z_Construct_UFunction_USUDSParticipant_OnDialogueFinished, "OnDialogueFinished" }, // 553243549
		{ &Z_Construct_UFunction_USUDSParticipant_OnDialogueProceeding, "OnDialogueProceeding" }, // 1790934261
		{ &Z_Construct_UFunction_USUDSParticipant_OnDialogueSpeakerLine, "OnDialogueSpeakerLine" }, // 857071542
		{ &Z_Construct_UFunction_USUDSParticipant_OnDialogueStarting, "OnDialogueStarting" }, // 383458175
		{ &Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableChanged, "OnDialogueVariableChanged" }, // 3808238487
		{ &Z_Construct_UFunction_USUDSParticipant_OnDialogueVariableRequested, "OnDialogueVariableRequested" }, // 58949825
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISUDSParticipant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USUDSParticipant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSParticipant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSParticipant_Statics::ClassParams = {
	&USUDSParticipant::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSParticipant_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSParticipant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSParticipant()
{
	if (!Z_Registration_Info_UClass_USUDSParticipant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSParticipant.OuterSingleton, Z_Construct_UClass_USUDSParticipant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSParticipant.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSParticipant>()
{
	return USUDSParticipant::StaticClass();
}
USUDSParticipant::USUDSParticipant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSParticipant);
USUDSParticipant::~USUDSParticipant() {}
// End Interface USUDSParticipant

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSParticipant_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSParticipant, USUDSParticipant::StaticClass, TEXT("USUDSParticipant"), &Z_Registration_Info_UClass_USUDSParticipant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSParticipant), 3364695587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSParticipant_h_4263135537(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSParticipant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSParticipant_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
