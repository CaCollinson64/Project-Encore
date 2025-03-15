// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/TargetingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UInteroperableComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UTargetingComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UTargetingComponent_NoRegister();
STYLISHCOMBATSTARTERKIT_API UEnum* Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Enum ETargetSelectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetSelectionMethod;
static UEnum* ETargetSelectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETargetSelectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETargetSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod, (UObject*)Z_Construct_UPackage__Script_StylishCombatStarterKit(), TEXT("ETargetSelectionMethod"));
	}
	return Z_Registration_Info_UEnum_ETargetSelectionMethod.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UEnum* StaticEnum<ETargetSelectionMethod>()
{
	return ETargetSelectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enum to select how targets are chosen */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
		{ "MultiTarget.DisplayName", "Multi Target" },
		{ "MultiTarget.Name", "ETargetSelectionMethod::MultiTarget" },
		{ "SingleTarget.DisplayName", "Single Target" },
		{ "SingleTarget.Name", "ETargetSelectionMethod::SingleTarget" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to select how targets are chosen" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETargetSelectionMethod::SingleTarget", (int64)ETargetSelectionMethod::SingleTarget },
		{ "ETargetSelectionMethod::MultiTarget", (int64)ETargetSelectionMethod::MultiTarget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
	nullptr,
	"ETargetSelectionMethod",
	"ETargetSelectionMethod",
	Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod()
{
	if (!Z_Registration_Info_UEnum_ETargetSelectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetSelectionMethod.InnerSingleton, Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETargetSelectionMethod.InnerSingleton;
}
// End Enum ETargetSelectionMethod

// Begin Class UTargetingComponent Function FindTargets
struct Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics
{
	struct TargetingComponent_eventFindTargets_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds valid targets based on criteria */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds valid targets based on criteria" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetingComponent_eventFindTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingComponent, nullptr, "FindTargets", nullptr, nullptr, Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::TargetingComponent_eventFindTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::TargetingComponent_eventFindTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTargetingComponent_FindTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingComponent_FindTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTargetingComponent::execFindTargets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->FindTargets();
	P_NATIVE_END;
}
// End Class UTargetingComponent Function FindTargets

// Begin Class UTargetingComponent
void UTargetingComponent::StaticRegisterNativesUTargetingComponent()
{
	UClass* Class = UTargetingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindTargets", &UTargetingComponent::execFindTargets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingComponent);
UClass* Z_Construct_UClass_UTargetingComponent_NoRegister()
{
	return UTargetingComponent::StaticClass();
}
struct Z_Construct_UClass_UTargetingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Gameplay/Character/Components/TargetingComponent.h" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only use if this character is the player\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only use if this character is the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetableClasses_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of soft classes for valid targets */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of soft classes for valid targets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingRange_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum distance to consider a target valid */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance to consider a target valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Field of view (in degrees) to consider a target \xe2\x80\x9cin front\xe2\x80\x9d */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Field of view (in degrees) to consider a target \xe2\x80\x9cin front\xe2\x80\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTargets_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of targets for multi-target mode */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of targets for multi-target mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSelectionMethod_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Target selection mode */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target selection mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TargetableClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetableClasses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTargets;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSelectionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSelectionMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetingComponent_FindTargets, "FindTargets" }, // 148628376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingComponent, Camera), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetableClasses_Inner = { "TargetableClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetableClasses = { "TargetableClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingComponent, TargetableClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetableClasses_MetaData), NewProp_TargetableClasses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetingRange = { "TargetingRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingComponent, TargetingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingRange_MetaData), NewProp_TargetingRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingComponent, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingComponent, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_MaxTargets = { "MaxTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingComponent, MaxTargets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTargets_MetaData), NewProp_MaxTargets_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetSelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetSelectionMethod = { "TargetSelectionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingComponent, TargetSelectionMethod), Z_Construct_UEnum_StylishCombatStarterKit_ETargetSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSelectionMethod_MetaData), NewProp_TargetSelectionMethod_MetaData) }; // 1912342413
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetableClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetableClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_MaxTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetSelectionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_TargetSelectionMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteroperableComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingComponent_Statics::ClassParams = {
	&UTargetingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTargetingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingComponent()
{
	if (!Z_Registration_Info_UClass_UTargetingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingComponent.OuterSingleton, Z_Construct_UClass_UTargetingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingComponent.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UTargetingComponent>()
{
	return UTargetingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingComponent);
UTargetingComponent::~UTargetingComponent() {}
// End Class UTargetingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETargetSelectionMethod_StaticEnum, TEXT("ETargetSelectionMethod"), &Z_Registration_Info_UEnum_ETargetSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1912342413U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingComponent, UTargetingComponent::StaticClass, TEXT("UTargetingComponent"), &Z_Registration_Info_UClass_UTargetingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingComponent), 2877148154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_1734155780(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_TargetingComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
