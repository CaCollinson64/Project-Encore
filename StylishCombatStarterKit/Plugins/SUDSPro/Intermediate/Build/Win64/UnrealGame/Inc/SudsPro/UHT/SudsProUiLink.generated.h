// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SudsProUiLink.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USUDSDialogue;
#ifdef SUDSPRO_SudsProUiLink_generated_h
#error "SudsProUiLink.generated.h already included, missing '#pragma once' in SudsProUiLink.h"
#endif
#define SUDSPRO_SudsProUiLink_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShowSpeakerLine_Implementation(USUDSDialogue* Dialogue); \
	virtual void DialogueFinished_Implementation(USUDSDialogue* Dialogue, bool bShouldRestoreInput); \
	virtual void DialogueStarting_Implementation(USUDSDialogue* Dialogue, bool bShouldTakeOverInput); \
	DECLARE_FUNCTION(execShowSpeakerLine); \
	DECLARE_FUNCTION(execDialogueFinished); \
	DECLARE_FUNCTION(execDialogueStarting);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_19_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSudsProUiLink(); \
	friend struct Z_Construct_UClass_USudsProUiLink_Statics; \
public: \
	DECLARE_CLASS(USudsProUiLink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SudsPro"), NO_API) \
	DECLARE_SERIALIZER(USudsProUiLink)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USudsProUiLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USudsProUiLink(USudsProUiLink&&); \
	USudsProUiLink(const USudsProUiLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USudsProUiLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USudsProUiLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USudsProUiLink) \
	NO_API virtual ~USudsProUiLink();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_19_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSPRO_API UClass* StaticClass<class USudsProUiLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_SudsProUiLink_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
