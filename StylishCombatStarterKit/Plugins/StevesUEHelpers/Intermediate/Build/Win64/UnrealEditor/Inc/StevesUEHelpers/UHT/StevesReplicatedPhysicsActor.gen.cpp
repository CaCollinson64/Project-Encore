// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesReplicatedPhysicsActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesReplicatedPhysicsActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_AStevesReplicatedPhysicsActor();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_AStevesReplicatedPhysicsActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin Class AStevesReplicatedPhysicsActor
void AStevesReplicatedPhysicsActor::StaticRegisterNativesAStevesReplicatedPhysicsActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStevesReplicatedPhysicsActor);
UClass* Z_Construct_UClass_AStevesReplicatedPhysicsActor_NoRegister()
{
	return AStevesReplicatedPhysicsActor::StaticClass();
}
struct Z_Construct_UClass_AStevesReplicatedPhysicsActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// A static mesh actor which is simulated on the server and replicated to clients.\n/// The results will be pretty smooth on the clients due to a very specific set of settings.\n/// You MUST spawn this actor ONLY on the server!\n" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "StevesReplicatedPhysicsActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StevesReplicatedPhysicsActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A static mesh actor which is simulated on the server and replicated to clients.\nThe results will be pretty smooth on the clients due to a very specific set of settings.\nYou MUST spawn this actor ONLY on the server!" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStevesReplicatedPhysicsActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStevesReplicatedPhysicsActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStevesReplicatedPhysicsActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStevesReplicatedPhysicsActor_Statics::ClassParams = {
	&AStevesReplicatedPhysicsActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStevesReplicatedPhysicsActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AStevesReplicatedPhysicsActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStevesReplicatedPhysicsActor()
{
	if (!Z_Registration_Info_UClass_AStevesReplicatedPhysicsActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStevesReplicatedPhysicsActor.OuterSingleton, Z_Construct_UClass_AStevesReplicatedPhysicsActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStevesReplicatedPhysicsActor.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<AStevesReplicatedPhysicsActor>()
{
	return AStevesReplicatedPhysicsActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStevesReplicatedPhysicsActor);
AStevesReplicatedPhysicsActor::~AStevesReplicatedPhysicsActor() {}
// End Class AStevesReplicatedPhysicsActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesReplicatedPhysicsActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStevesReplicatedPhysicsActor, AStevesReplicatedPhysicsActor::StaticClass, TEXT("AStevesReplicatedPhysicsActor"), &Z_Registration_Info_UClass_AStevesReplicatedPhysicsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStevesReplicatedPhysicsActor), 3072101573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesReplicatedPhysicsActor_h_4253481541(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesReplicatedPhysicsActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesReplicatedPhysicsActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
