// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProAnimationProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProAnimationProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProAnimationProvider();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProAnimationProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Interface USudsProAnimationProvider Function GetDialogueCharacterAnimation
struct SudsProAnimationProvider_eventGetDialogueCharacterAnimation_Parms
{
	FName CharacterName;
	FName AnimName;
	UAnimSequenceBase* ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProAnimationProvider_eventGetDialogueCharacterAnimation_Parms()
		: ReturnValue(NULL)
	{
	}
};
UAnimSequenceBase* ISudsProAnimationProvider::GetDialogueCharacterAnimation(FName CharacterName, FName AnimName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueCharacterAnimation instead.");
	SudsProAnimationProvider_eventGetDialogueCharacterAnimation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProAnimationProvider_GetDialogueCharacterAnimation = FName(TEXT("GetDialogueCharacterAnimation"));
UAnimSequenceBase* ISudsProAnimationProvider::Execute_GetDialogueCharacterAnimation(UObject* O, FName CharacterName, FName AnimName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProAnimationProvider::StaticClass()));
	SudsProAnimationProvider_eventGetDialogueCharacterAnimation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProAnimationProvider_GetDialogueCharacterAnimation);
	if (Func)
	{
		Parms.CharacterName=CharacterName;
		Parms.AnimName=AnimName;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProAnimationProvider*)(O->GetNativeInterfaceAddress(USudsProAnimationProvider::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueCharacterAnimation_Implementation(CharacterName,AnimName);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return the animation (sequence or montage) for a named character,\n\x09 * corresponding to the incoming animation name used in dialogue script.\n\x09 * This may be used by the [event CharacterAnim `CharacterName`, `AnimName`] script command,\n\x09 * but only if no animation is returned from the character itself via ISudsProCharacter's GetDialogueAnimation.\n\x09 * This allows you to provide animations more generally from other classes.\n\x09 * @param CharacterName The name of the character\n\x09 * @param AnimName The name of the animation.\n\x09 * @return An animation sequence, or animation montage.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Extensions/SudsProAnimationProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the animation (sequence or montage) for a named character,\ncorresponding to the incoming animation name used in dialogue script.\nThis may be used by the [event CharacterAnim `CharacterName`, `AnimName`] script command,\nbut only if no animation is returned from the character itself via ISudsProCharacter's GetDialogueAnimation.\nThis allows you to provide animations more generally from other classes.\n@param CharacterName The name of the character\n@param AnimName The name of the animation.\n@return An animation sequence, or animation montage." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProAnimationProvider_eventGetDialogueCharacterAnimation_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::NewProp_AnimName = { "AnimName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProAnimationProvider_eventGetDialogueCharacterAnimation_Parms, AnimName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProAnimationProvider_eventGetDialogueCharacterAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::NewProp_AnimName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProAnimationProvider, nullptr, "GetDialogueCharacterAnimation", nullptr, nullptr, Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::PropPointers), sizeof(SudsProAnimationProvider_eventGetDialogueCharacterAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProAnimationProvider_eventGetDialogueCharacterAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProAnimationProvider::execGetDialogueCharacterAnimation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimSequenceBase**)Z_Param__Result=P_THIS->GetDialogueCharacterAnimation_Implementation(Z_Param_CharacterName,Z_Param_AnimName);
	P_NATIVE_END;
}
// End Interface USudsProAnimationProvider Function GetDialogueCharacterAnimation

// Begin Interface USudsProAnimationProvider
void USudsProAnimationProvider::StaticRegisterNativesUSudsProAnimationProvider()
{
	UClass* Class = USudsProAnimationProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueCharacterAnimation", &ISudsProAnimationProvider::execGetDialogueCharacterAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProAnimationProvider);
UClass* Z_Construct_UClass_USudsProAnimationProvider_NoRegister()
{
	return USudsProAnimationProvider::StaticClass();
}
struct Z_Construct_UClass_USudsProAnimationProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProAnimationProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProAnimationProvider_GetDialogueCharacterAnimation, "GetDialogueCharacterAnimation" }, // 460455688
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISudsProAnimationProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProAnimationProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProAnimationProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProAnimationProvider_Statics::ClassParams = {
	&USudsProAnimationProvider::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProAnimationProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProAnimationProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProAnimationProvider()
{
	if (!Z_Registration_Info_UClass_USudsProAnimationProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProAnimationProvider.OuterSingleton, Z_Construct_UClass_USudsProAnimationProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProAnimationProvider.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProAnimationProvider>()
{
	return USudsProAnimationProvider::StaticClass();
}
USudsProAnimationProvider::USudsProAnimationProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProAnimationProvider);
USudsProAnimationProvider::~USudsProAnimationProvider() {}
// End Interface USudsProAnimationProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProAnimationProvider, USudsProAnimationProvider::StaticClass, TEXT("USudsProAnimationProvider"), &Z_Registration_Info_UClass_USudsProAnimationProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProAnimationProvider), 99245850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_3137851906(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProAnimationProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
