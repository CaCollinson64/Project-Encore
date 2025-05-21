// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProMarkProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProMarkProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProMarkProvider();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProMarkProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Interface USudsProMarkProvider Function GetDialogueMark
struct SudsProMarkProvider_eventGetDialogueMark_Parms
{
	FName Name;
	FVector OutLocation;
	FRotator OutRotator;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProMarkProvider_eventGetDialogueMark_Parms()
		: ReturnValue(false)
	{
	}
};
bool ISudsProMarkProvider::GetDialogueMark(FName Name, FVector& OutLocation, FRotator& OutRotator)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueMark instead.");
	SudsProMarkProvider_eventGetDialogueMark_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProMarkProvider_GetDialogueMark = FName(TEXT("GetDialogueMark"));
bool ISudsProMarkProvider::Execute_GetDialogueMark(UObject* O, FName Name, FVector& OutLocation, FRotator& OutRotator)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProMarkProvider::StaticClass()));
	SudsProMarkProvider_eventGetDialogueMark_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProMarkProvider_GetDialogueMark);
	if (Func)
	{
		Parms.Name=Name;
		Parms.OutLocation=OutLocation;
		Parms.OutRotator=OutRotator;
		O->ProcessEvent(Func, &Parms);
		OutLocation=Parms.OutLocation;
		OutRotator=Parms.OutRotator;
	}
	else if (auto I = (ISudsProMarkProvider*)(O->GetNativeInterfaceAddress(USudsProMarkProvider::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueMark_Implementation(Name,OutLocation,OutRotator);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Marks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try to get a named \"Mark\", ie a location and rotation that a character should stand in.\n\x09 * @param Name The name of the shot\n\x09 * @param OutLocation\n\x09 * @param OutRotator\n\x09 * @return Whether the mark was successfully found\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Extensions/SudsProMarkProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to get a named \"Mark\", ie a location and rotation that a character should stand in.\n@param Name The name of the shot\n@param OutLocation\n@param OutRotator\n@return Whether the mark was successfully found" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProMarkProvider_eventGetDialogueMark_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProMarkProvider_eventGetDialogueMark_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_OutRotator = { "OutRotator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProMarkProvider_eventGetDialogueMark_Parms, OutRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SudsProMarkProvider_eventGetDialogueMark_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProMarkProvider_eventGetDialogueMark_Parms), &Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_OutLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_OutRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProMarkProvider, nullptr, "GetDialogueMark", nullptr, nullptr, Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::PropPointers), sizeof(SudsProMarkProvider_eventGetDialogueMark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProMarkProvider_eventGetDialogueMark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProMarkProvider::execGetDialogueMark)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDialogueMark_Implementation(Z_Param_Name,Z_Param_Out_OutLocation,Z_Param_Out_OutRotator);
	P_NATIVE_END;
}
// End Interface USudsProMarkProvider Function GetDialogueMark

// Begin Interface USudsProMarkProvider
void USudsProMarkProvider::StaticRegisterNativesUSudsProMarkProvider()
{
	UClass* Class = USudsProMarkProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueMark", &ISudsProMarkProvider::execGetDialogueMark },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProMarkProvider);
UClass* Z_Construct_UClass_USudsProMarkProvider_NoRegister()
{
	return USudsProMarkProvider::StaticClass();
}
struct Z_Construct_UClass_USudsProMarkProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProMarkProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProMarkProvider_GetDialogueMark, "GetDialogueMark" }, // 1216083563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISudsProMarkProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProMarkProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProMarkProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProMarkProvider_Statics::ClassParams = {
	&USudsProMarkProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProMarkProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProMarkProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProMarkProvider()
{
	if (!Z_Registration_Info_UClass_USudsProMarkProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProMarkProvider.OuterSingleton, Z_Construct_UClass_USudsProMarkProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProMarkProvider.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProMarkProvider>()
{
	return USudsProMarkProvider::StaticClass();
}
USudsProMarkProvider::USudsProMarkProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProMarkProvider);
USudsProMarkProvider::~USudsProMarkProvider() {}
// End Interface USudsProMarkProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProMarkProvider, USudsProMarkProvider::StaticClass, TEXT("USudsProMarkProvider"), &Z_Registration_Info_UClass_USudsProMarkProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProMarkProvider), 1348654880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_3653262139(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProMarkProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
