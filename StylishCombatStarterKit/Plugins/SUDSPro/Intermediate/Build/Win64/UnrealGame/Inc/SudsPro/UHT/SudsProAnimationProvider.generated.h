// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/SudsProAnimationProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
#ifdef SUDSPRO_SudsProAnimationProvider_generated_h
#error "SudsProAnimationProvider.generated.h already included, missing '#pragma once' in SudsProAnimationProvider.h"
#endif
#define SUDSPRO_SudsProAnimationProvider_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UAnimSequenceBase* GetDialogueCharacterAnimation_Implementation(FName CharacterName, FName AnimName) { return NULL; }; \
	DECLARE_FUNCTION(execGetDialogueCharacterAnimation);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USudsProAnimationProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USudsProAnimationProvider(USudsProAnimationProvider&&); \
	USudsProAnimationProvider(const USudsProAnimationProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USudsProAnimationProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USudsProAnimationProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USudsProAnimationProvider) \
	NO_API virtual ~USudsProAnimationProvider();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSudsProAnimationProvider(); \
	friend struct Z_Construct_UClass_USudsProAnimationProvider_Statics; \
public: \
	DECLARE_CLASS(USudsProAnimationProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(USudsProAnimationProvider)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISudsProAnimationProvider() {} \
public: \
	typedef USudsProAnimationProvider UClassType; \
	typedef ISudsProAnimationProvider ThisClass; \
	static UAnimSequenceBase* Execute_GetDialogueCharacterAnimation(UObject* O, FName CharacterName, FName AnimName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_8_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class USudsProAnimationProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
