// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/SudsProRunner.h"
#include "SUDS/Public/SUDSDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProRunner() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSParticipant_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSScript_NoRegister();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSDialogueState();
SUDSPRO_API UClass* Z_Construct_UClass_ASudsProRunner();
SUDSPRO_API UClass* Z_Construct_UClass_ASudsProRunner_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCameraShotProvider_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProMarkProvider_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProSequenceProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Class ASudsProRunner Function LoadScriptAsync
static const FName NAME_ASudsProRunner_LoadScriptAsync = FName(TEXT("LoadScriptAsync"));
void ASudsProRunner::LoadScriptAsync()
{
	UFunction* Func = FindFunctionChecked(NAME_ASudsProRunner_LoadScriptAsync);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		LoadScriptAsync_Implementation();
	}
}
struct Z_Construct_UFunction_ASudsProRunner_LoadScriptAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// Pre-load the script asynchronously. We recommend you call this when it looks like the script\n/// will be needed soon (e.g. when the player approaches a certain distance). Otherwise calling\n/// StartDialogue will have to load the script synchronously. This probably isn't a huge deal for\n/// small scripts but it's good practice to pre-load if you can.\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "Pre-load the script asynchronously. We recommend you call this when it looks like the script\nwill be needed soon (e.g. when the player approaches a certain distance). Otherwise calling\nStartDialogue will have to load the script synchronously. This probably isn't a huge deal for\nsmall scripts but it's good practice to pre-load if you can." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASudsProRunner_LoadScriptAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASudsProRunner, nullptr, "LoadScriptAsync", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_LoadScriptAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASudsProRunner_LoadScriptAsync_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASudsProRunner_LoadScriptAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASudsProRunner_LoadScriptAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASudsProRunner::execLoadScriptAsync)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadScriptAsync_Implementation();
	P_NATIVE_END;
}
// End Class ASudsProRunner Function LoadScriptAsync

