// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraFOVObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraFOVObject() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraBaseObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraFOVObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraFOVObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraFOVObject Function GetCurrentFOV
struct Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics
{
	struct ATPCCameraFOVObject_eventGetCurrentFOV_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraFOVObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraFOVObject_eventGetCurrentFOV_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraFOVObject, nullptr, "GetCurrentFOV", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::ATPCCameraFOVObject_eventGetCurrentFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::ATPCCameraFOVObject_eventGetCurrentFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraFOVObject::execGetCurrentFOV)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentFOV();
	P_NATIVE_END;
}
// End Class UATPCCameraFOVObject Function GetCurrentFOV

// Begin Class UATPCCameraFOVObject
void UATPCCameraFOVObject::StaticRegisterNativesUATPCCameraFOVObject()
{
	UClass* Class = UATPCCameraFOVObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentFOV", &UATPCCameraFOVObject::execGetCurrentFOV },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraFOVObject);
UClass* Z_Construct_UClass_UATPCCameraFOVObject_NoRegister()
{
	return UATPCCameraFOVObject::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraFOVObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ATPC" },
		{ "IncludePath", "ATPCCameraFOVObject.h" },
		{ "ModuleRelativePath", "Public/ATPCCameraFOVObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UATPCCameraFOVObject_GetCurrentFOV, "GetCurrentFOV" }, // 3342642597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraFOVObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UATPCCameraFOVObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UATPCCameraBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraFOVObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraFOVObject_Statics::ClassParams = {
	&UATPCCameraFOVObject::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraFOVObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraFOVObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraFOVObject()
{
	if (!Z_Registration_Info_UClass_UATPCCameraFOVObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraFOVObject.OuterSingleton, Z_Construct_UClass_UATPCCameraFOVObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraFOVObject.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraFOVObject>()
{
	return UATPCCameraFOVObject::StaticClass();
}
UATPCCameraFOVObject::UATPCCameraFOVObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraFOVObject);
UATPCCameraFOVObject::~UATPCCameraFOVObject() {}
// End Class UATPCCameraFOVObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFOVObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraFOVObject, UATPCCameraFOVObject::StaticClass, TEXT("UATPCCameraFOVObject"), &Z_Registration_Info_UClass_UATPCCameraFOVObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraFOVObject), 4188029550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFOVObject_h_234169597(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFOVObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFOVObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
