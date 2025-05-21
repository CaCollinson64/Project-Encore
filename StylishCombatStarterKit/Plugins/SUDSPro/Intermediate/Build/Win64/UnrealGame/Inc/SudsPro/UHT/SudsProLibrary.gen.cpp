// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/SudsProLibrary.h"
#include "SUDS/Public/SUDSDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScript_NoRegister();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSDialogueState();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProLibrary();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProLibrary_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProUiLink_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Class USudsProLibrary Function FindDialogueCharacter
struct Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics
{
	struct SudsProLibrary_eventFindDialogueCharacter_Parms
	{
		const USUDSDialogue* Dialogue;
		FName CharacterIdentifier;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/**\n\x09 * Helper function to try to retrieve an actor which implements ISudsProCharacter and answers to the given identifier.\n\x09 * @param Dialogue The dialogue to find the character in\n\x09 * @param CharacterIdentifier The identifier of the character, as reported by ISudsProCharacter::GetDialogueCharacterIdentifier.\n\x09 * @return The character actor. May return null if not found, or if the object responding to this character identifier isn't an actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProLibrary.h" },
		{ "ToolTip", "Helper function to try to retrieve an actor which implements ISudsProCharacter and answers to the given identifier.\n@param Dialogue The dialogue to find the character in\n@param CharacterIdentifier The identifier of the character, as reported by ISudsProCharacter::GetDialogueCharacterIdentifier.\n@return The character actor. May return null if not found, or if the object responding to this character identifier isn't an actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterIdentifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventFindDialogueCharacter_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::NewProp_CharacterIdentifier = { "CharacterIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventFindDialogueCharacter_Parms, CharacterIdentifier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventFindDialogueCharacter_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::NewProp_CharacterIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProLibrary, nullptr, "FindDialogueCharacter", nullptr, nullptr, Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::SudsProLibrary_eventFindDialogueCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::SudsProLibrary_eventFindDialogueCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProLibrary::execFindDialogueCharacter)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterIdentifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=USudsProLibrary::FindDialogueCharacter(Z_Param_Dialogue,Z_Param_CharacterIdentifier);
	P_NATIVE_END;
}
// End Class USudsProLibrary Function FindDialogueCharacter

// Begin Class USudsProLibrary Function GetDialogueWidgetClass
struct Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics
{
	struct SudsProLibrary_eventGetDialogueWidgetClass_Parms
	{
		TSubclassOf<UUserWidget> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/// Helper function to get the project setting \"WidgetClass\"\n" },
		{ "ModuleRelativePath", "Public/SudsProLibrary.h" },
		{ "ToolTip", "Helper function to get the project setting \"WidgetClass\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventGetDialogueWidgetClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProLibrary, nullptr, "GetDialogueWidgetClass", nullptr, nullptr, Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::SudsProLibrary_eventGetDialogueWidgetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::SudsProLibrary_eventGetDialogueWidgetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProLibrary::execGetDialogueWidgetClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UUserWidget>*)Z_Param__Result=USudsProLibrary::GetDialogueWidgetClass();
	P_NATIVE_END;
}
// End Class USudsProLibrary Function GetDialogueWidgetClass

// Begin Class USudsProLibrary Function StartDialogue
struct Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics
{
	struct SudsProLibrary_eventStartDialogue_Parms
	{
		UObject* WorldContextObject;
		UObject* Owner;
		USUDSScript* Script;
		FName StartLabel;
		FSUDSDialogueState SavedState;
		TSubclassOf<USudsProUiLink> UiClass;
		USUDSDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/**\n\x09* Start a dialogue based on a script, with no participants.\n\x09* Convenience version of calling CreateDialogue followed by SudsProSubsystem::StartDialogue\n\x09* @param WorldContextObject World context\n\x09* @param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n\x09*   could make sense to make the owner the NPC you're talking to for example.\n\x09* @param Script The script to base this dialogue on\n\x09* @param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n\x09* @param SavedState Optional saved state to start this dialogue with\n\x09* @param UiClass The UI to use to drive this dialogue. Leave null to use the default.\n\x09* @return The dialogue instance. \n\x09*/" },
		{ "CPP_Default_SavedState", "()" },
		{ "CPP_Default_StartLabel", "None" },
		{ "CPP_Default_UiClass", "None" },
		{ "ModuleRelativePath", "Public/SudsProLibrary.h" },
		{ "ToolTip", "Start a dialogue based on a script, with no participants.\nConvenience version of calling CreateDialogue followed by SudsProSubsystem::StartDialogue\n@param WorldContextObject World context\n@param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n  could make sense to make the owner the NPC you're talking to for example.\n@param Script The script to base this dialogue on\n@param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n@param SavedState Optional saved state to start this dialogue with\n@param UiClass The UI to use to drive this dialogue. Leave null to use the default.\n@return The dialogue instance." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Script;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedState;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UiClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogue_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogue_Parms, Script), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_StartLabel = { "StartLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogue_Parms, StartLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_SavedState = { "SavedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogue_Parms, SavedState), Z_Construct_UScriptStruct_FSUDSDialogueState, METADATA_PARAMS(0, nullptr) }; // 1168120026
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_UiClass = { "UiClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogue_Parms, UiClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USudsProUiLink_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogue_Parms, ReturnValue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_StartLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_SavedState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_UiClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProLibrary, nullptr, "StartDialogue", nullptr, nullptr, Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::SudsProLibrary_eventStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::SudsProLibrary_eventStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProLibrary_StartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProLibrary_StartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProLibrary::execStartDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_OBJECT(USUDSScript,Z_Param_Script);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartLabel);
	P_GET_STRUCT(FSUDSDialogueState,Z_Param_SavedState);
	P_GET_OBJECT(UClass,Z_Param_UiClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSDialogue**)Z_Param__Result=USudsProLibrary::StartDialogue(Z_Param_WorldContextObject,Z_Param_Owner,Z_Param_Script,Z_Param_StartLabel,Z_Param_SavedState,Z_Param_UiClass);
	P_NATIVE_END;
}
// End Class USudsProLibrary Function StartDialogue

// Begin Class USudsProLibrary Function StartDialogueWithParticipant
struct Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics
{
	struct SudsProLibrary_eventStartDialogueWithParticipant_Parms
	{
		UObject* WorldContextObject;
		UObject* Owner;
		USUDSScript* Script;
		UObject* Participant;
		FName StartLabel;
		FSUDSDialogueState SavedState;
		TSubclassOf<USudsProUiLink> UiClass;
		USUDSDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/**\n\x09* Start a dialogue instance based on a script, with a single participant.\n\x09* Convenience version of calling CreateDialogue followed by SudsProSubsystem::StartDialogue\n\x09* @param WorldContextObject World context\n\x09* @param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n\x09*   could make sense to make the owner the NPC you're talking to for example.\n\x09* @param Script The script to base this dialogue on\n\x09* @param Participant The participant, which must implement the ISUDSParticipant interface to be used.\n\x09*\x09Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.\n\x09*\x09Other objects can subscribe to events separately but do not have as much control.\n\x09* @param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n\x09* @param SavedState Optional saved state to start this dialogue with\n\x09* @param UiClass The UI to use to drive this dialogue. Leave null to use the default.\n\x09* @return The dialogue instance. \n\x09*/" },
		{ "CPP_Default_SavedState", "()" },
		{ "CPP_Default_StartLabel", "None" },
		{ "CPP_Default_UiClass", "None" },
		{ "ModuleRelativePath", "Public/SudsProLibrary.h" },
		{ "ToolTip", "Start a dialogue instance based on a script, with a single participant.\nConvenience version of calling CreateDialogue followed by SudsProSubsystem::StartDialogue\n@param WorldContextObject World context\n@param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n  could make sense to make the owner the NPC you're talking to for example.\n@param Script The script to base this dialogue on\n@param Participant The participant, which must implement the ISUDSParticipant interface to be used.\n      Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.\n      Other objects can subscribe to events separately but do not have as much control.\n@param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n@param SavedState Optional saved state to start this dialogue with\n@param UiClass The UI to use to drive this dialogue. Leave null to use the default.\n@return The dialogue instance." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Script;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedState;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UiClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipant_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipant_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipant_Parms, Script), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipant_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_StartLabel = { "StartLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipant_Parms, StartLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_SavedState = { "SavedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipant_Parms, SavedState), Z_Construct_UScriptStruct_FSUDSDialogueState, METADATA_PARAMS(0, nullptr) }; // 1168120026
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_UiClass = { "UiClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipant_Parms, UiClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USudsProUiLink_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipant_Parms, ReturnValue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_Participant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_StartLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_SavedState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_UiClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProLibrary, nullptr, "StartDialogueWithParticipant", nullptr, nullptr, Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::SudsProLibrary_eventStartDialogueWithParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::SudsProLibrary_eventStartDialogueWithParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProLibrary::execStartDialogueWithParticipant)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_OBJECT(USUDSScript,Z_Param_Script);
	P_GET_OBJECT(UObject,Z_Param_Participant);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartLabel);
	P_GET_STRUCT(FSUDSDialogueState,Z_Param_SavedState);
	P_GET_OBJECT(UClass,Z_Param_UiClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSDialogue**)Z_Param__Result=USudsProLibrary::StartDialogueWithParticipant(Z_Param_WorldContextObject,Z_Param_Owner,Z_Param_Script,Z_Param_Participant,Z_Param_StartLabel,Z_Param_SavedState,Z_Param_UiClass);
	P_NATIVE_END;
}
// End Class USudsProLibrary Function StartDialogueWithParticipant

// Begin Class USudsProLibrary Function StartDialogueWithParticipants
struct Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics
{
	struct SudsProLibrary_eventStartDialogueWithParticipants_Parms
	{
		UObject* WorldContextObject;
		UObject* Owner;
		USUDSScript* Script;
		TArray<UObject*> Participants;
		FName StartLabel;
		FSUDSDialogueState SavedState;
		TSubclassOf<USudsProUiLink> UiClass;
		USUDSDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro" },
		{ "Comment", "/**\n\x09* Start a dialogue instance based on a script, with an initial set of participants.\n\x09* Convenience version of calling CreateDialogue followed by SudsProSubsystem::StartDialogue\n\x09* @param WorldContextObject World context\n\x09* @param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n\x09*   could make sense to make the owner the NPC you're talking to for example.\n\x09* @param Script The script to base this dialogue on\n\x09* @param Participants List of participants, each of which must implement the ISUDSParticipant interface to be used.\n\x09*\x09Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.\n\x09*\x09Other objects can subscribe to events separately but do not have as much control.\n\x09* @param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n\x09* @param SavedState Optional saved state to start this dialogue with\n\x09* @param UiClass The UI to use to drive this dialogue. Leave null to use the default.\n\x09* @return The dialogue instance. \n\x09*/" },
		{ "CPP_Default_SavedState", "()" },
		{ "CPP_Default_StartLabel", "None" },
		{ "CPP_Default_UiClass", "None" },
		{ "ModuleRelativePath", "Public/SudsProLibrary.h" },
		{ "ToolTip", "Start a dialogue instance based on a script, with an initial set of participants.\nConvenience version of calling CreateDialogue followed by SudsProSubsystem::StartDialogue\n@param WorldContextObject World context\n@param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n  could make sense to make the owner the NPC you're talking to for example.\n@param Script The script to base this dialogue on\n@param Participants List of participants, each of which must implement the ISUDSParticipant interface to be used.\n      Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.\n      Other objects can subscribe to events separately but do not have as much control.\n@param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n@param SavedState Optional saved state to start this dialogue with\n@param UiClass The UI to use to drive this dialogue. Leave null to use the default.\n@return The dialogue instance." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Script;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedState;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UiClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipants_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipants_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipants_Parms, Script), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipants_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_StartLabel = { "StartLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipants_Parms, StartLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_SavedState = { "SavedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipants_Parms, SavedState), Z_Construct_UScriptStruct_FSUDSDialogueState, METADATA_PARAMS(0, nullptr) }; // 1168120026
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_UiClass = { "UiClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipants_Parms, UiClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USudsProUiLink_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProLibrary_eventStartDialogueWithParticipants_Parms, ReturnValue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_Participants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_Participants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_StartLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_SavedState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_UiClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProLibrary, nullptr, "StartDialogueWithParticipants", nullptr, nullptr, Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::SudsProLibrary_eventStartDialogueWithParticipants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::SudsProLibrary_eventStartDialogueWithParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProLibrary::execStartDialogueWithParticipants)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_OBJECT(USUDSScript,Z_Param_Script);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartLabel);
	P_GET_STRUCT(FSUDSDialogueState,Z_Param_SavedState);
	P_GET_OBJECT(UClass,Z_Param_UiClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSDialogue**)Z_Param__Result=USudsProLibrary::StartDialogueWithParticipants(Z_Param_WorldContextObject,Z_Param_Owner,Z_Param_Script,Z_Param_Out_Participants,Z_Param_StartLabel,Z_Param_SavedState,Z_Param_UiClass);
	P_NATIVE_END;
}
// End Class USudsProLibrary Function StartDialogueWithParticipants

// Begin Class USudsProLibrary
void USudsProLibrary::StaticRegisterNativesUSudsProLibrary()
{
	UClass* Class = USudsProLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindDialogueCharacter", &USudsProLibrary::execFindDialogueCharacter },
		{ "GetDialogueWidgetClass", &USudsProLibrary::execGetDialogueWidgetClass },
		{ "StartDialogue", &USudsProLibrary::execStartDialogue },
		{ "StartDialogueWithParticipant", &USudsProLibrary::execStartDialogueWithParticipant },
		{ "StartDialogueWithParticipants", &USudsProLibrary::execStartDialogueWithParticipants },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProLibrary);
UClass* Z_Construct_UClass_USudsProLibrary_NoRegister()
{
	return USudsProLibrary::StaticClass();
}
struct Z_Construct_UClass_USudsProLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SudsProLibrary.h" },
		{ "ModuleRelativePath", "Public/SudsProLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProLibrary_FindDialogueCharacter, "FindDialogueCharacter" }, // 3103966985
		{ &Z_Construct_UFunction_USudsProLibrary_GetDialogueWidgetClass, "GetDialogueWidgetClass" }, // 1324969320
		{ &Z_Construct_UFunction_USudsProLibrary_StartDialogue, "StartDialogue" }, // 2996556625
		{ &Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipant, "StartDialogueWithParticipant" }, // 1768953985
		{ &Z_Construct_UFunction_USudsProLibrary_StartDialogueWithParticipants, "StartDialogueWithParticipants" }, // 1663017340
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProLibrary_Statics::ClassParams = {
	&USudsProLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProLibrary()
{
	if (!Z_Registration_Info_UClass_USudsProLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProLibrary.OuterSingleton, Z_Construct_UClass_USudsProLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProLibrary.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProLibrary>()
{
	return USudsProLibrary::StaticClass();
}
USudsProLibrary::USudsProLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProLibrary);
USudsProLibrary::~USudsProLibrary() {}
// End Class USudsProLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProLibrary, USudsProLibrary::StaticClass, TEXT("USudsProLibrary"), &Z_Registration_Info_UClass_USudsProLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProLibrary), 1826249142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProLibrary_h_3068466761(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
