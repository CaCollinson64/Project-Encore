// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesDynamicNavMeshVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesDynamicNavMeshVolume() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_AStevesDynamicNavMeshVolume();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_AStevesDynamicNavMeshVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class AStevesDynamicNavMeshVolume Function SetDimensions
struct Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics
{
	struct StevesDynamicNavMeshVolume_eventSetDimensions_Parms
	{
		FVector NewDimensions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesDynamicNavMeshVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDimensions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewDimensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::NewProp_NewDimensions = { "NewDimensions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesDynamicNavMeshVolume_eventSetDimensions_Parms, NewDimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDimensions_MetaData), NewProp_NewDimensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::NewProp_NewDimensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStevesDynamicNavMeshVolume, nullptr, "SetDimensions", nullptr, nullptr, Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::StevesDynamicNavMeshVolume_eventSetDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::StevesDynamicNavMeshVolume_eventSetDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStevesDynamicNavMeshVolume::execSetDimensions)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewDimensions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDimensions(Z_Param_Out_NewDimensions);
	P_NATIVE_END;
}
// End Class AStevesDynamicNavMeshVolume Function SetDimensions

// Begin Class AStevesDynamicNavMeshVolume Function SetLocationAndDimensions
struct Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics
{
	struct StevesDynamicNavMeshVolume_eventSetLocationAndDimensions_Parms
	{
		FVector Location;
		FVector NewDimensions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesDynamicNavMeshVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDimensions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewDimensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesDynamicNavMeshVolume_eventSetLocationAndDimensions_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::NewProp_NewDimensions = { "NewDimensions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesDynamicNavMeshVolume_eventSetLocationAndDimensions_Parms, NewDimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDimensions_MetaData), NewProp_NewDimensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::NewProp_NewDimensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStevesDynamicNavMeshVolume, nullptr, "SetLocationAndDimensions", nullptr, nullptr, Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::StevesDynamicNavMeshVolume_eventSetLocationAndDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::StevesDynamicNavMeshVolume_eventSetLocationAndDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStevesDynamicNavMeshVolume::execSetLocationAndDimensions)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewDimensions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocationAndDimensions(Z_Param_Out_Location,Z_Param_Out_NewDimensions);
	P_NATIVE_END;
}
// End Class AStevesDynamicNavMeshVolume Function SetLocationAndDimensions

// Begin Class AStevesDynamicNavMeshVolume
void AStevesDynamicNavMeshVolume::StaticRegisterNativesAStevesDynamicNavMeshVolume()
{
	UClass* Class = AStevesDynamicNavMeshVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDimensions", &AStevesDynamicNavMeshVolume::execSetDimensions },
		{ "SetLocationAndDimensions", &AStevesDynamicNavMeshVolume::execSetLocationAndDimensions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStevesDynamicNavMeshVolume);
UClass* Z_Construct_UClass_AStevesDynamicNavMeshVolume_NoRegister()
{
	return AStevesDynamicNavMeshVolume::StaticClass();
}
struct Z_Construct_UClass_AStevesDynamicNavMeshVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// NavMesh bounds that can be changed at runtime (requires that your NavMesh data Runtime Generation is set to Dynamic)\n" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "StevesDynamicNavMeshVolume.h" },
		{ "ModuleRelativePath", "Public/StevesDynamicNavMeshVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NavMesh bounds that can be changed at runtime (requires that your NavMesh data Runtime Generation is set to Dynamic)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetDimensions, "SetDimensions" }, // 3987980395
		{ &Z_Construct_UFunction_AStevesDynamicNavMeshVolume_SetLocationAndDimensions, "SetLocationAndDimensions" }, // 2532837657
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStevesDynamicNavMeshVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStevesDynamicNavMeshVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANavMeshBoundsVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStevesDynamicNavMeshVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStevesDynamicNavMeshVolume_Statics::ClassParams = {
	&AStevesDynamicNavMeshVolume::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStevesDynamicNavMeshVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AStevesDynamicNavMeshVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStevesDynamicNavMeshVolume()
{
	if (!Z_Registration_Info_UClass_AStevesDynamicNavMeshVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStevesDynamicNavMeshVolume.OuterSingleton, Z_Construct_UClass_AStevesDynamicNavMeshVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStevesDynamicNavMeshVolume.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<AStevesDynamicNavMeshVolume>()
{
	return AStevesDynamicNavMeshVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStevesDynamicNavMeshVolume);
AStevesDynamicNavMeshVolume::~AStevesDynamicNavMeshVolume() {}
// End Class AStevesDynamicNavMeshVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesDynamicNavMeshVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStevesDynamicNavMeshVolume, AStevesDynamicNavMeshVolume::StaticClass, TEXT("AStevesDynamicNavMeshVolume"), &Z_Registration_Info_UClass_AStevesDynamicNavMeshVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStevesDynamicNavMeshVolume), 306611398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesDynamicNavMeshVolume_h_152483500(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesDynamicNavMeshVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesDynamicNavMeshVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
