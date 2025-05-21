// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProExtCharacterTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProExtCharacterTools() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProDialogueExtension();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProExtCharacterTools();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProExtCharacterTools_NoRegister();
SUDSPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin ScriptStruct FSudsProQueuedCharacterMove
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SudsProQueuedCharacterMove;
class UScriptStruct* FSudsProQueuedCharacterMove::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SudsProQueuedCharacterMove.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SudsProQueuedCharacterMove.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove, (UObject*)Z_Construct_UPackage__Script_SudsPro(), TEXT("SudsProQueuedCharacterMove"));
	}
	return Z_Registration_Info_UScriptStruct_SudsProQueuedCharacterMove.OuterSingleton;
}
template<> SUDSPRO_API UScriptStruct* StaticStruct<FSudsProQueuedCharacterMove>()
{
	return FSudsProQueuedCharacterMove::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtCharacterTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtCharacterTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSudsProQueuedCharacterMove>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSudsProQueuedCharacterMove, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
	nullptr,
	&NewStructOps,
	"SudsProQueuedCharacterMove",
	Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::PropPointers),
	sizeof(FSudsProQueuedCharacterMove),
	alignof(FSudsProQueuedCharacterMove),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove()
{
	if (!Z_Registration_Info_UScriptStruct_SudsProQueuedCharacterMove.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SudsProQueuedCharacterMove.InnerSingleton, Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SudsProQueuedCharacterMove.InnerSingleton;
}
// End ScriptStruct FSudsProQueuedCharacterMove

// Begin Class USudsProExtCharacterTools Function OnFadeOutFinished
struct Z_Construct_UFunction_USudsProExtCharacterTools_OnFadeOutFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtCharacterTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProExtCharacterTools_OnFadeOutFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProExtCharacterTools, nullptr, "OnFadeOutFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtCharacterTools_OnFadeOutFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProExtCharacterTools_OnFadeOutFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USudsProExtCharacterTools_OnFadeOutFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProExtCharacterTools_OnFadeOutFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProExtCharacterTools::execOnFadeOutFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFadeOutFinished();
	P_NATIVE_END;
}
// End Class USudsProExtCharacterTools Function OnFadeOutFinished

// Begin Class USudsProExtCharacterTools
void USudsProExtCharacterTools::StaticRegisterNativesUSudsProExtCharacterTools()
{
	UClass* Class = USudsProExtCharacterTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnFadeOutFinished", &USudsProExtCharacterTools::execOnFadeOutFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProExtCharacterTools);
UClass* Z_Construct_UClass_USudsProExtCharacterTools_NoRegister()
{
	return USudsProExtCharacterTools::StaticClass();
}
struct Z_Construct_UClass_USudsProExtCharacterTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Extension which provides support for character stuff in dialogues\n * \n */" },
#endif
		{ "IncludePath", "Extensions/SudsProExtCharacterTools.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtCharacterTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extension which provides support for character stuff in dialogues" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueuedMoves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtCharacterTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueuedMoves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QueuedMoves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProExtCharacterTools_OnFadeOutFinished, "OnFadeOutFinished" }, // 2359192923
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProExtCharacterTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USudsProExtCharacterTools_Statics::NewProp_QueuedMoves_Inner = { "QueuedMoves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove, METADATA_PARAMS(0, nullptr) }; // 1972827628
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USudsProExtCharacterTools_Statics::NewProp_QueuedMoves = { "QueuedMoves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USudsProExtCharacterTools, QueuedMoves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueuedMoves_MetaData), NewProp_QueuedMoves_MetaData) }; // 1972827628
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USudsProExtCharacterTools_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProExtCharacterTools_Statics::NewProp_QueuedMoves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USudsProExtCharacterTools_Statics::NewProp_QueuedMoves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtCharacterTools_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USudsProExtCharacterTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USudsProDialogueExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtCharacterTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProExtCharacterTools_Statics::ClassParams = {
	&USudsProExtCharacterTools::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USudsProExtCharacterTools_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtCharacterTools_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtCharacterTools_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProExtCharacterTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProExtCharacterTools()
{
	if (!Z_Registration_Info_UClass_USudsProExtCharacterTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProExtCharacterTools.OuterSingleton, Z_Construct_UClass_USudsProExtCharacterTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProExtCharacterTools.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProExtCharacterTools>()
{
	return USudsProExtCharacterTools::StaticClass();
}
USudsProExtCharacterTools::USudsProExtCharacterTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProExtCharacterTools);
USudsProExtCharacterTools::~USudsProExtCharacterTools() {}
// End Class USudsProExtCharacterTools

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtCharacterTools_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSudsProQueuedCharacterMove::StaticStruct, Z_Construct_UScriptStruct_FSudsProQueuedCharacterMove_Statics::NewStructOps, TEXT("SudsProQueuedCharacterMove"), &Z_Registration_Info_UScriptStruct_SudsProQueuedCharacterMove, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSudsProQueuedCharacterMove), 1972827628U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProExtCharacterTools, USudsProExtCharacterTools::StaticClass, TEXT("USudsProExtCharacterTools"), &Z_Registration_Info_UClass_USudsProExtCharacterTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProExtCharacterTools), 1759806901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtCharacterTools_h_417089532(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtCharacterTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtCharacterTools_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtCharacterTools_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtCharacterTools_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
