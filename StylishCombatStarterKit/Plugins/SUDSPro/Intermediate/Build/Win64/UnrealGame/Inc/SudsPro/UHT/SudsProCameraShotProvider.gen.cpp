// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProCameraShotProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProCameraShotProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCameraShotProvider();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCameraShotProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Interface USudsProCameraShotProvider Function GetDialogueCameraShot
struct SudsProCameraShotProvider_eventGetDialogueCameraShot_Parms
{
	FName ShotName;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProCameraShotProvider_eventGetDialogueCameraShot_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* ISudsProCameraShotProvider::GetDialogueCameraShot(FName ShotName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueCameraShot instead.");
	SudsProCameraShotProvider_eventGetDialogueCameraShot_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProCameraShotProvider_GetDialogueCameraShot = FName(TEXT("GetDialogueCameraShot"));
AActor* ISudsProCameraShotProvider::Execute_GetDialogueCameraShot(UObject* O, FName ShotName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProCameraShotProvider::StaticClass()));
	SudsProCameraShotProvider_eventGetDialogueCameraShot_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProCameraShotProvider_GetDialogueCameraShot);
	if (Func)
	{
		Parms.ShotName=ShotName;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProCameraShotProvider*)(O->GetNativeInterfaceAddress(USudsProCameraShotProvider::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueCameraShot_Implementation(ShotName);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Cameras" },
		{ "Comment", "/**\n\x09 * Try to get an actor with a camera component that represents a camera shot, given a shot name.\n\x09 * The actor should be compatible with SetViewTarget(), i.e. have an active camera or cine camera component.\n\x09 * @param ShotName The name of the shot\n\x09 * @return An actor which has an active camera component, or null if this provider can't fulfil this shot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProCameraShotProvider.h" },
		{ "ToolTip", "Try to get an actor with a camera component that represents a camera shot, given a shot name.\nThe actor should be compatible with SetViewTarget(), i.e. have an active camera or cine camera component.\n@param ShotName The name of the shot\n@return An actor which has an active camera component, or null if this provider can't fulfil this shot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::NewProp_ShotName = { "ShotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCameraShotProvider_eventGetDialogueCameraShot_Parms, ShotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCameraShotProvider_eventGetDialogueCameraShot_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::NewProp_ShotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProCameraShotProvider, nullptr, "GetDialogueCameraShot", nullptr, nullptr, Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::PropPointers), sizeof(SudsProCameraShotProvider_eventGetDialogueCameraShot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProCameraShotProvider_eventGetDialogueCameraShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProCameraShotProvider::execGetDialogueCameraShot)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ShotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetDialogueCameraShot_Implementation(Z_Param_ShotName);
	P_NATIVE_END;
}
// End Interface USudsProCameraShotProvider Function GetDialogueCameraShot

// Begin Interface USudsProCameraShotProvider
void USudsProCameraShotProvider::StaticRegisterNativesUSudsProCameraShotProvider()
{
	UClass* Class = USudsProCameraShotProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueCameraShot", &ISudsProCameraShotProvider::execGetDialogueCameraShot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProCameraShotProvider);
UClass* Z_Construct_UClass_USudsProCameraShotProvider_NoRegister()
{
	return USudsProCameraShotProvider::StaticClass();
}
struct Z_Construct_UClass_USudsProCameraShotProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProCameraShotProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProCameraShotProvider_GetDialogueCameraShot, "GetDialogueCameraShot" }, // 3357059954
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISudsProCameraShotProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProCameraShotProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProCameraShotProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProCameraShotProvider_Statics::ClassParams = {
	&USudsProCameraShotProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProCameraShotProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProCameraShotProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProCameraShotProvider()
{
	if (!Z_Registration_Info_UClass_USudsProCameraShotProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProCameraShotProvider.OuterSingleton, Z_Construct_UClass_USudsProCameraShotProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProCameraShotProvider.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProCameraShotProvider>()
{
	return USudsProCameraShotProvider::StaticClass();
}
USudsProCameraShotProvider::USudsProCameraShotProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProCameraShotProvider);
USudsProCameraShotProvider::~USudsProCameraShotProvider() {}
// End Interface USudsProCameraShotProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProCameraShotProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProCameraShotProvider, USudsProCameraShotProvider::StaticClass, TEXT("USudsProCameraShotProvider"), &Z_Registration_Info_UClass_USudsProCameraShotProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProCameraShotProvider), 3178289143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProCameraShotProvider_h_3060109401(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProCameraShotProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProCameraShotProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
