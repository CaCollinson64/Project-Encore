// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCArrowDebugActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCArrowDebugActor() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_AATPCArrowDebugActor();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_AATPCArrowDebugActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class AATPCArrowDebugActor Function PickActor
struct Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics
{
	struct ATPCArrowDebugActor_eventPickActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCArrowDebugActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCArrowDebugActor_eventPickActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATPCArrowDebugActor, nullptr, "PickActor", nullptr, nullptr, Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::ATPCArrowDebugActor_eventPickActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::ATPCArrowDebugActor_eventPickActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AATPCArrowDebugActor_PickActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AATPCArrowDebugActor_PickActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AATPCArrowDebugActor::execPickActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class AATPCArrowDebugActor Function PickActor

// Begin Class AATPCArrowDebugActor
void AATPCArrowDebugActor::StaticRegisterNativesAATPCArrowDebugActor()
{
	UClass* Class = AATPCArrowDebugActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PickActor", &AATPCArrowDebugActor::execPickActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AATPCArrowDebugActor);
UClass* Z_Construct_UClass_AATPCArrowDebugActor_NoRegister()
{
	return AATPCArrowDebugActor::StaticClass();
}
struct Z_Construct_UClass_AATPCArrowDebugActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ATPCArrowDebugActor.h" },
		{ "ModuleRelativePath", "Public/ATPCArrowDebugActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRootcomponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATPCArrowDebugActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATPCArrowDebugActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRootcomponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AATPCArrowDebugActor_PickActor, "PickActor" }, // 4045794304
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATPCArrowDebugActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATPCArrowDebugActor_Statics::NewProp_SceneRootcomponent = { "SceneRootcomponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AATPCArrowDebugActor, SceneRootcomponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRootcomponent_MetaData), NewProp_SceneRootcomponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATPCArrowDebugActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AATPCArrowDebugActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AATPCArrowDebugActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATPCArrowDebugActor_Statics::NewProp_SceneRootcomponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATPCArrowDebugActor_Statics::NewProp_ArrowComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AATPCArrowDebugActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AATPCArrowDebugActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AATPCArrowDebugActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AATPCArrowDebugActor_Statics::ClassParams = {
	&AATPCArrowDebugActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AATPCArrowDebugActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AATPCArrowDebugActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AATPCArrowDebugActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AATPCArrowDebugActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AATPCArrowDebugActor()
{
	if (!Z_Registration_Info_UClass_AATPCArrowDebugActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AATPCArrowDebugActor.OuterSingleton, Z_Construct_UClass_AATPCArrowDebugActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AATPCArrowDebugActor.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<AATPCArrowDebugActor>()
{
	return AATPCArrowDebugActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AATPCArrowDebugActor);
AATPCArrowDebugActor::~AATPCArrowDebugActor() {}
// End Class AATPCArrowDebugActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCArrowDebugActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AATPCArrowDebugActor, AATPCArrowDebugActor::StaticClass, TEXT("AATPCArrowDebugActor"), &Z_Registration_Info_UClass_AATPCArrowDebugActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AATPCArrowDebugActor), 3607114286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCArrowDebugActor_h_1444529326(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCArrowDebugActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCArrowDebugActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
