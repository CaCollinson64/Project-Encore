// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesSpringArmComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesSpringArmComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesSpringArmComponent();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesSpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UStevesSpringArmComponent Function CancelSocketOffsetSmooth
struct Z_Construct_UFunction_UStevesSpringArmComponent_CancelSocketOffsetSmooth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SpringArm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Interrupt a smooth socket offset change, freeze where we are\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesSpringArmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interrupt a smooth socket offset change, freeze where we are" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesSpringArmComponent_CancelSocketOffsetSmooth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesSpringArmComponent, nullptr, "CancelSocketOffsetSmooth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesSpringArmComponent_CancelSocketOffsetSmooth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesSpringArmComponent_CancelSocketOffsetSmooth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStevesSpringArmComponent_CancelSocketOffsetSmooth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesSpringArmComponent_CancelSocketOffsetSmooth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesSpringArmComponent::execCancelSocketOffsetSmooth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelSocketOffsetSmooth();
	P_NATIVE_END;
}
// End Class UStevesSpringArmComponent Function CancelSocketOffsetSmooth

// Begin Class UStevesSpringArmComponent Function CancelTargetOffsetSmooth
struct Z_Construct_UFunction_UStevesSpringArmComponent_CancelTargetOffsetSmooth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SpringArm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Interrupt a smooth target offset change, freeze where we are\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesSpringArmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interrupt a smooth target offset change, freeze where we are" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesSpringArmComponent_CancelTargetOffsetSmooth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesSpringArmComponent, nullptr, "CancelTargetOffsetSmooth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesSpringArmComponent_CancelTargetOffsetSmooth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesSpringArmComponent_CancelTargetOffsetSmooth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStevesSpringArmComponent_CancelTargetOffsetSmooth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesSpringArmComponent_CancelTargetOffsetSmooth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesSpringArmComponent::execCancelTargetOffsetSmooth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelTargetOffsetSmooth();
	P_NATIVE_END;
}
// End Class UStevesSpringArmComponent Function CancelTargetOffsetSmooth

// Begin Class UStevesSpringArmComponent Function SetSocketOffsetSmooth
struct Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics
{
	struct StevesSpringArmComponent_eventSetSocketOffsetSmooth_Parms
	{
		FVector NewSocketOffset;
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SpringArm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Smoothly change the socket offset, instead of jumping\n" },
#endif
		{ "CPP_Default_Speed", "5.000000" },
		{ "ModuleRelativePath", "Public/StevesSpringArmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smoothly change the socket offset, instead of jumping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSocketOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSocketOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::NewProp_NewSocketOffset = { "NewSocketOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesSpringArmComponent_eventSetSocketOffsetSmooth_Parms, NewSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSocketOffset_MetaData), NewProp_NewSocketOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesSpringArmComponent_eventSetSocketOffsetSmooth_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::NewProp_NewSocketOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesSpringArmComponent, nullptr, "SetSocketOffsetSmooth", nullptr, nullptr, Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::StevesSpringArmComponent_eventSetSocketOffsetSmooth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::StevesSpringArmComponent_eventSetSocketOffsetSmooth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesSpringArmComponent::execSetSocketOffsetSmooth)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewSocketOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSocketOffsetSmooth(Z_Param_Out_NewSocketOffset,Z_Param_Speed);
	P_NATIVE_END;
}
// End Class UStevesSpringArmComponent Function SetSocketOffsetSmooth

// Begin Class UStevesSpringArmComponent Function SetTargetOffsetSmooth
struct Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics
{
	struct StevesSpringArmComponent_eventSetTargetOffsetSmooth_Parms
	{
		FVector NewTargetOffset;
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SpringArm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Smoothly change the target offset, instead of jumping\n" },
#endif
		{ "CPP_Default_Speed", "5.000000" },
		{ "ModuleRelativePath", "Public/StevesSpringArmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smoothly change the target offset, instead of jumping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTargetOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTargetOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::NewProp_NewTargetOffset = { "NewTargetOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesSpringArmComponent_eventSetTargetOffsetSmooth_Parms, NewTargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTargetOffset_MetaData), NewProp_NewTargetOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesSpringArmComponent_eventSetTargetOffsetSmooth_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::NewProp_NewTargetOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesSpringArmComponent, nullptr, "SetTargetOffsetSmooth", nullptr, nullptr, Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::StevesSpringArmComponent_eventSetTargetOffsetSmooth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::StevesSpringArmComponent_eventSetTargetOffsetSmooth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesSpringArmComponent::execSetTargetOffsetSmooth)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewTargetOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetOffsetSmooth(Z_Param_Out_NewTargetOffset,Z_Param_Speed);
	P_NATIVE_END;
}
// End Class UStevesSpringArmComponent Function SetTargetOffsetSmooth

