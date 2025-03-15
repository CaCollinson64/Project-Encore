// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraFollowTerrainObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraFollowTerrainObject() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraBaseObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraFollowTerrainObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraFollowTerrainObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraFollowTerrainObject
void UATPCCameraFollowTerrainObject::StaticRegisterNativesUATPCCameraFollowTerrainObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraFollowTerrainObject);
UClass* Z_Construct_UClass_UATPCCameraFollowTerrainObject_NoRegister()
{
	return UATPCCameraFollowTerrainObject::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraFollowTerrainObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ATPC" },
		{ "IncludePath", "ATPCCameraFollowTerrainObject.h" },
		{ "ModuleRelativePath", "Public/ATPCCameraFollowTerrainObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraFollowTerrainObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UATPCCameraFollowTerrainObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UATPCCameraBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraFollowTerrainObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraFollowTerrainObject_Statics::ClassParams = {
	&UATPCCameraFollowTerrainObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraFollowTerrainObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraFollowTerrainObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraFollowTerrainObject()
{
	if (!Z_Registration_Info_UClass_UATPCCameraFollowTerrainObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraFollowTerrainObject.OuterSingleton, Z_Construct_UClass_UATPCCameraFollowTerrainObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraFollowTerrainObject.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraFollowTerrainObject>()
{
	return UATPCCameraFollowTerrainObject::StaticClass();
}
UATPCCameraFollowTerrainObject::UATPCCameraFollowTerrainObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraFollowTerrainObject);
UATPCCameraFollowTerrainObject::~UATPCCameraFollowTerrainObject() {}
// End Class UATPCCameraFollowTerrainObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFollowTerrainObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraFollowTerrainObject, UATPCCameraFollowTerrainObject::StaticClass, TEXT("UATPCCameraFollowTerrainObject"), &Z_Registration_Info_UClass_UATPCCameraFollowTerrainObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraFollowTerrainObject), 1229367478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFollowTerrainObject_h_2495078113(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFollowTerrainObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFollowTerrainObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
