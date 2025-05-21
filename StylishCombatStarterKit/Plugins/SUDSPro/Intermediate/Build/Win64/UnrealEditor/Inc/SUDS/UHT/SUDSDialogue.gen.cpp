// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSDialogue.h"
#include "SUDS/Public/SUDSScriptEdge.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSDialogue() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextGender();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScript_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNode_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeGosub_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeText_NoRegister();
SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature();
SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature();
SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature();
SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature();
SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature();
SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature();
SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature();
SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSDialogueState();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSScriptEdge();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Delegate FOnDialogueSpeakerLine
struct Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics
{
	struct _Script_SUDS_eventOnDialogueSpeakerLine_Parms
	{
		USUDSDialogue* Dialogue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueSpeakerLine_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SUDS, nullptr, "OnDialogueSpeakerLine__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueSpeakerLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueSpeakerLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueSpeakerLine_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueSpeakerLine, USUDSDialogue* Dialogue)
{
	struct _Script_SUDS_eventOnDialogueSpeakerLine_Parms
	{
		USUDSDialogue* Dialogue;
	};
	_Script_SUDS_eventOnDialogueSpeakerLine_Parms Parms;
	Parms.Dialogue=Dialogue;
	OnDialogueSpeakerLine.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueSpeakerLine

// Begin Delegate FOnDialogueChoice
struct Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics
{
	struct _Script_SUDS_eventOnDialogueChoice_Parms
	{
		USUDSDialogue* Dialogue;
		int32 ChoiceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueChoice_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueChoice_Parms, ChoiceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::NewProp_ChoiceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SUDS, nullptr, "OnDialogueChoice__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueChoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueChoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueChoice_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueChoice, USUDSDialogue* Dialogue, int32 ChoiceIndex)
{
	struct _Script_SUDS_eventOnDialogueChoice_Parms
	{
		USUDSDialogue* Dialogue;
		int32 ChoiceIndex;
	};
	_Script_SUDS_eventOnDialogueChoice_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.ChoiceIndex=ChoiceIndex;
	OnDialogueChoice.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueChoice

// Begin Delegate FOnDialogueProceeding
struct Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics
{
	struct _Script_SUDS_eventOnDialogueProceeding_Parms
	{
		USUDSDialogue* Dialogue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueProceeding_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SUDS, nullptr, "OnDialogueProceeding__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueProceeding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueProceeding_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueProceeding_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueProceeding, USUDSDialogue* Dialogue)
{
	struct _Script_SUDS_eventOnDialogueProceeding_Parms
	{
		USUDSDialogue* Dialogue;
	};
	_Script_SUDS_eventOnDialogueProceeding_Parms Parms;
	Parms.Dialogue=Dialogue;
	OnDialogueProceeding.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueProceeding

// Begin Delegate FOnDialogueStarting
struct Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics
{
	struct _Script_SUDS_eventOnDialogueStarting_Parms
	{
		USUDSDialogue* Dialogue;
		FName AtLabel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AtLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueStarting_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::NewProp_AtLabel = { "AtLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueStarting_Parms, AtLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::NewProp_AtLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SUDS, nullptr, "OnDialogueStarting__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueStarting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueStarting_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueStarting_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueStarting, USUDSDialogue* Dialogue, FName AtLabel)
{
	struct _Script_SUDS_eventOnDialogueStarting_Parms
	{
		USUDSDialogue* Dialogue;
		FName AtLabel;
	};
	_Script_SUDS_eventOnDialogueStarting_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.AtLabel=AtLabel;
	OnDialogueStarting.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueStarting

// Begin Delegate FOnDialogueFinished
struct Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics
{
	struct _Script_SUDS_eventOnDialogueFinished_Parms
	{
		USUDSDialogue* Dialogue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueFinished_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SUDS, nullptr, "OnDialogueFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueFinished, USUDSDialogue* Dialogue)
{
	struct _Script_SUDS_eventOnDialogueFinished_Parms
	{
		USUDSDialogue* Dialogue;
	};
	_Script_SUDS_eventOnDialogueFinished_Parms Parms;
	Parms.Dialogue=Dialogue;
	OnDialogueFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueFinished

// Begin Delegate FOnDialogueEvent
struct Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics
{
	struct _Script_SUDS_eventOnDialogueEvent_Parms
	{
		USUDSDialogue* Dialogue;
		FName EventName;
		TArray<FSUDSValue> Arguments;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueEvent_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueEvent_Parms, EventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 774184046
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnDialogueEvent_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) }; // 774184046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::NewProp_Arguments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SUDS, nullptr, "OnDialogueEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::_Script_SUDS_eventOnDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueEvent, USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments)
{
	struct _Script_SUDS_eventOnDialogueEvent_Parms
	{
		USUDSDialogue* Dialogue;
		FName EventName;
		TArray<FSUDSValue> Arguments;
	};
	_Script_SUDS_eventOnDialogueEvent_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.EventName=EventName;
	Parms.Arguments=Arguments;
	OnDialogueEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueEvent

// Begin Delegate FOnVariableChangedEvent
struct Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics
{
	struct _Script_SUDS_eventOnVariableChangedEvent_Parms
	{
		USUDSDialogue* Dialogue;
		FName VariableName;
		FSUDSValue Value;
		bool bFromScript;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnVariableChangedEvent_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnVariableChangedEvent_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnVariableChangedEvent_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 774184046
void Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_bFromScript_SetBit(void* Obj)
{
	((_Script_SUDS_eventOnVariableChangedEvent_Parms*)Obj)->bFromScript = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_bFromScript = { "bFromScript", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SUDS_eventOnVariableChangedEvent_Parms), &Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_bFromScript_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::NewProp_bFromScript,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SUDS, nullptr, "OnVariableChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::_Script_SUDS_eventOnVariableChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::_Script_SUDS_eventOnVariableChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnVariableChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnVariableChangedEvent, USUDSDialogue* Dialogue, FName VariableName, FSUDSValue const& Value, bool bFromScript)
{
	struct _Script_SUDS_eventOnVariableChangedEvent_Parms
	{
		USUDSDialogue* Dialogue;
		FName VariableName;
		FSUDSValue Value;
		bool bFromScript;
	};
	_Script_SUDS_eventOnVariableChangedEvent_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.VariableName=VariableName;
	Parms.Value=Value;
	Parms.bFromScript=bFromScript ? true : false;
	OnVariableChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnVariableChangedEvent

// Begin Delegate FOnVariableRequestedEvent
struct Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics
{
	struct _Script_SUDS_eventOnVariableRequestedEvent_Parms
	{
		USUDSDialogue* Dialogue;
		FName VariableName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnVariableRequestedEvent_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnVariableRequestedEvent_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::NewProp_VariableName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SUDS, nullptr, "OnVariableRequestedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::_Script_SUDS_eventOnVariableRequestedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::_Script_SUDS_eventOnVariableRequestedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnVariableRequestedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnVariableRequestedEvent, USUDSDialogue* Dialogue, FName VariableName)
{
	struct _Script_SUDS_eventOnVariableRequestedEvent_Parms
	{
		USUDSDialogue* Dialogue;
		FName VariableName;
	};
	_Script_SUDS_eventOnVariableRequestedEvent_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.VariableName=VariableName;
	OnVariableRequestedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnVariableRequestedEvent

// Begin ScriptStruct FSUDSDialogueState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SUDSDialogueState;
class UScriptStruct* FSUDSDialogueState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSDialogueState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SUDSDialogueState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSUDSDialogueState, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("SUDSDialogueState"));
	}
	return Z_Registration_Info_UScriptStruct_SUDSDialogueState.OuterSingleton;
}
template<> SUDS_API UScriptStruct* StaticStruct<FSUDSDialogueState>()
{
	return FSUDSDialogueState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSUDSDialogueState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Copy of the internal state of a dialogue\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copy of the internal state of a dialogue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextNodeID_MetaData[] = {
		{ "Category", "SUDS|Dialogue" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "Category", "SUDS|Dialogue" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoicesTaken_MetaData[] = {
		{ "Category", "SUDS|Dialogue" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnStack_MetaData[] = {
		{ "Category", "SUDS|Dialogue" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextNodeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Variables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChoicesTaken_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoicesTaken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSUDSDialogueState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_TextNodeID = { "TextNodeID", nullptr, (EPropertyFlags)0x0020080001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSDialogueState, TextNodeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextNodeID_MetaData), NewProp_TextNodeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_Variables_ValueProp = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 774184046
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_Variables_Key_KeyProp = { "Variables_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0020080001000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSDialogueState, Variables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 774184046
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_ChoicesTaken_Inner = { "ChoicesTaken", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_ChoicesTaken = { "ChoicesTaken", nullptr, (EPropertyFlags)0x0020080001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSDialogueState, ChoicesTaken), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoicesTaken_MetaData), NewProp_ChoicesTaken_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_ReturnStack_Inner = { "ReturnStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_ReturnStack = { "ReturnStack", nullptr, (EPropertyFlags)0x0020080001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSDialogueState, ReturnStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnStack_MetaData), NewProp_ReturnStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_TextNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_Variables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_Variables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_Variables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_ChoicesTaken_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_ChoicesTaken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_ReturnStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewProp_ReturnStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	&NewStructOps,
	"SUDSDialogueState",
	Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::PropPointers),
	sizeof(FSUDSDialogueState),
	alignof(FSUDSDialogueState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSUDSDialogueState()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSDialogueState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SUDSDialogueState.InnerSingleton, Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SUDSDialogueState.InnerSingleton;
}
// End ScriptStruct FSUDSDialogueState

// Begin Class USUDSDialogue Function AddParticipant
struct Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics
{
	struct SUDSDialogue_eventAddParticipant_Parms
	{
		UObject* Participant;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add a participant to this dialogue instance.\n\x09 * Participants are objects which want to be more closely involved in the dialogue. As opposed to event listeners,\n\x09 * participants get advance notice of events in the dialogue, and are also called in a known order, determined by\n\x09 * their priority. If you're providing variables to the dialogue, it is best to do it as a participant since it\n\x09 * gives you much more control.\n\x09 * @param Participant The participant object, which must implement ISUDSParticipant\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a participant to this dialogue instance.\nParticipants are objects which want to be more closely involved in the dialogue. As opposed to event listeners,\nparticipants get advance notice of events in the dialogue, and are also called in a known order, determined by\ntheir priority. If you're providing variables to the dialogue, it is best to do it as a participant since it\ngives you much more control.\n@param Participant The participant object, which must implement ISUDSParticipant" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventAddParticipant_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::NewProp_Participant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "AddParticipant", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::SUDSDialogue_eventAddParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::SUDSDialogue_eventAddParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_AddParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_AddParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execAddParticipant)
{
	P_GET_OBJECT(UObject,Z_Param_Participant);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddParticipant(Z_Param_Participant);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function AddParticipant

// Begin Class USUDSDialogue Function Choose
struct Z_Construct_UFunction_USUDSDialogue_Choose_Statics
{
	struct SUDSDialogue_eventChoose_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Picks one of the available choices \n\x09 * If there's only 1 you can still call this with Index = 0, but also see Continue\n\x09 * @param Index The index of the choice to make\n\x09 * @return True if the dialogue continues, false if it has now reached the end.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Picks one of the available choices\nIf there's only 1 you can still call this with Index = 0, but also see Continue\n@param Index The index of the choice to make\n@return True if the dialogue continues, false if it has now reached the end." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSDialogue_Choose_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventChoose_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_Choose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSDialogue_eventChoose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_Choose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventChoose_Parms), &Z_Construct_UFunction_USUDSDialogue_Choose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_Choose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_Choose_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_Choose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Choose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_Choose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "Choose", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_Choose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Choose_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_Choose_Statics::SUDSDialogue_eventChoose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Choose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_Choose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_Choose_Statics::SUDSDialogue_eventChoose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_Choose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_Choose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execChoose)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Choose(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function Choose

// Begin Class USUDSDialogue Function Continue
struct Z_Construct_UFunction_USUDSDialogue_Continue_Statics
{
	struct SUDSDialogue_eventContinue_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Continues the dialogue if (and ONLY if) there is only one valid path/choice out of the current node.\n\x09 * @return True if the dialogue continues after this, false if the dialogue is now at an end.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continues the dialogue if (and ONLY if) there is only one valid path/choice out of the current node.\n@return True if the dialogue continues after this, false if the dialogue is now at an end." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USUDSDialogue_Continue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSDialogue_eventContinue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_Continue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventContinue_Parms), &Z_Construct_UFunction_USUDSDialogue_Continue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_Continue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_Continue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Continue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_Continue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "Continue", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_Continue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Continue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_Continue_Statics::SUDSDialogue_eventContinue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Continue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_Continue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_Continue_Statics::SUDSDialogue_eventContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_Continue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_Continue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execContinue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Continue();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function Continue

// Begin Class USUDSDialogue Function End
struct Z_Construct_UFunction_USUDSDialogue_End_Statics
{
	struct SUDSDialogue_eventEnd_Parms
	{
		bool bQuietly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// End the dialogue early\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End the dialogue early" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bQuietly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USUDSDialogue_End_Statics::NewProp_bQuietly_SetBit(void* Obj)
{
	((SUDSDialogue_eventEnd_Parms*)Obj)->bQuietly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_End_Statics::NewProp_bQuietly = { "bQuietly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventEnd_Parms), &Z_Construct_UFunction_USUDSDialogue_End_Statics::NewProp_bQuietly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_End_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_End_Statics::NewProp_bQuietly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_End_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "End", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_End_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_End_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_End_Statics::SUDSDialogue_eventEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_End_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_End_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_End_Statics::SUDSDialogue_eventEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_End()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_End_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execEnd)
{
	P_GET_UBOOL(Z_Param_bQuietly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->End(Z_Param_bQuietly);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function End

// Begin Class USUDSDialogue Function GetChoices
struct Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics
{
	struct SUDSDialogue_eventGetChoices_Parms
	{
		TArray<FSUDSScriptEdge> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get all the current choices available, if you prefer this format\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all the current choices available, if you prefer this format" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUDSScriptEdge, METADATA_PARAMS(0, nullptr) }; // 4254885715
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetChoices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4254885715
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetChoices", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::SUDSDialogue_eventGetChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::SUDSDialogue_eventGetChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetChoices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSUDSScriptEdge>*)Z_Param__Result=P_THIS->GetChoices();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetChoices

// Begin Class USUDSDialogue Function GetChoiceText
struct Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics
{
	struct SUDSDialogue_eventGetChoiceText_Parms
	{
		int32 Index;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the text associated with a choice.\n\x09 * @param Index The index of the choice\n\x09 * @return The text. This may be blank if this represents just a link between 2 nodes and not a choice at all.\n\x09 *    Note that if you want to have only 1 choice but with associated text, this is fine and should be a choice\n\x09 *    line just like any other.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the text associated with a choice.\n@param Index The index of the choice\n@return The text. This may be blank if this represents just a link between 2 nodes and not a choice at all.\n   Note that if you want to have only 1 choice but with associated text, this is fine and should be a choice\n   line just like any other." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetChoiceText_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetChoiceText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetChoiceText", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::SUDSDialogue_eventGetChoiceText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::SUDSDialogue_eventGetChoiceText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetChoiceText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetChoiceText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetChoiceText)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetChoiceText(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetChoiceText

// Begin Class USUDSDialogue Function GetCurrentSourceLine
struct Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics
{
	struct SUDSDialogue_eventGetCurrentSourceLine_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the source line number of the current position of the dialogue (returns 0 if not applicable)\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the source line number of the current position of the dialogue (returns 0 if not applicable)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetCurrentSourceLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetCurrentSourceLine", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::SUDSDialogue_eventGetCurrentSourceLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::SUDSDialogue_eventGetCurrentSourceLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetCurrentSourceLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentSourceLine();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetCurrentSourceLine

// Begin Class USUDSDialogue Function GetNumberOfChoices
struct Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics
{
	struct SUDSDialogue_eventGetNumberOfChoices_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of choices available from this node.\n\x09 * Note, this will return 1 in the case of just linear text progression. The difference between just linked text\n\x09 * lines and a choice with only 1 option is whether the choice text is blank or not. \n\x09 * See also IsSimpleContinue()\n\x09 * @return The number of choices available\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of choices available from this node.\nNote, this will return 1 in the case of just linear text progression. The difference between just linked text\nlines and a choice with only 1 option is whether the choice text is blank or not.\nSee also IsSimpleContinue()\n@return The number of choices available" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetNumberOfChoices_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetNumberOfChoices", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::SUDSDialogue_eventGetNumberOfChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::SUDSDialogue_eventGetNumberOfChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetNumberOfChoices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumberOfChoices();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetNumberOfChoices

// Begin Class USUDSDialogue Function GetParametersInUse
struct Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics
{
	struct SUDSDialogue_eventGetParametersInUse_Parms
	{
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the set of text parameters that are actually being asked for in the current state of the dialogue.\n/// This will include parameters in the text, and parameters in any current choices being displayed.\n/// Use this if you want to be more specific about what parameters you supply when ISUDSParticipant::UpdateDialogueParameters\n/// is called.\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the set of text parameters that are actually being asked for in the current state of the dialogue.\nThis will include parameters in the text, and parameters in any current choices being displayed.\nUse this if you want to be more specific about what parameters you supply when ISUDSParticipant::UpdateDialogueParameters\nis called." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetParametersInUse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetParametersInUse", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::SUDSDialogue_eventGetParametersInUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::SUDSDialogue_eventGetParametersInUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetParametersInUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetParametersInUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetParametersInUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParametersInUse();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetParametersInUse

// Begin Class USUDSDialogue Function GetParticipants
struct Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics
{
	struct SUDSDialogue_eventGetParticipants_Parms
	{
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Retrieve participants from this dialogue\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve participants from this dialogue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetParticipants_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetParticipants", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::SUDSDialogue_eventGetParticipants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::SUDSDialogue_eventGetParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetParticipants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetParticipants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetParticipants)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetParticipants();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetParticipants

// Begin Class USUDSDialogue Function GetSavedState
struct Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics
{
	struct SUDSDialogue_eventGetSavedState_Parms
	{
		FSUDSDialogueState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retrieve a copy of the state of this dialogue.\n\x09 *  This is useful for saving the state of this dialogue.\n\x09 *  @return A static copy of the current state of this dialogue. This struct can be serialised with your save data,\n\x09 *  and contains both the state of variables and the current speaking node ID.\n\x09 *  @note If you save/load mid-dialogue then you're need to have written Text ID's into the source text to ensure they\n\x09 *  stay the same between edits, as you do for localisation. If you only save/load after dialogue has ended then\n\x09 *  you don't need to worry about this since the dialogue will always start from the beginning\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve a copy of the state of this dialogue.\nThis is useful for saving the state of this dialogue.\n@return A static copy of the current state of this dialogue. This struct can be serialised with your save data,\nand contains both the state of variables and the current speaking node ID.\n@note If you save/load mid-dialogue then you're need to have written Text ID's into the source text to ensure they\nstay the same between edits, as you do for localisation. If you only save/load after dialogue has ended then\nyou don't need to worry about this since the dialogue will always start from the beginning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetSavedState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSUDSDialogueState, METADATA_PARAMS(0, nullptr) }; // 3089716962
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetSavedState", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::SUDSDialogue_eventGetSavedState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::SUDSDialogue_eventGetSavedState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetSavedState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetSavedState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetSavedState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSUDSDialogueState*)Z_Param__Result=P_THIS->GetSavedState();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetSavedState

// Begin Class USUDSDialogue Function GetScript
struct Z_Construct_UFunction_USUDSDialogue_GetScript_Statics
{
	struct SUDSDialogue_eventGetScript_Parms
	{
		const USUDSScript* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the script asset this dialogue is based on\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the script asset this dialogue is based on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetScript_Parms, ReturnValue), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetScript", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::SUDSDialogue_eventGetScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::SUDSDialogue_eventGetScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetScript)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const USUDSScript**)Z_Param__Result=P_THIS->GetScript();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetScript

// Begin Class USUDSDialogue Function GetSpeakerDisplayName
struct Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics
{
	struct SUDSDialogue_eventGetSpeakerDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the display name of the current speaker\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the display name of the current speaker" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetSpeakerDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetSpeakerDisplayName", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::SUDSDialogue_eventGetSpeakerDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::SUDSDialogue_eventGetSpeakerDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetSpeakerDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetSpeakerDisplayName();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetSpeakerDisplayName

// Begin Class USUDSDialogue Function GetSpeakerID
struct Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics
{
	struct SUDSDialogue_eventGetSpeakerID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the ID of the current speaker\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the ID of the current speaker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetSpeakerID_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetSpeakerID", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::SUDSDialogue_eventGetSpeakerID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::SUDSDialogue_eventGetSpeakerID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetSpeakerID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetSpeakerID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetSpeakerID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSpeakerID();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetSpeakerID

// Begin Class USUDSDialogue Function GetSpeakerVoice
struct Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics
{
	struct SUDSDialogue_eventGetSpeakerVoice_Parms
	{
		UDialogueVoice* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the Dialogue Voice belonging to the current speaker, if voiced (Null otherwise)\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Dialogue Voice belonging to the current speaker, if voiced (Null otherwise)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetSpeakerVoice_Parms, ReturnValue), Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetSpeakerVoice", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::SUDSDialogue_eventGetSpeakerVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::SUDSDialogue_eventGetSpeakerVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetSpeakerVoice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogueVoice**)Z_Param__Result=P_THIS->GetSpeakerVoice();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetSpeakerVoice

// Begin Class USUDSDialogue Function GetText
struct Z_Construct_UFunction_USUDSDialogue_GetText_Statics
{
	struct SUDSDialogue_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the speech text for the current dialogue node\n/// Any parameters required will be requested from participants in the dialogue and replaced \n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the speech text for the current dialogue node\nAny parameters required will be requested from participants in the dialogue and replaced" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USUDSDialogue_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetText_Statics::SUDSDialogue_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetText_Statics::SUDSDialogue_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetText

// Begin Class USUDSDialogue Function GetVariable
struct Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics
{
	struct SUDSDialogue_eventGetVariable_Parms
	{
		FName Name;
		FSUDSValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get a variable in dialogue state as a general value type\n/// See GetDialogueText, GetDialogueInt etc for more type friendly versions, but if you want to access the state\n/// as a type-flexible value then you can do so with this function.\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a variable in dialogue state as a general value type\nSee GetDialogueText, GetDialogueInt etc for more type friendly versions, but if you want to access the state\nas a type-flexible value then you can do so with this function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariable_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariable_Parms, ReturnValue), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 774184046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVariable", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::SUDSDialogue_eventGetVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::SUDSDialogue_eventGetVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSUDSValue*)Z_Param__Result=P_THIS->GetVariable(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVariable

// Begin Class USUDSDialogue Function GetVariableBoolean
struct Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics
{
	struct SUDSDialogue_eventGetVariableBoolean_Parms
	{
		FName Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a boolean dialogue variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a boolean dialogue variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableBoolean_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSDialogue_eventGetVariableBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventGetVariableBoolean_Parms), &Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVariableBoolean", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::SUDSDialogue_eventGetVariableBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::SUDSDialogue_eventGetVariableBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVariableBoolean)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetVariableBoolean(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVariableBoolean

// Begin Class USUDSDialogue Function GetVariableFloat
struct Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics
{
	struct SUDSDialogue_eventGetVariableFloat_Parms
	{
		FName Name;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a float dialogue variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a float dialogue variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVariableFloat", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::SUDSDialogue_eventGetVariableFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::SUDSDialogue_eventGetVariableFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVariableFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVariableFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVariableFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVariableFloat(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVariableFloat

// Begin Class USUDSDialogue Function GetVariableGender
struct Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics
{
	struct SUDSDialogue_eventGetVariableGender_Parms
	{
		FName Name;
		ETextGender ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a gender dialogue variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a gender dialogue variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableGender_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableGender_Parms, ReturnValue), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(0, nullptr) }; // 3004401569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVariableGender", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::SUDSDialogue_eventGetVariableGender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::SUDSDialogue_eventGetVariableGender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVariableGender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVariableGender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVariableGender)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETextGender*)Z_Param__Result=P_THIS->GetVariableGender(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVariableGender

// Begin Class USUDSDialogue Function GetVariableInt
struct Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics
{
	struct SUDSDialogue_eventGetVariableInt_Parms
	{
		FName Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get an int dialogue variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an int dialogue variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVariableInt", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::SUDSDialogue_eventGetVariableInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::SUDSDialogue_eventGetVariableInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVariableInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVariableInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVariableInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetVariableInt(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVariableInt

// Begin Class USUDSDialogue Function GetVariableName
struct Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics
{
	struct SUDSDialogue_eventGetVariableName_Parms
	{
		FName Name;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a name dialogue variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a name dialogue variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVariableName", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::SUDSDialogue_eventGetVariableName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::SUDSDialogue_eventGetVariableName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVariableName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVariableName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVariableName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetVariableName(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVariableName

// Begin Class USUDSDialogue Function GetVariables
struct Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics
{
	struct SUDSDialogue_eventGetVariables_Parms
	{
		TMap<FName,FSUDSValue> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get all variables\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 774184046
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariables_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 774184046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVariables", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::SUDSDialogue_eventGetVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::SUDSDialogue_eventGetVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVariables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,FSUDSValue>*)Z_Param__Result=P_THIS->GetVariables();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVariables

// Begin Class USUDSDialogue Function GetVariableText
struct Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics
{
	struct SUDSDialogue_eventGetVariableText_Parms
	{
		FName Name;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a text dialogue variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a text dialogue variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableText_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVariableText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVariableText", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::SUDSDialogue_eventGetVariableText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::SUDSDialogue_eventGetVariableText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVariableText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVariableText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVariableText)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetVariableText(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVariableText

// Begin Class USUDSDialogue Function GetVoice
struct Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics
{
	struct SUDSDialogue_eventGetVoice_Parms
	{
		FString Name;
		UDialogueVoice* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the Dialogue Voice belonging to the named participant, if voiced (Null otherwise)\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Dialogue Voice belonging to the named participant, if voiced (Null otherwise)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVoice_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVoice_Parms, ReturnValue), Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVoice", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::SUDSDialogue_eventGetVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::SUDSDialogue_eventGetVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVoice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogueVoice**)Z_Param__Result=P_THIS->GetVoice(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVoice

// Begin Class USUDSDialogue Function GetVoicedLineSound
struct Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics
{
	struct SUDSDialogue_eventGetVoicedLineSound_Parms
	{
		bool bLooselyMatchTarget;
		USoundBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the current line is voiced, get the sound which would be played for it. \n\x09 * @param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)\n\x09 */" },
#endif
		{ "CPP_Default_bLooselyMatchTarget", "true" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the current line is voiced, get the sound which would be played for it.\n@param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)" },
#endif
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_bLooselyMatchTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooselyMatchTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::NewProp_bLooselyMatchTarget_SetBit(void* Obj)
{
	((SUDSDialogue_eventGetVoicedLineSound_Parms*)Obj)->bLooselyMatchTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::NewProp_bLooselyMatchTarget = { "bLooselyMatchTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventGetVoicedLineSound_Parms), &Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::NewProp_bLooselyMatchTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetVoicedLineSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::NewProp_bLooselyMatchTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetVoicedLineSound", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::SUDSDialogue_eventGetVoicedLineSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::SUDSDialogue_eventGetVoicedLineSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetVoicedLineSound)
{
	P_GET_UBOOL(Z_Param_bLooselyMatchTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundBase**)Z_Param__Result=P_THIS->GetVoicedLineSound(Z_Param_bLooselyMatchTarget);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetVoicedLineSound

// Begin Class USUDSDialogue Function GetWave
struct Z_Construct_UFunction_USUDSDialogue_GetWave_Statics
{
	struct SUDSDialogue_eventGetWave_Parms
	{
		UDialogueWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Get the DialogueWave associated with the current dialogue node\n/// Returns null if there is no wave for this line.\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the DialogueWave associated with the current dialogue node\nReturns null if there is no wave for this line." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventGetWave_Parms, ReturnValue), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "GetWave", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::SUDSDialogue_eventGetWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::SUDSDialogue_eventGetWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_GetWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_GetWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execGetWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogueWave**)Z_Param__Result=P_THIS->GetWave();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function GetWave

// Begin Class USUDSDialogue Function HasChoiceBeenTakenPreviously
struct Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics
{
	struct SUDSDialogue_eventHasChoiceBeenTakenPreviously_Parms
	{
		FSUDSScriptEdge Choice;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether a choice has been taken previously.\n\x09*\x09This is saved in dialogue state so will be remembered across save/restore.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether a choice has been taken previously.\n     This is saved in dialogue state so will be remembered across save/restore." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Choice;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventHasChoiceBeenTakenPreviously_Parms, Choice), Z_Construct_UScriptStruct_FSUDSScriptEdge, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choice_MetaData), NewProp_Choice_MetaData) }; // 4254885715
void Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSDialogue_eventHasChoiceBeenTakenPreviously_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventHasChoiceBeenTakenPreviously_Parms), &Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::NewProp_Choice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "HasChoiceBeenTakenPreviously", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::SUDSDialogue_eventHasChoiceBeenTakenPreviously_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::SUDSDialogue_eventHasChoiceBeenTakenPreviously_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execHasChoiceBeenTakenPreviously)
{
	P_GET_STRUCT_REF(FSUDSScriptEdge,Z_Param_Out_Choice);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasChoiceBeenTakenPreviously(Z_Param_Out_Choice);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function HasChoiceBeenTakenPreviously

// Begin Class USUDSDialogue Function HasChoiceIndexBeenTakenPreviously
struct Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics
{
	struct SUDSDialogue_eventHasChoiceIndexBeenTakenPreviously_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether the choice at the given index has been taken previously.\n\x09*\x09This is saved in dialogue state so will be remembered across save/restore.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the choice at the given index has been taken previously.\n     This is saved in dialogue state so will be remembered across save/restore." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventHasChoiceIndexBeenTakenPreviously_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSDialogue_eventHasChoiceIndexBeenTakenPreviously_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventHasChoiceIndexBeenTakenPreviously_Parms), &Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "HasChoiceIndexBeenTakenPreviously", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::SUDSDialogue_eventHasChoiceIndexBeenTakenPreviously_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::SUDSDialogue_eventHasChoiceIndexBeenTakenPreviously_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execHasChoiceIndexBeenTakenPreviously)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasChoiceIndexBeenTakenPreviously(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function HasChoiceIndexBeenTakenPreviously

// Begin Class USUDSDialogue Function IsCurrentLineVoiced
struct Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics
{
	struct SUDSDialogue_eventIsCurrentLineVoiced_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Return whether the current dialogue node has a Dialogue Wave associated with it\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return whether the current dialogue node has a Dialogue Wave associated with it" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSDialogue_eventIsCurrentLineVoiced_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventIsCurrentLineVoiced_Parms), &Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "IsCurrentLineVoiced", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::SUDSDialogue_eventIsCurrentLineVoiced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::SUDSDialogue_eventIsCurrentLineVoiced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execIsCurrentLineVoiced)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCurrentLineVoiced();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function IsCurrentLineVoiced

// Begin Class USUDSDialogue Function IsEnded
struct Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics
{
	struct SUDSDialogue_eventIsEnded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Returns true if the dialogue has reached the end\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the dialogue has reached the end" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSDialogue_eventIsEnded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventIsEnded_Parms), &Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "IsEnded", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::SUDSDialogue_eventIsEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::SUDSDialogue_eventIsEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_IsEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_IsEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execIsEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnded();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function IsEnded

// Begin Class USUDSDialogue Function IsSimpleContinue
struct Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics
{
	struct SUDSDialogue_eventIsSimpleContinue_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return whether to progress from here is a simple continue (no choices, no text), meaning you probably want\n\x09 * to display a simpler prompt to the player.\n\x09 * This will return false even if there's only one choice, if that choice has text associated with it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return whether to progress from here is a simple continue (no choices, no text), meaning you probably want\nto display a simpler prompt to the player.\nThis will return false even if there's only one choice, if that choice has text associated with it." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSDialogue_eventIsSimpleContinue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventIsSimpleContinue_Parms), &Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "IsSimpleContinue", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::SUDSDialogue_eventIsSimpleContinue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::SUDSDialogue_eventIsSimpleContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execIsSimpleContinue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSimpleContinue();
	P_NATIVE_END;
}
// End Class USUDSDialogue Function IsSimpleContinue

// Begin Class USUDSDialogue Function IsVariableSet
struct Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics
{
	struct SUDSDialogue_eventIsVariableSet_Parms
	{
		FName Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventIsVariableSet_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSDialogue_eventIsVariableSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventIsVariableSet_Parms), &Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "IsVariableSet", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::SUDSDialogue_eventIsVariableSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::SUDSDialogue_eventIsVariableSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_IsVariableSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_IsVariableSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execIsVariableSet)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVariableSet(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function IsVariableSet

// Begin Class USUDSDialogue Function PlayVoicedLine2D
struct Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics
{
	struct SUDSDialogue_eventPlayVoicedLine2D_Parms
	{
		float VolumeMultiplier;
		float PitchMultiplier;
		bool bLooselyMatchTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the current line is voiced, plays it in 2D.\n\x09 * @param VolumeMultiplier A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier A linear scalar multiplied with the pitch.\n\x09 * @param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)\n\x09 */" },
#endif
		{ "CPP_Default_bLooselyMatchTarget", "true" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the current line is voiced, plays it in 2D.\n@param VolumeMultiplier A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier A linear scalar multiplied with the pitch.\n@param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)" },
#endif
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static void NewProp_bLooselyMatchTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooselyMatchTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventPlayVoicedLine2D_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventPlayVoicedLine2D_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::NewProp_bLooselyMatchTarget_SetBit(void* Obj)
{
	((SUDSDialogue_eventPlayVoicedLine2D_Parms*)Obj)->bLooselyMatchTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::NewProp_bLooselyMatchTarget = { "bLooselyMatchTarget", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventPlayVoicedLine2D_Parms), &Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::NewProp_bLooselyMatchTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::NewProp_bLooselyMatchTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "PlayVoicedLine2D", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::SUDSDialogue_eventPlayVoicedLine2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::SUDSDialogue_eventPlayVoicedLine2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execPlayVoicedLine2D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_GET_UBOOL(Z_Param_bLooselyMatchTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayVoicedLine2D(Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_bLooselyMatchTarget);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function PlayVoicedLine2D

// Begin Class USUDSDialogue Function PlayVoicedLineAtLocation
struct Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics
{
	struct SUDSDialogue_eventPlayVoicedLineAtLocation_Parms
	{
		FVector Location;
		FRotator Rotation;
		float VolumeMultiplier;
		float PitchMultiplier;
		USoundAttenuation* AttenuationSettings;
		bool bLooselyMatchTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the current line is voiced, plays it at the given location.\n\x09 * @param Location World position to play dialogue at\n\x09 * @param Rotation World rotation to play dialogue at\n\x09 * @param VolumeMultiplier A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier A linear scalar multiplied with the pitch.\n\x09 * @param AttenuationSettings Override attenuation settings package to play sound with\n\x09 * @param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)\n     */" },
#endif
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bLooselyMatchTarget", "true" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the current line is voiced, plays it at the given location.\n@param Location World position to play dialogue at\n@param Rotation World rotation to play dialogue at\n@param VolumeMultiplier A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier A linear scalar multiplied with the pitch.\n@param AttenuationSettings Override attenuation settings package to play sound with\n@param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)" },
#endif
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static void NewProp_bLooselyMatchTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooselyMatchTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventPlayVoicedLineAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventPlayVoicedLineAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventPlayVoicedLineAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventPlayVoicedLineAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventPlayVoicedLineAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_bLooselyMatchTarget_SetBit(void* Obj)
{
	((SUDSDialogue_eventPlayVoicedLineAtLocation_Parms*)Obj)->bLooselyMatchTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_bLooselyMatchTarget = { "bLooselyMatchTarget", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventPlayVoicedLineAtLocation_Parms), &Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_bLooselyMatchTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::NewProp_bLooselyMatchTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "PlayVoicedLineAtLocation", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::SUDSDialogue_eventPlayVoicedLineAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::SUDSDialogue_eventPlayVoicedLineAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execPlayVoicedLineAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
	P_GET_UBOOL(Z_Param_bLooselyMatchTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayVoicedLineAtLocation(Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_AttenuationSettings,Z_Param_bLooselyMatchTarget);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function PlayVoicedLineAtLocation

// Begin Class USUDSDialogue Function ResetState
struct Z_Construct_UFunction_USUDSDialogue_ResetState_Statics
{
	struct SUDSDialogue_eventResetState_Parms
	{
		bool bResetVariables;
		bool bResetPosition;
		bool bResetVisited;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reset the state of this dialogue.\n\x09 * @param bResetVariables If true, resets all variable state\n\x09 * @param bResetPosition If true, resets the current position in the dialogue (which speaker line is next)\n\x09 * @param bResetVisited If true, resets the memory of which choices have been made\n\x09 */" },
#endif
		{ "CPP_Default_bResetPosition", "true" },
		{ "CPP_Default_bResetVariables", "true" },
		{ "CPP_Default_bResetVisited", "true" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset the state of this dialogue.\n@param bResetVariables If true, resets all variable state\n@param bResetPosition If true, resets the current position in the dialogue (which speaker line is next)\n@param bResetVisited If true, resets the memory of which choices have been made" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bResetVariables_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetVariables;
	static void NewProp_bResetPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetPosition;
	static void NewProp_bResetVisited_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetVisited;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetVariables_SetBit(void* Obj)
{
	((SUDSDialogue_eventResetState_Parms*)Obj)->bResetVariables = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetVariables = { "bResetVariables", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventResetState_Parms), &Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetVariables_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetPosition_SetBit(void* Obj)
{
	((SUDSDialogue_eventResetState_Parms*)Obj)->bResetPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetPosition = { "bResetPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventResetState_Parms), &Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetPosition_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetVisited_SetBit(void* Obj)
{
	((SUDSDialogue_eventResetState_Parms*)Obj)->bResetVisited = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetVisited = { "bResetVisited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventResetState_Parms), &Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetVisited_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::NewProp_bResetVisited,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "ResetState", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::SUDSDialogue_eventResetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::SUDSDialogue_eventResetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_ResetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_ResetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execResetState)
{
	P_GET_UBOOL(Z_Param_bResetVariables);
	P_GET_UBOOL(Z_Param_bResetPosition);
	P_GET_UBOOL(Z_Param_bResetVisited);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetState(Z_Param_bResetVariables,Z_Param_bResetPosition,Z_Param_bResetVisited);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function ResetState

// Begin Class USUDSDialogue Function Restart
struct Z_Construct_UFunction_USUDSDialogue_Restart_Statics
{
	struct SUDSDialogue_eventRestart_Parms
	{
		bool bResetState;
		FName StartLabel;
		bool bReRunHeader;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Restart the dialogue, either from the start or from a named label.\n\x09 * @param bResetState Whether to reset ALL dialogue state, as if the dialogue had been created anew. You mostly don't want\n\x09 * to do this; if you have certain things you want to reset every time, then use [set] commands in the header section\n\x09 * which runs every time the dialogue starts.\n\x09 * @param StartLabel Label to start running from; if None start from the beginning.\n\x09 * @param bReRunHeader If true (default), re-runs the header nodes before starting. Header nodes let you initialise\n\x09 *   state that should always be reset when the dialogue is restarted\n\x09 */" },
#endif
		{ "CPP_Default_bReRunHeader", "true" },
		{ "CPP_Default_bResetState", "false" },
		{ "CPP_Default_StartLabel", "None" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restart the dialogue, either from the start or from a named label.\n@param bResetState Whether to reset ALL dialogue state, as if the dialogue had been created anew. You mostly don't want\nto do this; if you have certain things you want to reset every time, then use [set] commands in the header section\nwhich runs every time the dialogue starts.\n@param StartLabel Label to start running from; if None start from the beginning.\n@param bReRunHeader If true (default), re-runs the header nodes before starting. Header nodes let you initialise\n  state that should always be reset when the dialogue is restarted" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bResetState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetState;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartLabel;
	static void NewProp_bReRunHeader_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReRunHeader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_bResetState_SetBit(void* Obj)
{
	((SUDSDialogue_eventRestart_Parms*)Obj)->bResetState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_bResetState = { "bResetState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventRestart_Parms), &Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_bResetState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_StartLabel = { "StartLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventRestart_Parms, StartLabel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_bReRunHeader_SetBit(void* Obj)
{
	((SUDSDialogue_eventRestart_Parms*)Obj)->bReRunHeader = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_bReRunHeader = { "bReRunHeader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventRestart_Parms), &Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_bReRunHeader_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_Restart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_bResetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_StartLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_Restart_Statics::NewProp_bReRunHeader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Restart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "Restart", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_Restart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Restart_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_Restart_Statics::SUDSDialogue_eventRestart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Restart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_Restart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_Restart_Statics::SUDSDialogue_eventRestart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_Restart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_Restart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execRestart)
{
	P_GET_UBOOL(Z_Param_bResetState);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartLabel);
	P_GET_UBOOL(Z_Param_bReRunHeader);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Restart(Z_Param_bResetState,Z_Param_StartLabel,Z_Param_bReRunHeader);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function Restart

// Begin Class USUDSDialogue Function RestoreSavedState
struct Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics
{
	struct SUDSDialogue_eventRestoreSavedState_Parms
	{
		FSUDSDialogueState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Restore the saved state of this dialogue.\n\x09 *  This is useful for restoring the state of this dialogue. It will attempt to restore both the value of variables,\n\x09 *  and the current speaking node in the dialogue. If you expect to be able to restore to a point mid-dialogue,\n\x09 *  it's important that Text IDs are defined in your source file (as for localisation) since that's used as the\n\x09 *  identifier of the current speaking node. If you only save/load after dialogue has ended then you don't need\n\x09 *  to worry about this as dialogue will restart each time.\n\x09 *  @param State Dialogue state that you previously retrieved from GetSavedState().\n\x09 *  @note After restoring, you'll want to either call Start() or Continue(), depending on whether you restored\n\x09 *  mid-dialogue or not (see IsEnded() to tell whether you did)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restore the saved state of this dialogue.\nThis is useful for restoring the state of this dialogue. It will attempt to restore both the value of variables,\nand the current speaking node in the dialogue. If you expect to be able to restore to a point mid-dialogue,\nit's important that Text IDs are defined in your source file (as for localisation) since that's used as the\nidentifier of the current speaking node. If you only save/load after dialogue has ended then you don't need\nto worry about this as dialogue will restart each time.\n@param State Dialogue state that you previously retrieved from GetSavedState().\n@note After restoring, you'll want to either call Start() or Continue(), depending on whether you restored\nmid-dialogue or not (see IsEnded() to tell whether you did)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventRestoreSavedState_Parms, State), Z_Construct_UScriptStruct_FSUDSDialogueState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 3089716962
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "RestoreSavedState", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::SUDSDialogue_eventRestoreSavedState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::SUDSDialogue_eventRestoreSavedState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_RestoreSavedState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_RestoreSavedState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execRestoreSavedState)
{
	P_GET_STRUCT_REF(FSUDSDialogueState,Z_Param_Out_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreSavedState(Z_Param_Out_State);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function RestoreSavedState

// Begin Class USUDSDialogue Function SetParticipants
struct Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics
{
	struct SUDSDialogue_eventSetParticipants_Parms
	{
		TArray<UObject*> NewParticipants;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the complete list of participants for this dialogue instance.\n\x09 * Participants are objects which want to be more closely involved in the dialogue. As opposed to event listeners,\n\x09 * participants get advance notice of events in the dialogue, and are also called in a known order, determined by\n\x09 * their priority. If you're providing variables to the dialogue, it is best to do it as a participant since it\n\x09 * gives you much more control.\n\x09 * @param NewParticipants List of new participants. Each should implement ISUDSParticipant\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the complete list of participants for this dialogue instance.\nParticipants are objects which want to be more closely involved in the dialogue. As opposed to event listeners,\nparticipants get advance notice of events in the dialogue, and are also called in a known order, determined by\ntheir priority. If you're providing variables to the dialogue, it is best to do it as a participant since it\ngives you much more control.\n@param NewParticipants List of new participants. Each should implement ISUDSParticipant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParticipants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewParticipants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::NewProp_NewParticipants_Inner = { "NewParticipants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::NewProp_NewParticipants = { "NewParticipants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetParticipants_Parms, NewParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParticipants_MetaData), NewProp_NewParticipants_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::NewProp_NewParticipants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::NewProp_NewParticipants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SetParticipants", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::SUDSDialogue_eventSetParticipants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::SUDSDialogue_eventSetParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SetParticipants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SetParticipants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSetParticipants)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_NewParticipants);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParticipants(Z_Param_Out_NewParticipants);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SetParticipants

// Begin Class USUDSDialogue Function SetVariable
struct Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics
{
	struct SUDSDialogue_eventSetVariable_Parms
	{
		FName Name;
		FSUDSValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Set a variable in dialogue state\n/// This is mostly only useful if you happen to already have a general purpose FSUDSValue.\n/// See SetVariableText, SetVariableInt etc for literal-friendly versions\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a variable in dialogue state\nThis is mostly only useful if you happen to already have a general purpose FSUDSValue.\nSee SetVariableText, SetVariableInt etc for literal-friendly versions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariable_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariable_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 774184046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SetVariable", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::SUDSDialogue_eventSetVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::SUDSDialogue_eventSetVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SetVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SetVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSetVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_STRUCT(FSUDSValue,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariable(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SetVariable

// Begin Class USUDSDialogue Function SetVariableBoolean
struct Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics
{
	struct SUDSDialogue_eventSetVariableBoolean_Parms
	{
		FName Name;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set a boolean dialogue variable \n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a boolean dialogue variable\n@param Name The name of the variable\n@param Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableBoolean_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::NewProp_Value_SetBit(void* Obj)
{
	((SUDSDialogue_eventSetVariableBoolean_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventSetVariableBoolean_Parms), &Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SetVariableBoolean", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::SUDSDialogue_eventSetVariableBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::SUDSDialogue_eventSetVariableBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSetVariableBoolean)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariableBoolean(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SetVariableBoolean

// Begin Class USUDSDialogue Function SetVariableFloat
struct Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics
{
	struct SUDSDialogue_eventSetVariableFloat_Parms
	{
		FName Name;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set a float dialogue variable \n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a float dialogue variable\n@param Name The name of the variable\n@param Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SetVariableFloat", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::SUDSDialogue_eventSetVariableFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::SUDSDialogue_eventSetVariableFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SetVariableFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SetVariableFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSetVariableFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariableFloat(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SetVariableFloat

// Begin Class USUDSDialogue Function SetVariableGender
struct Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics
{
	struct SUDSDialogue_eventSetVariableGender_Parms
	{
		FName Name;
		ETextGender Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set a gender dialogue variable \n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a gender dialogue variable\n@param Name The name of the variable\n@param Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableGender_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableGender_Parms, Value), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(0, nullptr) }; // 3004401569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::NewProp_Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SetVariableGender", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::SUDSDialogue_eventSetVariableGender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::SUDSDialogue_eventSetVariableGender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SetVariableGender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SetVariableGender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSetVariableGender)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_ENUM(ETextGender,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariableGender(Z_Param_Name,ETextGender(Z_Param_Value));
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SetVariableGender

// Begin Class USUDSDialogue Function SetVariableInt
struct Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics
{
	struct SUDSDialogue_eventSetVariableInt_Parms
	{
		FName Name;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set a dialogue variable on the passed in parameters collection.\n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a dialogue variable on the passed in parameters collection.\n@param Name The name of the variable\n@param Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SetVariableInt", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::SUDSDialogue_eventSetVariableInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::SUDSDialogue_eventSetVariableInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SetVariableInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SetVariableInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSetVariableInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariableInt(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SetVariableInt

// Begin Class USUDSDialogue Function SetVariableName
struct Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics
{
	struct SUDSDialogue_eventSetVariableName_Parms
	{
		FName Name;
		FName Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set a name dialogue variable\n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a name dialogue variable\n@param Name The name of the variable\n@param Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SetVariableName", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::SUDSDialogue_eventSetVariableName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::SUDSDialogue_eventSetVariableName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SetVariableName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SetVariableName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSetVariableName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariableName(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SetVariableName

// Begin Class USUDSDialogue Function SetVariableText
struct Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics
{
	struct SUDSDialogue_eventSetVariableText_Parms
	{
		FName Name;
		FText Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set a text dialogue variable\n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a text dialogue variable\n@param Name The name of the variable\n@param Value The value of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableText_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSetVariableText_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SetVariableText", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::SUDSDialogue_eventSetVariableText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::SUDSDialogue_eventSetVariableText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SetVariableText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SetVariableText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSetVariableText)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FTextProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariableText(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SetVariableText

// Begin Class USUDSDialogue Function SpawnVoicedLine2D
struct Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics
{
	struct SUDSDialogue_eventSpawnVoicedLine2D_Parms
	{
		float VolumeMultiplier;
		float PitchMultiplier;
		bool bLooselyMatchTarget;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the current line is voiced, spawn a sound for it in 2D. Use this if you want to control the sound while it's playing.\n\x09 * @param VolumeMultiplier A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier A linear scalar multiplied with the pitch.\n\x09 * @param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)\n\x09 */" },
#endif
		{ "CPP_Default_bLooselyMatchTarget", "true" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the current line is voiced, spawn a sound for it in 2D. Use this if you want to control the sound while it's playing.\n@param VolumeMultiplier A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier A linear scalar multiplied with the pitch.\n@param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)" },
#endif
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static void NewProp_bLooselyMatchTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooselyMatchTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSpawnVoicedLine2D_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSpawnVoicedLine2D_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_bLooselyMatchTarget_SetBit(void* Obj)
{
	((SUDSDialogue_eventSpawnVoicedLine2D_Parms*)Obj)->bLooselyMatchTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_bLooselyMatchTarget = { "bLooselyMatchTarget", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventSpawnVoicedLine2D_Parms), &Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_bLooselyMatchTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSpawnVoicedLine2D_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_bLooselyMatchTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SpawnVoicedLine2D", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::SUDSDialogue_eventSpawnVoicedLine2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::SUDSDialogue_eventSpawnVoicedLine2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSpawnVoicedLine2D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_GET_UBOOL(Z_Param_bLooselyMatchTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->SpawnVoicedLine2D(Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_bLooselyMatchTarget);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SpawnVoicedLine2D

// Begin Class USUDSDialogue Function SpawnVoicedLineAtLocation
struct Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics
{
	struct SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms
	{
		FVector Location;
		FRotator Rotation;
		float VolumeMultiplier;
		float PitchMultiplier;
		USoundAttenuation* AttenuationSettings;
		bool bLooselyMatchTarget;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the current line is voiced, spawn a sound for it at the given location. Unlike PlayVoicedLineAtLocation you can\n\x09 * attach this sound to a moving object if you want\n\x09 * @param Location World position to play dialogue at\n\x09 * @param Rotation World rotation to play dialogue at\n\x09 * @param VolumeMultiplier A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n\x09 * @param PitchMultiplier A linear scalar multiplied with the pitch.\n\x09 * @param AttenuationSettings Override attenuation settings package to play sound with\n\x09 * @param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)\n\x09 */" },
#endif
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bLooselyMatchTarget", "true" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the current line is voiced, spawn a sound for it at the given location. Unlike PlayVoicedLineAtLocation you can\nattach this sound to a moving object if you want\n@param Location World position to play dialogue at\n@param Rotation World rotation to play dialogue at\n@param VolumeMultiplier A linear scalar multiplied with the volume, in order to make the sound louder or softer.\n@param PitchMultiplier A linear scalar multiplied with the pitch.\n@param AttenuationSettings Override attenuation settings package to play sound with\n@param bLooselyMatchTarget When finding the sound, don't require the target DialogueVoice to match precisely (recommended)" },
#endif
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static void NewProp_bLooselyMatchTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooselyMatchTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_bLooselyMatchTarget_SetBit(void* Obj)
{
	((SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms*)Obj)->bLooselyMatchTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_bLooselyMatchTarget = { "bLooselyMatchTarget", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms), &Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_bLooselyMatchTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_bLooselyMatchTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "SpawnVoicedLineAtLocation", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::SUDSDialogue_eventSpawnVoicedLineAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execSpawnVoicedLineAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
	P_GET_UBOOL(Z_Param_bLooselyMatchTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->SpawnVoicedLineAtLocation(Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_AttenuationSettings,Z_Param_bLooselyMatchTarget);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function SpawnVoicedLineAtLocation

// Begin Class USUDSDialogue Function Start
struct Z_Construct_UFunction_USUDSDialogue_Start_Statics
{
	struct SUDSDialogue_eventStart_Parms
	{
		FName Label;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Begin the dialogue. Make sure you've added all participants before calling this.\n\x09 * This may not be the first time you've started this dialogue. All previous state is maintained to enable you\n\x09 * for example to take branching paths based on whether you've spoken to this character before.\n\x09 * If you want to reset *all* state, call Restart(true). However this is an extreme case; if you want to just\n\x09 * reset some variables then use the header section of the script to set variables to a default starting point.\n\x09 * @param Label The start point for this dialogue. If None, starts from the beginning.\n\x09 */" },
#endif
		{ "CPP_Default_Label", "None" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin the dialogue. Make sure you've added all participants before calling this.\nThis may not be the first time you've started this dialogue. All previous state is maintained to enable you\nfor example to take branching paths based on whether you've spoken to this character before.\nIf you want to reset *all* state, call Restart(true). However this is an extreme case; if you want to just\nreset some variables then use the header section of the script to set variables to a default starting point.\n@param Label The start point for this dialogue. If None, starts from the beginning." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_Start_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventStart_Parms, Label), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_Start_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_Start_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Start_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "Start", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Start_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_Start_Statics::SUDSDialogue_eventStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_Start_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_Start_Statics::SUDSDialogue_eventStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execStart)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Start(Z_Param_Label);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function Start

// Begin Class USUDSDialogue Function UnSetVariable
struct Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics
{
	struct SUDSDialogue_eventUnSetVariable_Parms
	{
		FName Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove the definition of a variable.\n\x09 * This has much same effect as setting the variable back to the default value for this type, since attempting to\n\x09 * retrieve a missing variable result in a default value.\n\x09 * @param Name The name of the variable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the definition of a variable.\nThis has much same effect as setting the variable back to the default value for this type, since attempting to\nretrieve a missing variable result in a default value.\n@param Name The name of the variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSDialogue_eventUnSetVariable_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSDialogue, nullptr, "UnSetVariable", nullptr, nullptr, Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::SUDSDialogue_eventUnSetVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::SUDSDialogue_eventUnSetVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSDialogue_UnSetVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSDialogue_UnSetVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSDialogue::execUnSetVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnSetVariable(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSDialogue Function UnSetVariable

// Begin Class USUDSDialogue
void USUDSDialogue::StaticRegisterNativesUSUDSDialogue()
{
	UClass* Class = USUDSDialogue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddParticipant", &USUDSDialogue::execAddParticipant },
		{ "Choose", &USUDSDialogue::execChoose },
		{ "Continue", &USUDSDialogue::execContinue },
		{ "End", &USUDSDialogue::execEnd },
		{ "GetChoices", &USUDSDialogue::execGetChoices },
		{ "GetChoiceText", &USUDSDialogue::execGetChoiceText },
		{ "GetCurrentSourceLine", &USUDSDialogue::execGetCurrentSourceLine },
		{ "GetNumberOfChoices", &USUDSDialogue::execGetNumberOfChoices },
		{ "GetParametersInUse", &USUDSDialogue::execGetParametersInUse },
		{ "GetParticipants", &USUDSDialogue::execGetParticipants },
		{ "GetSavedState", &USUDSDialogue::execGetSavedState },
		{ "GetScript", &USUDSDialogue::execGetScript },
		{ "GetSpeakerDisplayName", &USUDSDialogue::execGetSpeakerDisplayName },
		{ "GetSpeakerID", &USUDSDialogue::execGetSpeakerID },
		{ "GetSpeakerVoice", &USUDSDialogue::execGetSpeakerVoice },
		{ "GetText", &USUDSDialogue::execGetText },
		{ "GetVariable", &USUDSDialogue::execGetVariable },
		{ "GetVariableBoolean", &USUDSDialogue::execGetVariableBoolean },
		{ "GetVariableFloat", &USUDSDialogue::execGetVariableFloat },
		{ "GetVariableGender", &USUDSDialogue::execGetVariableGender },
		{ "GetVariableInt", &USUDSDialogue::execGetVariableInt },
		{ "GetVariableName", &USUDSDialogue::execGetVariableName },
		{ "GetVariables", &USUDSDialogue::execGetVariables },
		{ "GetVariableText", &USUDSDialogue::execGetVariableText },
		{ "GetVoice", &USUDSDialogue::execGetVoice },
		{ "GetVoicedLineSound", &USUDSDialogue::execGetVoicedLineSound },
		{ "GetWave", &USUDSDialogue::execGetWave },
		{ "HasChoiceBeenTakenPreviously", &USUDSDialogue::execHasChoiceBeenTakenPreviously },
		{ "HasChoiceIndexBeenTakenPreviously", &USUDSDialogue::execHasChoiceIndexBeenTakenPreviously },
		{ "IsCurrentLineVoiced", &USUDSDialogue::execIsCurrentLineVoiced },
		{ "IsEnded", &USUDSDialogue::execIsEnded },
		{ "IsSimpleContinue", &USUDSDialogue::execIsSimpleContinue },
		{ "IsVariableSet", &USUDSDialogue::execIsVariableSet },
		{ "PlayVoicedLine2D", &USUDSDialogue::execPlayVoicedLine2D },
		{ "PlayVoicedLineAtLocation", &USUDSDialogue::execPlayVoicedLineAtLocation },
		{ "ResetState", &USUDSDialogue::execResetState },
		{ "Restart", &USUDSDialogue::execRestart },
		{ "RestoreSavedState", &USUDSDialogue::execRestoreSavedState },
		{ "SetParticipants", &USUDSDialogue::execSetParticipants },
		{ "SetVariable", &USUDSDialogue::execSetVariable },
		{ "SetVariableBoolean", &USUDSDialogue::execSetVariableBoolean },
		{ "SetVariableFloat", &USUDSDialogue::execSetVariableFloat },
		{ "SetVariableGender", &USUDSDialogue::execSetVariableGender },
		{ "SetVariableInt", &USUDSDialogue::execSetVariableInt },
		{ "SetVariableName", &USUDSDialogue::execSetVariableName },
		{ "SetVariableText", &USUDSDialogue::execSetVariableText },
		{ "SpawnVoicedLine2D", &USUDSDialogue::execSpawnVoicedLine2D },
		{ "SpawnVoicedLineAtLocation", &USUDSDialogue::execSpawnVoicedLineAtLocation },
		{ "Start", &USUDSDialogue::execStart },
		{ "UnSetVariable", &USUDSDialogue::execUnSetVariable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSDialogue);
UClass* Z_Construct_UClass_USUDSDialogue_NoRegister()
{
	return USUDSDialogue::StaticClass();
}
struct Z_Construct_UClass_USUDSDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A Dialogue is a runtime instance of a Script (the asset on which the dialogue is based)\n * An Dialogue always stops on a speaker line, which may have player choices. It progresses when you call Continue()\n * or Choose() and will run that continuation until it hits the next speaker line. In between, other things may occur\n * such as setting variables, raising events etc, depending on the script. \n * Each dialogue instance has its own state, so you can invoke the same Script multiple times as different dialogues if you want.\n * Each dialogue maintains its own internal state, which includes a set of variables. \n * Dialogues can have Participants, which are objects closely involved in the dialogue and which have the best access to\n * supply and retrieve variables and get events first. Other objects can simply listen to the exposed events; while they\n * can manipulate dialogue state too, they have less controllable access in terms of *when* this happens. It's best to\n * have at least one Participant driving state on the dialogue (relaying it to external objects), and to have read-only\n * users like UIs use the event delegates instead.\n * Dialogues need to be owned by an object, mainly for garbage collection. It's recommended that you set the owner to\n * one of the NPCs in the dialogue.\n * You can save/restore the state of a dialogue via GetSavedState/RestoreSavedState. \n */" },
#endif
		{ "IncludePath", "SUDSDialogue.h" },
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Dialogue is a runtime instance of a Script (the asset on which the dialogue is based)\nAn Dialogue always stops on a speaker line, which may have player choices. It progresses when you call Continue()\nor Choose() and will run that continuation until it hits the next speaker line. In between, other things may occur\nsuch as setting variables, raising events etc, depending on the script.\nEach dialogue instance has its own state, so you can invoke the same Script multiple times as different dialogues if you want.\nEach dialogue maintains its own internal state, which includes a set of variables.\nDialogues can have Participants, which are objects closely involved in the dialogue and which have the best access to\nsupply and retrieve variables and get events first. Other objects can simply listen to the exposed events; while they\ncan manipulate dialogue state too, they have less controllable access in terms of *when* this happens. It's best to\nhave at least one Participant driving state on the dialogue (relaying it to external objects), and to have read-only\nusers like UIs use the event delegates instead.\nDialogues need to be owned by an object, mainly for garbage collection. It's recommended that you set the owner to\none of the NPCs in the dialogue.\nYou can save/restore the state of a dialogue via GetSavedState/RestoreSavedState." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpeakerLine_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when dialogue progresses and a new speaker line, potentially with new choices, is ready to be displayed\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when dialogue progresses and a new speaker line, potentially with new choices, is ready to be displayed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChoice_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when a choice is made in the dialogue by the player. At this point, the dialogue has not progressed\n/// as a result of that choice so the index passed can be used to reference the choice\n/// This event is ONLY raised if there's a choice of paths, not for just continuing a linear path.\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when a choice is made in the dialogue by the player. At this point, the dialogue has not progressed\nas a result of that choice so the index passed can be used to reference the choice\nThis event is ONLY raised if there's a choice of paths, not for just continuing a linear path." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProceeding_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when the dialog is about to proceed away from the current speaker line (because of a choice or continue)\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when the dialog is about to proceed away from the current speaker line (because of a choice or continue)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEvent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when an event is sent from the dialogue script. Any listeners or participants can process the event.\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when an event is sent from the dialogue script. Any listeners or participants can process the event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVariableChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when a variable is changed. \"FromScript\" is true if the variable was set by the script, false if set from code\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when a variable is changed. \"FromScript\" is true if the variable was set by the script, false if set from code" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVariableRequested_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when a variable is requested by the dialogue script. You can use this hook to set variables in the\n/// dialogue on-demand rather than up-front; anything set during this hook will be immediately used by the dialogue \n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when a variable is requested by the dialogue script. You can use this hook to set variables in the\ndialogue on-demand rather than up-front; anything set during this hook will be immediately used by the dialogue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStarting_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when the dialogue is starting, before the first speaker line\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when the dialogue is starting, before the first speaker line" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Event raised when the dialogue finishes\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event raised when the dialogue finishes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseScript_MetaData[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeakerNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRootChoiceNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// External objects which want to closely participate in the dialogue (not just listen to events)\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "External objects which want to closely participate in the dialogue (not just listen to events)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GosubReturnStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Stack of Gosub nodes to return to\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stack of Gosub nodes to return to" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpeakerLine;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChoice;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProceeding;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVariableChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVariableRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStarting;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseScript;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSpeakerNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRootChoiceNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GosubReturnStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GosubReturnStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USUDSDialogue_AddParticipant, "AddParticipant" }, // 2656492825
		{ &Z_Construct_UFunction_USUDSDialogue_Choose, "Choose" }, // 205288508
		{ &Z_Construct_UFunction_USUDSDialogue_Continue, "Continue" }, // 1804454051
		{ &Z_Construct_UFunction_USUDSDialogue_End, "End" }, // 4217005780
		{ &Z_Construct_UFunction_USUDSDialogue_GetChoices, "GetChoices" }, // 14041653
		{ &Z_Construct_UFunction_USUDSDialogue_GetChoiceText, "GetChoiceText" }, // 1862239564
		{ &Z_Construct_UFunction_USUDSDialogue_GetCurrentSourceLine, "GetCurrentSourceLine" }, // 4237256939
		{ &Z_Construct_UFunction_USUDSDialogue_GetNumberOfChoices, "GetNumberOfChoices" }, // 127294993
		{ &Z_Construct_UFunction_USUDSDialogue_GetParametersInUse, "GetParametersInUse" }, // 4234685041
		{ &Z_Construct_UFunction_USUDSDialogue_GetParticipants, "GetParticipants" }, // 375518067
		{ &Z_Construct_UFunction_USUDSDialogue_GetSavedState, "GetSavedState" }, // 3816246822
		{ &Z_Construct_UFunction_USUDSDialogue_GetScript, "GetScript" }, // 3665096748
		{ &Z_Construct_UFunction_USUDSDialogue_GetSpeakerDisplayName, "GetSpeakerDisplayName" }, // 2658541140
		{ &Z_Construct_UFunction_USUDSDialogue_GetSpeakerID, "GetSpeakerID" }, // 2833178451
		{ &Z_Construct_UFunction_USUDSDialogue_GetSpeakerVoice, "GetSpeakerVoice" }, // 4280097275
		{ &Z_Construct_UFunction_USUDSDialogue_GetText, "GetText" }, // 2833940165
		{ &Z_Construct_UFunction_USUDSDialogue_GetVariable, "GetVariable" }, // 994907175
		{ &Z_Construct_UFunction_USUDSDialogue_GetVariableBoolean, "GetVariableBoolean" }, // 1487407226
		{ &Z_Construct_UFunction_USUDSDialogue_GetVariableFloat, "GetVariableFloat" }, // 3156806269
		{ &Z_Construct_UFunction_USUDSDialogue_GetVariableGender, "GetVariableGender" }, // 1660340090
		{ &Z_Construct_UFunction_USUDSDialogue_GetVariableInt, "GetVariableInt" }, // 2780214575
		{ &Z_Construct_UFunction_USUDSDialogue_GetVariableName, "GetVariableName" }, // 175216332
		{ &Z_Construct_UFunction_USUDSDialogue_GetVariables, "GetVariables" }, // 206967935
		{ &Z_Construct_UFunction_USUDSDialogue_GetVariableText, "GetVariableText" }, // 1924630728
		{ &Z_Construct_UFunction_USUDSDialogue_GetVoice, "GetVoice" }, // 3038587187
		{ &Z_Construct_UFunction_USUDSDialogue_GetVoicedLineSound, "GetVoicedLineSound" }, // 2882985874
		{ &Z_Construct_UFunction_USUDSDialogue_GetWave, "GetWave" }, // 2232160764
		{ &Z_Construct_UFunction_USUDSDialogue_HasChoiceBeenTakenPreviously, "HasChoiceBeenTakenPreviously" }, // 4242453966
		{ &Z_Construct_UFunction_USUDSDialogue_HasChoiceIndexBeenTakenPreviously, "HasChoiceIndexBeenTakenPreviously" }, // 3069921351
		{ &Z_Construct_UFunction_USUDSDialogue_IsCurrentLineVoiced, "IsCurrentLineVoiced" }, // 3179721922
		{ &Z_Construct_UFunction_USUDSDialogue_IsEnded, "IsEnded" }, // 3205269000
		{ &Z_Construct_UFunction_USUDSDialogue_IsSimpleContinue, "IsSimpleContinue" }, // 245599124
		{ &Z_Construct_UFunction_USUDSDialogue_IsVariableSet, "IsVariableSet" }, // 3152750161
		{ &Z_Construct_UFunction_USUDSDialogue_PlayVoicedLine2D, "PlayVoicedLine2D" }, // 4216556355
		{ &Z_Construct_UFunction_USUDSDialogue_PlayVoicedLineAtLocation, "PlayVoicedLineAtLocation" }, // 2124404392
		{ &Z_Construct_UFunction_USUDSDialogue_ResetState, "ResetState" }, // 278117413
		{ &Z_Construct_UFunction_USUDSDialogue_Restart, "Restart" }, // 1211895451
		{ &Z_Construct_UFunction_USUDSDialogue_RestoreSavedState, "RestoreSavedState" }, // 2424413903
		{ &Z_Construct_UFunction_USUDSDialogue_SetParticipants, "SetParticipants" }, // 1422535597
		{ &Z_Construct_UFunction_USUDSDialogue_SetVariable, "SetVariable" }, // 2471615476
		{ &Z_Construct_UFunction_USUDSDialogue_SetVariableBoolean, "SetVariableBoolean" }, // 3872167132
		{ &Z_Construct_UFunction_USUDSDialogue_SetVariableFloat, "SetVariableFloat" }, // 3262679275
		{ &Z_Construct_UFunction_USUDSDialogue_SetVariableGender, "SetVariableGender" }, // 4272865423
		{ &Z_Construct_UFunction_USUDSDialogue_SetVariableInt, "SetVariableInt" }, // 2835771534
		{ &Z_Construct_UFunction_USUDSDialogue_SetVariableName, "SetVariableName" }, // 2807305894
		{ &Z_Construct_UFunction_USUDSDialogue_SetVariableText, "SetVariableText" }, // 1329751459
		{ &Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLine2D, "SpawnVoicedLine2D" }, // 2371057276
		{ &Z_Construct_UFunction_USUDSDialogue_SpawnVoicedLineAtLocation, "SpawnVoicedLineAtLocation" }, // 3044679169
		{ &Z_Construct_UFunction_USUDSDialogue_Start, "Start" }, // 356100899
		{ &Z_Construct_UFunction_USUDSDialogue_UnSetVariable, "UnSetVariable" }, // 1683128235
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnSpeakerLine = { "OnSpeakerLine", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, OnSpeakerLine), Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpeakerLine_MetaData), NewProp_OnSpeakerLine_MetaData) }; // 231672538
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnChoice = { "OnChoice", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, OnChoice), Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChoice_MetaData), NewProp_OnChoice_MetaData) }; // 2912575560
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnProceeding = { "OnProceeding", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, OnProceeding), Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProceeding_MetaData), NewProp_OnProceeding_MetaData) }; // 4033298859
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnEvent = { "OnEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, OnEvent), Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEvent_MetaData), NewProp_OnEvent_MetaData) }; // 1942464456
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnVariableChanged = { "OnVariableChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, OnVariableChanged), Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVariableChanged_MetaData), NewProp_OnVariableChanged_MetaData) }; // 1013291167
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnVariableRequested = { "OnVariableRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, OnVariableRequested), Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVariableRequested_MetaData), NewProp_OnVariableRequested_MetaData) }; // 2151099652
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnStarting = { "OnStarting", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, OnStarting), Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStarting_MetaData), NewProp_OnStarting_MetaData) }; // 3602870183
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, OnFinished), Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 3235555731
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_BaseScript = { "BaseScript", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, BaseScript), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseScript_MetaData), NewProp_BaseScript_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_CurrentSpeakerNode = { "CurrentSpeakerNode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, CurrentSpeakerNode), Z_Construct_UClass_USUDSScriptNodeText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpeakerNode_MetaData), NewProp_CurrentSpeakerNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_CurrentRootChoiceNode = { "CurrentRootChoiceNode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, CurrentRootChoiceNode), Z_Construct_UClass_USUDSScriptNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRootChoiceNode_MetaData), NewProp_CurrentRootChoiceNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_GosubReturnStack_Inner = { "GosubReturnStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USUDSScriptNodeGosub_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USUDSDialogue_Statics::NewProp_GosubReturnStack = { "GosubReturnStack", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSDialogue, GosubReturnStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GosubReturnStack_MetaData), NewProp_GosubReturnStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUDSDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnSpeakerLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnProceeding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnVariableChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnVariableRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnStarting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_OnFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_BaseScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_CurrentSpeakerNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_CurrentRootChoiceNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_Participants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_Participants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_GosubReturnStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSDialogue_Statics::NewProp_GosubReturnStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSDialogue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USUDSDialogue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSDialogue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSDialogue_Statics::ClassParams = {
	&USUDSDialogue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USUDSDialogue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USUDSDialogue_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSDialogue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSDialogue()
{
	if (!Z_Registration_Info_UClass_USUDSDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSDialogue.OuterSingleton, Z_Construct_UClass_USUDSDialogue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSDialogue.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSDialogue>()
{
	return USUDSDialogue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSDialogue);
USUDSDialogue::~USUDSDialogue() {}
// End Class USUDSDialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSUDSDialogueState::StaticStruct, Z_Construct_UScriptStruct_FSUDSDialogueState_Statics::NewStructOps, TEXT("SUDSDialogueState"), &Z_Registration_Info_UScriptStruct_SUDSDialogueState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSUDSDialogueState), 3089716962U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSDialogue, USUDSDialogue::StaticClass, TEXT("USUDSDialogue"), &Z_Registration_Info_UClass_USUDSDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSDialogue), 3590846504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_2052091264(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSDialogue_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
