// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/DodgeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UDodgeComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UDodgeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UDodgeComponent
void UDodgeComponent::StaticRegisterNativesUDodgeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDodgeComponent);
UClass* Z_Construct_UClass_UDodgeComponent_NoRegister()
{
	return UDodgeComponent::StaticClass();
}
struct Z_Construct_UClass_UDodgeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Gameplay/Character/Components/DodgeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/DodgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeStrength_MetaData[] = {
		{ "Category", "Dodge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How strong the dash/roll impulse is. Tweak to your liking. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/DodgeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How strong the dash/roll impulse is. Tweak to your liking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeDuration_MetaData[] = {
		{ "Category", "Dodge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How long the dodge lasts before friction gets restored. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/DodgeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long the dodge lasts before friction gets restored." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDodgeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DodgeStrength = { "DodgeStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDodgeComponent, DodgeStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeStrength_MetaData), NewProp_DodgeStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DodgeDuration = { "DodgeDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDodgeComponent, DodgeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeDuration_MetaData), NewProp_DodgeDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDodgeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DodgeStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DodgeDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDodgeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDodgeComponent_Statics::ClassParams = {
	&UDodgeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDodgeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDodgeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDodgeComponent()
{
	if (!Z_Registration_Info_UClass_UDodgeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDodgeComponent.OuterSingleton, Z_Construct_UClass_UDodgeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDodgeComponent.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UDodgeComponent>()
{
	return UDodgeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDodgeComponent);
UDodgeComponent::~UDodgeComponent() {}
// End Class UDodgeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_DodgeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDodgeComponent, UDodgeComponent::StaticClass, TEXT("UDodgeComponent"), &Z_Registration_Info_UClass_UDodgeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDodgeComponent), 1484107441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_DodgeComponent_h_1735298194(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_DodgeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_DodgeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
