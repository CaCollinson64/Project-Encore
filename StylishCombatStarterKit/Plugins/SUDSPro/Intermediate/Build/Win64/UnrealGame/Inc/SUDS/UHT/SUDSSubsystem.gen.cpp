// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextGender();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings();
SUDS_API UClass* Z_Construct_UClass_USUDSSubsystem();
SUDS_API UClass* Z_Construct_UClass_USUDSSubsystem_NoRegister();
SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSGlobalState();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Delegate FOnGlobalVariableChangedEvent
struct Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics
{
	struct _Script_SUDS_eventOnGlobalVariableChangedEvent_Parms
	{
		FName VariableName;
		FSUDSValue Value;
		bool bFromScript;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bFromScript_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromScript;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnGlobalVariableChangedEvent_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SUDS_eventOnGlobalVariableChangedEvent_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 100687975
void Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::NewProp_bFromScript_SetBit(void* Obj)
{
	((_Script_SUDS_eventOnGlobalVariableChangedEvent_Parms*)Obj)->bFromScript = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::NewProp_bFromScript = { "bFromScript", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SUDS_eventOnGlobalVariableChangedEvent_Parms), &Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::NewProp_bFromScript_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::NewProp_bFromScript,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SUDS, nullptr, "OnGlobalVariableChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::_Script_SUDS_eventOnGlobalVariableChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::_Script_SUDS_eventOnGlobalVariableChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGlobalVariableChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalVariableChangedEvent, FName VariableName, FSUDSValue const& Value, bool bFromScript)
{
	struct _Script_SUDS_eventOnGlobalVariableChangedEvent_Parms
	{
		FName VariableName;
		FSUDSValue Value;
		bool bFromScript;
	};
	_Script_SUDS_eventOnGlobalVariableChangedEvent_Parms Parms;
	Parms.VariableName=VariableName;
	Parms.Value=Value;
	Parms.bFromScript=bFromScript ? true : false;
	OnGlobalVariableChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGlobalVariableChangedEvent

// Begin ScriptStruct FSUDSGlobalState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SUDSGlobalState;
class UScriptStruct* FSUDSGlobalState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSGlobalState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SUDSGlobalState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSUDSGlobalState, (UObject*)Z_Construct_UPackage__Script_SUDS(), TEXT("SUDSGlobalState"));
	}
	return Z_Registration_Info_UScriptStruct_SUDSGlobalState.OuterSingleton;
}
template<> SUDS_API UScriptStruct* StaticStruct<FSUDSGlobalState>()
{
	return FSUDSGlobalState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSUDSGlobalState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Copy of the global state of the system\n" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Copy of the global state of the system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVariables_MetaData[] = {
		{ "Category", "SUDS" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalVariables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GlobalVariables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GlobalVariables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSUDSGlobalState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::NewProp_GlobalVariables_ValueProp = { "GlobalVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 100687975
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::NewProp_GlobalVariables_Key_KeyProp = { "GlobalVariables_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::NewProp_GlobalVariables = { "GlobalVariables", nullptr, (EPropertyFlags)0x0020080001000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUDSGlobalState, GlobalVariables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVariables_MetaData), NewProp_GlobalVariables_MetaData) }; // 100687975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::NewProp_GlobalVariables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::NewProp_GlobalVariables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::NewProp_GlobalVariables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
	nullptr,
	&NewStructOps,
	"SUDSGlobalState",
	Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::PropPointers),
	sizeof(FSUDSGlobalState),
	alignof(FSUDSGlobalState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSUDSGlobalState()
{
	if (!Z_Registration_Info_UScriptStruct_SUDSGlobalState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SUDSGlobalState.InnerSingleton, Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SUDSGlobalState.InnerSingleton;
}
// End ScriptStruct FSUDSGlobalState

// Begin Class USUDSSubsystem Function GetGlobalVariable
struct Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics
{
	struct SUDSSubsystem_eventGetGlobalVariable_Parms
	{
		FName Name;
		FSUDSValue ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/// Get a variable in dialogue state as a general value type\n/// See GetDialogueText, GetDialogueInt etc for more type friendly versions, but if you want to access the state\n/// as a type-flexible value then you can do so with this function.\n" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Get a variable in dialogue state as a general value type\nSee GetDialogueText, GetDialogueInt etc for more type friendly versions, but if you want to access the state\nas a type-flexible value then you can do so with this function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariable_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariable_Parms, ReturnValue), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 100687975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetGlobalVariable", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::SUDSSubsystem_eventGetGlobalVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::SUDSSubsystem_eventGetGlobalVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetGlobalVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSUDSValue*)Z_Param__Result=P_THIS->GetGlobalVariable(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetGlobalVariable

// Begin Class USUDSSubsystem Function GetGlobalVariableBoolean
struct Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics
{
	struct SUDSSubsystem_eventGetGlobalVariableBoolean_Parms
	{
		FName Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Get a boolean global variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Get a boolean global variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableBoolean_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSSubsystem_eventGetGlobalVariableBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSSubsystem_eventGetGlobalVariableBoolean_Parms), &Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetGlobalVariableBoolean", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::SUDSSubsystem_eventGetGlobalVariableBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::SUDSSubsystem_eventGetGlobalVariableBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetGlobalVariableBoolean)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGlobalVariableBoolean(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetGlobalVariableBoolean

// Begin Class USUDSSubsystem Function GetGlobalVariableFloat
struct Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics
{
	struct SUDSSubsystem_eventGetGlobalVariableFloat_Parms
	{
		FName Name;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Get a float global variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Get a float global variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetGlobalVariableFloat", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::SUDSSubsystem_eventGetGlobalVariableFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::SUDSSubsystem_eventGetGlobalVariableFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetGlobalVariableFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGlobalVariableFloat(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetGlobalVariableFloat

// Begin Class USUDSSubsystem Function GetGlobalVariableGender
struct Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics
{
	struct SUDSSubsystem_eventGetGlobalVariableGender_Parms
	{
		FName Name;
		ETextGender ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Get a gender global variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Get a gender global variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableGender_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableGender_Parms, ReturnValue), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(0, nullptr) }; // 3004401569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetGlobalVariableGender", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::SUDSSubsystem_eventGetGlobalVariableGender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::SUDSSubsystem_eventGetGlobalVariableGender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetGlobalVariableGender)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETextGender*)Z_Param__Result=P_THIS->GetGlobalVariableGender(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetGlobalVariableGender

// Begin Class USUDSSubsystem Function GetGlobalVariableInt
struct Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics
{
	struct SUDSSubsystem_eventGetGlobalVariableInt_Parms
	{
		FName Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Get an int global variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Get an int global variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetGlobalVariableInt", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::SUDSSubsystem_eventGetGlobalVariableInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::SUDSSubsystem_eventGetGlobalVariableInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetGlobalVariableInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGlobalVariableInt(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetGlobalVariableInt

// Begin Class USUDSSubsystem Function GetGlobalVariableName
struct Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics
{
	struct SUDSSubsystem_eventGetGlobalVariableName_Parms
	{
		FName Name;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Get a name global variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Get a name global variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetGlobalVariableName", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::SUDSSubsystem_eventGetGlobalVariableName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::SUDSSubsystem_eventGetGlobalVariableName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetGlobalVariableName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetGlobalVariableName(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetGlobalVariableName

// Begin Class USUDSSubsystem Function GetGlobalVariables
struct Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics
{
	struct SUDSSubsystem_eventGetGlobalVariables_Parms
	{
		TMap<FName,FSUDSValue> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/// Get all variables\n" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Get all variables" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 100687975
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariables_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 100687975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetGlobalVariables", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::SUDSSubsystem_eventGetGlobalVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::SUDSSubsystem_eventGetGlobalVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetGlobalVariables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,FSUDSValue>*)Z_Param__Result=P_THIS->GetGlobalVariables();
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetGlobalVariables

// Begin Class USUDSSubsystem Function GetGlobalVariableText
struct Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics
{
	struct SUDSSubsystem_eventGetGlobalVariableText_Parms
	{
		FName Name;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Get a text global variable\n\x09 * @param Name The name of the variable\n\x09 * @returns Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Get a text global variable\n@param Name The name of the variable\n@returns Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableText_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetGlobalVariableText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetGlobalVariableText", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::SUDSSubsystem_eventGetGlobalVariableText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::SUDSSubsystem_eventGetGlobalVariableText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetGlobalVariableText)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetGlobalVariableText(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetGlobalVariableText

// Begin Class USUDSSubsystem Function GetMaxConcurrentVoicedLines
struct Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics
{
	struct SUDSSubsystem_eventGetMaxConcurrentVoicedLines_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Settings" },
		{ "Comment", "/**\n\x09 * Gets the number of voiced lines that can be played at once. Defaults to 1, so that when a new voiced line is\n\x09 * played while another is still playing, the previous one is stopped. \n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Gets the number of voiced lines that can be played at once. Defaults to 1, so that when a new voiced line is\nplayed while another is still playing, the previous one is stopped." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetMaxConcurrentVoicedLines_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetMaxConcurrentVoicedLines", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::SUDSSubsystem_eventGetMaxConcurrentVoicedLines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::SUDSSubsystem_eventGetMaxConcurrentVoicedLines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetMaxConcurrentVoicedLines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxConcurrentVoicedLines();
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetMaxConcurrentVoicedLines

// Begin Class USUDSSubsystem Function GetSavedGlobalState
struct Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics
{
	struct SUDSSubsystem_eventGetSavedGlobalState_Parms
	{
		FSUDSGlobalState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global State" },
		{ "Comment", "/** Retrieve a copy of the global state of the system.\n\x09 *  This is useful for saving the state of e.g. global variables.\n\x09 *  @return A static copy of the current global state. This struct can be serialised with your save data,\n\x09 *  and contains the state of global variables.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Retrieve a copy of the global state of the system.\nThis is useful for saving the state of e.g. global variables.\n@return A static copy of the current global state. This struct can be serialised with your save data,\nand contains the state of global variables." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetSavedGlobalState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSUDSGlobalState, METADATA_PARAMS(0, nullptr) }; // 2274736321
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetSavedGlobalState", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::SUDSSubsystem_eventGetSavedGlobalState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::SUDSSubsystem_eventGetSavedGlobalState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetSavedGlobalState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSUDSGlobalState*)Z_Param__Result=P_THIS->GetSavedGlobalState();
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetSavedGlobalState

// Begin Class USUDSSubsystem Function GetVoicedLineConcurrencySettings
struct Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics
{
	struct SUDSSubsystem_eventGetVoicedLineConcurrencySettings_Parms
	{
		FSoundConcurrencySettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Settings" },
		{ "Comment", "/// Get the concurrency settings for voiced lines\n" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Get the concurrency settings for voiced lines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventGetVoicedLineConcurrencySettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoundConcurrencySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1059097620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "GetVoicedLineConcurrencySettings", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::SUDSSubsystem_eventGetVoicedLineConcurrencySettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::SUDSSubsystem_eventGetVoicedLineConcurrencySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execGetVoicedLineConcurrencySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoundConcurrencySettings*)Z_Param__Result=P_THIS->GetVoicedLineConcurrencySettings();
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function GetVoicedLineConcurrencySettings

// Begin Class USUDSSubsystem Function IsGlobalVariableSet
struct Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics
{
	struct SUDSSubsystem_eventIsGlobalVariableSet_Parms
	{
		FName Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventIsGlobalVariableSet_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SUDSSubsystem_eventIsGlobalVariableSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSSubsystem_eventIsGlobalVariableSet_Parms), &Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "IsGlobalVariableSet", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::SUDSSubsystem_eventIsGlobalVariableSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::SUDSSubsystem_eventIsGlobalVariableSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execIsGlobalVariableSet)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGlobalVariableSet(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function IsGlobalVariableSet

// Begin Class USUDSSubsystem Function ResetGlobalState
struct Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics
{
	struct SUDSSubsystem_eventResetGlobalState_Parms
	{
		bool bResetVariables;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global State" },
		{ "Comment", "/**\n\x09 * Reset the global state of the system.\n\x09 * @param bResetVariables If true, resets all variable state\n\x09 */" },
		{ "CPP_Default_bResetVariables", "true" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Reset the global state of the system.\n@param bResetVariables If true, resets all variable state" },
	};
#endif // WITH_METADATA
	static void NewProp_bResetVariables_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetVariables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::NewProp_bResetVariables_SetBit(void* Obj)
{
	((SUDSSubsystem_eventResetGlobalState_Parms*)Obj)->bResetVariables = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::NewProp_bResetVariables = { "bResetVariables", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSSubsystem_eventResetGlobalState_Parms), &Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::NewProp_bResetVariables_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::NewProp_bResetVariables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "ResetGlobalState", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::SUDSSubsystem_eventResetGlobalState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::SUDSSubsystem_eventResetGlobalState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execResetGlobalState)
{
	P_GET_UBOOL(Z_Param_bResetVariables);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetGlobalState(Z_Param_bResetVariables);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function ResetGlobalState

// Begin Class USUDSSubsystem Function RestoreSavedGlobalState
struct Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics
{
	struct SUDSSubsystem_eventRestoreSavedGlobalState_Parms
	{
		FSUDSGlobalState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Dialogue" },
		{ "Comment", "/** Restore the global saved state.\n\x09 *  This is useful for restoring global state eg global variables when you're loading a game.\n\x09 *  @param State Global state that you previously retrieved from GetSavedGlobalState().\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Restore the global saved state.\nThis is useful for restoring global state eg global variables when you're loading a game.\n@param State Global state that you previously retrieved from GetSavedGlobalState()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventRestoreSavedGlobalState_Parms, State), Z_Construct_UScriptStruct_FSUDSGlobalState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2274736321
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "RestoreSavedGlobalState", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::SUDSSubsystem_eventRestoreSavedGlobalState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::SUDSSubsystem_eventRestoreSavedGlobalState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execRestoreSavedGlobalState)
{
	P_GET_STRUCT_REF(FSUDSGlobalState,Z_Param_Out_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreSavedGlobalState(Z_Param_Out_State);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function RestoreSavedGlobalState

// Begin Class USUDSSubsystem Function SetGlobalVariable
struct Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics
{
	struct SUDSSubsystem_eventSetGlobalVariable_Parms
	{
		FName Name;
		FSUDSValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/// Set a global variable\n/// This is mostly only useful if you happen to already have a general purpose FSUDSValue.\n/// See SetGlobalVariableText, SetGlobalVariableInt etc for literal-friendly versions\n" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Set a global variable\nThis is mostly only useful if you happen to already have a general purpose FSUDSValue.\nSee SetGlobalVariableText, SetGlobalVariableInt etc for literal-friendly versions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariable_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariable_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 100687975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "SetGlobalVariable", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::SUDSSubsystem_eventSetGlobalVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::SUDSSubsystem_eventSetGlobalVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execSetGlobalVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_STRUCT(FSUDSValue,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalVariable(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function SetGlobalVariable

// Begin Class USUDSSubsystem Function SetGlobalVariableBoolean
struct Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics
{
	struct SUDSSubsystem_eventSetGlobalVariableBoolean_Parms
	{
		FName Name;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Set a boolean global variable \n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Set a boolean global variable\n@param Name The name of the variable\n@param Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableBoolean_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::NewProp_Value_SetBit(void* Obj)
{
	((SUDSSubsystem_eventSetGlobalVariableBoolean_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SUDSSubsystem_eventSetGlobalVariableBoolean_Parms), &Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "SetGlobalVariableBoolean", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::SUDSSubsystem_eventSetGlobalVariableBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::SUDSSubsystem_eventSetGlobalVariableBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execSetGlobalVariableBoolean)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalVariableBoolean(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function SetGlobalVariableBoolean

// Begin Class USUDSSubsystem Function SetGlobalVariableFloat
struct Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics
{
	struct SUDSSubsystem_eventSetGlobalVariableFloat_Parms
	{
		FName Name;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Set a float global variable \n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Set a float global variable\n@param Name The name of the variable\n@param Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "SetGlobalVariableFloat", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::SUDSSubsystem_eventSetGlobalVariableFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::SUDSSubsystem_eventSetGlobalVariableFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execSetGlobalVariableFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalVariableFloat(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function SetGlobalVariableFloat

// Begin Class USUDSSubsystem Function SetGlobalVariableGender
struct Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics
{
	struct SUDSSubsystem_eventSetGlobalVariableGender_Parms
	{
		FName Name;
		ETextGender Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Set a gender global variable \n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Set a gender global variable\n@param Name The name of the variable\n@param Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableGender_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableGender_Parms, Value), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(0, nullptr) }; // 3004401569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::NewProp_Value_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "SetGlobalVariableGender", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::SUDSSubsystem_eventSetGlobalVariableGender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::SUDSSubsystem_eventSetGlobalVariableGender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execSetGlobalVariableGender)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_ENUM(ETextGender,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalVariableGender(Z_Param_Name,ETextGender(Z_Param_Value));
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function SetGlobalVariableGender

// Begin Class USUDSSubsystem Function SetGlobalVariableInt
struct Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics
{
	struct SUDSSubsystem_eventSetGlobalVariableInt_Parms
	{
		FName Name;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Set a global variable on the passed in parameters collection.\n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Set a global variable on the passed in parameters collection.\n@param Name The name of the variable\n@param Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "SetGlobalVariableInt", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::SUDSSubsystem_eventSetGlobalVariableInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::SUDSSubsystem_eventSetGlobalVariableInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execSetGlobalVariableInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalVariableInt(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function SetGlobalVariableInt

// Begin Class USUDSSubsystem Function SetGlobalVariableName
struct Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics
{
	struct SUDSSubsystem_eventSetGlobalVariableName_Parms
	{
		FName Name;
		FName Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Set a name global variable\n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Set a name global variable\n@param Name The name of the variable\n@param Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "SetGlobalVariableName", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::SUDSSubsystem_eventSetGlobalVariableName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::SUDSSubsystem_eventSetGlobalVariableName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execSetGlobalVariableName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalVariableName(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function SetGlobalVariableName

// Begin Class USUDSSubsystem Function SetGlobalVariableText
struct Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics
{
	struct SUDSSubsystem_eventSetGlobalVariableText_Parms
	{
		FName Name;
		FText Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Set a text global variable\n\x09 * @param Name The name of the variable\n\x09 * @param Value The value of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Set a text global variable\n@param Name The name of the variable\n@param Value The value of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableText_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetGlobalVariableText_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "SetGlobalVariableText", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::SUDSSubsystem_eventSetGlobalVariableText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::SUDSSubsystem_eventSetGlobalVariableText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execSetGlobalVariableText)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FTextProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalVariableText(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function SetGlobalVariableText

// Begin Class USUDSSubsystem Function SetMaxConcurrentVoicedLines
struct Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics
{
	struct SUDSSubsystem_eventSetMaxConcurrentVoicedLines_Parms
	{
		int32 ConcurrentLines;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Settings" },
		{ "Comment", "/**\n\x09 * Sets the number of voiced lines that can be played at once. Defaults to 1, so that when a new voiced line is\n\x09 * played while another is still playing, the previous one is stopped. If you would prefer that they overlap, set\n\x09 * this to >1\n\x09 * @param ConcurrentLines The number of voice lines that can be played at once. \n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Sets the number of voiced lines that can be played at once. Defaults to 1, so that when a new voiced line is\nplayed while another is still playing, the previous one is stopped. If you would prefer that they overlap, set\nthis to >1\n@param ConcurrentLines The number of voice lines that can be played at once." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConcurrentLines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::NewProp_ConcurrentLines = { "ConcurrentLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetMaxConcurrentVoicedLines_Parms, ConcurrentLines), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::NewProp_ConcurrentLines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "SetMaxConcurrentVoicedLines", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::SUDSSubsystem_eventSetMaxConcurrentVoicedLines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::SUDSSubsystem_eventSetMaxConcurrentVoicedLines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execSetMaxConcurrentVoicedLines)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ConcurrentLines);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxConcurrentVoicedLines(Z_Param_ConcurrentLines);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function SetMaxConcurrentVoicedLines

// Begin Class USUDSSubsystem Function SetVoicedLineConcurrencySettings
struct Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics
{
	struct SUDSSubsystem_eventSetVoicedLineConcurrencySettings_Parms
	{
		FSoundConcurrencySettings NewSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Settings" },
		{ "Comment", "/**\n\x09 * Sets all the concurrency settings for voiced lines.\n\x09 * @param NewSettings \n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Sets all the concurrency settings for voiced lines.\n@param NewSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::NewProp_NewSettings = { "NewSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventSetVoicedLineConcurrencySettings_Parms, NewSettings), Z_Construct_UScriptStruct_FSoundConcurrencySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSettings_MetaData), NewProp_NewSettings_MetaData) }; // 1059097620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::NewProp_NewSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "SetVoicedLineConcurrencySettings", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::SUDSSubsystem_eventSetVoicedLineConcurrencySettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::SUDSSubsystem_eventSetVoicedLineConcurrencySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execSetVoicedLineConcurrencySettings)
{
	P_GET_STRUCT_REF(FSoundConcurrencySettings,Z_Param_Out_NewSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVoicedLineConcurrencySettings(Z_Param_Out_NewSettings);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function SetVoicedLineConcurrencySettings

// Begin Class USUDSSubsystem Function UnSetGlobalVariable
struct Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics
{
	struct SUDSSubsystem_eventUnSetGlobalVariable_Parms
	{
		FName Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SUDS|Global Variables" },
		{ "Comment", "/**\n\x09 * Remove the definition of a global variable.\n\x09 * This has much same effect as setting the variable back to the default value for this type, since attempting to\n\x09 * retrieve a missing variable result in a default value.\n\x09 * @param Name The name of the variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Remove the definition of a global variable.\nThis has much same effect as setting the variable back to the default value for this type, since attempting to\nretrieve a missing variable result in a default value.\n@param Name The name of the variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SUDSSubsystem_eventUnSetGlobalVariable_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USUDSSubsystem, nullptr, "UnSetGlobalVariable", nullptr, nullptr, Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::SUDSSubsystem_eventUnSetGlobalVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::SUDSSubsystem_eventUnSetGlobalVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USUDSSubsystem::execUnSetGlobalVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnSetGlobalVariable(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USUDSSubsystem Function UnSetGlobalVariable

// Begin Class USUDSSubsystem
void USUDSSubsystem::StaticRegisterNativesUSUDSSubsystem()
{
	UClass* Class = USUDSSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGlobalVariable", &USUDSSubsystem::execGetGlobalVariable },
		{ "GetGlobalVariableBoolean", &USUDSSubsystem::execGetGlobalVariableBoolean },
		{ "GetGlobalVariableFloat", &USUDSSubsystem::execGetGlobalVariableFloat },
		{ "GetGlobalVariableGender", &USUDSSubsystem::execGetGlobalVariableGender },
		{ "GetGlobalVariableInt", &USUDSSubsystem::execGetGlobalVariableInt },
		{ "GetGlobalVariableName", &USUDSSubsystem::execGetGlobalVariableName },
		{ "GetGlobalVariables", &USUDSSubsystem::execGetGlobalVariables },
		{ "GetGlobalVariableText", &USUDSSubsystem::execGetGlobalVariableText },
		{ "GetMaxConcurrentVoicedLines", &USUDSSubsystem::execGetMaxConcurrentVoicedLines },
		{ "GetSavedGlobalState", &USUDSSubsystem::execGetSavedGlobalState },
		{ "GetVoicedLineConcurrencySettings", &USUDSSubsystem::execGetVoicedLineConcurrencySettings },
		{ "IsGlobalVariableSet", &USUDSSubsystem::execIsGlobalVariableSet },
		{ "ResetGlobalState", &USUDSSubsystem::execResetGlobalState },
		{ "RestoreSavedGlobalState", &USUDSSubsystem::execRestoreSavedGlobalState },
		{ "SetGlobalVariable", &USUDSSubsystem::execSetGlobalVariable },
		{ "SetGlobalVariableBoolean", &USUDSSubsystem::execSetGlobalVariableBoolean },
		{ "SetGlobalVariableFloat", &USUDSSubsystem::execSetGlobalVariableFloat },
		{ "SetGlobalVariableGender", &USUDSSubsystem::execSetGlobalVariableGender },
		{ "SetGlobalVariableInt", &USUDSSubsystem::execSetGlobalVariableInt },
		{ "SetGlobalVariableName", &USUDSSubsystem::execSetGlobalVariableName },
		{ "SetGlobalVariableText", &USUDSSubsystem::execSetGlobalVariableText },
		{ "SetMaxConcurrentVoicedLines", &USUDSSubsystem::execSetMaxConcurrentVoicedLines },
		{ "SetVoicedLineConcurrencySettings", &USUDSSubsystem::execSetVoicedLineConcurrencySettings },
		{ "UnSetGlobalVariable", &USUDSSubsystem::execUnSetGlobalVariable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSSubsystem);
UClass* Z_Construct_UClass_USUDSSubsystem_NoRegister()
{
	return USUDSSubsystem::StaticClass();
}
struct Z_Construct_UClass_USUDSSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SUDSSubsystem.h" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGlobalVariableChanged_MetaData[] = {
		{ "Comment", "/// Event raised when a global variable is changed. \"FromScript\" is true if the variable was set by the script, false if set from code\n" },
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
		{ "ToolTip", "Event raised when a global variable is changed. \"FromScript\" is true if the variable was set by the script, false if set from code" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceConcurrency_MetaData[] = {
		{ "ModuleRelativePath", "Public/SUDSSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalVariableChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceConcurrency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariable, "GetGlobalVariable" }, // 2754587526
		{ &Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableBoolean, "GetGlobalVariableBoolean" }, // 3919709342
		{ &Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableFloat, "GetGlobalVariableFloat" }, // 1420693452
		{ &Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableGender, "GetGlobalVariableGender" }, // 2664547302
		{ &Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableInt, "GetGlobalVariableInt" }, // 2238308855
		{ &Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableName, "GetGlobalVariableName" }, // 1467258328
		{ &Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariables, "GetGlobalVariables" }, // 1193317111
		{ &Z_Construct_UFunction_USUDSSubsystem_GetGlobalVariableText, "GetGlobalVariableText" }, // 1393468532
		{ &Z_Construct_UFunction_USUDSSubsystem_GetMaxConcurrentVoicedLines, "GetMaxConcurrentVoicedLines" }, // 4219621232
		{ &Z_Construct_UFunction_USUDSSubsystem_GetSavedGlobalState, "GetSavedGlobalState" }, // 3017849438
		{ &Z_Construct_UFunction_USUDSSubsystem_GetVoicedLineConcurrencySettings, "GetVoicedLineConcurrencySettings" }, // 1376545658
		{ &Z_Construct_UFunction_USUDSSubsystem_IsGlobalVariableSet, "IsGlobalVariableSet" }, // 430326655
		{ &Z_Construct_UFunction_USUDSSubsystem_ResetGlobalState, "ResetGlobalState" }, // 3649529567
		{ &Z_Construct_UFunction_USUDSSubsystem_RestoreSavedGlobalState, "RestoreSavedGlobalState" }, // 775509801
		{ &Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariable, "SetGlobalVariable" }, // 334225314
		{ &Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableBoolean, "SetGlobalVariableBoolean" }, // 595146723
		{ &Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableFloat, "SetGlobalVariableFloat" }, // 3073594900
		{ &Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableGender, "SetGlobalVariableGender" }, // 3711111318
		{ &Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableInt, "SetGlobalVariableInt" }, // 4066233198
		{ &Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableName, "SetGlobalVariableName" }, // 2614275369
		{ &Z_Construct_UFunction_USUDSSubsystem_SetGlobalVariableText, "SetGlobalVariableText" }, // 517679299
		{ &Z_Construct_UFunction_USUDSSubsystem_SetMaxConcurrentVoicedLines, "SetMaxConcurrentVoicedLines" }, // 206116839
		{ &Z_Construct_UFunction_USUDSSubsystem_SetVoicedLineConcurrencySettings, "SetVoicedLineConcurrencySettings" }, // 2511427797
		{ &Z_Construct_UFunction_USUDSSubsystem_UnSetGlobalVariable, "UnSetGlobalVariable" }, // 2439957346
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USUDSSubsystem_Statics::NewProp_OnGlobalVariableChanged = { "OnGlobalVariableChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSSubsystem, OnGlobalVariableChanged), Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGlobalVariableChanged_MetaData), NewProp_OnGlobalVariableChanged_MetaData) }; // 2899637280
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USUDSSubsystem_Statics::NewProp_VoiceConcurrency = { "VoiceConcurrency", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSSubsystem, VoiceConcurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceConcurrency_MetaData), NewProp_VoiceConcurrency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUDSSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSSubsystem_Statics::NewProp_OnGlobalVariableChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSSubsystem_Statics::NewProp_VoiceConcurrency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USUDSSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSSubsystem_Statics::ClassParams = {
	&USUDSSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USUDSSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USUDSSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSSubsystem()
{
	if (!Z_Registration_Info_UClass_USUDSSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSSubsystem.OuterSingleton, Z_Construct_UClass_USUDSSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSSubsystem.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSSubsystem>()
{
	return USUDSSubsystem::StaticClass();
}
USUDSSubsystem::USUDSSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSSubsystem);
USUDSSubsystem::~USUDSSubsystem() {}
// End Class USUDSSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSUDSGlobalState::StaticStruct, Z_Construct_UScriptStruct_FSUDSGlobalState_Statics::NewStructOps, TEXT("SUDSGlobalState"), &Z_Registration_Info_UScriptStruct_SUDSGlobalState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSUDSGlobalState), 2274736321U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSSubsystem, USUDSSubsystem::StaticClass, TEXT("USUDSSubsystem"), &Z_Registration_Info_UClass_USUDSSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSSubsystem), 3378313486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSSubsystem_h_206865646(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
