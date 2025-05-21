// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProExtWait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProExtWait() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProDialogueExtension();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProExtWait();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProExtWait_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Class USudsProExtWait Function NotifyWaitingDialogue
struct Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics
{
	struct SudsProExtWait_eventNotifyWaitingDialogue_Parms
	{
		const UObject* WorldContextObject;
		FName NotificationName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Waiting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Send a notification to a waiting dialogue. Dialogue which is awaiting this notification\n\x09 * will then continue.\n\x09 * @param WorldContextObject Required world context object (automatically provided in Blueprints)\n\x09 * @param NotificationName Optional notification name, for if you need to wait on different notifications.\n\x09 */" },
#endif
		{ "CPP_Default_NotificationName", "None" },
		{ "DisplayName", "Notify Waiting Dialogue Of Event" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a notification to a waiting dialogue. Dialogue which is awaiting this notification\nwill then continue.\n@param WorldContextObject Required world context object (automatically provided in Blueprints)\n@param NotificationName Optional notification name, for if you need to wait on different notifications." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotificationName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtWait_eventNotifyWaitingDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::NewProp_NotificationName = { "NotificationName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProExtWait_eventNotifyWaitingDialogue_Parms, NotificationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationName_MetaData), NewProp_NotificationName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::NewProp_NotificationName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProExtWait, nullptr, "NotifyWaitingDialogue", nullptr, nullptr, Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::SudsProExtWait_eventNotifyWaitingDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::SudsProExtWait_eventNotifyWaitingDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USudsProExtWait::execNotifyWaitingDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_NotificationName);
	P_FINISH;
	P_NATIVE_BEGIN;
	USudsProExtWait::NotifyWaitingDialogue(Z_Param_WorldContextObject,Z_Param_NotificationName);
	P_NATIVE_END;
}
// End Class USudsProExtWait Function NotifyWaitingDialogue

// Begin Class USudsProExtWait
void USudsProExtWait::StaticRegisterNativesUSudsProExtWait()
{
	UClass* Class = USudsProExtWait::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NotifyWaitingDialogue", &USudsProExtWait::execNotifyWaitingDialogue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProExtWait);
UClass* Z_Construct_UClass_USudsProExtWait_NoRegister()
{
	return USudsProExtWait::StaticClass();
}
struct Z_Construct_UClass_USudsProExtWait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Extensions/SudsProExtWait.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProExtWait.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProExtWait_NotifyWaitingDialogue, "NotifyWaitingDialogue" }, // 3845822666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USudsProExtWait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProExtWait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USudsProDialogueExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtWait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProExtWait_Statics::ClassParams = {
	&USudsProExtWait::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProExtWait_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProExtWait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProExtWait()
{
	if (!Z_Registration_Info_UClass_USudsProExtWait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProExtWait.OuterSingleton, Z_Construct_UClass_USudsProExtWait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProExtWait.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProExtWait>()
{
	return USudsProExtWait::StaticClass();
}
USudsProExtWait::USudsProExtWait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProExtWait);
USudsProExtWait::~USudsProExtWait() {}
// End Class USudsProExtWait

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtWait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProExtWait, USudsProExtWait::StaticClass, TEXT("USudsProExtWait"), &Z_Registration_Info_UClass_USudsProExtWait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProExtWait), 2705570035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtWait_h_500604497(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtWait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProExtWait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
