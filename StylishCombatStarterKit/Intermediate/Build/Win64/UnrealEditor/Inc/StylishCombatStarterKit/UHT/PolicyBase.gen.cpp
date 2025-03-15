// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/ComboPolicies/PolicyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolicyBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UPolicyBase();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UPolicyBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UPolicyBase Function PlayAnimMontage
struct Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics
{
	struct PolicyBase_eventPlayAnimMontage_Parms
	{
		USkeletalMeshComponent* OwnerMesh;
		UAnimMontage* AnimMontage;
		float InPlayRate;
		FName StartSectionName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/PolicyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSectionName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_OwnerMesh = { "OwnerMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolicyBase_eventPlayAnimMontage_Parms, OwnerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMesh_MetaData), NewProp_OwnerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolicyBase_eventPlayAnimMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolicyBase_eventPlayAnimMontage_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_StartSectionName = { "StartSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolicyBase_eventPlayAnimMontage_Parms, StartSectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolicyBase_eventPlayAnimMontage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_OwnerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_InPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_StartSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolicyBase, nullptr, "PlayAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::PolicyBase_eventPlayAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::PolicyBase_eventPlayAnimMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolicyBase_PlayAnimMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolicyBase_PlayAnimMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolicyBase::execPlayAnimMontage)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_OwnerMesh);
	P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->PlayAnimMontage(Z_Param_OwnerMesh,Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName);
	P_NATIVE_END;
}
// End Class UPolicyBase Function PlayAnimMontage

// Begin Class UPolicyBase Function StopMontage
struct Z_Construct_UFunction_UPolicyBase_StopMontage_Statics
{
	struct PolicyBase_eventStopMontage_Parms
	{
		USkeletalMeshComponent* OwnerMesh;
		UAnimMontage* AnimMontage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/PolicyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::NewProp_OwnerMesh = { "OwnerMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolicyBase_eventStopMontage_Parms, OwnerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMesh_MetaData), NewProp_OwnerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolicyBase_eventStopMontage_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::NewProp_OwnerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::NewProp_AnimMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolicyBase, nullptr, "StopMontage", nullptr, nullptr, Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::PolicyBase_eventStopMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::PolicyBase_eventStopMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolicyBase_StopMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolicyBase_StopMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolicyBase::execStopMontage)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_OwnerMesh);
	P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMontage(Z_Param_OwnerMesh,Z_Param_AnimMontage);
	P_NATIVE_END;
}
// End Class UPolicyBase Function StopMontage

// Begin Class UPolicyBase
void UPolicyBase::StaticRegisterNativesUPolicyBase()
{
	UClass* Class = UPolicyBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayAnimMontage", &UPolicyBase::execPlayAnimMontage },
		{ "StopMontage", &UPolicyBase::execStopMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolicyBase);
UClass* Z_Construct_UClass_UPolicyBase_NoRegister()
{
	return UPolicyBase::StaticClass();
}
struct Z_Construct_UClass_UPolicyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gameplay/Character/Components/ComboPolicies/PolicyBase.h" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/ComboPolicies/PolicyBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolicyBase_PlayAnimMontage, "PlayAnimMontage" }, // 508775868
		{ &Z_Construct_UFunction_UPolicyBase_StopMontage, "StopMontage" }, // 2965424708
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolicyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPolicyBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolicyBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolicyBase_Statics::ClassParams = {
	&UPolicyBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolicyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolicyBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolicyBase()
{
	if (!Z_Registration_Info_UClass_UPolicyBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolicyBase.OuterSingleton, Z_Construct_UClass_UPolicyBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolicyBase.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UPolicyBase>()
{
	return UPolicyBase::StaticClass();
}
UPolicyBase::UPolicyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolicyBase);
UPolicyBase::~UPolicyBase() {}
// End Class UPolicyBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolicyBase, UPolicyBase::StaticClass, TEXT("UPolicyBase"), &Z_Registration_Info_UClass_UPolicyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolicyBase), 2052210168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_890939898(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_ComboPolicies_PolicyBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
