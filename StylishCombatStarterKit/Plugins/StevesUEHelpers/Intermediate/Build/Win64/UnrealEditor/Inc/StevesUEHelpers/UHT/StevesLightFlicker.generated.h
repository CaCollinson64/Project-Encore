// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StevesLightFlicker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStevesLightFlickerPattern : uint8;
#ifdef STEVESUEHELPERS_StevesLightFlicker_generated_h
#error "StevesLightFlicker.generated.h already included, missing '#pragma once' in StevesLightFlicker.h"
#endif
#define STEVESUEHELPERS_StevesLightFlicker_generated_h

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEvaluateLightCurve);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStevesLightFlickerHelper(); \
	friend struct Z_Construct_UClass_UStevesLightFlickerHelper_Statics; \
public: \
	DECLARE_CLASS(UStevesLightFlickerHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UStevesLightFlickerHelper)


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStevesLightFlickerHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStevesLightFlickerHelper(UStevesLightFlickerHelper&&); \
	UStevesLightFlickerHelper(const UStevesLightFlickerHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStevesLightFlickerHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStevesLightFlickerHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStevesLightFlickerHelper) \
	NO_API virtual ~UStevesLightFlickerHelper();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_32_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_35_INCLASS_NO_PURE_DECLS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UStevesLightFlickerHelper>();

#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_61_DELEGATE \
STEVESUEHELPERS_API void FOnLightFlickerUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLightFlickerUpdate, float LightValue);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_68_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetCurrentValue); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOnRep_TimePos);


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUStevesLightFlickerComponent(); \
	friend struct Z_Construct_UClass_UStevesLightFlickerComponent_Statics; \
public: \
	DECLARE_CLASS(UStevesLightFlickerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StevesUEHelpers"), NO_API) \
	DECLARE_SERIALIZER(UStevesLightFlickerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TimePos=NETFIELD_REP_START, \
		NETFIELD_REP_END=TimePos	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStevesLightFlickerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStevesLightFlickerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStevesLightFlickerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStevesLightFlickerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStevesLightFlickerComponent(UStevesLightFlickerComponent&&); \
	UStevesLightFlickerComponent(const UStevesLightFlickerComponent&); \
public: \
	NO_API virtual ~UStevesLightFlickerComponent();


#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_65_PROLOG
#define FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_68_RPC_WRAPPERS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_68_INCLASS \
	FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEVESUEHELPERS_API UClass* StaticClass<class UStevesLightFlickerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesLightFlicker_h


#define FOREACH_ENUM_ESTEVESLIGHTFLICKERPATTERN(op) \
	op(EStevesLightFlickerPattern::Flicker1) \
	op(EStevesLightFlickerPattern::Flicker2) \
	op(EStevesLightFlickerPattern::SlowStrongPulse) \
	op(EStevesLightFlickerPattern::Candle1) \
	op(EStevesLightFlickerPattern::Candle2) \
	op(EStevesLightFlickerPattern::Candle3) \
	op(EStevesLightFlickerPattern::FastStrobe) \
	op(EStevesLightFlickerPattern::SlowStrobe) \
	op(EStevesLightFlickerPattern::GentlePulse1) \
	op(EStevesLightFlickerPattern::FlourescentFlicker) \
	op(EStevesLightFlickerPattern::SlowPulseNoBlack) \
	op(EStevesLightFlickerPattern::Custom) 

enum class EStevesLightFlickerPattern : uint8;
template<> struct TIsUEnumClass<EStevesLightFlickerPattern> { enum { Value = true }; };
template<> STEVESUEHELPERS_API UEnum* StaticEnum<EStevesLightFlickerPattern>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
