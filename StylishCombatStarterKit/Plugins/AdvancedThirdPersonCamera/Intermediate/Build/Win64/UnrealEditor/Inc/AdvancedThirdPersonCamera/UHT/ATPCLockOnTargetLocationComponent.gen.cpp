// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCLockOnTargetLocationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCLockOnTargetLocationComponent() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCLockOnTargetLocationComponent();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCLockOnTargetLocationComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCLockOnTargetLocationComponent Function GetTargetLocation
struct Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics
{
	struct ATPCLockOnTargetLocationComponent_eventGetTargetLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCLockOnTargetLocationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCLockOnTargetLocationComponent_eventGetTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCLockOnTargetLocationComponent, nullptr, "GetTargetLocation", nullptr, nullptr, Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::ATPCLockOnTargetLocationComponent_eventGetTargetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::ATPCLockOnTargetLocationComponent_eventGetTargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCLockOnTargetLocationComponent::execGetTargetLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTargetLocation();
	P_NATIVE_END;
}
// End Class UATPCLockOnTargetLocationComponent Function GetTargetLocation

// Begin Class UATPCLockOnTargetLocationComponent
void UATPCLockOnTargetLocationComponent::StaticRegisterNativesUATPCLockOnTargetLocationComponent()
{
	UClass* Class = UATPCLockOnTargetLocationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTargetLocation", &UATPCLockOnTargetLocationComponent::execGetTargetLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCLockOnTargetLocationComponent);
UClass* Z_Construct_UClass_UATPCLockOnTargetLocationComponent_NoRegister()
{
	return UATPCLockOnTargetLocationComponent::StaticClass();
}
struct Z_Construct_UClass_UATPCLockOnTargetLocationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "ATPC" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ATPCLockOnTargetLocationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATPCLockOnTargetLocationComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UATPCLockOnTargetLocationComponent_GetTargetLocation, "GetTargetLocation" }, // 2867432624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCLockOnTargetLocationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UATPCLockOnTargetLocationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCLockOnTargetLocationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCLockOnTargetLocationComponent_Statics::ClassParams = {
	&UATPCLockOnTargetLocationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCLockOnTargetLocationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCLockOnTargetLocationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCLockOnTargetLocationComponent()
{
	if (!Z_Registration_Info_UClass_UATPCLockOnTargetLocationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCLockOnTargetLocationComponent.OuterSingleton, Z_Construct_UClass_UATPCLockOnTargetLocationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCLockOnTargetLocationComponent.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCLockOnTargetLocationComponent>()
{
	return UATPCLockOnTargetLocationComponent::StaticClass();
}
UATPCLockOnTargetLocationComponent::UATPCLockOnTargetLocationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCLockOnTargetLocationComponent);
UATPCLockOnTargetLocationComponent::~UATPCLockOnTargetLocationComponent() {}
// End Class UATPCLockOnTargetLocationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCLockOnTargetLocationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCLockOnTargetLocationComponent, UATPCLockOnTargetLocationComponent::StaticClass, TEXT("UATPCLockOnTargetLocationComponent"), &Z_Registration_Info_UClass_UATPCLockOnTargetLocationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCLockOnTargetLocationComponent), 3188126003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCLockOnTargetLocationComponent_h_1776151045(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCLockOnTargetLocationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCLockOnTargetLocationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
