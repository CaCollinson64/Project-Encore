// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedThirdPersonCamera/Public/ATPCCameraFadingObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATPCCameraFadingObject() {}

// Begin Cross Module References
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraBaseObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraFadingObject();
ADVANCEDTHIRDPERSONCAMERA_API UClass* Z_Construct_UClass_UATPCCameraFadingObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedThirdPersonCamera();
// End Cross Module References

// Begin Class UATPCCameraFadingObject Function AddIgnoredActor
struct Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics
{
	struct ATPCCameraFadingObject_eventAddIgnoredActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraFadingObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraFadingObject_eventAddIgnoredActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraFadingObject, nullptr, "AddIgnoredActor", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::ATPCCameraFadingObject_eventAddIgnoredActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::ATPCCameraFadingObject_eventAddIgnoredActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraFadingObject::execAddIgnoredActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIgnoredActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UATPCCameraFadingObject Function AddIgnoredActor

// Begin Class UATPCCameraFadingObject Function AddManualFadeActor
struct Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics
{
	struct ATPCCameraFadingObject_eventAddManualFadeActor_Parms
	{
		AActor* Actor;
		bool bWithCustomTime;
		float CustomFadeOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "CPP_Default_bWithCustomTime", "false" },
		{ "CPP_Default_CustomFadeOutTime", "0.000000" },
		{ "ModuleRelativePath", "Public/ATPCCameraFadingObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bWithCustomTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithCustomTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomFadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraFadingObject_eventAddManualFadeActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::NewProp_bWithCustomTime_SetBit(void* Obj)
{
	((ATPCCameraFadingObject_eventAddManualFadeActor_Parms*)Obj)->bWithCustomTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::NewProp_bWithCustomTime = { "bWithCustomTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPCCameraFadingObject_eventAddManualFadeActor_Parms), &Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::NewProp_bWithCustomTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::NewProp_CustomFadeOutTime = { "CustomFadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraFadingObject_eventAddManualFadeActor_Parms, CustomFadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::NewProp_bWithCustomTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::NewProp_CustomFadeOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraFadingObject, nullptr, "AddManualFadeActor", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::ATPCCameraFadingObject_eventAddManualFadeActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::ATPCCameraFadingObject_eventAddManualFadeActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraFadingObject::execAddManualFadeActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_bWithCustomTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CustomFadeOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddManualFadeActor(Z_Param_Actor,Z_Param_bWithCustomTime,Z_Param_CustomFadeOutTime);
	P_NATIVE_END;
}
// End Class UATPCCameraFadingObject Function AddManualFadeActor

// Begin Class UATPCCameraFadingObject Function ClearIgnoredActors
struct Z_Construct_UFunction_UATPCCameraFadingObject_ClearIgnoredActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraFadingObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraFadingObject_ClearIgnoredActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraFadingObject, nullptr, "ClearIgnoredActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_ClearIgnoredActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraFadingObject_ClearIgnoredActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UATPCCameraFadingObject_ClearIgnoredActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraFadingObject_ClearIgnoredActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraFadingObject::execClearIgnoredActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearIgnoredActors();
	P_NATIVE_END;
}
// End Class UATPCCameraFadingObject Function ClearIgnoredActors

// Begin Class UATPCCameraFadingObject Function ClearManualFadeActors
struct Z_Construct_UFunction_UATPCCameraFadingObject_ClearManualFadeActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraFadingObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraFadingObject_ClearManualFadeActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraFadingObject, nullptr, "ClearManualFadeActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_ClearManualFadeActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraFadingObject_ClearManualFadeActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UATPCCameraFadingObject_ClearManualFadeActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraFadingObject_ClearManualFadeActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraFadingObject::execClearManualFadeActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearManualFadeActors();
	P_NATIVE_END;
}
// End Class UATPCCameraFadingObject Function ClearManualFadeActors

// Begin Class UATPCCameraFadingObject Function RemoveIgnoredActor
struct Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics
{
	struct ATPCCameraFadingObject_eventRemoveIgnoredActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraFadingObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraFadingObject_eventRemoveIgnoredActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraFadingObject, nullptr, "RemoveIgnoredActor", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::ATPCCameraFadingObject_eventRemoveIgnoredActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::ATPCCameraFadingObject_eventRemoveIgnoredActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraFadingObject::execRemoveIgnoredActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveIgnoredActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UATPCCameraFadingObject Function RemoveIgnoredActor

// Begin Class UATPCCameraFadingObject Function RemoveManualFadeActor
struct Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics
{
	struct ATPCCameraFadingObject_eventRemoveManualFadeActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATPC" },
		{ "ModuleRelativePath", "Public/ATPCCameraFadingObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCCameraFadingObject_eventRemoveManualFadeActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UATPCCameraFadingObject, nullptr, "RemoveManualFadeActor", nullptr, nullptr, Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::ATPCCameraFadingObject_eventRemoveManualFadeActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::ATPCCameraFadingObject_eventRemoveManualFadeActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UATPCCameraFadingObject::execRemoveManualFadeActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveManualFadeActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UATPCCameraFadingObject Function RemoveManualFadeActor

// Begin Class UATPCCameraFadingObject
void UATPCCameraFadingObject::StaticRegisterNativesUATPCCameraFadingObject()
{
	UClass* Class = UATPCCameraFadingObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddIgnoredActor", &UATPCCameraFadingObject::execAddIgnoredActor },
		{ "AddManualFadeActor", &UATPCCameraFadingObject::execAddManualFadeActor },
		{ "ClearIgnoredActors", &UATPCCameraFadingObject::execClearIgnoredActors },
		{ "ClearManualFadeActors", &UATPCCameraFadingObject::execClearManualFadeActors },
		{ "RemoveIgnoredActor", &UATPCCameraFadingObject::execRemoveIgnoredActor },
		{ "RemoveManualFadeActor", &UATPCCameraFadingObject::execRemoveManualFadeActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UATPCCameraFadingObject);
UClass* Z_Construct_UClass_UATPCCameraFadingObject_NoRegister()
{
	return UATPCCameraFadingObject::StaticClass();
}
struct Z_Construct_UClass_UATPCCameraFadingObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "ATPC" },
		{ "IncludePath", "ATPCCameraFadingObject.h" },
		{ "ModuleRelativePath", "Public/ATPCCameraFadingObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UATPCCameraFadingObject_AddIgnoredActor, "AddIgnoredActor" }, // 2013881788
		{ &Z_Construct_UFunction_UATPCCameraFadingObject_AddManualFadeActor, "AddManualFadeActor" }, // 3837880893
		{ &Z_Construct_UFunction_UATPCCameraFadingObject_ClearIgnoredActors, "ClearIgnoredActors" }, // 934192470
		{ &Z_Construct_UFunction_UATPCCameraFadingObject_ClearManualFadeActors, "ClearManualFadeActors" }, // 2955131371
		{ &Z_Construct_UFunction_UATPCCameraFadingObject_RemoveIgnoredActor, "RemoveIgnoredActor" }, // 1274924189
		{ &Z_Construct_UFunction_UATPCCameraFadingObject_RemoveManualFadeActor, "RemoveManualFadeActor" }, // 1742412659
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UATPCCameraFadingObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UATPCCameraFadingObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UATPCCameraBaseObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedThirdPersonCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraFadingObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UATPCCameraFadingObject_Statics::ClassParams = {
	&UATPCCameraFadingObject::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UATPCCameraFadingObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UATPCCameraFadingObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UATPCCameraFadingObject()
{
	if (!Z_Registration_Info_UClass_UATPCCameraFadingObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UATPCCameraFadingObject.OuterSingleton, Z_Construct_UClass_UATPCCameraFadingObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UATPCCameraFadingObject.OuterSingleton;
}
template<> ADVANCEDTHIRDPERSONCAMERA_API UClass* StaticClass<UATPCCameraFadingObject>()
{
	return UATPCCameraFadingObject::StaticClass();
}
UATPCCameraFadingObject::UATPCCameraFadingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UATPCCameraFadingObject);
UATPCCameraFadingObject::~UATPCCameraFadingObject() {}
// End Class UATPCCameraFadingObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UATPCCameraFadingObject, UATPCCameraFadingObject::StaticClass, TEXT("UATPCCameraFadingObject"), &Z_Registration_Info_UClass_UATPCCameraFadingObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UATPCCameraFadingObject), 2377568261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_3640447606(TEXT("/Script/AdvancedThirdPersonCamera"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_AdvancedThirdPersonCamera_Source_AdvancedThirdPersonCamera_Public_ATPCCameraFadingObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