// Begin Class ASudsProRunner Function OnScriptAsyncLoaded
struct Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct SudsProRunner_eventOnScriptAsyncLoaded_Parms
	{
		FSoftObjectPath LoadedObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::NewProp_LoadedObject = { "LoadedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProRunner_eventOnScriptAsyncLoaded_Parms, LoadedObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::NewProp_LoadedObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASudsProRunner, nullptr, "OnScriptAsyncLoaded", nullptr, nullptr, Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::SudsProRunner_eventOnScriptAsyncLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::SudsProRunner_eventOnScriptAsyncLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASudsProRunner::execOnScriptAsyncLoaded)
{
	P_GET_STRUCT(FSoftObjectPath,Z_Param_LoadedObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScriptAsyncLoaded(Z_Param_LoadedObject);
	P_NATIVE_END;
}
// End Class ASudsProRunner Function OnScriptAsyncLoaded

// Begin Class ASudsProRunner Function SnapshotDialogueState
struct Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics
{
	struct SudsProRunner_eventSnapshotDialogueState_Parms
	{
		FSUDSDialogueState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// Take a snapshot of the dialogue state and store it in DialogueState.\n/// Only valid while the dialogue is running. Called automatically just before dialogue end.\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "Take a snapshot of the dialogue state and store it in DialogueState.\nOnly valid while the dialogue is running. Called automatically just before dialogue end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProRunner_eventSnapshotDialogueState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSUDSDialogueState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1168120026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASudsProRunner, nullptr, "SnapshotDialogueState", nullptr, nullptr, Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::SudsProRunner_eventSnapshotDialogueState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::SudsProRunner_eventSnapshotDialogueState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASudsProRunner::execSnapshotDialogueState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSUDSDialogueState*)Z_Param__Result=P_THIS->SnapshotDialogueState();
	P_NATIVE_END;
}
// End Class ASudsProRunner Function SnapshotDialogueState

// Begin Class ASudsProRunner Function StartDialogue
struct SudsProRunner_eventStartDialogue_Parms
{
	ACharacter* PlayerCharacter;
	USUDSDialogue* ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProRunner_eventStartDialogue_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ASudsProRunner_StartDialogue = FName(TEXT("StartDialogue"));
USUDSDialogue* ASudsProRunner::StartDialogue(ACharacter* PlayerCharacter)
{
	UFunction* Func = FindFunctionChecked(NAME_ASudsProRunner_StartDialogue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProRunner_eventStartDialogue_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return StartDialogue_Implementation(PlayerCharacter);
	}
}
struct Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// Start the dialogue as configured\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "Start the dialogue as configured" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProRunner_eventStartDialogue_Parms, PlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProRunner_eventStartDialogue_Parms, ReturnValue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASudsProRunner, nullptr, "StartDialogue", nullptr, nullptr, Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::PropPointers), sizeof(SudsProRunner_eventStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProRunner_eventStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASudsProRunner_StartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASudsProRunner_StartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASudsProRunner::execStartDialogue)
{
	P_GET_OBJECT(ACharacter,Z_Param_PlayerCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USUDSDialogue**)Z_Param__Result=P_THIS->StartDialogue_Implementation(Z_Param_PlayerCharacter);
	P_NATIVE_END;
}
// End Class ASudsProRunner Function StartDialogue

// Begin Class ASudsProRunner Function UnloadScript
static const FName NAME_ASudsProRunner_UnloadScript = FName(TEXT("UnloadScript"));
void ASudsProRunner::UnloadScript()
{
	UFunction* Func = FindFunctionChecked(NAME_ASudsProRunner_UnloadScript);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UnloadScript_Implementation();
	}
}
struct Z_Construct_UFunction_ASudsProRunner_UnloadScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// Unload the script from memory, if you want to free up memory. Scripts are quite small so it's\n/// not essential to call this, but you can if you want. \n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "Unload the script from memory, if you want to free up memory. Scripts are quite small so it's\nnot essential to call this, but you can if you want." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASudsProRunner_UnloadScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASudsProRunner, nullptr, "UnloadScript", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASudsProRunner_UnloadScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASudsProRunner_UnloadScript_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASudsProRunner_UnloadScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASudsProRunner_UnloadScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASudsProRunner::execUnloadScript)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadScript_Implementation();
	P_NATIVE_END;
}
// End Class ASudsProRunner Function UnloadScript

// Begin Class ASudsProRunner
void ASudsProRunner::StaticRegisterNativesASudsProRunner()
{
	UClass* Class = ASudsProRunner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadScriptAsync", &ASudsProRunner::execLoadScriptAsync },
		{ "OnScriptAsyncLoaded", &ASudsProRunner::execOnScriptAsyncLoaded },
		{ "SnapshotDialogueState", &ASudsProRunner::execSnapshotDialogueState },
		{ "StartDialogue", &ASudsProRunner::execStartDialogue },
		{ "UnloadScript", &ASudsProRunner::execUnloadScript },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASudsProRunner);
UClass* Z_Construct_UClass_ASudsProRunner_NoRegister()
{
	return ASudsProRunner::StaticClass();
}
struct Z_Construct_UClass_ASudsProRunner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// A helper base class which organises the loading of a SUDS script and running it with appropriate\n/// participants, providing a simple provider of marks, characters and cameras\n" },
		{ "IncludePath", "SudsProRunner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "PrioritizeCategories", "SudsPro" },
		{ "ToolTip", "A helper base class which organises the loading of a SUDS script and running it with appropriate\nparticipants, providing a simple provider of marks, characters and cameras" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// The script which will be run. This is a soft object pointer so the script isn't loaded until needed.\n/// A soft reference also eliminates problems with GC when a level is re-loaded\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "The script which will be run. This is a soft object pointer so the script isn't loaded until needed.\nA soft reference also eliminates problems with GC when a level is re-loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrom_MetaData[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// Optional starting label in the script. Leave blank to start from the beginning. \n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "Optional starting label in the script. Leave blank to start from the beginning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShots_MetaData[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "// List of camera shots by name. Each must be an actor with a camera component.\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "List of camera shots by name. Each must be an actor with a camera component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCs_MetaData[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// List of additional NPC participants in the dialogue\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "List of additional NPC participants in the dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Marks_MetaData[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// List of marks that characters can be told to move to.\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "List of marks that characters can be told to move to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[] = {
		{ "Category", "SudsPro|Runner|Cutscenes" },
		{ "Comment", "/// List of level sequences that this runner can launch by name\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "List of level sequences that this runner can launch by name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceTransformOriginActors_MetaData[] = {
		{ "Category", "SudsPro|Runner|Cutscenes" },
		{ "Comment", "/// List of actors to act as transform origins for a named level sequence. This allows you to play\n/// back sequences at a different origin to that which it was defined in. Alternative to\n/// specifying the transform manually with SequenceTransformOrigins\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "List of actors to act as transform origins for a named level sequence. This allows you to play\nback sequences at a different origin to that which it was defined in. Alternative to\nspecifying the transform manually with SequenceTransformOrigins" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceTransformOrigins_MetaData[] = {
		{ "Category", "SudsPro|Runner|Cutscenes" },
		{ "Comment", "/// List of manual transform origins for a named level sequence. This allows you to play\n/// back sequences at a different origin to that which it was defined in.\n/// Alternative: use SequenceTransformOriginActors to use an actor to provide the transform instead\n/// of manually supplying it.\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "List of manual transform origins for a named level sequence. This allows you to play\nback sequences at a different origin to that which it was defined in.\nAlternative: use SequenceTransformOriginActors to use an actor to provide the transform instead\nof manually supplying it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedScriptAsset_MetaData[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// The loaded script asset\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "The loaded script asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogue_MetaData[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// The current dialogue being run\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "The current dialogue being run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueState_MetaData[] = {
		{ "Category", "SudsPro|Runner" },
		{ "Comment", "/// The state of the dialogue the last time SnapshotDialogueState was called\n" },
		{ "ModuleRelativePath", "Public/SudsProRunner.h" },
		{ "ToolTip", "The state of the dialogue the last time SnapshotDialogueState was called" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Script;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartFrom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShots_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CameraShots_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CameraShots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Marks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Marks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Marks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequences_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Sequences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Sequences;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceTransformOriginActors_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceTransformOriginActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SequenceTransformOriginActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceTransformOrigins_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceTransformOrigins_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SequenceTransformOrigins;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedScriptAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDialogue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASudsProRunner_LoadScriptAsync, "LoadScriptAsync" }, // 2439972778
		{ &Z_Construct_UFunction_ASudsProRunner_OnScriptAsyncLoaded, "OnScriptAsyncLoaded" }, // 4119990897
		{ &Z_Construct_UFunction_ASudsProRunner_SnapshotDialogueState, "SnapshotDialogueState" }, // 902090296
		{ &Z_Construct_UFunction_ASudsProRunner_StartDialogue, "StartDialogue" }, // 654673106
		{ &Z_Construct_UFunction_ASudsProRunner_UnloadScript, "UnloadScript" }, // 35723551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASudsProRunner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0024080000000805, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, Script), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Script_MetaData), NewProp_Script_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_StartFrom = { "StartFrom", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, StartFrom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrom_MetaData), NewProp_StartFrom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_CameraShots_ValueProp = { "CameraShots", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_CameraShots_Key_KeyProp = { "CameraShots_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_CameraShots = { "CameraShots", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, CameraShots), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShots_MetaData), NewProp_CameraShots_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_NPCs_Inner = { "NPCs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_NPCs = { "NPCs", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, NPCs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCs_MetaData), NewProp_NPCs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Marks_ValueProp = { "Marks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Marks_Key_KeyProp = { "Marks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Marks = { "Marks", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, Marks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Marks_MetaData), NewProp_Marks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Sequences_ValueProp = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Sequences_Key_KeyProp = { "Sequences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, Sequences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequences_MetaData), NewProp_Sequences_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOriginActors_ValueProp = { "SequenceTransformOriginActors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOriginActors_Key_KeyProp = { "SequenceTransformOriginActors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOriginActors = { "SequenceTransformOriginActors", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, SequenceTransformOriginActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceTransformOriginActors_MetaData), NewProp_SequenceTransformOriginActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOrigins_ValueProp = { "SequenceTransformOrigins", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOrigins_Key_KeyProp = { "SequenceTransformOrigins_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOrigins = { "SequenceTransformOrigins", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, SequenceTransformOrigins), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceTransformOrigins_MetaData), NewProp_SequenceTransformOrigins_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_LoadedScriptAsset = { "LoadedScriptAsset", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, LoadedScriptAsset), Z_Construct_UClass_USUDSScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedScriptAsset_MetaData), NewProp_LoadedScriptAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_CurrentDialogue = { "CurrentDialogue", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, CurrentDialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDialogue_MetaData), NewProp_CurrentDialogue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASudsProRunner_Statics::NewProp_DialogueState = { "DialogueState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASudsProRunner, DialogueState), Z_Construct_UScriptStruct_FSUDSDialogueState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueState_MetaData), NewProp_DialogueState_MetaData) }; // 1168120026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASudsProRunner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Script,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_StartFrom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_CameraShots_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_CameraShots_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_CameraShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_NPCs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_NPCs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Marks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Marks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Marks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Sequences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Sequences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_Sequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOriginActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOriginActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOriginActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOrigins_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOrigins_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_SequenceTransformOrigins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_LoadedScriptAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_CurrentDialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASudsProRunner_Statics::NewProp_DialogueState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASudsProRunner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASudsProRunner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASudsProRunner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASudsProRunner_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USUDSParticipant_NoRegister, (int32)VTABLE_OFFSET(ASudsProRunner, ISUDSParticipant), false },  // 3364695587
	{ Z_Construct_UClass_USudsProCameraShotProvider_NoRegister, (int32)VTABLE_OFFSET(ASudsProRunner, ISudsProCameraShotProvider), false },  // 3178289143
	{ Z_Construct_UClass_USudsProMarkProvider_NoRegister, (int32)VTABLE_OFFSET(ASudsProRunner, ISudsProMarkProvider), false },  // 2910793504
	{ Z_Construct_UClass_USudsProSequenceProvider_NoRegister, (int32)VTABLE_OFFSET(ASudsProRunner, ISudsProSequenceProvider), false },  // 3385071201
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASudsProRunner_Statics::ClassParams = {
	&ASudsProRunner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASudsProRunner_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASudsProRunner_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASudsProRunner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASudsProRunner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASudsProRunner()
{
	if (!Z_Registration_Info_UClass_ASudsProRunner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASudsProRunner.OuterSingleton, Z_Construct_UClass_ASudsProRunner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASudsProRunner.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<ASudsProRunner>()
{
	return ASudsProRunner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASudsProRunner);
ASudsProRunner::~ASudsProRunner() {}
// End Class ASudsProRunner

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProRunner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASudsProRunner, ASudsProRunner::StaticClass, TEXT("ASudsProRunner"), &Z_Registration_Info_UClass_ASudsProRunner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASudsProRunner), 3684312768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProRunner_h_2067254409(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProRunner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProRunner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
