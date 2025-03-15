// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraShakesObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraShakesObject() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraBaseObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraShakesObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraShakesObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraShakesObject
void UATPCCameraShakesObject::StaticRegisterNativesUATPCCameraShakesObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraShakesObject);
UClass* Z_Construct_UClass_UATPCCameraShakesObject_NoRegister()
{
	return UATPCCameraShakesObject::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraShakesObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ATPC" },
		{ "IncludePath", "ATPCCameraShakesObject.h" },
		{ "ModuleRelativePath", "Public/ATPCCameraShakesObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraShakesObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UATPCCameraShakesObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UATPCCameraBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraShakesObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraShakesObject_Statics::ClassParams = {
	&UATPCCameraShakesObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraShakesObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraShakesObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraShakesObject()
{
	if (!Z_Registration_Info_UClass_UATPCCameraShakesObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraShakesObject.OuterSingleton, Z_Construct_UClass_UATPCCameraShakesObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraShakesObject.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraShakesObject>()
{
	return UATPCCameraShakesObject::StaticClass();
}
UATPCCameraShakesObject::UATPCCameraShakesObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraShakesObject);
UATPCCameraShakesObject::~UATPCCameraShakesObject() {}
// End Class UATPCCameraShakesObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraShakesObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraShakesObject, UATPCCameraShakesObject::StaticClass, TEXT("UATPCCameraShakesObject"), &Z_Registration_Info_UClass_UATPCCameraShakesObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraShakesObject), 3604836003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraShakesObject_h_1202301378(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraShakesObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraShakesObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
