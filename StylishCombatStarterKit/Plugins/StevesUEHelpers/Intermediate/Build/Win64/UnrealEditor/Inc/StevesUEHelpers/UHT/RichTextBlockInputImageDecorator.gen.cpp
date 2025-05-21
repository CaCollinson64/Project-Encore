// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesUI/RichTextBlockInputImageDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlockInputImageDecorator() {}

// Begin Cross Module References
STEVESUEHELPERS_API UClass* Z_Construct_UClass_URichTextBlockInputImageDecorator();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_URichTextBlockInputImageDecorator_NoRegister();
UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class URichTextBlockInputImageDecorator
void URichTextBlockInputImageDecorator::StaticRegisterNativesURichTextBlockInputImageDecorator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URichTextBlockInputImageDecorator);
UClass* Z_Construct_UClass_URichTextBlockInputImageDecorator_NoRegister()
{
	return URichTextBlockInputImageDecorator::StaticClass();
}
struct Z_Construct_UClass_URichTextBlockInputImageDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StevesUI/RichTextBlockInputImageDecorator.h" },
		{ "ModuleRelativePath", "Public/StevesUI/RichTextBlockInputImageDecorator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlockInputImageDecorator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URichTextBlockInputImageDecorator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockInputImageDecorator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlockInputImageDecorator_Statics::ClassParams = {
	&URichTextBlockInputImageDecorator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockInputImageDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_URichTextBlockInputImageDecorator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URichTextBlockInputImageDecorator()
{
	if (!Z_Registration_Info_UClass_URichTextBlockInputImageDecorator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URichTextBlockInputImageDecorator.OuterSingleton, Z_Construct_UClass_URichTextBlockInputImageDecorator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URichTextBlockInputImageDecorator.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<URichTextBlockInputImageDecorator>()
{
	return URichTextBlockInputImageDecorator::StaticClass();
}
URichTextBlockInputImageDecorator::URichTextBlockInputImageDecorator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockInputImageDecorator);
URichTextBlockInputImageDecorator::~URichTextBlockInputImageDecorator() {}
// End Class URichTextBlockInputImageDecorator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_RichTextBlockInputImageDecorator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URichTextBlockInputImageDecorator, URichTextBlockInputImageDecorator::StaticClass, TEXT("URichTextBlockInputImageDecorator"), &Z_Registration_Info_UClass_URichTextBlockInputImageDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URichTextBlockInputImageDecorator), 3634942246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_RichTextBlockInputImageDecorator_h_108800103(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_RichTextBlockInputImageDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_RichTextBlockInputImageDecorator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
