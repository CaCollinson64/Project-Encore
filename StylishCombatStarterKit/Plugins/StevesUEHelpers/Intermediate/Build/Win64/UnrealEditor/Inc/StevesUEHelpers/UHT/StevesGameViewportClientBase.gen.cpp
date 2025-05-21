// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesGameViewportClientBase.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesGameViewportClientBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesGameViewportClientBase();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesGameViewportClientBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UStevesGameViewportClientBase
void UStevesGameViewportClientBase::StaticRegisterNativesUStevesGameViewportClientBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesGameViewportClientBase);
UClass* Z_Construct_UClass_UStevesGameViewportClientBase_NoRegister()
{
	return UStevesGameViewportClientBase::StaticClass();
}
struct Z_Construct_UClass_UStevesGameViewportClientBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StevesGameViewportClientBase.h" },
		{ "ModuleRelativePath", "Public/StevesGameViewportClientBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesGameViewportClientBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStevesGameViewportClientBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesGameViewportClientBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesGameViewportClientBase_Statics::ClassParams = {
	&UStevesGameViewportClientBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesGameViewportClientBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesGameViewportClientBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesGameViewportClientBase()
{
	if (!Z_Registration_Info_UClass_UStevesGameViewportClientBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesGameViewportClientBase.OuterSingleton, Z_Construct_UClass_UStevesGameViewportClientBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesGameViewportClientBase.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesGameViewportClientBase>()
{
	return UStevesGameViewportClientBase::StaticClass();
}
UStevesGameViewportClientBase::UStevesGameViewportClientBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesGameViewportClientBase);
UStevesGameViewportClientBase::~UStevesGameViewportClientBase() {}
// End Class UStevesGameViewportClientBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameViewportClientBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesGameViewportClientBase, UStevesGameViewportClientBase::StaticClass, TEXT("UStevesGameViewportClientBase"), &Z_Registration_Info_UClass_UStevesGameViewportClientBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesGameViewportClientBase), 2590862193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameViewportClientBase_h_1437158891(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameViewportClientBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesGameViewportClientBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
