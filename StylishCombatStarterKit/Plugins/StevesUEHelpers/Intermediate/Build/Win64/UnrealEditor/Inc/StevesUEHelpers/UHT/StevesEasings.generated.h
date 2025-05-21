// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesEasings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStevesEaseFunction : uint8;
#ifdef STEVESUEHELPERS_StevesEasings_generated_h
#error "StevesEasings.generated.h already included, missing '#pragma once' in StevesEasings.h"
#endif
#define STEVESUEHELPERS_StevesEasings_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEaseTransform); \
	DECLARE_FUNCTION(execEaseQuat); \
	DECLARE_FUNCTION(execEaseRotator); \
	DECLARE_FUNCTION(execEaseVector); \
	DECLARE_FUNCTION(execEaseFloat); \
	DECLARE_FUNCTION(execEaseAlpha);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStevesEasings(); \
	friend struct Z_Construct_UClass_UStevesEasings_Statics; \
public: \
	DECLARE_CLASS(UStevesEasings, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UStevesEasings)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStevesEasings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStevesEasings(UStevesEasings&&); \
	UStevesEasings(const UStevesEasings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStevesEasings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStevesEasings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStevesEasings) \
	NO_API virtual ~UStevesEasings();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_45_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_48_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UStevesEasings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEasings_h


#define FOREACH_ENUM_ESTEVESEASEFUNCTION(op) \
	op(EStevesEaseFunction::Linear) \
	op(EStevesEaseFunction::EaseIn_Sine) \
	op(EStevesEaseFunction::EaseOut_Sine) \
	op(EStevesEaseFunction::EaseInOut_Sine) \
	op(EStevesEaseFunction::EaseIn_Quad) \
	op(EStevesEaseFunction::EaseOut_Quad) \
	op(EStevesEaseFunction::EaseInOut_Quad) \
	op(EStevesEaseFunction::EaseIn_Cubic) \
	op(EStevesEaseFunction::EaseOut_Cubic) \
	op(EStevesEaseFunction::EaseInOut_Cubic) \
	op(EStevesEaseFunction::EaseIn_Quart) \
	op(EStevesEaseFunction::EaseOut_Quart) \
	op(EStevesEaseFunction::EaseInOut_Quart) \
	op(EStevesEaseFunction::EaseIn_Quint) \
	op(EStevesEaseFunction::EaseOut_Quint) \
	op(EStevesEaseFunction::EaseInOut_Quint) \
	op(EStevesEaseFunction::EaseIn_Expo) \
	op(EStevesEaseFunction::EaseOut_Expo) \
	op(EStevesEaseFunction::EaseInOut_Expo) \
	op(EStevesEaseFunction::EaseIn_Circ) \
	op(EStevesEaseFunction::EaseOut_Circ) \
	op(EStevesEaseFunction::EaseInOut_Circ) \
	op(EStevesEaseFunction::EaseIn_Back) \
	op(EStevesEaseFunction::EaseOut_Back) \
	op(EStevesEaseFunction::EaseInOut_Back) \
	op(EStevesEaseFunction::EaseIn_Elastic) \
	op(EStevesEaseFunction::EaseOut_Elastic) \
	op(EStevesEaseFunction::EaseInOut_Elastic) \
	op(EStevesEaseFunction::EaseIn_Bounce) \
	op(EStevesEaseFunction::EaseOut_Bounce) \
	op(EStevesEaseFunction::EaseInOut_Bounce) 

enum class EStevesEaseFunction : uint8;
template<> struct TIsUEnumClass<EStevesEaseFunction> { enum { Value = true }; };
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EStevesEaseFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
