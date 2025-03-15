// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/HitComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UHitComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UHitComponent_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UInteroperableComponent();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UHitComponent Function Death
static const FName NAME_UHitComponent_Death = FName(TEXT("Death"));
void UHitComponent::Death()
{
	UFunction* Func = FindFunctionChecked(NAME_UHitComponent_Death);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Death_Implementation();
	}
}
struct Z_Construct_UFunction_UHitComponent_Death_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Components/HitComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitComponent_Death_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitComponent, nullptr, "Death", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_Death_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitComponent_Death_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHitComponent_Death()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitComponent_Death_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitComponent::execDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Death_Implementation();
	P_NATIVE_END;
}
// End Class UHitComponent Function Death

// Begin Class UHitComponent Function PerformHitAnimation
struct Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics
{
	struct HitComponent_eventPerformHitAnimation_Parms
	{
		bool bOverrideHitAnimation;
		UAnimMontage* AnimMontage;
		float InPlayRate;
		FName StartSectionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Components/HitComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideHitAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideHitAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_bOverrideHitAnimation_SetBit(void* Obj)
{
	((HitComponent_eventPerformHitAnimation_Parms*)Obj)->bOverrideHitAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_bOverrideHitAnimation = { "bOverrideHitAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HitComponent_eventPerformHitAnimation_Parms), &Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_bOverrideHitAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitComponent_eventPerformHitAnimation_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitComponent_eventPerformHitAnimation_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_StartSectionName = { "StartSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitComponent_eventPerformHitAnimation_Parms, StartSectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_bOverrideHitAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_InPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::NewProp_StartSectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitComponent, nullptr, "PerformHitAnimation", nullptr, nullptr, Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::HitComponent_eventPerformHitAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::HitComponent_eventPerformHitAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitComponent_PerformHitAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitComponent_PerformHitAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitComponent::execPerformHitAnimation)
{
	P_GET_UBOOL(Z_Param_bOverrideHitAnimation);
	P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformHitAnimation(Z_Param_bOverrideHitAnimation,Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName);
	P_NATIVE_END;
}
// End Class UHitComponent Function PerformHitAnimation

// Begin Class UHitComponent Function SetStunCharacter
struct Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics
{
	struct HitComponent_eventSetStunCharacter_Parms
	{
		bool StunCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gameplay/Character/Components/HitComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StunCharacter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StunCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::NewProp_StunCharacter_SetBit(void* Obj)
{
	((HitComponent_eventSetStunCharacter_Parms*)Obj)->StunCharacter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::NewProp_StunCharacter = { "StunCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HitComponent_eventSetStunCharacter_Parms), &Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::NewProp_StunCharacter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::NewProp_StunCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitComponent, nullptr, "SetStunCharacter", nullptr, nullptr, Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::HitComponent_eventSetStunCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::HitComponent_eventSetStunCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitComponent_SetStunCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitComponent_SetStunCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitComponent::execSetStunCharacter)
{
	P_GET_UBOOL(Z_Param_StunCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStunCharacter(Z_Param_StunCharacter);
	P_NATIVE_END;
}
// End Class UHitComponent Function SetStunCharacter

// Begin Class UHitComponent
void UHitComponent::StaticRegisterNativesUHitComponent()
{
	UClass* Class = UHitComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Death", &UHitComponent::execDeath },
		{ "PerformHitAnimation", &UHitComponent::execPerformHitAnimation },
		{ "SetStunCharacter", &UHitComponent::execSetStunCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitComponent);
UClass* Z_Construct_UClass_UHitComponent_NoRegister()
{
	return UHitComponent::StaticClass();
}
struct Z_Construct_UClass_UHitComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Gameplay/Character/Components/HitComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/HitComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/HitComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvincible_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/HitComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStunCharacter_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/HitComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPerformingHitAnimation_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/HitComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static void NewProp_bInvincible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvincible;
	static void NewProp_bStunCharacter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStunCharacter;
	static void NewProp_bIsPerformingHitAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPerformingHitAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitComponent_Death, "Death" }, // 876880653
		{ &Z_Construct_UFunction_UHitComponent_PerformHitAnimation, "PerformHitAnimation" }, // 840874722
		{ &Z_Construct_UFunction_UHitComponent_SetStunCharacter, "SetStunCharacter" }, // 511438119
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
void Z_Construct_UClass_UHitComponent_Statics::NewProp_bInvincible_SetBit(void* Obj)
{
	((UHitComponent*)Obj)->bInvincible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHitComponent_Statics::NewProp_bInvincible = { "bInvincible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHitComponent), &Z_Construct_UClass_UHitComponent_Statics::NewProp_bInvincible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvincible_MetaData), NewProp_bInvincible_MetaData) };
void Z_Construct_UClass_UHitComponent_Statics::NewProp_bStunCharacter_SetBit(void* Obj)
{
	((UHitComponent*)Obj)->bStunCharacter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHitComponent_Statics::NewProp_bStunCharacter = { "bStunCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHitComponent), &Z_Construct_UClass_UHitComponent_Statics::NewProp_bStunCharacter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStunCharacter_MetaData), NewProp_bStunCharacter_MetaData) };
void Z_Construct_UClass_UHitComponent_Statics::NewProp_bIsPerformingHitAnimation_SetBit(void* Obj)
{
	((UHitComponent*)Obj)->bIsPerformingHitAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHitComponent_Statics::NewProp_bIsPerformingHitAnimation = { "bIsPerformingHitAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHitComponent), &Z_Construct_UClass_UHitComponent_Statics::NewProp_bIsPerformingHitAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPerformingHitAnimation_MetaData), NewProp_bIsPerformingHitAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitComponent_Statics::NewProp_bInvincible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitComponent_Statics::NewProp_bStunCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitComponent_Statics::NewProp_bIsPerformingHitAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteroperableComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitComponent_Statics::ClassParams = {
	&UHitComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHitComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitComponent()
{
	if (!Z_Registration_Info_UClass_UHitComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitComponent.OuterSingleton, Z_Construct_UClass_UHitComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitComponent.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UHitComponent>()
{
	return UHitComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitComponent);
UHitComponent::~UHitComponent() {}
// End Class UHitComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_HitComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitComponent, UHitComponent::StaticClass, TEXT("UHitComponent"), &Z_Registration_Info_UClass_UHitComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitComponent), 1866978349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_HitComponent_h_1449231008(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_HitComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_HitComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
