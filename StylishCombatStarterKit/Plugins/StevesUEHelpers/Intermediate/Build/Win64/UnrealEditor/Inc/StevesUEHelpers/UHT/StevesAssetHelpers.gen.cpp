// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesAssetHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesAssetHelpers() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesAssetHelpers();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesAssetHelpers_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UStevesAssetHelpers
void UStevesAssetHelpers::StaticRegisterNativesUStevesAssetHelpers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesAssetHelpers);
UClass* Z_Construct_UClass_UStevesAssetHelpers_NoRegister()
{
	return UStevesAssetHelpers::StaticClass();
}
struct Z_Construct_UClass_UStevesAssetHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Class to help out with asset related tasks, mostly C++ only but defined as a BPL in case that's useful later\n" },
#endif
		{ "IncludePath", "StevesAssetHelpers.h" },
		{ "ModuleRelativePath", "Public/StevesAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to help out with asset related tasks, mostly C++ only but defined as a BPL in case that's useful later" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesAssetHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStevesAssetHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesAssetHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesAssetHelpers_Statics::ClassParams = {
	&UStevesAssetHelpers::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesAssetHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesAssetHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesAssetHelpers()
{
	if (!Z_Registration_Info_UClass_UStevesAssetHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesAssetHelpers.OuterSingleton, Z_Construct_UClass_UStevesAssetHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesAssetHelpers.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesAssetHelpers>()
{
	return UStevesAssetHelpers::StaticClass();
}
UStevesAssetHelpers::UStevesAssetHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesAssetHelpers);
UStevesAssetHelpers::~UStevesAssetHelpers() {}
// End Class UStevesAssetHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesAssetHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesAssetHelpers, UStevesAssetHelpers::StaticClass, TEXT("UStevesAssetHelpers"), &Z_Registration_Info_UClass_UStevesAssetHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesAssetHelpers), 2672968607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesAssetHelpers_h_1487634831(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesAssetHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesAssetHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
