// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SUDSEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUDSEDITOR_SUDSEditorSettings_generated_h
#error "SUDSEditorSettings.generated.h already included, missing '#pragma once' in SUDSEditorSettings.h"
#endif
#define SUDSEDITOR_SUDSEditorSettings_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSUDSEditorSettings(); \
	friend struct Z_Construct_UClass_USUDSEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USUDSEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SUDSEditor"), NO_API) \
	DECLARE_SERIALIZER(USUDSEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USUDSEditorSettings(USUDSEditorSettings&&); \
	USUDSEditorSettings(const USUDSEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USUDSEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USUDSEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USUDSEditorSettings) \
	NO_API virtual ~USUDSEditorSettings();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_27_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUDSEDITOR_API UClass* StaticClass<class USUDSEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDSEditor_Public_SUDSEditorSettings_h


#define FOREACH_ENUM_ESUDSASSETLOCATION(op) \
	op(ESUDSAssetLocation::SharedDirectory) \
	op(ESUDSAssetLocation::SharedDirectorySubdir) \
	op(ESUDSAssetLocation::ScriptDirectory) \
	op(ESUDSAssetLocation::ScriptDirectorySubdir) 

enum class ESUDSAssetLocation : uint8;
template<> struct TIsUEnumClass<ESUDSAssetLocation> { enum { Value = true }; };
template<> SUDSEDITOR_API UEnum* StaticEnum<ESUDSAssetLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
