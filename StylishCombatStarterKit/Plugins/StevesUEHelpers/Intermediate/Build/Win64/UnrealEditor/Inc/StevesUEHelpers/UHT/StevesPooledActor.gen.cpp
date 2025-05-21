// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesPooledActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesPooledActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesPooledActor();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesPooledActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Interface UStevesPooledActor Function DeactivateOnAddedToPool
void IStevesPooledActor::DeactivateOnAddedToPool()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DeactivateOnAddedToPool instead.");
}
static FName NAME_UStevesPooledActor_DeactivateOnAddedToPool = FName(TEXT("DeactivateOnAddedToPool"));
void IStevesPooledActor::Execute_DeactivateOnAddedToPool(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UStevesPooledActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UStevesPooledActor_DeactivateOnAddedToPool);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IStevesPooledActor*)(O->GetNativeInterfaceAddress(UStevesPooledActor::StaticClass())))
	{
		I->DeactivateOnAddedToPool_Implementation();
	}
}
struct Z_Construct_UFunction_UStevesPooledActor_DeactivateOnAddedToPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This function is called when this actor is added to the pool. Implement this if you want to perform actions to disable the\n\x09 * actor other than the default ones (hiding the actor, disabling collision / physics on the root component, moving to a storage location).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesPooledActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is called when this actor is added to the pool. Implement this if you want to perform actions to disable the\nactor other than the default ones (hiding the actor, disabling collision / physics on the root component, moving to a storage location)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesPooledActor_DeactivateOnAddedToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesPooledActor, nullptr, "DeactivateOnAddedToPool", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActor_DeactivateOnAddedToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesPooledActor_DeactivateOnAddedToPool_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStevesPooledActor_DeactivateOnAddedToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesPooledActor_DeactivateOnAddedToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IStevesPooledActor::execDeactivateOnAddedToPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateOnAddedToPool_Implementation();
	P_NATIVE_END;
}
// End Interface UStevesPooledActor Function DeactivateOnAddedToPool

// Begin Interface UStevesPooledActor Function ReactivateOnRemovedFromPool
void IStevesPooledActor::ReactivateOnRemovedFromPool()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReactivateOnRemovedFromPool instead.");
}
static FName NAME_UStevesPooledActor_ReactivateOnRemovedFromPool = FName(TEXT("ReactivateOnRemovedFromPool"));
void IStevesPooledActor::Execute_ReactivateOnRemovedFromPool(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UStevesPooledActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UStevesPooledActor_ReactivateOnRemovedFromPool);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IStevesPooledActor*)(O->GetNativeInterfaceAddress(UStevesPooledActor::StaticClass())))
	{
		I->ReactivateOnRemovedFromPool_Implementation();
	}
}
struct Z_Construct_UFunction_UStevesPooledActor_ReactivateOnRemovedFromPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This function is called when the actor is removed from the pool, to be re-used again. Implement this to re-activate\n\x09 * or reset the actor; the default behaviour is just to unhide the actor (collision / physics are not re-enabled automatically).\n\x09 * You could also do this in the caller to UStevesPooledActorSystem::GetPooledActor, but this interface is here if\n\x09 * you want to do it on the object itself.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StevesPooledActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is called when the actor is removed from the pool, to be re-used again. Implement this to re-activate\nor reset the actor; the default behaviour is just to unhide the actor (collision / physics are not re-enabled automatically).\nYou could also do this in the caller to UStevesPooledActorSystem::GetPooledActor, but this interface is here if\nyou want to do it on the object itself." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStevesPooledActor_ReactivateOnRemovedFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStevesPooledActor, nullptr, "ReactivateOnRemovedFromPool", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStevesPooledActor_ReactivateOnRemovedFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStevesPooledActor_ReactivateOnRemovedFromPool_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStevesPooledActor_ReactivateOnRemovedFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStevesPooledActor_ReactivateOnRemovedFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IStevesPooledActor::execReactivateOnRemovedFromPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReactivateOnRemovedFromPool_Implementation();
	P_NATIVE_END;
}
// End Interface UStevesPooledActor Function ReactivateOnRemovedFromPool

// Begin Interface UStevesPooledActor
void UStevesPooledActor::StaticRegisterNativesUStevesPooledActor()
{
	UClass* Class = UStevesPooledActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeactivateOnAddedToPool", &IStevesPooledActor::execDeactivateOnAddedToPool },
		{ "ReactivateOnRemovedFromPool", &IStevesPooledActor::execReactivateOnRemovedFromPool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesPooledActor);
UClass* Z_Construct_UClass_UStevesPooledActor_NoRegister()
{
	return UStevesPooledActor::StaticClass();
}
struct Z_Construct_UClass_UStevesPooledActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StevesPooledActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStevesPooledActor_DeactivateOnAddedToPool, "DeactivateOnAddedToPool" }, // 1876219450
		{ &Z_Construct_UFunction_UStevesPooledActor_ReactivateOnRemovedFromPool, "ReactivateOnRemovedFromPool" }, // 1654518946
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStevesPooledActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStevesPooledActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPooledActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesPooledActor_Statics::ClassParams = {
	&UStevesPooledActor::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesPooledActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesPooledActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesPooledActor()
{
	if (!Z_Registration_Info_UClass_UStevesPooledActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesPooledActor.OuterSingleton, Z_Construct_UClass_UStevesPooledActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesPooledActor.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesPooledActor>()
{
	return UStevesPooledActor::StaticClass();
}
UStevesPooledActor::UStevesPooledActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesPooledActor);
UStevesPooledActor::~UStevesPooledActor() {}
// End Interface UStevesPooledActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesPooledActor, UStevesPooledActor::StaticClass, TEXT("UStevesPooledActor"), &Z_Registration_Info_UClass_UStevesPooledActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesPooledActor), 2667199750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_558162157(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesPooledActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
