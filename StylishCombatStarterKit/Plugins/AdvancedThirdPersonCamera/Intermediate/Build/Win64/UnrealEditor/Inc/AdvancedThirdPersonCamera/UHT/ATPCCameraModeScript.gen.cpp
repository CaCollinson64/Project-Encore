// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraModeScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraModeScript() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraComponent_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraModeScript_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UEnum* Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Enum EATPCCameraModeScriptTickGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EATPCCameraModeScriptTickGroup;
static UEnum* EATPCCameraModeScriptTickGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EATPCCameraModeScriptTickGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EATPCCameraModeScriptTickGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("EATPCCameraModeScriptTickGroup"));
	}
	return Z_Registration_Info_UEnum_EATPCCameraModeScriptTickGroup.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UEnum* StaticEnum<EATPCCameraModeScriptTickGroup>()
{
	return EATPCCameraModeScriptTickGroup_StaticEnum();
}
struct Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraModeScript.h" },
		{ "PostCameraObjectTick.Name", "EATPCCameraModeScriptTickGroup::PostCameraObjectTick" },
		{ "PreCameraObjectTick.Name", "EATPCCameraModeScriptTickGroup::PreCameraObjectTick" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EATPCCameraModeScriptTickGroup::PreCameraObjectTick", (int64)EATPCCameraModeScriptTickGroup::PreCameraObjectTick },
		{ "EATPCCameraModeScriptTickGroup::PostCameraObjectTick", (int64)EATPCCameraModeScriptTickGroup::PostCameraObjectTick },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	"EATPCCameraModeScriptTickGroup",
	"EATPCCameraModeScriptTickGroup",
	Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup()
{
	if (!Z_Registration_Info_UEnum_EATPCCameraModeScriptTickGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EATPCCameraModeScriptTickGroup.InnerSingleton, Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EATPCCameraModeScriptTickGroup.InnerSingleton;
}
// End Enum EATPCCameraModeScriptTickGroup

// Begin Class UATPCCameraModeScript Function K2_OnEnterCameraMode
struct ATPCCameraModeScript_eventK2_OnEnterCameraMode_Parms
{
	UATPCCameraComponent* Camera;
};
static const FName NAME_UATPCCameraModeScript_K2_OnEnterCameraMode = FName(TEXT("K2_OnEnterCameraMode"));
void UATPCCameraModeScript::K2_OnEnterCameraMode(UATPCCameraComponent* Camera)
{
	ATPCCameraModeScript_eventK2_OnEnterCameraMode_Parms Parms;
	Parms.Camera=Camera;
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraModeScript_K2_OnEnterCameraMode);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnEnterCameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraModeScript_eventK2_OnEnterCameraMode_Parms, Camera), Z_Construct_UClass_UATPCCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraModeScript, nullptr, "K2_OnEnterCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::PropPointers), sizeof(ATPCCameraModeScript_eventK2_OnEnterCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(ATPCCameraModeScript_eventK2_OnEnterCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UATPCCameraModeScript Function K2_OnEnterCameraMode

// Begin Class UATPCCameraModeScript Function K2_OnExitCameraMode
struct ATPCCameraModeScript_eventK2_OnExitCameraMode_Parms
{
	UATPCCameraComponent* Camera;
};
static const FName NAME_UATPCCameraModeScript_K2_OnExitCameraMode = FName(TEXT("K2_OnExitCameraMode"));
void UATPCCameraModeScript::K2_OnExitCameraMode(UATPCCameraComponent* Camera)
{
	ATPCCameraModeScript_eventK2_OnExitCameraMode_Parms Parms;
	Parms.Camera=Camera;
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraModeScript_K2_OnExitCameraMode);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnExitCameraMode" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraModeScript_eventK2_OnExitCameraMode_Parms, Camera), Z_Construct_UClass_UATPCCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraModeScript, nullptr, "K2_OnExitCameraMode", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::PropPointers), sizeof(ATPCCameraModeScript_eventK2_OnExitCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(ATPCCameraModeScript_eventK2_OnExitCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UATPCCameraModeScript Function K2_OnExitCameraMode

// Begin Class UATPCCameraModeScript Function K2_Tick
struct ATPCCameraModeScript_eventK2_Tick_Parms
{
	UATPCCameraComponent* Camera;
	float DeltaSeconds;
};
static const FName NAME_UATPCCameraModeScript_K2_Tick = FName(TEXT("K2_Tick"));
void UATPCCameraModeScript::K2_Tick(UATPCCameraComponent* Camera, float DeltaSeconds)
{
	ATPCCameraModeScript_eventK2_Tick_Parms Parms;
	Parms.Camera=Camera;
	Parms.DeltaSeconds=DeltaSeconds;
	UFunction* Func = FindFunctionChecked(NAME_UATPCCameraModeScript_K2_Tick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraModeScript_eventK2_Tick_Parms, Camera), Z_Construct_UClass_UATPCCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraModeScript_eventK2_Tick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraModeScript, nullptr, "K2_Tick", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::PropPointers), sizeof(ATPCCameraModeScript_eventK2_Tick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::Function_MetaDataParams) };
