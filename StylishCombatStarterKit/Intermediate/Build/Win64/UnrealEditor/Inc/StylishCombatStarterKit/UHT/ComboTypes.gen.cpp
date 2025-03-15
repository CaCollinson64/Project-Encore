// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StylishCombatStarterKit/Gameplay/Character/Inputs/ComboTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboTypes() {}

// Begin Cross Module References
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboBlockPolicy_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboPolicy_NoRegister();
STYLISHCOMBATSTARTERKIT_API UClass* Z_Construct_UClass_UComboValidationPolicy_NoRegister();
STYLISHCOMBATSTARTERKIT_API UEnum* Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType();
STYLISHCOMBATSTARTERKIT_API UEnum* Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FComboChain();
STYLISHCOMBATSTARTERKIT_API UScriptStruct* Z_Construct_UScriptStruct_FComboStep();
UPackage* Z_Construct_UPackage__Script_StylishCombatStarterKit();
// End Cross Module References

// Begin Enum EComboExecutionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboExecutionType;
static UEnum* EComboExecutionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EComboExecutionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EComboExecutionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType, (UObject*)Z_Construct_UPackage__Script_StylishCombatStarterKit(), TEXT("EComboExecutionType"));
	}
	return Z_Registration_Info_UEnum_EComboExecutionType.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UEnum* StaticEnum<EComboExecutionType>()
{
	return EComboExecutionType_StaticEnum();
}
struct Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbilityBased.DisplayName", "Ability Based" },
		{ "AbilityBased.Name", "EComboExecutionType::AbilityBased" },
		{ "AnimationMontageBased.DisplayName", "Animation Montage Based" },
		{ "AnimationMontageBased.Name", "EComboExecutionType::AnimationMontageBased" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EComboExecutionType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EComboExecutionType::None", (int64)EComboExecutionType::None },
		{ "EComboExecutionType::AnimationMontageBased", (int64)EComboExecutionType::AnimationMontageBased },
		{ "EComboExecutionType::AbilityBased", (int64)EComboExecutionType::AbilityBased },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
	nullptr,
	"EComboExecutionType",
	"EComboExecutionType",
	Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType()
{
	if (!Z_Registration_Info_UEnum_EComboExecutionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboExecutionType.InnerSingleton, Z_Construct_UEnum_StylishCombatStarterKit_EComboExecutionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EComboExecutionType.InnerSingleton;
}
// End Enum EComboExecutionType

// Begin Enum EComboInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboInputType;
static UEnum* EComboInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EComboInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EComboInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType, (UObject*)Z_Construct_UPackage__Script_StylishCombatStarterKit(), TEXT("EComboInputType"));
	}
	return Z_Registration_Info_UEnum_EComboInputType.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UEnum* StaticEnum<EComboInputType>()
{
	return EComboInputType_StaticEnum();
}
struct Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum to classify input or attack type.\n * Could be extended to contain \"Light\", \"Heavy\", \"Special\", \"Aerial\", etc.\n */" },
#endif
		{ "Heavy.DisplayName", "Heavy" },
		{ "Heavy.Name", "EComboInputType::Heavy" },
		{ "Jump.DisplayName", "Jump / In Air" },
		{ "Jump.Name", "EComboInputType::Jump" },
		{ "Light.DisplayName", "Light" },
		{ "Light.Name", "EComboInputType::Light" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EComboInputType::None" },
		{ "Ranged.DisplayName", "Ranged" },
		{ "Ranged.Name", "EComboInputType::Ranged" },
		{ "Special1.DisplayName", "Special 1" },
		{ "Special1.Name", "EComboInputType::Special1" },
		{ "Special2.DisplayName", "Special 2" },
		{ "Special2.Name", "EComboInputType::Special2" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to classify input or attack type.\nCould be extended to contain \"Light\", \"Heavy\", \"Special\", \"Aerial\", etc." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EComboInputType::None", (int64)EComboInputType::None },
		{ "EComboInputType::Light", (int64)EComboInputType::Light },
		{ "EComboInputType::Heavy", (int64)EComboInputType::Heavy },
		{ "EComboInputType::Ranged", (int64)EComboInputType::Ranged },
		{ "EComboInputType::Special1", (int64)EComboInputType::Special1 },
		{ "EComboInputType::Special2", (int64)EComboInputType::Special2 },
		{ "EComboInputType::Jump", (int64)EComboInputType::Jump },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
	nullptr,
	"EComboInputType",
	"EComboInputType",
	Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType()
{
	if (!Z_Registration_Info_UEnum_EComboInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboInputType.InnerSingleton, Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EComboInputType.InnerSingleton;
}
// End Enum EComboInputType

// Begin ScriptStruct FComboStep
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboStep;
class UScriptStruct* FComboStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboStep, (UObject*)Z_Construct_UPackage__Script_StylishCombatStarterKit(), TEXT("ComboStep"));
	}
	return Z_Registration_Info_UScriptStruct_ComboStep.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UScriptStruct* StaticStruct<FComboStep>()
{
	return FComboStep::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComboStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct describing a single step (or node) in a combo chain.\n */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct describing a single step (or node) in a combo chain." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPolicies_Inner_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This will cancel the montage and END animation (Used for blocking attacks type of animations)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will cancel the montage and END animation (Used for blocking attacks type of animations)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPolicies_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This will cancel the montage and END animation (Used for blocking attacks type of animations)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will cancel the montage and END animation (Used for blocking attacks type of animations)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEndComboInputReleased_MetaData[] = {
		{ "Category", "Combo|Input" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceEndPolicyWithValidation_MetaData[] = {
		{ "Category", "Combo|Input" },
		{ "EditCondition", "!bCanEndComboInputReleased" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPolicies_Inner_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Manages Hit\n" },
#endif
		{ "EditCondition", "bCanEndComboInputReleased || bForceEndPolicyWithValidation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages Hit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPolicies_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Manages Hit\n" },
#endif
		{ "EditCondition", "bCanEndComboInputReleased || bForceEndPolicyWithValidation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manages Hit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationPolicies_Inner_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationPolicies_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputOverridePolicies_Inner_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputOverridePolicies_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[] = {
		{ "Category", "Combo|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The input required to continue to this step from the previous step (e.g., Light, Heavy). */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The input required to continue to this step from the previous step (e.g., Light, Heavy)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockAtRank_MetaData[] = {
		{ "Category", "Combo|Rank" },
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboWindow_MetaData[] = {
		{ "Category", "Combo|Timing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How long after we start this step the player can press the next input to continue. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long after we start this step the player can press the next input to continue." },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDuration_MetaData[] = {
		{ "Category", "Combo|Timing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overall duration of this attack or how long we 'lock' the player. (Could tie to anim length.) */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overall duration of this attack or how long we 'lock' the player. (Could tie to anim length.)" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Combo|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage inflicted by this step. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage inflicted by this step." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackStunTime_MetaData[] = {
		{ "Category", "Combo|Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stun time inflicted on the enemy, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stun time inflicted on the enemy, if applicable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGrantsIFrames_MetaData[] = {
		{ "Category", "Combo|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this step grants i-frames (invincibility) to the player. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this step grants i-frames (invincibility) to the player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartPolicies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartPolicies;
	static void NewProp_bCanEndComboInputReleased_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEndComboInputReleased;
	static void NewProp_bForceEndPolicyWithValidation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceEndPolicyWithValidation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndPolicies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EndPolicies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidationPolicies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationPolicies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputOverridePolicies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputOverridePolicies;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnlockAtRank;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComboWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackStunTime;
	static void NewProp_bGrantsIFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGrantsIFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_StartPolicies_Inner = { "StartPolicies", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPolicies_Inner_MetaData), NewProp_StartPolicies_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_StartPolicies = { "StartPolicies", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, StartPolicies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPolicies_MetaData), NewProp_StartPolicies_MetaData) };
void Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bCanEndComboInputReleased_SetBit(void* Obj)
{
	((FComboStep*)Obj)->bCanEndComboInputReleased = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bCanEndComboInputReleased = { "bCanEndComboInputReleased", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComboStep), &Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bCanEndComboInputReleased_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEndComboInputReleased_MetaData), NewProp_bCanEndComboInputReleased_MetaData) };
void Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bForceEndPolicyWithValidation_SetBit(void* Obj)
{
	((FComboStep*)Obj)->bForceEndPolicyWithValidation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bForceEndPolicyWithValidation = { "bForceEndPolicyWithValidation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComboStep), &Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bForceEndPolicyWithValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceEndPolicyWithValidation_MetaData), NewProp_bForceEndPolicyWithValidation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_EndPolicies_Inner = { "EndPolicies", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPolicies_Inner_MetaData), NewProp_EndPolicies_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_EndPolicies = { "EndPolicies", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, EndPolicies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPolicies_MetaData), NewProp_EndPolicies_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_ValidationPolicies_Inner = { "ValidationPolicies", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboValidationPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationPolicies_Inner_MetaData), NewProp_ValidationPolicies_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_ValidationPolicies = { "ValidationPolicies", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, ValidationPolicies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationPolicies_MetaData), NewProp_ValidationPolicies_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_InputOverridePolicies_Inner = { "InputOverridePolicies", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboBlockPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputOverridePolicies_Inner_MetaData), NewProp_InputOverridePolicies_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_InputOverridePolicies = { "InputOverridePolicies", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, InputOverridePolicies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputOverridePolicies_MetaData), NewProp_InputOverridePolicies_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, InputType), Z_Construct_UEnum_StylishCombatStarterKit_EComboInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputType_MetaData), NewProp_InputType_MetaData) }; // 3934570452
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_UnlockAtRank = { "UnlockAtRank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, UnlockAtRank), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockAtRank_MetaData), NewProp_UnlockAtRank_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_ComboWindow = { "ComboWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, ComboWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboWindow_MetaData), NewProp_ComboWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_AttackDuration = { "AttackDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, AttackDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDuration_MetaData), NewProp_AttackDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_AttackStunTime = { "AttackStunTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboStep, AttackStunTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackStunTime_MetaData), NewProp_AttackStunTime_MetaData) };
void Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bGrantsIFrames_SetBit(void* Obj)
{
	((FComboStep*)Obj)->bGrantsIFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bGrantsIFrames = { "bGrantsIFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComboStep), &Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bGrantsIFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGrantsIFrames_MetaData), NewProp_bGrantsIFrames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_StartPolicies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_StartPolicies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bCanEndComboInputReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bForceEndPolicyWithValidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_EndPolicies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_EndPolicies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_ValidationPolicies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_ValidationPolicies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_InputOverridePolicies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_InputOverridePolicies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_InputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_InputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_UnlockAtRank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_ComboWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_AttackDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_AttackStunTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboStep_Statics::NewProp_bGrantsIFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboStep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
	nullptr,
	&NewStructOps,
	"ComboStep",
	Z_Construct_UScriptStruct_FComboStep_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboStep_Statics::PropPointers),
	sizeof(FComboStep),
	alignof(FComboStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboStep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComboStep()
{
	if (!Z_Registration_Info_UScriptStruct_ComboStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboStep.InnerSingleton, Z_Construct_UScriptStruct_FComboStep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComboStep.InnerSingleton;
}
// End ScriptStruct FComboStep

// Begin ScriptStruct FComboChain
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboChain;
class UScriptStruct* FComboChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboChain, (UObject*)Z_Construct_UPackage__Script_StylishCombatStarterKit(), TEXT("ComboChain"));
	}
	return Z_Registration_Info_UScriptStruct_ComboChain.OuterSingleton;
}
template<> STYLISHCOMBATSTARTERKIT_API UScriptStruct* StaticStruct<FComboChain>()
{
	return FComboChain::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComboChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A single combo chain might be an array of multiple FComboSteps.\n */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single combo chain might be an array of multiple FComboSteps." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[] = {
		{ "Category", "Combo|General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of this combo chain (e.g. \"GroundLightCombo,\" \"AerialHeavyCombo\"). */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of this combo chain (e.g. \"GroundLightCombo,\" \"AerialHeavyCombo\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "Category", "Combo|Steps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Steps that define this combo chain. Each step can branch to another via NextStepsByInput. */" },
#endif
		{ "ModuleRelativePath", "Gameplay/Character/Inputs/ComboTypes.h" },
		{ "TitleProperty", "InputType" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steps that define this combo chain. Each step can branch to another via NextStepsByInput." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Steps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Steps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboChain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComboChain_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboChain, ChainName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainName_MetaData), NewProp_ChainName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboChain_Statics::NewProp_Steps_Inner = { "Steps", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComboStep, METADATA_PARAMS(0, nullptr) }; // 1049137089
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboChain_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboChain, Steps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) }; // 1049137089
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboChain_Statics::NewProp_ChainName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboChain_Statics::NewProp_Steps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboChain_Statics::NewProp_Steps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboChain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StylishCombatStarterKit,
	nullptr,
	&NewStructOps,
	"ComboChain",
	Z_Construct_UScriptStruct_FComboChain_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboChain_Statics::PropPointers),
	sizeof(FComboChain),
	alignof(FComboChain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboChain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboChain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComboChain()
{
	if (!Z_Registration_Info_UScriptStruct_ComboChain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboChain.InnerSingleton, Z_Construct_UScriptStruct_FComboChain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComboChain.InnerSingleton;
}
// End ScriptStruct FComboChain

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Inputs_ComboTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EComboExecutionType_StaticEnum, TEXT("EComboExecutionType"), &Z_Registration_Info_UEnum_EComboExecutionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 59335010U) },
		{ EComboInputType_StaticEnum, TEXT("EComboInputType"), &Z_Registration_Info_UEnum_EComboInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3934570452U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FComboStep::StaticStruct, Z_Construct_UScriptStruct_FComboStep_Statics::NewStructOps, TEXT("ComboStep"), &Z_Registration_Info_UScriptStruct_ComboStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboStep), 1049137089U) },
		{ FComboChain::StaticStruct, Z_Construct_UScriptStruct_FComboChain_Statics::NewStructOps, TEXT("ComboChain"), &Z_Registration_Info_UScriptStruct_ComboChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboChain), 1083968843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Inputs_ComboTypes_h_1382391661(TEXT("/Script/StylishCombatStarterKit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Inputs_ComboTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Inputs_ComboTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Inputs_ComboTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Source_StylishCombatStarterKit_Gameplay_Character_Inputs_ComboTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
