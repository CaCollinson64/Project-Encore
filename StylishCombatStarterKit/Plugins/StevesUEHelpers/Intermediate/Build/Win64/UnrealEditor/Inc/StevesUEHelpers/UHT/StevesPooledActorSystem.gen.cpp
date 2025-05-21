// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesPooledActorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesPooledActorSystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesPooledActorSystem();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesPooledActorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class UStevesPooledActorSystem Function AddActorToPool
struct Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics
{
	struct StevesPooledActorSystem_eventAddActorToPool_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add an actor to the pool. Will make the actor invisible, teleport it to the storage location, and disable all\n\x09 * physics. You must NOT destroy this actor!\n\x09 * @param Actor \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesPooledActorSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add an actor to the pool. Will make the actor invisible, teleport it to the storage location, and disable all\nphysics. You must NOT destroy this actor!\n@param Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventAddActorToPool_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesPooledActorSystem, nullptr, "AddActorToPool", nullptr, nullptr, Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::StevesPooledActorSystem_eventAddActorToPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::StevesPooledActorSystem_eventAddActorToPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesPooledActorSystem::execAddActorToPool)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActorToPool(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UStevesPooledActorSystem Function AddActorToPool

// Begin Class UStevesPooledActorSystem Function DrainActorPool
struct Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics
{
	struct StevesPooledActorSystem_eventDrainActorPool_Parms
	{
		TSubclassOf<AActor> ActorClass;
		int32 NumberToKeep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Drain the actor pool for a single class of actor, destroying any surplus actors.\n\x09 * @param ActorClass The actor class to drain the pool for\n\x09 * @param NumberToKeep The number of actors to keep, if any\n\x09 */" },
#endif
		{ "CPP_Default_NumberToKeep", "0" },
		{ "ModuleRelativePath", "Public/StevesPooledActorSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drain the actor pool for a single class of actor, destroying any surplus actors.\n@param ActorClass The actor class to drain the pool for\n@param NumberToKeep The number of actors to keep, if any" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberToKeep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventDrainActorPool_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::NewProp_NumberToKeep = { "NumberToKeep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventDrainActorPool_Parms, NumberToKeep), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::NewProp_NumberToKeep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesPooledActorSystem, nullptr, "DrainActorPool", nullptr, nullptr, Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::StevesPooledActorSystem_eventDrainActorPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::StevesPooledActorSystem_eventDrainActorPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesPooledActorSystem::execDrainActorPool)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberToKeep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrainActorPool(Z_Param_ActorClass,Z_Param_NumberToKeep);
	P_NATIVE_END;
}
// End Class UStevesPooledActorSystem Function DrainActorPool

// Begin Class UStevesPooledActorSystem Function DrainAllActorPools
struct Z_Construct_UFunction_UStevesPooledActorSystem_DrainAllActorPools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Drain all actor pools, destroying all pooled actors.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesPooledActorSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drain all actor pools, destroying all pooled actors." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesPooledActorSystem_DrainAllActorPools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesPooledActorSystem, nullptr, "DrainAllActorPools", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_DrainAllActorPools_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesPooledActorSystem_DrainAllActorPools_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStevesPooledActorSystem_DrainAllActorPools()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesPooledActorSystem_DrainAllActorPools_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesPooledActorSystem::execDrainAllActorPools)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrainAllActorPools();
	P_NATIVE_END;
}
// End Class UStevesPooledActorSystem Function DrainAllActorPools

// Begin Class UStevesPooledActorSystem Function Get
struct Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics
{
	struct StevesPooledActorSystem_eventGet_Parms
	{
		const UObject* WorldContext;
		UStevesPooledActorSystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/StevesPooledActorSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventGet_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_UStevesPooledActorSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesPooledActorSystem, nullptr, "Get", nullptr, nullptr, Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::StevesPooledActorSystem_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::StevesPooledActorSystem_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesPooledActorSystem_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesPooledActorSystem_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesPooledActorSystem::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStevesPooledActorSystem**)Z_Param__Result=UStevesPooledActorSystem::Get(Z_Param_WorldContext);
	P_NATIVE_END;
}
// End Class UStevesPooledActorSystem Function Get

// Begin Class UStevesPooledActorSystem Function GetPooledActor
struct Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics
{
	struct StevesPooledActorSystem_eventGetPooledActor_Parms
	{
		TSubclassOf<AActor> ActorClass;
		FVector Location;
		FRotator Rotation;
		bool bWasReUsed;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Re-use or spawn an actor of a given class. Note that if the actor is re-used, you will need to re-enable physics\n\x09 * yourself since we do not store that state or assume it will be the same. It will be teleported to the correct location and set visible.\n\x09 * @param ActorClass The class of the actor\n\x09 * @param Location Location in the world\n\x09 * @param Rotation Rotation in the world\n\x09 * @param bWasReUsed This is set to true if the actor was re-used from the pool, and therefore will need to have its\n\x09 *\x09physics reset by the caller (if not done by an IStevesPooledActor implementation)\n\x09 * @return Spawned or re-used actor. Remember to check physics settings, both will be disabled if re-used.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesPooledActorSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Re-use or spawn an actor of a given class. Note that if the actor is re-used, you will need to re-enable physics\nyourself since we do not store that state or assume it will be the same. It will be teleported to the correct location and set visible.\n@param ActorClass The class of the actor\n@param Location Location in the world\n@param Rotation Rotation in the world\n@param bWasReUsed This is set to true if the actor was re-used from the pool, and therefore will need to have its\n     physics reset by the caller (if not done by an IStevesPooledActor implementation)\n@return Spawned or re-used actor. Remember to check physics settings, both will be disabled if re-used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bWasReUsed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasReUsed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventGetPooledActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventGetPooledActor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventGetPooledActor_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_bWasReUsed_SetBit(void* Obj)
{
	((StevesPooledActorSystem_eventGetPooledActor_Parms*)Obj)->bWasReUsed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_bWasReUsed = { "bWasReUsed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StevesPooledActorSystem_eventGetPooledActor_Parms), &Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_bWasReUsed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventGetPooledActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_bWasReUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesPooledActorSystem, nullptr, "GetPooledActor", nullptr, nullptr, Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::StevesPooledActorSystem_eventGetPooledActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::StevesPooledActorSystem_eventGetPooledActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesPooledActorSystem::execGetPooledActor)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
	P_GET_UBOOL_REF(Z_Param_Out_bWasReUsed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetPooledActor(Z_Param_ActorClass,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_bWasReUsed);
	P_NATIVE_END;
}
// End Class UStevesPooledActorSystem Function GetPooledActor

// Begin Class UStevesPooledActorSystem Function PreWarmActorPool
struct Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics
{
	struct StevesPooledActorSystem_eventPreWarmActorPool_Parms
	{
		TSubclassOf<AActor> ActorClass;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pre-warm the actor pool by creating a number of instances and making them invisible\n\x09 * @param ActorClass The class of actors to pre-warm the pool with\n\x09 * @param Count The number of actors to pre-create\n\x09 */" },
#endif
		{ "CPP_Default_Count", "20" },
		{ "ModuleRelativePath", "Public/StevesPooledActorSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pre-warm the actor pool by creating a number of instances and making them invisible\n@param ActorClass The class of actors to pre-warm the pool with\n@param Count The number of actors to pre-create" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventPreWarmActorPool_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventPreWarmActorPool_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesPooledActorSystem, nullptr, "PreWarmActorPool", nullptr, nullptr, Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::StevesPooledActorSystem_eventPreWarmActorPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::StevesPooledActorSystem_eventPreWarmActorPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesPooledActorSystem::execPreWarmActorPool)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreWarmActorPool(Z_Param_ActorClass,Z_Param_Count);
	P_NATIVE_END;
}
// End Class UStevesPooledActorSystem Function PreWarmActorPool

// Begin Class UStevesPooledActorSystem Function ReleasePooledActor
struct Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics
{
	struct StevesPooledActorSystem_eventReleasePooledActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Release an actor back to the pool, instead of destroying it. Will make the actor invisible, teleport it to a\n\x09 * far away location, and disable physics. You must NOT destroy this actor!\n\x09 * @param Actor \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesPooledActorSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release an actor back to the pool, instead of destroying it. Will make the actor invisible, teleport it to a\nfar away location, and disable physics. You must NOT destroy this actor!\n@param Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StevesPooledActorSystem_eventReleasePooledActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesPooledActorSystem, nullptr, "ReleasePooledActor", nullptr, nullptr, Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::StevesPooledActorSystem_eventReleasePooledActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::StevesPooledActorSystem_eventReleasePooledActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStevesPooledActorSystem::execReleasePooledActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleasePooledActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UStevesPooledActorSystem Function ReleasePooledActor

// Begin Class UStevesPooledActorSystem
void UStevesPooledActorSystem::StaticRegisterNativesUStevesPooledActorSystem()
{
	UClass* Class = UStevesPooledActorSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActorToPool", &UStevesPooledActorSystem::execAddActorToPool },
		{ "DrainActorPool", &UStevesPooledActorSystem::execDrainActorPool },
		{ "DrainAllActorPools", &UStevesPooledActorSystem::execDrainAllActorPools },
		{ "Get", &UStevesPooledActorSystem::execGet },
		{ "GetPooledActor", &UStevesPooledActorSystem::execGetPooledActor },
		{ "PreWarmActorPool", &UStevesPooledActorSystem::execPreWarmActorPool },
		{ "ReleasePooledActor", &UStevesPooledActorSystem::execReleasePooledActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesPooledActorSystem);
UClass* Z_Construct_UClass_UStevesPooledActorSystem_NoRegister()
{
	return UStevesPooledActorSystem::StaticClass();
}
struct Z_Construct_UClass_UStevesPooledActorSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * General actor pooling system\n */" },
#endif
		{ "IncludePath", "StevesPooledActorSystem.h" },
		{ "ModuleRelativePath", "Public/StevesPooledActorSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General actor pooling system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StorageLocation_MetaData[] = {
		{ "Category", "StevesPooledActorSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The location that actors in the pool are stored at\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesPooledActorSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The location that actors in the pool are stored at" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StorageLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStevesPooledActorSystem_AddActorToPool, "AddActorToPool" }, // 2723207841
		{ &Z_Construct_UFunction_UStevesPooledActorSystem_DrainActorPool, "DrainActorPool" }, // 1779788238
		{ &Z_Construct_UFunction_UStevesPooledActorSystem_DrainAllActorPools, "DrainAllActorPools" }, // 459284473
		{ &Z_Construct_UFunction_UStevesPooledActorSystem_Get, "Get" }, // 2230847900
		{ &Z_Construct_UFunction_UStevesPooledActorSystem_GetPooledActor, "GetPooledActor" }, // 1523116429
		{ &Z_Construct_UFunction_UStevesPooledActorSystem_PreWarmActorPool, "PreWarmActorPool" }, // 4056188694
		{ &Z_Construct_UFunction_UStevesPooledActorSystem_ReleasePooledActor, "ReleasePooledActor" }, // 3997316976
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesPooledActorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesPooledActorSystem_Statics::NewProp_StorageLocation = { "StorageLocation", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesPooledActorSystem, StorageLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StorageLocation_MetaData), NewProp_StorageLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStevesPooledActorSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesPooledActorSystem_Statics::NewProp_StorageLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPooledActorSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStevesPooledActorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPooledActorSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesPooledActorSystem_Statics::ClassParams = {
	&UStevesPooledActorSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStevesPooledActorSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPooledActorSystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPooledActorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesPooledActorSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesPooledActorSystem()
{
	if (!Z_Registration_Info_UClass_UStevesPooledActorSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesPooledActorSystem.OuterSingleton, Z_Construct_UClass_UStevesPooledActorSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesPooledActorSystem.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesPooledActorSystem>()
{
	return UStevesPooledActorSystem::StaticClass();
}
UStevesPooledActorSystem::UStevesPooledActorSystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesPooledActorSystem);
UStevesPooledActorSystem::~UStevesPooledActorSystem() {}
// End Class UStevesPooledActorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesPooledActorSystem, UStevesPooledActorSystem::StaticClass, TEXT("UStevesPooledActorSystem"), &Z_Registration_Info_UClass_UStevesPooledActorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesPooledActorSystem), 3152377118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_2289791290(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
