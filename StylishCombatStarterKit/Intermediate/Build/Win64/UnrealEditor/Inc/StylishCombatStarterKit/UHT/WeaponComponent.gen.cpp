// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/Weapons/WeaponComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UWeaponComponent();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Class UWeaponComponent Function EquipInHand
struct Z_Construct_UFunction_UWeaponComponent_EquipInHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Equips the weapon in the hand socket (with montage or timer delay) */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equips the weapon in the hand socket (with montage or timer delay)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_EquipInHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "EquipInHand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_EquipInHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_EquipInHand_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponComponent_EquipInHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_EquipInHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execEquipInHand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipInHand();
	P_NATIVE_END;
}
// End Class UWeaponComponent Function EquipInHand

// Begin Class UWeaponComponent Function Hit
struct WeaponComponent_eventHit_Parms
{
	FHitResult HitResult;
};
static const FName NAME_UWeaponComponent_Hit = FName(TEXT("Hit"));
void UWeaponComponent::Hit(FHitResult const& HitResult)
{
	WeaponComponent_eventHit_Parms Parms;
	Parms.HitResult=HitResult;
	UFunction* Func = FindFunctionChecked(NAME_UWeaponComponent_Hit);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWeaponComponent_Hit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Blueprint implementable event to handle hit logic when a line trace detects an impact.\n\x09 * @param HitResult - The result data from the line trace.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint implementable event to handle hit logic when a line trace detects an impact.\n@param HitResult - The result data from the line trace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_Hit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_Hit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_Hit_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Hit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_Hit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "Hit", nullptr, nullptr, Z_Construct_UFunction_UWeaponComponent_Hit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Hit_Statics::PropPointers), sizeof(WeaponComponent_eventHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Hit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_Hit_Statics::Function_MetaDataParams) };
static_assert(sizeof(WeaponComponent_eventHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_Hit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_Hit_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWeaponComponent Function Hit

// Begin Class UWeaponComponent Function Reload
struct Z_Construct_UFunction_UWeaponComponent_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initiates the reload process using a montage or timer delay */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initiates the reload process using a montage or timer delay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponComponent_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload();
	P_NATIVE_END;
}
// End Class UWeaponComponent Function Reload

// Begin Class UWeaponComponent Function Shoot
struct Z_Construct_UFunction_UWeaponComponent_Shoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fires the weapon using a shooting montage or timer delay */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires the weapon using a shooting montage or timer delay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "Shoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponComponent_Shoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Shoot();
	P_NATIVE_END;
}
// End Class UWeaponComponent Function Shoot

// Begin Class UWeaponComponent Function UnequipWeapon
struct Z_Construct_UFunction_UWeaponComponent_UnequipWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unequips the weapon to the back socket or hides it if none exists (with montage or timer delay) */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unequips the weapon to the back socket or hides it if none exists (with montage or timer delay)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_UnequipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "UnequipWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_UnequipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_UnequipWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeaponComponent_UnequipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_UnequipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execUnequipWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnequipWeapon();
	P_NATIVE_END;
}
// End Class UWeaponComponent Function UnequipWeapon

// Begin Class UWeaponComponent
void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
{
	UClass* Class = UWeaponComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EquipInHand", &UWeaponComponent::execEquipInHand },
		{ "Reload", &UWeaponComponent::execReload },
		{ "Shoot", &UWeaponComponent::execShoot },
		{ "UnequipWeapon", &UWeaponComponent::execUnequipWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponComponent);
UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
{
	return UWeaponComponent::StaticClass();
}
struct Z_Construct_UClass_UWeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The spawned weapon actor instance */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spawned weapon actor instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Soft reference to the weapon class to spawn (set this in Blueprint) */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soft reference to the weapon class to spawn (set this in Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandSocketName_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Socket name for equipping the weapon in hand */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket name for equipping the weapon in hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSocketName_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Socket name for unequipping (attaching to back). If missing, the weapon will be hidden */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket name for unequipping (attaching to back). If missing, the weapon will be hidden" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippingMontage_MetaData[] = {
		{ "Category", "Weapon|Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Montage for equipping the weapon */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage for equipping the weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnequippingMontage_MetaData[] = {
		{ "Category", "Weapon|Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Montage for unequipping the weapon */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage for unequipping the weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingMontage_MetaData[] = {
		{ "Category", "Weapon|Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Montage for shooting */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage for shooting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadingMontage_MetaData[] = {
		{ "Category", "Weapon|Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Montage for reloading */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage for reloading" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugLineTrace_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle debug line trace drawing */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle debug line trace drawing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInfiniteAmmo_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the ammo is infinite (magazine count is not decremented) */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the ammo is infinite (magazine count is not decremented)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BackSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippingMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnequippingMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootingMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadingMontage;
	static void NewProp_bDebugLineTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugLineTrace;
	static void NewProp_bInfiniteAmmo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfiniteAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_EquipInHand, "EquipInHand" }, // 859999176
		{ &Z_Construct_UFunction_UWeaponComponent_Hit, "Hit" }, // 1631048421
		{ &Z_Construct_UFunction_UWeaponComponent_Reload, "Reload" }, // 1268221746
		{ &Z_Construct_UFunction_UWeaponComponent_Shoot, "Shoot" }, // 2828862301
		{ &Z_Construct_UFunction_UWeaponComponent_UnequipWeapon, "UnequipWeapon" }, // 3651000279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, CurrentWeapon), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeapon_MetaData), NewProp_CurrentWeapon_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponClass_MetaData), NewProp_WeaponClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_HandSocketName = { "HandSocketName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, HandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandSocketName_MetaData), NewProp_HandSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_BackSocketName = { "BackSocketName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, BackSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSocketName_MetaData), NewProp_BackSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippingMontage = { "EquippingMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, EquippingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippingMontage_MetaData), NewProp_EquippingMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_UnequippingMontage = { "UnequippingMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, UnequippingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnequippingMontage_MetaData), NewProp_UnequippingMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ShootingMontage = { "ShootingMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ShootingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingMontage_MetaData), NewProp_ShootingMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ReloadingMontage = { "ReloadingMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ReloadingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadingMontage_MetaData), NewProp_ReloadingMontage_MetaData) };
void Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bDebugLineTrace_SetBit(void* Obj)
{
	((UWeaponComponent*)Obj)->bDebugLineTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bDebugLineTrace = { "bDebugLineTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponComponent), &Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bDebugLineTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugLineTrace_MetaData), NewProp_bDebugLineTrace_MetaData) };
void Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bInfiniteAmmo_SetBit(void* Obj)
{
	((UWeaponComponent*)Obj)->bInfiniteAmmo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bInfiniteAmmo = { "bInfiniteAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponComponent), &Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bInfiniteAmmo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInfiniteAmmo_MetaData), NewProp_bInfiniteAmmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_WeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_HandSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_BackSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippingMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_UnequippingMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ShootingMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ReloadingMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bDebugLineTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bInfiniteAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
	&UWeaponComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<UWeaponComponent>()
{
	return UWeaponComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
UWeaponComponent::~UWeaponComponent() {}
// End Class UWeaponComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 3090115490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponComponent_h_4248527038(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
