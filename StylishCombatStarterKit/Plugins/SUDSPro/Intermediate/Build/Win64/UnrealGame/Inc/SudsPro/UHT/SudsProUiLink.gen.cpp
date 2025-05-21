// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/SudsProUiLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProUiLink() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProUiLink();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProUiLink_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Class USudsProUiLink Function DialogueFinished
struct SudsProUiLink_eventDialogueFinished_Parms
{
	USUDSDialogue* Dialogue;
	bool bShouldRestoreInput;
};
static const FName NAME_USudsProUiLink_DialogueFinished = FName(TEXT("DialogueFinished"));
void USudsProUiLink::DialogueFinished(USUDSDialogue* Dialogue, bool bShouldRestoreInput)
{
	UFunction* Func = FindFunctionChecked(NAME_USudsProUiLink_DialogueFinished);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProUiLink_eventDialogueFinished_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.bShouldRestoreInput=bShouldRestoreInput ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DialogueFinished_Implementation(Dialogue, bShouldRestoreInput);
	}
}
struct Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Notification that dialogue has finished. The UI should remove itself at this point.\n\x09 * @param Dialogue The dialogue ending.\n\x09 * @param bShouldRestoreInput Whether the UI should restore normal player input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProUiLink.h" },
		{ "ToolTip", "Notification that dialogue has finished. The UI should remove itself at this point.\n@param Dialogue The dialogue ending.\n@param bShouldRestoreInput Whether the UI should restore normal player input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static void NewProp_bShouldRestoreInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRestoreInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProUiLink_eventDialogueFinished_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::NewProp_bShouldRestoreInput_SetBit(void* Obj)
{
	((SudsProUiLink_eventDialogueFinished_Parms*)Obj)->bShouldRestoreInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::NewProp_bShouldRestoreInput = { "bShouldRestoreInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProUiLink_eventDialogueFinished_Parms), &Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::NewProp_bShouldRestoreInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::NewProp_bShouldRestoreInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProUiLink, nullptr, "DialogueFinished", nullptr, nullptr, Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::PropPointers), sizeof(SudsProUiLink_eventDialogueFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProUiLink_eventDialogueFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProUiLink_DialogueFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProUiLink_DialogueFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProUiLink::execDialogueFinished)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_UBOOL(Z_Param_bShouldRestoreInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueFinished_Implementation(Z_Param_Dialogue,Z_Param_bShouldRestoreInput);
	P_NATIVE_END;
}
// End Class USudsProUiLink Function DialogueFinished

// Begin Class USudsProUiLink Function DialogueStarting
struct SudsProUiLink_eventDialogueStarting_Parms
{
	USUDSDialogue* Dialogue;
	bool bShouldTakeOverInput;
};
static const FName NAME_USudsProUiLink_DialogueStarting = FName(TEXT("DialogueStarting"));
void USudsProUiLink::DialogueStarting(USUDSDialogue* Dialogue, bool bShouldTakeOverInput)
{
	UFunction* Func = FindFunctionChecked(NAME_USudsProUiLink_DialogueStarting);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProUiLink_eventDialogueStarting_Parms Parms;
		Parms.Dialogue=Dialogue;
		Parms.bShouldTakeOverInput=bShouldTakeOverInput ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DialogueStarting_Implementation(Dialogue, bShouldTakeOverInput);
	}
}
struct Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Notification that dialogue is starting. The UI should NOT show any speaker lines here though, this is just for\n\x09 * information, if the UI wants to do some general intro animation or something even before any speaker lines appear.\n\x09 * Speaker lines themselves may be delayed by asynchronous events in between the dialogue starting and the first\n\x09 * line, such as fade effects or intro animations.\n\x09 * This UI class might for example just want to add itself to the viewport but with all elements hidden.\n\x09 * @param Dialogue The dialogue being started.\n\x09 * @param bShouldTakeOverInput Whether the dialogue UI should commandeer player input (disable character movement, maybe show pointer etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProUiLink.h" },
		{ "ToolTip", "Notification that dialogue is starting. The UI should NOT show any speaker lines here though, this is just for\ninformation, if the UI wants to do some general intro animation or something even before any speaker lines appear.\nSpeaker lines themselves may be delayed by asynchronous events in between the dialogue starting and the first\nline, such as fade effects or intro animations.\nThis UI class might for example just want to add itself to the viewport but with all elements hidden.\n@param Dialogue The dialogue being started.\n@param bShouldTakeOverInput Whether the dialogue UI should commandeer player input (disable character movement, maybe show pointer etc)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static void NewProp_bShouldTakeOverInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTakeOverInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProUiLink_eventDialogueStarting_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::NewProp_bShouldTakeOverInput_SetBit(void* Obj)
{
	((SudsProUiLink_eventDialogueStarting_Parms*)Obj)->bShouldTakeOverInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::NewProp_bShouldTakeOverInput = { "bShouldTakeOverInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProUiLink_eventDialogueStarting_Parms), &Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::NewProp_bShouldTakeOverInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::NewProp_bShouldTakeOverInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProUiLink, nullptr, "DialogueStarting", nullptr, nullptr, Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::PropPointers), sizeof(SudsProUiLink_eventDialogueStarting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProUiLink_eventDialogueStarting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProUiLink_DialogueStarting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProUiLink_DialogueStarting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProUiLink::execDialogueStarting)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_UBOOL(Z_Param_bShouldTakeOverInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueStarting_Implementation(Z_Param_Dialogue,Z_Param_bShouldTakeOverInput);
	P_NATIVE_END;
}
// End Class USudsProUiLink Function DialogueStarting

// Begin Class USudsProUiLink Function ShowSpeakerLine
struct SudsProUiLink_eventShowSpeakerLine_Parms
{
	USUDSDialogue* Dialogue;
};
static const FName NAME_USudsProUiLink_ShowSpeakerLine = FName(TEXT("ShowSpeakerLine"));
void USudsProUiLink::ShowSpeakerLine(USUDSDialogue* Dialogue)
{
	UFunction* Func = FindFunctionChecked(NAME_USudsProUiLink_ShowSpeakerLine);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SudsProUiLink_eventShowSpeakerLine_Parms Parms;
		Parms.Dialogue=Dialogue;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ShowSpeakerLine_Implementation(Dialogue);
	}
}
struct Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called when it's time to display the next speaker line.\n\x09 * The UI should display the speaker line, and potentially any choices at this point.\n\x09 * From this point, the UI is in control of the dialogue and can use its own choice for timing for displaying the\n\x09 * elements. Nothing else will happen until the UI calls a Dialogue method such as Continue(), Choose() or End().\n\x09 * Once the UI calls one of these methods, it MUST wait for the next call to ShowSpeakerLine() or DialogueEnding(). \n\x09 * @param Dialogue The dialogue\n\x09 */" },
		{ "ModuleRelativePath", "Public/SudsProUiLink.h" },
		{ "ToolTip", "Called when it's time to display the next speaker line.\nThe UI should display the speaker line, and potentially any choices at this point.\nFrom this point, the UI is in control of the dialogue and can use its own choice for timing for displaying the\nelements. Nothing else will happen until the UI calls a Dialogue method such as Continue(), Choose() or End().\nOnce the UI calls one of these methods, it MUST wait for the next call to ShowSpeakerLine() or DialogueEnding().\n@param Dialogue The dialogue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProUiLink_eventShowSpeakerLine_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProUiLink, nullptr, "ShowSpeakerLine", nullptr, nullptr, Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::PropPointers), sizeof(SudsProUiLink_eventShowSpeakerLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProUiLink_eventShowSpeakerLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProUiLink::execShowSpeakerLine)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowSpeakerLine_Implementation(Z_Param_Dialogue);
	P_NATIVE_END;
}
// End Class USudsProUiLink Function ShowSpeakerLine

// Begin Class USudsProUiLink
void USudsProUiLink::StaticRegisterNativesUSudsProUiLink()
{
	UClass* Class = USudsProUiLink::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DialogueFinished", &USudsProUiLink::execDialogueFinished },
		{ "DialogueStarting", &USudsProUiLink::execDialogueStarting },
		{ "ShowSpeakerLine", &USudsProUiLink::execShowSpeakerLine },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProUiLink);
UClass* Z_Construct_UClass_USudsProUiLink_NoRegister()
{
	return USudsProUiLink::StaticClass();
}
struct Z_Construct_UClass_USudsProUiLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides the link between SudsPro running the dialogue and the UI which displays it.\n * We provide a basic implementation of this which just opens a dialogue widget. You can either\n * point to a different widget, or do something more custom by supplying your own subclass.\n */" },
		{ "IncludePath", "SudsProUiLink.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SudsProUiLink.h" },
		{ "ToolTip", "Provides the link between SudsPro running the dialogue and the UI which displays it.\nWe provide a basic implementation of this which just opens a dialogue widget. You can either\npoint to a different widget, or do something more custom by supplying your own subclass." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProUiLink_DialogueFinished, "DialogueFinished" }, // 3498538395
		{ &Z_Construct_UFunction_USudsProUiLink_DialogueStarting, "DialogueStarting" }, // 912208234
		{ &Z_Construct_UFunction_USudsProUiLink_ShowSpeakerLine, "ShowSpeakerLine" }, // 3951738816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProUiLink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProUiLink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProUiLink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProUiLink_Statics::ClassParams = {
	&USudsProUiLink::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProUiLink_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProUiLink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProUiLink()
{
	if (!Z_Registration_Info_UClass_USudsProUiLink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProUiLink.OuterSingleton, Z_Construct_UClass_USudsProUiLink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProUiLink.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProUiLink>()
{
	return USudsProUiLink::StaticClass();
}
USudsProUiLink::USudsProUiLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProUiLink);
USudsProUiLink::~USudsProUiLink() {}
// End Class USudsProUiLink

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProUiLink, USudsProUiLink::StaticClass, TEXT("USudsProUiLink"), &Z_Registration_Info_UClass_USudsProUiLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProUiLink), 3143284943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_3431041848(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
