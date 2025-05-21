// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSLibrary.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextGender();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSLibrary();
SUDS_API UClass* Z_Construct_UClass_USUDSLibrary_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScript_NoRegister();
SUDS_API UEnum* Z_Construct_UEnum_SUDS_ESUDSValueType();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Class USUDSLibrary Function CreateDialogue
struct Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics
{
	struct SUDSLibrary_eventCreateDialogue_Parms
	{
		UObject* Owner;
		USUDSScript* Script;
		bool bStartImmediately;
		FName StartLabel;
		USUDSDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a dialogue instance based on a script, with no participants.\n\x09* You should subsequently call \"SetParticipants\" or \"AddParticipant\" on the returned dialogue if you expect any\n\x09* parameters or speaker names to work.\n\x09* @param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n\x09*   could make sense to make the owner the NPC you're talking to for example.\n\x09* @param Script The script to base this dialogue on\n\x09* @param bStartImmediately Whether to call Start() on the dialogue automatically before returning\n\x09* @param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n\x09* @return The dialogue instance. \n\x09*/" },
#endif
		{ "CPP_Default_bStartImmediately", "false" },
		{ "CPP_Default_StartLabel", "None" },
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a dialogue instance based on a script, with no participants.\nYou should subsequently call \"SetParticipants\" or \"AddParticipant\" on the returned dialogue if you expect any\nparameters or speaker names to work.\n@param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n  could make sense to make the owner the NPC you're talking to for example.\n@param Script The script to base this dialogue on\n@param bStartImmediately Whether to call Start() on the dialogue automatically before returning\n@param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n@return The dialogue instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Script;
	static void NewProp_bStartImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartImmediately;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogue_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogue_Parms, Script), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_bStartImmediately_SetBit(void* Obj)
{
	((SUDSLibrary_eventCreateDialogue_Parms*)Obj)->bStartImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_bStartImmediately = { "bStartImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventCreateDialogue_Parms), &Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_bStartImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_StartLabel = { "StartLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogue_Parms, StartLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogue_Parms, ReturnValue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_bStartImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_StartLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "CreateDialogue", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::SUDSLibrary_eventCreateDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::SUDSLibrary_eventCreateDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_CreateDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_CreateDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execCreateDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_OBJECT(USUDSScript,Z_Param_Script);
	P_GET_UBOOL(Z_Param_bStartImmediately);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSDialogue**)Z_Param__Result=USUDSLibrary::CreateDialogue(Z_Param_Owner,Z_Param_Script,Z_Param_bStartImmediately,Z_Param_StartLabel);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function CreateDialogue

// Begin Class USUDSLibrary Function CreateDialogueWithParticipant
struct Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics
{
	struct SUDSLibrary_eventCreateDialogueWithParticipant_Parms
	{
		UObject* Owner;
		USUDSScript* Script;
		UObject* Participant;
		bool bStartImmediately;
		FName StartLabel;
		USUDSDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a dialogue instance based on a script, with a single participants.\n\x09* @param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n\x09*   could make sense to make the owner the NPC you're talking to for example.\n\x09* @param Script The script to base this dialogue on\n\x09* @param Participant The participant, which must implement the ISUDSParticipant interface to be used.\n\x09*\x09Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.\n\x09*\x09Other objects can subscribe to events separately but do not have as much control.\n\x09* @param bStartImmediately Whether to call Start() on the dialogue automatically before returning\n\x09* @param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n\x09* @return The dialogue instance. \n\x09*/" },
#endif
		{ "CPP_Default_bStartImmediately", "false" },
		{ "CPP_Default_StartLabel", "None" },
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a dialogue instance based on a script, with a single participants.\n@param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n  could make sense to make the owner the NPC you're talking to for example.\n@param Script The script to base this dialogue on\n@param Participant The participant, which must implement the ISUDSParticipant interface to be used.\n      Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.\n      Other objects can subscribe to events separately but do not have as much control.\n@param bStartImmediately Whether to call Start() on the dialogue automatically before returning\n@param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n@return The dialogue instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Script;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
	static void NewProp_bStartImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartImmediately;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipant_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipant_Parms, Script), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipant_Parms, Participant), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_bStartImmediately_SetBit(void* Obj)
{
	((SUDSLibrary_eventCreateDialogueWithParticipant_Parms*)Obj)->bStartImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_bStartImmediately = { "bStartImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventCreateDialogueWithParticipant_Parms), &Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_bStartImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_StartLabel = { "StartLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipant_Parms, StartLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipant_Parms, ReturnValue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_Participant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_bStartImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_StartLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "CreateDialogueWithParticipant", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::SUDSLibrary_eventCreateDialogueWithParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::SUDSLibrary_eventCreateDialogueWithParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execCreateDialogueWithParticipant)
{
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_OBJECT(USUDSScript,Z_Param_Script);
	P_GET_OBJECT(UObject,Z_Param_Participant);
	P_GET_UBOOL(Z_Param_bStartImmediately);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSDialogue**)Z_Param__Result=USUDSLibrary::CreateDialogueWithParticipant(Z_Param_Owner,Z_Param_Script,Z_Param_Participant,Z_Param_bStartImmediately,Z_Param_StartLabel);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function CreateDialogueWithParticipant

// Begin Class USUDSLibrary Function CreateDialogueWithParticipants
struct Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics
{
	struct SUDSLibrary_eventCreateDialogueWithParticipants_Parms
	{
		UObject* Owner;
		USUDSScript* Script;
		TArray<UObject*> Participants;
		bool bStartImmediately;
		FName StartLabel;
		USUDSDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a dialogue instance based on a script, with an initial set of participants.\n\x09* @param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n\x09*   could make sense to make the owner the NPC you're talking to for example.\n\x09* @param Script The script to base this dialogue on\n\x09* @param Participants List of participants, each of which must implement the ISUDSParticipant interface to be used.\n\x09*\x09Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.\n\x09*\x09Other objects can subscribe to events separately but do not have as much control.\n\x09* @param bStartImmediately Whether to call Start() on the dialogue automatically before returning\n\x09* @param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n\x09* @return The dialogue instance. \n\x09*/" },
#endif
		{ "CPP_Default_bStartImmediately", "false" },
		{ "CPP_Default_StartLabel", "None" },
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a dialogue instance based on a script, with an initial set of participants.\n@param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,\n  could make sense to make the owner the NPC you're talking to for example.\n@param Script The script to base this dialogue on\n@param Participants List of participants, each of which must implement the ISUDSParticipant interface to be used.\n      Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.\n      Other objects can subscribe to events separately but do not have as much control.\n@param bStartImmediately Whether to call Start() on the dialogue automatically before returning\n@param StartLabel If set to start immediately, which label to start from (None means start from the beginning)\n@return The dialogue instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Script;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
	static void NewProp_bStartImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartImmediately;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipants_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipants_Parms, Script), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipants_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
void Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_bStartImmediately_SetBit(void* Obj)
{
	((SUDSLibrary_eventCreateDialogueWithParticipants_Parms*)Obj)->bStartImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_bStartImmediately = { "bStartImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventCreateDialogueWithParticipants_Parms), &Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_bStartImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_StartLabel = { "StartLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipants_Parms, StartLabel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventCreateDialogueWithParticipants_Parms, ReturnValue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_Participants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_Participants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_bStartImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_StartLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "CreateDialogueWithParticipants", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::SUDSLibrary_eventCreateDialogueWithParticipants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::SUDSLibrary_eventCreateDialogueWithParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execCreateDialogueWithParticipants)
{
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_OBJECT(USUDSScript,Z_Param_Script);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
	P_GET_UBOOL(Z_Param_bStartImmediately);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSDialogue**)Z_Param__Result=USUDSLibrary::CreateDialogueWithParticipants(Z_Param_Owner,Z_Param_Script,Z_Param_Out_Participants,Z_Param_bStartImmediately,Z_Param_StartLabel);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function CreateDialogueWithParticipants

// Begin Class USUDSLibrary Function GetDialogueValueAsBoolean
struct Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics
{
	struct SUDSLibrary_eventGetDialogueValueAsBoolean_Parms
	{
		FSUDSValue Value;
		bool BoolValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try to extract a boolean value from a general SUDS value.\n\x09 * @param Value The SUDS value, which may contain many types of value\n\x09 * @param BoolValue The boolean value\n\x09 * @return True if the value was of type boolean and extracted correctly. False if not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to extract a boolean value from a general SUDS value.\n@param Value The SUDS value, which may contain many types of value\n@param BoolValue The boolean value\n@return True if the value was of type boolean and extracted correctly. False if not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsBoolean_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 774184046
void Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((SUDSLibrary_eventGetDialogueValueAsBoolean_Parms*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventGetDialogueValueAsBoolean_Parms), &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSLibrary_eventGetDialogueValueAsBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventGetDialogueValueAsBoolean_Parms), &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "GetDialogueValueAsBoolean", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::SUDSLibrary_eventGetDialogueValueAsBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::SUDSLibrary_eventGetDialogueValueAsBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execGetDialogueValueAsBoolean)
{
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_GET_UBOOL_REF(Z_Param_Out_BoolValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USUDSLibrary::GetDialogueValueAsBoolean(Z_Param_Out_Value,Z_Param_Out_BoolValue);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function GetDialogueValueAsBoolean

// Begin Class USUDSLibrary Function GetDialogueValueAsFloat
struct Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics
{
	struct SUDSLibrary_eventGetDialogueValueAsFloat_Parms
	{
		FSUDSValue Value;
		float FloatValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try to extract a float value from a general SUDS value.\n\x09 * @param Value The SUDS value, which may contain many types of value\n\x09 * @param FloatValue The float value\n\x09 * @return True if the value was of type float and extracted correctly. False if not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to extract a float value from a general SUDS value.\n@param Value The SUDS value, which may contain many types of value\n@param FloatValue The float value\n@return True if the value was of type float and extracted correctly. False if not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsFloat_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 774184046
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsFloat_Parms, FloatValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSLibrary_eventGetDialogueValueAsFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventGetDialogueValueAsFloat_Parms), &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "GetDialogueValueAsFloat", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::SUDSLibrary_eventGetDialogueValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::SUDSLibrary_eventGetDialogueValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execGetDialogueValueAsFloat)
{
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FloatValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USUDSLibrary::GetDialogueValueAsFloat(Z_Param_Out_Value,Z_Param_Out_FloatValue);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function GetDialogueValueAsFloat

// Begin Class USUDSLibrary Function GetDialogueValueAsGender
struct Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics
{
	struct SUDSLibrary_eventGetDialogueValueAsGender_Parms
	{
		FSUDSValue Value;
		ETextGender GenderValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try to extract a gender value from a general SUDS value.\n\x09 * @param Value The SUDS value, which may contain many types of value\n\x09 * @param GenderValue The gender value\n\x09 * @return True if the value was of type gender and extracted correctly. False if not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to extract a gender value from a general SUDS value.\n@param Value The SUDS value, which may contain many types of value\n@param GenderValue The gender value\n@return True if the value was of type gender and extracted correctly. False if not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenderValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenderValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsGender_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 774184046
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_GenderValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_GenderValue = { "GenderValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsGender_Parms, GenderValue), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(0, nullptr) }; // 3004401569
void Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSLibrary_eventGetDialogueValueAsGender_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventGetDialogueValueAsGender_Parms), &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_GenderValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_GenderValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "GetDialogueValueAsGender", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::SUDSLibrary_eventGetDialogueValueAsGender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::SUDSLibrary_eventGetDialogueValueAsGender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execGetDialogueValueAsGender)
{
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_GET_ENUM_REF(ETextGender,Z_Param_Out_GenderValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USUDSLibrary::GetDialogueValueAsGender(Z_Param_Out_Value,(ETextGender&)(Z_Param_Out_GenderValue));
	P_NATIVE_END;
}
// End Class USUDSLibrary Function GetDialogueValueAsGender

// Begin Class USUDSLibrary Function GetDialogueValueAsInt
struct Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics
{
	struct SUDSLibrary_eventGetDialogueValueAsInt_Parms
	{
		FSUDSValue Value;
		int32 IntValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try to extract an integer value from a general SUDS value.\n\x09 * @param Value The SUDS value, which may contain many types of value\n\x09 * @param IntValue The integer value\n\x09 * @return True if the value was of type integer and extracted correctly. False if not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to extract an integer value from a general SUDS value.\n@param Value The SUDS value, which may contain many types of value\n@param IntValue The integer value\n@return True if the value was of type integer and extracted correctly. False if not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsInt_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 774184046
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsInt_Parms, IntValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSLibrary_eventGetDialogueValueAsInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventGetDialogueValueAsInt_Parms), &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "GetDialogueValueAsInt", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::SUDSLibrary_eventGetDialogueValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::SUDSLibrary_eventGetDialogueValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execGetDialogueValueAsInt)
{
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_IntValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USUDSLibrary::GetDialogueValueAsInt(Z_Param_Out_Value,Z_Param_Out_IntValue);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function GetDialogueValueAsInt

// Begin Class USUDSLibrary Function GetDialogueValueAsName
struct Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics
{
	struct SUDSLibrary_eventGetDialogueValueAsName_Parms
	{
		FSUDSValue Value;
		FName NameValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try to extract a Name value from a general SUDS value.\n\x09 * @param Value The SUDS value, which may contain many types of value\n\x09 * @param NameValue The Name value\n\x09 * @return True if the value was of type Name and extracted correctly. False if not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to extract a Name value from a general SUDS value.\n@param Value The SUDS value, which may contain many types of value\n@param NameValue The Name value\n@return True if the value was of type Name and extracted correctly. False if not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsName_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 774184046
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsName_Parms, NameValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSLibrary_eventGetDialogueValueAsName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventGetDialogueValueAsName_Parms), &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::NewProp_NameValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "GetDialogueValueAsName", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::SUDSLibrary_eventGetDialogueValueAsName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::SUDSLibrary_eventGetDialogueValueAsName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execGetDialogueValueAsName)
{
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NameValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USUDSLibrary::GetDialogueValueAsName(Z_Param_Out_Value,Z_Param_Out_NameValue);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function GetDialogueValueAsName

// Begin Class USUDSLibrary Function GetDialogueValueAsText
struct Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics
{
	struct SUDSLibrary_eventGetDialogueValueAsText_Parms
	{
		FSUDSValue Value;
		FText TextValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try to extract a text value from a general SUDS value.\n\x09 * @param Value The SUDS value, which may contain many types of value\n\x09 * @param TextValue The text value\n\x09 * @return True if the value was of type text and extracted correctly. False if not.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to extract a text value from a general SUDS value.\n@param Value The SUDS value, which may contain many types of value\n@param TextValue The text value\n@return True if the value was of type text and extracted correctly. False if not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TextValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsText_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 774184046
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::NewProp_TextValue = { "TextValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueAsText_Parms, TextValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSLibrary_eventGetDialogueValueAsText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventGetDialogueValueAsText_Parms), &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::NewProp_TextValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "GetDialogueValueAsText", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::SUDSLibrary_eventGetDialogueValueAsText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::SUDSLibrary_eventGetDialogueValueAsText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execGetDialogueValueAsText)
{
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TextValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USUDSLibrary::GetDialogueValueAsText(Z_Param_Out_Value,Z_Param_Out_TextValue);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function GetDialogueValueAsText

// Begin Class USUDSLibrary Function GetDialogueValueIsEmpty
struct Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics
{
	struct SUDSLibrary_eventGetDialogueValueIsEmpty_Parms
	{
		FSUDSValue Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determine whether a SUDS value is empty (uninitialised).\n\x09 * @param Value The SUDS value, which may contain many types of value\n\x09 * @return Whether the value is empty \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine whether a SUDS value is empty (uninitialised).\n@param Value The SUDS value, which may contain many types of value\n@return Whether the value is empty" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueIsEmpty_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 774184046
void Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSLibrary_eventGetDialogueValueIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventGetDialogueValueIsEmpty_Parms), &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "GetDialogueValueIsEmpty", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::SUDSLibrary_eventGetDialogueValueIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::SUDSLibrary_eventGetDialogueValueIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execGetDialogueValueIsEmpty)
{
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USUDSLibrary::GetDialogueValueIsEmpty(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function GetDialogueValueIsEmpty

// Begin Class USUDSLibrary Function GetDialogueValueType
struct Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics
{
	struct SUDSLibrary_eventGetDialogueValueType_Parms
	{
		FSUDSValue Value;
		ESUDSValueType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retrieve the type of a SUDS value.\n\x09 * @param Value The SUDS value, which may contain many types of value\n\x09 * @return The value type \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the type of a SUDS value.\n@param Value The SUDS value, which may contain many types of value\n@return The value type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueType_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 774184046
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventGetDialogueValueType_Parms, ReturnValue), Z_Construct_UEnum_SUDS_ESUDSValueType, METADATA_PARAMS(0, nullptr) }; // 3083799823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "GetDialogueValueType", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::SUDSLibrary_eventGetDialogueValueType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::SUDSLibrary_eventGetDialogueValueType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execGetDialogueValueType)
{
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESUDSValueType*)Z_Param__Result=USUDSLibrary::GetDialogueValueType(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function GetDialogueValueType

// Begin Class USUDSLibrary Function IsDialogueVariableGlobal
struct Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics
{
	struct SUDSLibrary_eventIsDialogueVariableGlobal_Parms
	{
		FName Name;
		FName OutName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determine whether a SUDS variable name refers to a global variable\n\x09 * @param Name The full name of the variable\n\x09 * @param OutName The name of the variable, trimmed if necessary to remove a global prefix\n\x09 * @return Whether the variable was global\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine whether a SUDS variable name refers to a global variable\n@param Name The full name of the variable\n@param OutName The name of the variable, trimmed if necessary to remove a global prefix\n@return Whether the variable was global" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventIsDialogueVariableGlobal_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::NewProp_OutName = { "OutName", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSLibrary_eventIsDialogueVariableGlobal_Parms, OutName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSLibrary_eventIsDialogueVariableGlobal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSLibrary_eventIsDialogueVariableGlobal_Parms), &Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::NewProp_OutName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSLibrary, nullptr, "IsDialogueVariableGlobal", nullptr, nullptr, Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::SUDSLibrary_eventIsDialogueVariableGlobal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::SUDSLibrary_eventIsDialogueVariableGlobal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSLibrary::execIsDialogueVariableGlobal)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USUDSLibrary::IsDialogueVariableGlobal(Z_Param_Out_Name,Z_Param_Out_OutName);
	P_NATIVE_END;
}
// End Class USUDSLibrary Function IsDialogueVariableGlobal

// Begin Class USUDSLibrary
void USUDSLibrary::StaticRegisterNativesUSUDSLibrary()
{
	UClass* Class = USUDSLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDialogue", &USUDSLibrary::execCreateDialogue },
		{ "CreateDialogueWithParticipant", &USUDSLibrary::execCreateDialogueWithParticipant },
		{ "CreateDialogueWithParticipants", &USUDSLibrary::execCreateDialogueWithParticipants },
		{ "GetDialogueValueAsBoolean", &USUDSLibrary::execGetDialogueValueAsBoolean },
		{ "GetDialogueValueAsFloat", &USUDSLibrary::execGetDialogueValueAsFloat },
		{ "GetDialogueValueAsGender", &USUDSLibrary::execGetDialogueValueAsGender },
		{ "GetDialogueValueAsInt", &USUDSLibrary::execGetDialogueValueAsInt },
		{ "GetDialogueValueAsName", &USUDSLibrary::execGetDialogueValueAsName },
		{ "GetDialogueValueAsText", &USUDSLibrary::execGetDialogueValueAsText },
		{ "GetDialogueValueIsEmpty", &USUDSLibrary::execGetDialogueValueIsEmpty },
		{ "GetDialogueValueType", &USUDSLibrary::execGetDialogueValueType },
		{ "IsDialogueVariableGlobal", &USUDSLibrary::execIsDialogueVariableGlobal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSLibrary);
UClass* Z_Construct_UClass_USUDSLibrary_NoRegister()
{
	return USUDSLibrary::StaticClass();
}
struct Z_Construct_UClass_USUDSLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SUDSLibrary.h" },
		{ "ModuleRelativePath", "Public/SUDSLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USUDSLibrary_CreateDialogue, "CreateDialogue" }, // 369224583
		{ &Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipant, "CreateDialogueWithParticipant" }, // 377786995
		{ &Z_Construct_UFunction_USUDSLibrary_CreateDialogueWithParticipants, "CreateDialogueWithParticipants" }, // 2710850200
		{ &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsBoolean, "GetDialogueValueAsBoolean" }, // 3063075211
		{ &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsFloat, "GetDialogueValueAsFloat" }, // 2126715862
		{ &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsGender, "GetDialogueValueAsGender" }, // 874817876
		{ &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsInt, "GetDialogueValueAsInt" }, // 2263538015
		{ &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsName, "GetDialogueValueAsName" }, // 4293978841
		{ &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueAsText, "GetDialogueValueAsText" }, // 3914466166
		{ &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueIsEmpty, "GetDialogueValueIsEmpty" }, // 3181058161
		{ &Z_Construct_UFunction_USUDSLibrary_GetDialogueValueType, "GetDialogueValueType" }, // 2198044699
		{ &Z_Construct_UFunction_USUDSLibrary_IsDialogueVariableGlobal, "IsDialogueVariableGlobal" }, // 1893272455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USUDSLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSLibrary_Statics::ClassParams = {
	&USUDSLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSLibrary()
{
	if (!Z_Registration_Info_UClass_USUDSLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSLibrary.OuterSingleton, Z_Construct_UClass_USUDSLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSLibrary.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSLibrary>()
{
	return USUDSLibrary::StaticClass();
}
USUDSLibrary::USUDSLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSLibrary);
USUDSLibrary::~USUDSLibrary() {}
// End Class USUDSLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSLibrary, USUDSLibrary::StaticClass, TEXT("USUDSLibrary"), &Z_Registration_Info_UClass_USUDSLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSLibrary), 3694141150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSLibrary_h_875862005(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
