// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/BaseClasses/InteroperableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteroperableComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UInteroperableComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UInteroperableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UInteroperableComponent Function CheckValidOwner
struct Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics
{
	struct InteroperableComponent_eventCheckValidOwner_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Components/BaseClasses/InteroperableComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteroperableComponent_eventCheckValidOwner_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteroperableComponent_eventCheckValidOwner_Parms), &Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteroperableComponent, nullptr, "CheckValidOwner", nullptr, nullptr, Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::InteroperableComponent_eventCheckValidOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::InteroperableComponent_eventCheckValidOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteroperableComponent::execCheckValidOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckValidOwner();
	P_NATIVE_END;
}
// End Class UInteroperableComponent Function CheckValidOwner

// Begin Class UInteroperableComponent
void UInteroperableComponent::StaticRegisterNativesUInteroperableComponent()
{
	UClass* Class = UInteroperableComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckValidOwner", &UInteroperableComponent::execCheckValidOwner },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteroperableComponent);
UClass* Z_Construct_UClass_UInteroperableComponent_NoRegister()
{
	return UInteroperableComponent::StaticClass();
}
struct Z_Construct_UClass_UInteroperableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Gameplay/Character/Components/BaseClasses/InteroperableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/BaseClasses/InteroperableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Components/BaseClasses/InteroperableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/BaseClasses/InteroperableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteroperableComponent_CheckValidOwner, "CheckValidOwner" }, // 3149252409
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteroperableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteroperableComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteroperableComponent, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteroperableComponent_Statics::NewProp_OwnerMesh = { "OwnerMesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteroperableComponent, OwnerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMesh_MetaData), NewProp_OwnerMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteroperableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteroperableComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteroperableComponent_Statics::NewProp_OwnerMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteroperableComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteroperableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteroperableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteroperableComponent_Statics::ClassParams = {
	&UInteroperableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteroperableComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteroperableComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteroperableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteroperableComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteroperableComponent()
{
	if (!Z_Registration_Info_UClass_UInteroperableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteroperableComponent.OuterSingleton, Z_Construct_UClass_UInteroperableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteroperableComponent.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UInteroperableComponent>()
{
	return UInteroperableComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteroperableComponent);
UInteroperableComponent::~UInteroperableComponent() {}
// End Class UInteroperableComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_BaseClasses_InteroperableComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteroperableComponent, UInteroperableComponent::StaticClass, TEXT("UInteroperableComponent"), &Z_Registration_Info_UClass_UInteroperableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteroperableComponent), 130587327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_BaseClasses_InteroperableComponent_h_174674980(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_BaseClasses_InteroperableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_BaseClasses_InteroperableComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