// Begin Class UStevesSpringArmComponent
void UStevesSpringArmComponent::StaticRegisterNativesUStevesSpringArmComponent()
{
	UClass* Class = UStevesSpringArmComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelSocketOffsetSmooth", &UStevesSpringArmComponent::execCancelSocketOffsetSmooth },
		{ "CancelTargetOffsetSmooth", &UStevesSpringArmComponent::execCancelTargetOffsetSmooth },
		{ "SetSocketOffsetSmooth", &UStevesSpringArmComponent::execSetSocketOffsetSmooth },
		{ "SetTargetOffsetSmooth", &UStevesSpringArmComponent::execSetTargetOffsetSmooth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesSpringArmComponent);
UClass* Z_Construct_UClass_UStevesSpringArmComponent_NoRegister()
{
	return UStevesSpringArmComponent::StaticClass();
}
struct Z_Construct_UClass_UStevesSpringArmComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "StevesSpringArmComponent.h" },
		{ "ModuleRelativePath", "Public/StevesSpringArmComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSmoothCollisionAvoidance_MetaData[] = {
		{ "Category", "CameraCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Whether to move the camera smoothly to avoid collisions rather than jumping instantly\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesSpringArmComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to move the camera smoothly to avoid collisions rather than jumping instantly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothCollisionAvoidanceSpeed_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "ModuleRelativePath", "Public/StevesSpringArmComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisualLogCameraCollision_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "ModuleRelativePath", "Public/StevesSpringArmComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bEnableSmoothCollisionAvoidance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSmoothCollisionAvoidance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothCollisionAvoidanceSpeed;
#if WITH_EDITORONLY_DATA
	static void NewProp_bVisualLogCameraCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualLogCameraCollision;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStevesSpringArmComponent_CancelSocketOffsetSmooth, "CancelSocketOffsetSmooth" }, // 2716131469
		{ &Z_Construct_UFunction_UStevesSpringArmComponent_CancelTargetOffsetSmooth, "CancelTargetOffsetSmooth" }, // 1596581273
		{ &Z_Construct_UFunction_UStevesSpringArmComponent_SetSocketOffsetSmooth, "SetSocketOffsetSmooth" }, // 679847804
		{ &Z_Construct_UFunction_UStevesSpringArmComponent_SetTargetOffsetSmooth, "SetTargetOffsetSmooth" }, // 3012692411
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesSpringArmComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_bEnableSmoothCollisionAvoidance_SetBit(void* Obj)
{
	((UStevesSpringArmComponent*)Obj)->bEnableSmoothCollisionAvoidance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_bEnableSmoothCollisionAvoidance = { "bEnableSmoothCollisionAvoidance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStevesSpringArmComponent), &Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_bEnableSmoothCollisionAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSmoothCollisionAvoidance_MetaData), NewProp_bEnableSmoothCollisionAvoidance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_SmoothCollisionAvoidanceSpeed = { "SmoothCollisionAvoidanceSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesSpringArmComponent, SmoothCollisionAvoidanceSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothCollisionAvoidanceSpeed_MetaData), NewProp_SmoothCollisionAvoidanceSpeed_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_bVisualLogCameraCollision_SetBit(void* Obj)
{
	((UStevesSpringArmComponent*)Obj)->bVisualLogCameraCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_bVisualLogCameraCollision = { "bVisualLogCameraCollision", nullptr, (EPropertyFlags)0x0020080800002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStevesSpringArmComponent), &Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_bVisualLogCameraCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisualLogCameraCollision_MetaData), NewProp_bVisualLogCameraCollision_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStevesSpringArmComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_bEnableSmoothCollisionAvoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_SmoothCollisionAvoidanceSpeed,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesSpringArmComponent_Statics::NewProp_bVisualLogCameraCollision,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesSpringArmComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStevesSpringArmComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesSpringArmComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesSpringArmComponent_Statics::ClassParams = {
	&UStevesSpringArmComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStevesSpringArmComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStevesSpringArmComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesSpringArmComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesSpringArmComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesSpringArmComponent()
{
	if (!Z_Registration_Info_UClass_UStevesSpringArmComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesSpringArmComponent.OuterSingleton, Z_Construct_UClass_UStevesSpringArmComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesSpringArmComponent.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesSpringArmComponent>()
{
	return UStevesSpringArmComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesSpringArmComponent);
UStevesSpringArmComponent::~UStevesSpringArmComponent() {}
// End Class UStevesSpringArmComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesSpringArmComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesSpringArmComponent, UStevesSpringArmComponent::StaticClass, TEXT("UStevesSpringArmComponent"), &Z_Registration_Info_UClass_UStevesSpringArmComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesSpringArmComponent), 3486166525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesSpringArmComponent_h_1966917365(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesSpringArmComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesSpringArmComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