static_assert(sizeof(ATPCCameraModeScript_eventK2_Tick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UATPCCameraModeScript Function K2_Tick

// Begin Class UATPCCameraModeScript
void UATPCCameraModeScript::StaticRegisterNativesUATPCCameraModeScript()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraModeScript);
UClass* Z_Construct_UClass_UATPCCameraModeScript_NoRegister()
{
	return UATPCCameraModeScript::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraModeScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* Camera mode script is a special object that is created upon activation of the camera mode. \n* It is convenient for writing user logic, which should be linked to the camera mode.\n*/" },
#endif
		{ "IncludePath", "ATPCCameraModeScript.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeScript.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Camera mode script is a special object that is created upon activation of the camera mode.\n* It is convenient for writing user logic, which should be linked to the camera mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCamera_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTick_MetaData[] = {
		{ "Category", "Settings|Tick" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickGroup_MetaData[] = {
		{ "Category", "Settings|Tick" },
		{ "ModuleRelativePath", "Public/ATPCCameraModeScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCamera;
	static void NewProp_bEnableTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TickGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TickGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UATPCCameraModeScript_K2_OnEnterCameraMode, "K2_OnEnterCameraMode" }, // 4072578970
		{ &Z_Construct_UFunction_UATPCCameraModeScript_K2_OnExitCameraMode, "K2_OnExitCameraMode" }, // 341961674
		{ &Z_Construct_UFunction_UATPCCameraModeScript_K2_Tick, "K2_Tick" }, // 613801396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraModeScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_OwningCamera = { "OwningCamera", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraModeScript, OwningCamera), Z_Construct_UClass_UATPCCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCamera_MetaData), NewProp_OwningCamera_MetaData) };
void Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_bEnableTick_SetBit(void* Obj)
{
	((UATPCCameraModeScript*)Obj)->bEnableTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_bEnableTick = { "bEnableTick", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UATPCCameraModeScript), &Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_bEnableTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTick_MetaData), NewProp_bEnableTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_TickGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_TickGroup = { "TickGroup", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraModeScript, TickGroup), Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCCameraModeScriptTickGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickGroup_MetaData), NewProp_TickGroup_MetaData) }; // 1899681444
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATPCCameraModeScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_OwningCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_bEnableTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_TickGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraModeScript_Statics::NewProp_TickGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UATPCCameraModeScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraModeScript_Statics::ClassParams = {
	&UATPCCameraModeScript::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UATPCCameraModeScript_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraModeScript_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraModeScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraModeScript()
{
	if (!Z_Registration_Info_UClass_UATPCCameraModeScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraModeScript.OuterSingleton, Z_Construct_UClass_UATPCCameraModeScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraModeScript.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraModeScript>()
{
	return UATPCCameraModeScript::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraModeScript);
UATPCCameraModeScript::~UATPCCameraModeScript() {}
// End Class UATPCCameraModeScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EATPCCameraModeScriptTickGroup_StaticEnum, TEXT("EATPCCameraModeScriptTickGroup"), &Z_Registration_Info_UEnum_EATPCCameraModeScriptTickGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1899681444U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraModeScript, UATPCCameraModeScript::StaticClass, TEXT("UATPCCameraModeScript"), &Z_Registration_Info_UClass_UATPCCameraModeScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraModeScript), 1834068388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_1350356528(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraModeScript_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
