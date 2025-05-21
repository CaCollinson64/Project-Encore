// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/SudsProMarkProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUDSPRO_SudsProMarkProvider_generated_h
#error "SudsProMarkProvider.generated.h already included, missing '#pragma once' in SudsProMarkProvider.h"
#endif
#define SUDSPRO_SudsProMarkProvider_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetDialogueMark_Implementation(FName Name, FVector& OutLocation, FRotator& OutRotator) { return false; }; \
	DECLARE_FUNCTION(execGetDialogueMark);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USudsProMarkProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USudsProMarkProvider(USudsProMarkProvider&&); \
	USudsProMarkProvider(const USudsProMarkProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USudsProMarkProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USudsProMarkProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USudsProMarkProvider) \
	NO_API virtual ~USudsProMarkProvider();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSudsProMarkProvider(); \
	friend struct Z_Construct_UClass_USudsProMarkProvider_Statics; \
public: \
	DECLARE_CLASS(USudsProMarkProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(USudsProMarkProvider)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISudsProMarkProvider() {} \
public: \
	typedef USudsProMarkProvider UClassType; \
	typedef ISudsProMarkProvider ThisClass; \
	static bool Execute_GetDialogueMark(UObject* O, FName Name, FVector& OutLocation, FRotator& OutRotator); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class USudsProMarkProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
