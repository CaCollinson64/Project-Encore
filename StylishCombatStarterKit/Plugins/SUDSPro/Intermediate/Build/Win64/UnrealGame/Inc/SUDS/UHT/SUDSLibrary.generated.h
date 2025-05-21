// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USUDSDialogue;
class USUDSScript;
enum class ESUDSValueType : uint8;
enum class ETextGender : uint8;
struct FSUDSValue;
#ifdef SUDS_SUDSLibrary_generated_h
#error "SUDSLibrary.generated.h already included, missing '#pragma once' in SUDSLibrary.h"
#endif
#define SUDS_SUDSLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsDialogueVariableGlobal); \
	DECLARE_FUNCTION(execGetDialogueValueIsEmpty); \
	DECLARE_FUNCTION(execGetDialogueValueType); \
	DECLARE_FUNCTION(execGetDialogueValueAsName); \
	DECLARE_FUNCTION(execGetDialogueValueAsGender); \
	DECLARE_FUNCTION(execGetDialogueValueAsFloat); \
	DECLARE_FUNCTION(execGetDialogueValueAsInt); \
	DECLARE_FUNCTION(execGetDialogueValueAsBoolean); \
	DECLARE_FUNCTION(execGetDialogueValueAsText); \
	DECLARE_FUNCTION(execCreateDialogueWithParticipant); \
	DECLARE_FUNCTION(execCreateDialogueWithParticipants); \
	DECLARE_FUNCTION(execCreateDialogue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSUDSLibrary(); \
	friend struct Z_Construct_UClass_USUDSLibrary_Statics; \
public: \
	DECLARE_CLASS(USUDSLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SUDS"), NO_API) \
	DECLARE_SERIALIZER(USUDSLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USUDSLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USUDSLibrary(USUDSLibrary&&); \
	USUDSLibrary(const USUDSLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USUDSLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USUDSLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USUDSLibrary) \
	NO_API virtual ~USUDSLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSLibrary_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDS_API UClass* StaticClass<class USUDSLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SUDS_Public_SUDSLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
