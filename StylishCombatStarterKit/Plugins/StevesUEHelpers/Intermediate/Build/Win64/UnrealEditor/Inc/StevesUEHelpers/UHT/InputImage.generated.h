// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesUI/InputImage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
enum class EInputBindingType : uint8;
enum class EInputMode : uint8;
struct FKey;
#ifdef STEVESUEHELPERS_InputImage_generated_h
#error "InputImage.generated.h already included, missing '#pragma once' in InputImage.h"
#endif
#define STEVESUEHELPERS_InputImage_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEnhancedInputMappingsChanged); \
	DECLARE_FUNCTION(execOnInputModeChanged); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execGetActionOrAxisName); \
	DECLARE_FUNCTION(execGetBindingType); \
	DECLARE_FUNCTION(execSetFromInputAction); \
	DECLARE_FUNCTION(execSetFromKey); \
	DECLARE_FUNCTION(execSetFromAxis); \
	DECLARE_FUNCTION(execSetFromAction);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputImage(); \
	friend struct Z_Construct_UClass_UInputImage_Statics; \
public: \
	DECLARE_CLASS(UInputImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UInputImage)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputImage(UInputImage&&); \
	UInputImage(const UInputImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputImage) \
	NO_API virtual ~UInputImage();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_14_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_17_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UInputImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesUI_InputImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
