// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraLockOnTargetObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraLockOnTargetObject() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_AATPCArrowDebugActor_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraBaseObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraLockOnTargetObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraLockOnTargetObject_NoRegister();
ADVANCEDTHIRDPERSONCAMERA_API UEnum* Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason();
ADVANCEDTHIRDPERSONCAMERA_API UFunction* Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Enum EATPCChangeTargetReason
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EATPCChangeTargetReason;
static UEnum* EATPCChangeTargetReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EATPCChangeTargetReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EATPCChangeTargetReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason, (UObject*)Z_Construct_UPackage__Script_AdvancedThirdPersonCamera(), TEXT("EATPCChangeTargetReason"));
	}
	return Z_Registration_Info_UEnum_EATPCChangeTargetReason.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UEnum* StaticEnum<EATPCChangeTargetReason>()
{
	return EATPCChangeTargetReason_StaticEnum();
}
struct Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LostByDistance.Name", "EATPCChangeTargetReason::LostByDistance" },
		{ "LostByExitCameraMode.Name", "EATPCChangeTargetReason::LostByExitCameraMode" },
		{ "LostByPlayerInput.Name", "EATPCChangeTargetReason::LostByPlayerInput" },
		{ "LostByVisible.Name", "EATPCChangeTargetReason::LostByVisible" },
		{ "ModuleRelativePath", "Public/ATPCCameraLockOnTargetObject.h" },
		{ "SetNew.Name", "EATPCChangeTargetReason::SetNew" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EATPCChangeTargetReason::SetNew", (int64)EATPCChangeTargetReason::SetNew },
		{ "EATPCChangeTargetReason::LostByExitCameraMode", (int64)EATPCChangeTargetReason::LostByExitCameraMode },
		{ "EATPCChangeTargetReason::LostByDistance", (int64)EATPCChangeTargetReason::LostByDistance },
		{ "EATPCChangeTargetReason::LostByVisible", (int64)EATPCChangeTargetReason::LostByVisible },
		{ "EATPCChangeTargetReason::LostByPlayerInput", (int64)EATPCChangeTargetReason::LostByPlayerInput },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
	nullptr,
	"EATPCChangeTargetReason",
	"EATPCChangeTargetReason",
	Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason()
{
	if (!Z_Registration_Info_UEnum_EATPCChangeTargetReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EATPCChangeTargetReason.InnerSingleton, Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EATPCChangeTargetReason.InnerSingleton;
}
// End Enum EATPCChangeTargetReason

// Begin Delegate FOnTargetChangeDelegate
struct Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics
{
	struct ATPCCameraLockOnTargetObject_eventOnTargetChangeDelegate_Parms
	{
		AActor* NewTarget;
		EATPCChangeTargetReason ChangeTargetReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraLockOnTargetObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeTargetReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChangeTargetReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLockOnTargetObject_eventOnTargetChangeDelegate_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::NewProp_ChangeTargetReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::NewProp_ChangeTargetReason = { "ChangeTargetReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLockOnTargetObject_eventOnTargetChangeDelegate_Parms, ChangeTargetReason), Z_Construct_UEnum_AdvancedThirdPersonCamera_EATPCChangeTargetReason, METADATA_PARAMS(0, nullptr) }; // 1694395571
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::NewProp_NewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::NewProp_ChangeTargetReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::NewProp_ChangeTargetReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLockOnTargetObject, nullptr, "OnTargetChangeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::ATPCCameraLockOnTargetObject_eventOnTargetChangeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::ATPCCameraLockOnTargetObject_eventOnTargetChangeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UATPCCameraLockOnTargetObject::FOnTargetChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTargetChangeDelegate, AActor* NewTarget, EATPCChangeTargetReason ChangeTargetReason)
{
	struct ATPCCameraLockOnTargetObject_eventOnTargetChangeDelegate_Parms
	{
		AActor* NewTarget;
		EATPCChangeTargetReason ChangeTargetReason;
	};
	ATPCCameraLockOnTargetObject_eventOnTargetChangeDelegate_Parms Parms;
	Parms.NewTarget=NewTarget;
	Parms.ChangeTargetReason=ChangeTargetReason;
	OnTargetChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTargetChangeDelegate

// Begin Class UATPCCameraLockOnTargetObject Function GetTargetActor
struct Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics
{
	struct ATPCCameraLockOnTargetObject_eventGetTargetActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraLockOnTargetObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLockOnTargetObject_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLockOnTargetObject, nullptr, "GetTargetActor", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::ATPCCameraLockOnTargetObject_eventGetTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::ATPCCameraLockOnTargetObject_eventGetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLockOnTargetObject::execGetTargetActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTargetActor();
	P_NATIVE_END;
}
// End Class UATPCCameraLockOnTargetObject Function GetTargetActor

// Begin Class UATPCCameraLockOnTargetObject Function SetTargetActor
struct Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics
{
	struct ATPCCameraLockOnTargetObject_eventSetTargetActor_Parms
	{
		AActor* NewTargetActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set and lock a target for aiming*/" },
#endif
		{ "ModuleRelativePath", "Public/ATPCCameraLockOnTargetObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set and lock a target for aiming" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTargetActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::NewProp_NewTargetActor = { "NewTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraLockOnTargetObject_eventSetTargetActor_Parms, NewTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ATPCCameraLockOnTargetObject_eventSetTargetActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraLockOnTargetObject_eventSetTargetActor_Parms), &Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::NewProp_NewTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraLockOnTargetObject, nullptr, "SetTargetActor", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::ATPCCameraLockOnTargetObject_eventSetTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::ATPCCameraLockOnTargetObject_eventSetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraLockOnTargetObject::execSetTargetActor)
{
	P_GET_OBJECT(AActor,Z_Param_NewTargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTargetActor(Z_Param_NewTargetActor);
	P_NATIVE_END;
}
// End Class UATPCCameraLockOnTargetObject Function SetTargetActor

// Begin Class UATPCCameraLockOnTargetObject
void UATPCCameraLockOnTargetObject::StaticRegisterNativesUATPCCameraLockOnTargetObject()
{
	UClass* Class = UATPCCameraLockOnTargetObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTargetActor", &UATPCCameraLockOnTargetObject::execGetTargetActor },
		{ "SetTargetActor", &UATPCCameraLockOnTargetObject::execSetTargetActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraLockOnTargetObject);
UClass* Z_Construct_UClass_UATPCCameraLockOnTargetObject_NoRegister()
{
	return UATPCCameraLockOnTargetObject::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ATPC" },
		{ "IncludePath", "ATPCCameraLockOnTargetObject.h" },
		{ "ModuleRelativePath", "Public/ATPCCameraLockOnTargetObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetChangeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraLockOnTargetObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDebugActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ATPCCameraLockOnTargetObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetChangeDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetDebugActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UATPCCameraLockOnTargetObject_GetTargetActor, "GetTargetActor" }, // 1741692741
		{ &Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature, "OnTargetChangeDelegate__DelegateSignature" }, // 472666616
		{ &Z_Construct_UFunction_UATPCCameraLockOnTargetObject_SetTargetActor, "SetTargetActor" }, // 1191669808
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraLockOnTargetObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::NewProp_OnTargetChangeDelegate = { "OnTargetChangeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraLockOnTargetObject, OnTargetChangeDelegate), Z_Construct_UDelegateFunction_UATPCCameraLockOnTargetObject_OnTargetChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetChangeDelegate_MetaData), NewProp_OnTargetChangeDelegate_MetaData) }; // 472666616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::NewProp_TargetDebugActor = { "TargetDebugActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UATPCCameraLockOnTargetObject, TargetDebugActor), Z_Construct_UClass_AATPCArrowDebugActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDebugActor_MetaData), NewProp_TargetDebugActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::NewProp_OnTargetChangeDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::NewProp_TargetDebugActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UATPCCameraBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::ClassParams = {
	&UATPCCameraLockOnTargetObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraLockOnTargetObject()
{
	if (!Z_Registration_Info_UClass_UATPCCameraLockOnTargetObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraLockOnTargetObject.OuterSingleton, Z_Construct_UClass_UATPCCameraLockOnTargetObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraLockOnTargetObject.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraLockOnTargetObject>()
{
	return UATPCCameraLockOnTargetObject::StaticClass();
}
UATPCCameraLockOnTargetObject::UATPCCameraLockOnTargetObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraLockOnTargetObject);
UATPCCameraLockOnTargetObject::~UATPCCameraLockOnTargetObject() {}
// End Class UATPCCameraLockOnTargetObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLockOnTargetObject_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EATPCChangeTargetReason_StaticEnum, TEXT("EATPCChangeTargetReason"), &Z_Registration_Info_UEnum_EATPCChangeTargetReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1694395571U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraLockOnTargetObject, UATPCCameraLockOnTargetObject::StaticClass, TEXT("UATPCCameraLockOnTargetObject"), &Z_Registration_Info_UClass_UATPCCameraLockOnTargetObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraLockOnTargetObject), 1506426767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLockOnTargetObject_h_1046967274(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLockOnTargetObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLockOnTargetObject_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLockOnTargetObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraLockOnTargetObject_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
