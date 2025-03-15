// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraVolume.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraVolume() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_AATPCCameraVolume();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_AATPCCameraVolume_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class AATPCCameraVolume Function OnVolumeBeginOverlap
struct Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics
{
	struct ATPCCameraVolume_eventOnVolumeBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraVolume_eventOnVolumeBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraVolume_eventOnVolumeBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATPCCameraVolume, nullptr, "OnVolumeBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::ATPCCameraVolume_eventOnVolumeBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::ATPCCameraVolume_eventOnVolumeBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AATPCCameraVolume::execOnVolumeBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVolumeBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AATPCCameraVolume Function OnVolumeBeginOverlap

// Begin Class AATPCCameraVolume Function OnVolumeEndOverlap
struct Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics
{
	struct ATPCCameraVolume_eventOnVolumeEndOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraVolume_eventOnVolumeEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraVolume_eventOnVolumeEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AATPCCameraVolume, nullptr, "OnVolumeEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::ATPCCameraVolume_eventOnVolumeEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::ATPCCameraVolume_eventOnVolumeEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AATPCCameraVolume::execOnVolumeEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVolumeEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AATPCCameraVolume Function OnVolumeEndOverlap

// Begin Class AATPCCameraVolume
void AATPCCameraVolume::StaticRegisterNativesAATPCCameraVolume()
{
	UClass* Class = AATPCCameraVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnVolumeBeginOverlap", &AATPCCameraVolume::execOnVolumeBeginOverlap },
		{ "OnVolumeEndOverlap", &AATPCCameraVolume::execOnVolumeEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AATPCCameraVolume);
UClass* Z_Construct_UClass_AATPCCameraVolume_NoRegister()
{
	return AATPCCameraVolume::StaticClass();
}
struct Z_Construct_UClass_AATPCCameraVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "ATPCCameraVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATPCCameraVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCCameraVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChangeCameraModeWithInterp_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ATPCCameraVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckFilterActorClassWithCamera_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ATPCCameraVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterActorClassesWithCamera_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Exmp: Character or PlayerActor\n" },
#endif
		{ "EditCondition", "bCheckFilterActorClassWithCamera" },
		{ "ModuleRelativePath", "Public/ATPCCameraVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exmp: Character or PlayerActor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModeTag;
	static void NewProp_bChangeCameraModeWithInterp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangeCameraModeWithInterp;
	static void NewProp_bCheckFilterActorClassWithCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckFilterActorClassWithCamera;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FilterActorClassesWithCamera_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterActorClassesWithCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AATPCCameraVolume_OnVolumeBeginOverlap, "OnVolumeBeginOverlap" }, // 3219065056
		{ &Z_Construct_UFunction_AATPCCameraVolume_OnVolumeEndOverlap, "OnVolumeEndOverlap" }, // 935160261
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATPCCameraVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_CameraModeTag = { "CameraModeTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AATPCCameraVolume, CameraModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeTag_MetaData), NewProp_CameraModeTag_MetaData) }; // 1298103297
void Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_bChangeCameraModeWithInterp_SetBit(void* Obj)
{
	((AATPCCameraVolume*)Obj)->bChangeCameraModeWithInterp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_bChangeCameraModeWithInterp = { "bChangeCameraModeWithInterp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AATPCCameraVolume), &Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_bChangeCameraModeWithInterp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChangeCameraModeWithInterp_MetaData), NewProp_bChangeCameraModeWithInterp_MetaData) };
void Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_bCheckFilterActorClassWithCamera_SetBit(void* Obj)
{
	((AATPCCameraVolume*)Obj)->bCheckFilterActorClassWithCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_bCheckFilterActorClassWithCamera = { "bCheckFilterActorClassWithCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AATPCCameraVolume), &Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_bCheckFilterActorClassWithCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckFilterActorClassWithCamera_MetaData), NewProp_bCheckFilterActorClassWithCamera_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_FilterActorClassesWithCamera_Inner = { "FilterActorClassesWithCamera", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_FilterActorClassesWithCamera = { "FilterActorClassesWithCamera", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AATPCCameraVolume, FilterActorClassesWithCamera), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterActorClassesWithCamera_MetaData), NewProp_FilterActorClassesWithCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AATPCCameraVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_CameraModeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_bChangeCameraModeWithInterp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_bCheckFilterActorClassWithCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_FilterActorClassesWithCamera_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATPCCameraVolume_Statics::NewProp_FilterActorClassesWithCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AATPCCameraVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AATPCCameraVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AATPCCameraVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AATPCCameraVolume_Statics::ClassParams = {
	&AATPCCameraVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AATPCCameraVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AATPCCameraVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AATPCCameraVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AATPCCameraVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AATPCCameraVolume()
{
	if (!Z_Registration_Info_UClass_AATPCCameraVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AATPCCameraVolume.OuterSingleton, Z_Construct_UClass_AATPCCameraVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AATPCCameraVolume.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<AATPCCameraVolume>()
{
	return AATPCCameraVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AATPCCameraVolume);
AATPCCameraVolume::~AATPCCameraVolume() {}
// End Class AATPCCameraVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AATPCCameraVolume, AATPCCameraVolume::StaticClass, TEXT("AATPCCameraVolume"), &Z_Registration_Info_UClass_AATPCCameraVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AATPCCameraVolume), 1196943328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraVolume_h_2960900210(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
