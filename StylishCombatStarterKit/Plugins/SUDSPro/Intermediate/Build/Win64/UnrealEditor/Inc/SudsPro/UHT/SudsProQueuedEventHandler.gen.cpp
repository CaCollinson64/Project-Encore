// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProQueuedEventHandler.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProQueuedEventHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProQueuedEventHandler();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProQueuedEventHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Interface USudsProQueuedEventHandler Function OnQueuedDialogueEvent
struct SudsProQueuedEventHandler_eventOnQueuedDialogueEvent_Parms
{
	USUDSDialogue* Dialogue;
	FName EventName;
	TArray<FSUDSValue> Arguments;
};
void ISudsProQueuedEventHandler::OnQueuedDialogueEvent(USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnQueuedDialogueEvent instead.");
}
static FName NAME_USudsProQueuedEventHandler_OnQueuedDialogueEvent = FName(TEXT("OnQueuedDialogueEvent"));
void ISudsProQueuedEventHandler::Execute_OnQueuedDialogueEvent(UObject* O, USUDSDialogue* Dialogue, FName EventName, TArray<FSUDSValue> const& Arguments)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProQueuedEventHandler::StaticClass()));
	SudsProQueuedEventHandler_eventOnQueuedDialogueEvent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProQueuedEventHandler_OnQueuedDialogueEvent);
	if (Func)
	{
		Parms.Dialogue=Dialogue;
		Parms.EventName=EventName;
		Parms.Arguments=Arguments;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProQueuedEventHandler*)(O->GetNativeInterfaceAddress(USudsProQueuedEventHandler::StaticClass())))
	{
		I->OnQueuedDialogueEvent_Implementation(Dialogue,EventName,Arguments);
	}
}
struct Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when a queued event from dialogue is due to be delivered, respecting \"wait\" events in\n\x09 * the dialogue. This differs from the regular ISudsParticipant which calls OnDialogueEvent\n\x09 * immediately that the event enters scope between speaker lines. \n\x09 * @param Dialogue The dialogue instance\n\x09 * @param EventName The name of the event that has been raised\n\x09 * @param Arguments List of arguments\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Extensions/SudsProQueuedEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a queued event from dialogue is due to be delivered, respecting \"wait\" events in\nthe dialogue. This differs from the regular ISudsParticipant which calls OnDialogueEvent\nimmediately that the event enters scope between speaker lines.\n@param Dialogue The dialogue instance\n@param EventName The name of the event that has been raised\n@param Arguments List of arguments" },
#endif
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProQueuedEventHandler_eventOnQueuedDialogueEvent_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProQueuedEventHandler_eventOnQueuedDialogueEvent_Parms, EventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 774184046
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProQueuedEventHandler_eventOnQueuedDialogueEvent_Parms, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arguments_MetaData), NewProp_Arguments_MetaData) }; // 774184046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::NewProp_Arguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::NewProp_Arguments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProQueuedEventHandler, nullptr, "OnQueuedDialogueEvent", nullptr, nullptr, Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::PropPointers), sizeof(SudsProQueuedEventHandler_eventOnQueuedDialogueEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProQueuedEventHandler_eventOnQueuedDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProQueuedEventHandler::execOnQueuedDialogueEvent)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
	P_GET_TARRAY_REF(FSUDSValue,Z_Param_Out_Arguments);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQueuedDialogueEvent_Implementation(Z_Param_Dialogue,Z_Param_EventName,Z_Param_Out_Arguments);
	P_NATIVE_END;
}
// End Interface USudsProQueuedEventHandler Function OnQueuedDialogueEvent

// Begin Interface USudsProQueuedEventHandler
void USudsProQueuedEventHandler::StaticRegisterNativesUSudsProQueuedEventHandler()
{
	UClass* Class = USudsProQueuedEventHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnQueuedDialogueEvent", &ISudsProQueuedEventHandler::execOnQueuedDialogueEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProQueuedEventHandler);
UClass* Z_Construct_UClass_USudsProQueuedEventHandler_NoRegister()
{
	return USudsProQueuedEventHandler::StaticClass();
}
struct Z_Construct_UClass_USudsProQueuedEventHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProQueuedEventHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProQueuedEventHandler_OnQueuedDialogueEvent, "OnQueuedDialogueEvent" }, // 538087952
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISudsProQueuedEventHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProQueuedEventHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProQueuedEventHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProQueuedEventHandler_Statics::ClassParams = {
	&USudsProQueuedEventHandler::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProQueuedEventHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProQueuedEventHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProQueuedEventHandler()
{
	if (!Z_Registration_Info_UClass_USudsProQueuedEventHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProQueuedEventHandler.OuterSingleton, Z_Construct_UClass_USudsProQueuedEventHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProQueuedEventHandler.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProQueuedEventHandler>()
{
	return USudsProQueuedEventHandler::StaticClass();
}
USudsProQueuedEventHandler::USudsProQueuedEventHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProQueuedEventHandler);
USudsProQueuedEventHandler::~USudsProQueuedEventHandler() {}
// End Interface USudsProQueuedEventHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProQueuedEventHandler, USudsProQueuedEventHandler::StaticClass, TEXT("USudsProQueuedEventHandler"), &Z_Registration_Info_UClass_USudsProQueuedEventHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProQueuedEventHandler), 2435501028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_909897575(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProQueuedEventHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
