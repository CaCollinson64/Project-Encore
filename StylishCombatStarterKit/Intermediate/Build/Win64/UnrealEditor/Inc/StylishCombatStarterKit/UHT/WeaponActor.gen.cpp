// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Components/Weapons/WeaponActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_AWeaponActor();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FGunStats();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin ScriptStruct FGunStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GunStats;
class UScriptStruct* FGunStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GunStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GunStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGunStats, (UObject*)Z_Construct_UPackage__Script_StylishCombatStarterKit(), TEXT("GunStats"));
	}
	return Z_Registration_Info_UScriptStruct_GunStats.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UScriptStruct* StaticStruct<FGunStats>()
{
	return FGunStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGunStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Structure to hold all gun related stats */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to hold all gun related stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Gun Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How far the gun can shoot (line trace distance) */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far the gun can shoot (line trace distance)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Gun Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage per shot */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage per shot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Gun Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time between shots */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time between shots" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Gun Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time required to reload */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time required to reload" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[] = {
		{ "Category", "Gun Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Magazine size (number of bullets) */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magazine size (number of bullets)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReload_MetaData[] = {
		{ "Category", "Gun Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable auto reload */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable auto reload" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static void NewProp_bAutoReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGunStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunStats, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunStats, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunStats, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunStats, ReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadTime_MetaData), NewProp_ReloadTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGunStats, MagazineSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagazineSize_MetaData), NewProp_MagazineSize_MetaData) };
void Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_bAutoReload_SetBit(void* Obj)
{
	((FGunStats*)Obj)->bAutoReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_bAutoReload = { "bAutoReload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGunStats), &Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_bAutoReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoReload_MetaData), NewProp_bAutoReload_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGunStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_ReloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_bAutoReload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGunStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
	nullptr,
	&NewStructOps,
	"GunStats",
	Z_Construct_UScriptStruct_FGunStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::PropPointers),
	sizeof(FGunStats),
	alignof(FGunStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGunStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGunStats()
{
	if (!Z_Registration_Info_UScriptStruct_GunStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GunStats.InnerSingleton, Z_Construct_UScriptStruct_FGunStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GunStats.InnerSingleton;
}
// End ScriptStruct FGunStats

// Begin Class AWeaponActor Function ShootEffects
static const FName NAME_AWeaponActor_ShootEffects = FName(TEXT("ShootEffects"));
void AWeaponActor::ShootEffects()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponActor_ShootEffects);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWeaponActor_ShootEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Blueprint implementable event to trigger shoot effects (such as muzzle flash and sound).\n\x09 * Implement this event in Blueprint for your weapon.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint implementable event to trigger shoot effects (such as muzzle flash and sound).\nImplement this event in Blueprint for your weapon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_ShootEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "ShootEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_ShootEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponActor_ShootEffects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeaponActor_ShootEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponActor_ShootEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AWeaponActor Function ShootEffects

// Begin Class AWeaponActor
void AWeaponActor::StaticRegisterNativesAWeaponActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponActor);
UClass* Z_Construct_UClass_AWeaponActor_NoRegister()
{
	return AWeaponActor::StaticClass();
}
struct Z_Construct_UClass_AWeaponActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunStats_MetaData[] = {
		{ "Category", "Gun Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gun stats structure instance that can be edited in Blueprints */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun stats structure instance that can be edited in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBullets_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current number of bullets in the magazine */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current number of bullets in the magazine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzlePoint_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Muzzle point scene component (child of the default root) used as the start for line traces */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Components/Weapons/WeaponActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Muzzle point scene component (child of the default root) used as the start for line traces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GunStats;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBullets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzlePoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponActor_ShootEffects, "ShootEffects" }, // 2763319943
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_GunStats = { "GunStats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponActor, GunStats), Z_Construct_UScriptStruct_FGunStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunStats_MetaData), NewProp_GunStats_MetaData) }; // 63469701
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_CurrentBullets = { "CurrentBullets", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponActor, CurrentBullets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBullets_MetaData), NewProp_CurrentBullets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MuzzlePoint = { "MuzzlePoint", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponActor, MuzzlePoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzlePoint_MetaData), NewProp_MuzzlePoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_GunStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_CurrentBullets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MuzzlePoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponActor_Statics::ClassParams = {
	&AWeaponActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponActor()
{
	if (!Z_Registration_Info_UClass_AWeaponActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponActor.OuterSingleton, Z_Construct_UClass_AWeaponActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponActor.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UClass* StaticClass<AWeaponActor>()
{
	return AWeaponActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponActor);
AWeaponActor::~AWeaponActor() {}
// End Class AWeaponActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGunStats::StaticStruct, Z_Construct_UScriptStruct_FGunStats_Statics::NewStructOps, TEXT("GunStats"), &Z_Registration_Info_UScriptStruct_GunStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGunStats), 63469701U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponActor, AWeaponActor::StaticClass, TEXT("AWeaponActor"), &Z_Registration_Info_UClass_AWeaponActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponActor), 2293398050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponActor_h_1015563083(TEXT("/Script/StylishCombatStarterKit"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Components_Weapons_WeaponActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
