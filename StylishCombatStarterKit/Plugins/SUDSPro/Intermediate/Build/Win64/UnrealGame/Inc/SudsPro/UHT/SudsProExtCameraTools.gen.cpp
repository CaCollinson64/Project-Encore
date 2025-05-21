// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProExtCameraTools.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProExtCameraTools() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SUDS_API UClass* Z_Construct_UClass_USUDSDialogue_NoRegister();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCameraModifier_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProDialogueExtension();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProExtCameraTools();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProExtCameraTools_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Class USudsProExtCameraTools Function OnVariableChanged
struct Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics
{
	struct SudsProExtCameraTools_eventOnVariableChanged_Parms
	{
		USUDSDialogue* Dialogue;
		FName VariableName;
		FSUDSValue Value;
		bool bFromScript;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtCameraTools.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtCameraTools_eventOnVariableChanged_Parms, Dialogue), Z_Construct_UClass_USUDSDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtCameraTools_eventOnVariableChanged_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtCameraTools_eventOnVariableChanged_Parms, Value), Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 100687975
void Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_bFromScript_SetBit(void* Obj)
{
	((SudsProExtCameraTools_eventOnVariableChanged_Parms*)Obj)->bFromScript = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_bFromScript = { "bFromScript", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProExtCameraTools_eventOnVariableChanged_Parms), &Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_bFromScript_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::NewProp_bFromScript,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProExtCameraTools, nullptr, "OnVariableChanged", nullptr, nullptr, Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::SudsProExtCameraTools_eventOnVariableChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::SudsProExtCameraTools_eventOnVariableChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProExtCameraTools::execOnVariableChanged)
{
	P_GET_OBJECT(USUDSDialogue,Z_Param_Dialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FSUDSValue,Z_Param_Out_Value);
	P_GET_UBOOL(Z_Param_bFromScript);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVariableChanged(Z_Param_Dialogue,Z_Param_VariableName,Z_Param_Out_Value,Z_Param_bFromScript);
	P_NATIVE_END;
}
// End Class USudsProExtCameraTools Function OnVariableChanged

// Begin Class USudsProExtCameraTools
void USudsProExtCameraTools::StaticRegisterNativesUSudsProExtCameraTools()
{
	UClass* Class = USudsProExtCameraTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnVariableChanged", &USudsProExtCameraTools::execOnVariableChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProExtCameraTools);
UClass* Z_Construct_UClass_USudsProExtCameraTools_NoRegister()
{
	return USudsProExtCameraTools::StaticClass();
}
struct Z_Construct_UClass_USudsProExtCameraTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Extension which provides support for camera stuff in dialogues\n * \n */" },
		{ "IncludePath", "Extensions/SudsProExtCameraTools.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtCameraTools.h" },
		{ "ToolTip", "Extension which provides support for camera stuff in dialogues" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtCameraTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtCameraTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalViewTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProExtCameraTools_OnVariableChanged, "OnVariableChanged" }, // 325484192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProExtCameraTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USudsProExtCameraTools_Statics::NewProp_OriginalViewTarget = { "OriginalViewTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProExtCameraTools, OriginalViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalViewTarget_MetaData), NewProp_OriginalViewTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USudsProExtCameraTools_Statics::NewProp_CameraModifier = { "CameraModifier", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProExtCameraTools, CameraModifier), Z_Construct_UClass_USudsProCameraModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModifier_MetaData), NewProp_CameraModifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USudsProExtCameraTools_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProExtCameraTools_Statics::NewProp_OriginalViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProExtCameraTools_Statics::NewProp_CameraModifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtCameraTools_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USudsProExtCameraTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USudsProDialogueExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtCameraTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProExtCameraTools_Statics::ClassParams = {
	&USudsProExtCameraTools::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USudsProExtCameraTools_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtCameraTools_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtCameraTools_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProExtCameraTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProExtCameraTools()
{
	if (!Z_Registration_Info_UClass_USudsProExtCameraTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProExtCameraTools.OuterSingleton, Z_Construct_UClass_USudsProExtCameraTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProExtCameraTools.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProExtCameraTools>()
{
	return USudsProExtCameraTools::StaticClass();
}
USudsProExtCameraTools::USudsProExtCameraTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProExtCameraTools);
USudsProExtCameraTools::~USudsProExtCameraTools() {}
// End Class USudsProExtCameraTools

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProExtCameraTools_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProExtCameraTools, USudsProExtCameraTools::StaticClass, TEXT("USudsProExtCameraTools"), &Z_Registration_Info_UClass_USudsProExtCameraTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProExtCameraTools), 1038422400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProExtCameraTools_h_1419490566(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProExtCameraTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProExtCameraTools_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
