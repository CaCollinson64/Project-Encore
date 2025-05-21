// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/SudsProSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SudsPro/Public/SudsProDialogueExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSParticipant_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProDialogueExtension_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProSubsystem();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProSubsystem_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProUiLink_NoRegister();
SUDSPRO_API UFunction* Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature();
SUDSPRO_API UFunction* Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature();
SUDSPRO_API UFunction* Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature();
SUDSPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSudsProQueuedEvent();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Delegate FOnSudsProDialogueStarting
struct Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics
{
	struct _Script_SudsPro_eventOnSudsProDialogueStarting_Parms
	{
		USUDSDialogue* Dialogue;
		FName Label;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SudsPro_eventOnSudsProDialogueStarting_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SudsPro_eventOnSudsProDialogueStarting_Parms, Label), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SudsPro, nullptr, "OnSudsProDialogueStarting__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::_Script_SudsPro_eventOnSudsProDialogueStarting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::_Script_SudsPro_eventOnSudsProDialogueStarting_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSudsProDialogueStarting_DelegateWrapper(const FMulticastScriptDelegate& OnSudsProDialogueStarting, USUDSDialogue* Dialogue, FName Label)
{
	struct _Script_SudsPro_eventOnSudsProDialogueStarting_Parms
	{
		USUDSDialogue* Dialogue;
		FName Label;
	};
	_Script_SudsPro_eventOnSudsProDialogueStarting_Parms Parms;
	Parms.Dialogue=Dialogue;
	Parms.Label=Label;
	OnSudsProDialogueStarting.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSudsProDialogueStarting

// Begin Delegate FOnSudsProDialogueFinished
struct Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics
{
	struct _Script_SudsPro_eventOnSudsProDialogueFinished_Parms
	{
		USUDSDialogue* Dialogue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SudsPro_eventOnSudsProDialogueFinished_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SudsPro, nullptr, "OnSudsProDialogueFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::_Script_SudsPro_eventOnSudsProDialogueFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::_Script_SudsPro_eventOnSudsProDialogueFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSudsProDialogueFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSudsProDialogueFinished, USUDSDialogue* Dialogue)
{
	struct _Script_SudsPro_eventOnSudsProDialogueFinished_Parms
	{
		USUDSDialogue* Dialogue;
	};
	_Script_SudsPro_eventOnSudsProDialogueFinished_Parms Parms;
	Parms.Dialogue=Dialogue;
	OnSudsProDialogueFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSudsProDialogueFinished

// Begin Delegate FOnSudsProSpeakerLineShown
struct Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics
{
	struct _Script_SudsPro_eventOnSudsProSpeakerLineShown_Parms
	{
		USUDSDialogue* Dialogue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SudsPro_eventOnSudsProSpeakerLineShown_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SudsPro, nullptr, "OnSudsProSpeakerLineShown__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::_Script_SudsPro_eventOnSudsProSpeakerLineShown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::_Script_SudsPro_eventOnSudsProSpeakerLineShown_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSudsProSpeakerLineShown_DelegateWrapper(const FMulticastScriptDelegate& OnSudsProSpeakerLineShown, USUDSDialogue* Dialogue)
{
	struct _Script_SudsPro_eventOnSudsProSpeakerLineShown_Parms
	{
		USUDSDialogue* Dialogue;
	};
	_Script_SudsPro_eventOnSudsProSpeakerLineShown_Parms Parms;
	Parms.Dialogue=Dialogue;
	OnSudsProSpeakerLineShown.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSudsProSpeakerLineShown

// Begin Class USudsProSubsystem Function CharacterNotifyCompleted
struct Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics
{
	struct SudsProSubsystem_eventCharacterNotifyCompleted_Parms
	{
		AActor* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/**\n\x09 * Method that ISudsProCharacter implementations should call to indicate they've finished processing the\n\x09 * character dialogue notification that we have been waiting for. \n\x09 * @param Character The character sending this confirmation\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
		{ "ToolTip", "Method that ISudsProCharacter implementations should call to indicate they've finished processing the\ncharacter dialogue notification that we have been waiting for.\n@param Character The character sending this confirmation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSubsystem_eventCharacterNotifyCompleted_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProSubsystem, nullptr, "CharacterNotifyCompleted", nullptr, nullptr, Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::SudsProSubsystem_eventCharacterNotifyCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::SudsProSubsystem_eventCharacterNotifyCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProSubsystem::execCharacterNotifyCompleted)
{
	P_GET_OBJECT(AActor,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CharacterNotifyCompleted(Z_Param_Character);
	P_NATIVE_END;
}
// End Class USudsProSubsystem Function CharacterNotifyCompleted

// Begin Class USudsProSubsystem Function EventCompleted
struct Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics
{
	struct SudsProSubsystem_eventEventCompleted_Parms
	{
		USudsProDialogueExtension* Extension;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/**\n\x09 * Method that extensions should call to indicate they've finished processing the current event asynchronously.\n\x09 * Extensions only need to call this if they indicate they're running async actions in response to an event.\n\x09 * @param Extension The extension sending this confirmation\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
		{ "ToolTip", "Method that extensions should call to indicate they've finished processing the current event asynchronously.\nExtensions only need to call this if they indicate they're running async actions in response to an event.\n@param Extension The extension sending this confirmation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Extension;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSubsystem_eventEventCompleted_Parms, Extension), Z_Construct_UClass_USudsProDialogueExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::NewProp_Extension,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProSubsystem, nullptr, "EventCompleted", nullptr, nullptr, Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::SudsProSubsystem_eventEventCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::SudsProSubsystem_eventEventCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProSubsystem_EventCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProSubsystem_EventCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProSubsystem::execEventCompleted)
{
	P_GET_OBJECT(USudsProDialogueExtension,Z_Param_Extension);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventCompleted(Z_Param_Extension);
	P_NATIVE_END;
}
// End Class USudsProSubsystem Function EventCompleted

// Begin Class USudsProSubsystem Function GetCurrentDialogue
struct Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics
{
	struct SudsProSubsystem_eventGetCurrentDialogue_Parms
	{
		USUDSDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/// Get the currently running dialogue\n" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
		{ "ToolTip", "Get the currently running dialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSubsystem_eventGetCurrentDialogue_Parms, ReturnValue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProSubsystem, nullptr, "GetCurrentDialogue", nullptr, nullptr, Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::SudsProSubsystem_eventGetCurrentDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::SudsProSubsystem_eventGetCurrentDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProSubsystem::execGetCurrentDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSDialogue**)Z_Param__Result=P_THIS->GetCurrentDialogue();
	P_NATIVE_END;
}
// End Class USudsProSubsystem Function GetCurrentDialogue

// Begin Class USudsProSubsystem Function PreSpeakerLineCompleted
struct Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics
{
	struct SudsProSubsystem_eventPreSpeakerLineCompleted_Parms
	{
		USudsProDialogueExtension* Extension;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/**\n\x09 * Method that extensions should call to indicate they've finished processing their pre-speaker line asynchronous actions.\n\x09 * Extensions only need to call this if they indicate they're running async actions in the pre-speaker line call.\n\x09 * @param Extension The extension sending this confirmation\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
		{ "ToolTip", "Method that extensions should call to indicate they've finished processing their pre-speaker line asynchronous actions.\nExtensions only need to call this if they indicate they're running async actions in the pre-speaker line call.\n@param Extension The extension sending this confirmation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Extension;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSubsystem_eventPreSpeakerLineCompleted_Parms, Extension), Z_Construct_UClass_USudsProDialogueExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::NewProp_Extension,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProSubsystem, nullptr, "PreSpeakerLineCompleted", nullptr, nullptr, Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::SudsProSubsystem_eventPreSpeakerLineCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::SudsProSubsystem_eventPreSpeakerLineCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProSubsystem::execPreSpeakerLineCompleted)
{
	P_GET_OBJECT(USudsProDialogueExtension,Z_Param_Extension);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreSpeakerLineCompleted(Z_Param_Extension);
	P_NATIVE_END;
}
// End Class USudsProSubsystem Function PreSpeakerLineCompleted

// Begin Class USudsProSubsystem Function ResumeDialogue
struct Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics
{
	struct SudsProSubsystem_eventResumeDialogue_Parms
	{
		USUDSDialogue* Dialogue;
		TSubclassOf<USudsProUiLink> UiClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/**\n\x09 * Resume dialogue. Will start from wherever the dialogue currently is, or restart if it's at the end.\n\x09 * @param Dialogue The dialogue instance to run. You might have already called RestoreSavedState on it.\n\x09 * @param UiClass The UI to use to drive this dialogue. Leave null to use the default.\n\x09 */" },
		{ "CPP_Default_UiClass", "None" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
		{ "ToolTip", "Resume dialogue. Will start from wherever the dialogue currently is, or restart if it's at the end.\n@param Dialogue The dialogue instance to run. You might have already called RestoreSavedState on it.\n@param UiClass The UI to use to drive this dialogue. Leave null to use the default." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UiClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSubsystem_eventResumeDialogue_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::NewProp_UiClass = { "UiClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSubsystem_eventResumeDialogue_Parms, UiClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USudsProUiLink_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::NewProp_UiClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProSubsystem, nullptr, "ResumeDialogue", nullptr, nullptr, Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::SudsProSubsystem_eventResumeDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::SudsProSubsystem_eventResumeDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProSubsystem::execResumeDialogue)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_OBJECT(UClass,Z_Param_UiClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeDialogue(Z_Param_Dialogue,Z_Param_UiClass);
	P_NATIVE_END;
}
// End Class USudsProSubsystem Function ResumeDialogue

// Begin Class USudsProSubsystem Function StartDialogue
struct Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics
{
	struct SudsProSubsystem_eventStartDialogue_Parms
	{
		USUDSDialogue* Dialogue;
		FName StartLabel;
		TSubclassOf<USudsProUiLink> UiClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/**\n\x09 * Start running a pre-created dialogue.\n\x09 * @param Dialogue The dialogue instance to run\n\x09 * @param StartLabel The label to start from\n\x09 * @param UiClass The UI to use to drive this dialogue. Leave null to use the default.\n\x09 * @param UiClass\n\x09 */" },
		{ "CPP_Default_StartLabel", "None" },
		{ "CPP_Default_UiClass", "None" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
		{ "ToolTip", "Start running a pre-created dialogue.\n@param Dialogue The dialogue instance to run\n@param StartLabel The label to start from\n@param UiClass The UI to use to drive this dialogue. Leave null to use the default.\n@param UiClass" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartLabel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UiClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSubsystem_eventStartDialogue_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::NewProp_StartLabel = { "StartLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSubsystem_eventStartDialogue_Parms, StartLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::NewProp_UiClass = { "UiClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSubsystem_eventStartDialogue_Parms, UiClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USudsProUiLink_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::NewProp_StartLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::NewProp_UiClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProSubsystem, nullptr, "StartDialogue", nullptr, nullptr, Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::SudsProSubsystem_eventStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::SudsProSubsystem_eventStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProSubsystem_StartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProSubsystem_StartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProSubsystem::execStartDialogue)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartLabel);
	P_GET_OBJECT(UClass,Z_Param_UiClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDialogue(Z_Param_Dialogue,Z_Param_StartLabel,Z_Param_UiClass);
	P_NATIVE_END;
}
// End Class USudsProSubsystem Function StartDialogue

// Begin Class USudsProSubsystem
void USudsProSubsystem::StaticRegisterNativesUSudsProSubsystem()
{
	UClass* Class = USudsProSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CharacterNotifyCompleted", &USudsProSubsystem::execCharacterNotifyCompleted },
		{ "EventCompleted", &USudsProSubsystem::execEventCompleted },
		{ "GetCurrentDialogue", &USudsProSubsystem::execGetCurrentDialogue },
		{ "PreSpeakerLineCompleted", &USudsProSubsystem::execPreSpeakerLineCompleted },
		{ "ResumeDialogue", &USudsProSubsystem::execResumeDialogue },
		{ "StartDialogue", &USudsProSubsystem::execStartDialogue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProSubsystem);
UClass* Z_Construct_UClass_USudsProSubsystem_NoRegister()
{
	return USudsProSubsystem::StaticClass();
}
struct Z_Construct_UClass_USudsProSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SudsProSubsystem.h" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueStarting_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFinished_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpeakerLineShown_MetaData[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/// Event raised just after a new speaker line has been sent to the UI\n" },
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
		{ "ToolTip", "Event raised just after a new speaker line has been sent to the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogue_MetaData[] = {
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueuedEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UiInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/SudsProSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueStarting;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpeakerLineShown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Extensions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueuedEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QueuedEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UiInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProSubsystem_CharacterNotifyCompleted, "CharacterNotifyCompleted" }, // 4183863210
		{ &Z_Construct_UFunction_USudsProSubsystem_EventCompleted, "EventCompleted" }, // 3914545032
		{ &Z_Construct_UFunction_USudsProSubsystem_GetCurrentDialogue, "GetCurrentDialogue" }, // 2160308334
		{ &Z_Construct_UFunction_USudsProSubsystem_PreSpeakerLineCompleted, "PreSpeakerLineCompleted" }, // 2892172690
		{ &Z_Construct_UFunction_USudsProSubsystem_ResumeDialogue, "ResumeDialogue" }, // 3759247698
		{ &Z_Construct_UFunction_USudsProSubsystem_StartDialogue, "StartDialogue" }, // 784086539
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_OnDialogueStarting = { "OnDialogueStarting", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSubsystem, OnDialogueStarting), Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueStarting_MetaData), NewProp_OnDialogueStarting_MetaData) }; // 1478424229
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_OnDialogueFinished = { "OnDialogueFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSubsystem, OnDialogueFinished), Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueFinished_MetaData), NewProp_OnDialogueFinished_MetaData) }; // 3287384390
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_OnSpeakerLineShown = { "OnSpeakerLineShown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSubsystem, OnSpeakerLineShown), Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpeakerLineShown_MetaData), NewProp_OnSpeakerLineShown_MetaData) }; // 3677594864
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_CurrentDialogue = { "CurrentDialogue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSubsystem, CurrentDialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDialogue_MetaData), NewProp_CurrentDialogue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USudsProDialogueExtension_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSubsystem, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extensions_MetaData), NewProp_Extensions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_QueuedEvents_Inner = { "QueuedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSudsProQueuedEvent, METADATA_PARAMS(0, nullptr) }; // 2256088383
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_QueuedEvents = { "QueuedEvents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSubsystem, QueuedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueuedEvents_MetaData), NewProp_QueuedEvents_MetaData) }; // 2256088383
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_UiInstance = { "UiInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProSubsystem, UiInstance), Z_Construct_UClass_USudsProUiLink_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UiInstance_MetaData), NewProp_UiInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USudsProSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_OnDialogueStarting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_OnDialogueFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_OnSpeakerLineShown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_CurrentDialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_Extensions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_Extensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_QueuedEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_QueuedEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProSubsystem_Statics::NewProp_UiInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USudsProSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USudsProSubsystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USUDSParticipant_NoRegister, (int32)VTABLE_OFFSET(USudsProSubsystem, ISUDSParticipant), false },  // 3364695587
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProSubsystem_Statics::ClassParams = {
	&USudsProSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USudsProSubsystem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSubsystem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProSubsystem()
{
	if (!Z_Registration_Info_UClass_USudsProSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProSubsystem.OuterSingleton, Z_Construct_UClass_USudsProSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProSubsystem.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProSubsystem>()
{
	return USudsProSubsystem::StaticClass();
}
USudsProSubsystem::USudsProSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProSubsystem);
USudsProSubsystem::~USudsProSubsystem() {}
// End Class USudsProSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProSubsystem, USudsProSubsystem::StaticClass, TEXT("USudsProSubsystem"), &Z_Registration_Info_UClass_USudsProSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProSubsystem), 970886202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProSubsystem_h_487455179(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
