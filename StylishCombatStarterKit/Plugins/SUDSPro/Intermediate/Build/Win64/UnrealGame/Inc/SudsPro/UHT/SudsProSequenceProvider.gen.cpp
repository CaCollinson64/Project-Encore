// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProSequenceProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProSequenceProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProSequenceProvider();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProSequenceProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Interface USudsProSequenceProvider Function GetDialogueLevelSequence
struct SudsProSequenceProvider_eventGetDialogueLevelSequence_Parms
{
	FName Name;
	ULevelSequence* ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProSequenceProvider_eventGetDialogueLevelSequence_Parms()
		: ReturnValue(NULL)
	{
	}
};
ULevelSequence* ISudsProSequenceProvider::GetDialogueLevelSequence(FName Name)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueLevelSequence instead.");
	SudsProSequenceProvider_eventGetDialogueLevelSequence_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProSequenceProvider_GetDialogueLevelSequence = FName(TEXT("GetDialogueLevelSequence"));
ULevelSequence* ISudsProSequenceProvider::Execute_GetDialogueLevelSequence(UObject* O, FName Name)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProSequenceProvider::StaticClass()));
	SudsProSequenceProvider_eventGetDialogueLevelSequence_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProSequenceProvider_GetDialogueLevelSequence);
	if (Func)
	{
		Parms.Name=Name;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProSequenceProvider*)(O->GetNativeInterfaceAddress(USudsProSequenceProvider::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueLevelSequence_Implementation(Name);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Sequences" },
		{ "Comment", "/**\n\x09 * Try to get a named Level Sequence.\n\x09 * @param Name The name of the sequence\n\x09 * @return The level sequence asset, or null if this provider doesn't provide this named sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProSequenceProvider.h" },
		{ "ToolTip", "Try to get a named Level Sequence.\n@param Name The name of the sequence\n@return The level sequence asset, or null if this provider doesn't provide this named sequence." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSequenceProvider_eventGetDialogueLevelSequence_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSequenceProvider_eventGetDialogueLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProSequenceProvider, nullptr, "GetDialogueLevelSequence", nullptr, nullptr, Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::PropPointers), sizeof(SudsProSequenceProvider_eventGetDialogueLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProSequenceProvider_eventGetDialogueLevelSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProSequenceProvider::execGetDialogueLevelSequence)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevelSequence**)Z_Param__Result=P_THIS->GetDialogueLevelSequence_Implementation(Z_Param_Name);
	P_NATIVE_END;
}
// End Interface USudsProSequenceProvider Function GetDialogueLevelSequence

// Begin Interface USudsProSequenceProvider Function GetDialogueLevelSequenceTransformOrigin
struct SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms
{
	FName Name;
	FTransform OutTransform;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms()
		: ReturnValue(false)
	{
	}
};
bool ISudsProSequenceProvider::GetDialogueLevelSequenceTransformOrigin(FName Name, FTransform& OutTransform)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueLevelSequenceTransformOrigin instead.");
	SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin = FName(TEXT("GetDialogueLevelSequenceTransformOrigin"));
bool ISudsProSequenceProvider::Execute_GetDialogueLevelSequenceTransformOrigin(UObject* O, FName Name, FTransform& OutTransform)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProSequenceProvider::StaticClass()));
	SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin);
	if (Func)
	{
		Parms.Name=Name;
		Parms.OutTransform=OutTransform;
		O->ProcessEvent(Func, &Parms);
		OutTransform=Parms.OutTransform;
	}
	else if (auto I = (ISudsProSequenceProvider*)(O->GetNativeInterfaceAddress(USudsProSequenceProvider::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueLevelSequenceTransformOrigin_Implementation(Name,OutTransform);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Sequences" },
		{ "Comment", "/**\n\x09 * Try to get an instance transform for a named Level Sequence. This allows you to offset the origin\n\x09 * location of a sequence in a specific use case to an explicit transform.\n\x09 * @see https://dev.epicgames.com/documentation/en-us/unreal-engine/creating-level-sequences-with-dynamic-transforms-in-unreal-engine\n\x09 * @param Name The name of the sequence\n\x09 * @param OutTransform Return the transform to be applied to the level sequence.\n\x09 * @return True if a transform is provided, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProSequenceProvider.h" },
		{ "ToolTip", "Try to get an instance transform for a named Level Sequence. This allows you to offset the origin\nlocation of a sequence in a specific use case to an explicit transform.\n@see https://dev.epicgames.com/documentation/en-us/unreal-engine/creating-level-sequences-with-dynamic-transforms-in-unreal-engine\n@param Name The name of the sequence\n@param OutTransform Return the transform to be applied to the level sequence.\n@return True if a transform is provided, false otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms), &Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProSequenceProvider, nullptr, "GetDialogueLevelSequenceTransformOrigin", nullptr, nullptr, Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::PropPointers), sizeof(SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProSequenceProvider::execGetDialogueLevelSequenceTransformOrigin)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDialogueLevelSequenceTransformOrigin_Implementation(Z_Param_Name,Z_Param_Out_OutTransform);
	P_NATIVE_END;
}
// End Interface USudsProSequenceProvider Function GetDialogueLevelSequenceTransformOrigin

// Begin Interface USudsProSequenceProvider Function GetDialogueLevelSequenceTransformOriginActor
struct SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOriginActor_Parms
{
	FName Name;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOriginActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* ISudsProSequenceProvider::GetDialogueLevelSequenceTransformOriginActor(FName Name)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueLevelSequenceTransformOriginActor instead.");
	SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOriginActor_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor = FName(TEXT("GetDialogueLevelSequenceTransformOriginActor"));
AActor* ISudsProSequenceProvider::Execute_GetDialogueLevelSequenceTransformOriginActor(UObject* O, FName Name)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProSequenceProvider::StaticClass()));
	SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOriginActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor);
	if (Func)
	{
		Parms.Name=Name;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProSequenceProvider*)(O->GetNativeInterfaceAddress(USudsProSequenceProvider::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueLevelSequenceTransformOriginActor_Implementation(Name);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Sequences" },
		{ "Comment", "/**\n\x09 * Try to get an instance transform actor for a named Level Sequence. This allows you to offset the origin\n\x09 * location of a sequence in a specific use case.\n\x09 * @see https://dev.epicgames.com/documentation/en-us/unreal-engine/creating-level-sequences-with-dynamic-transforms-in-unreal-engine\n\x09 * @param Name The name of the sequence\n\x09 * @return An actor which should be used as the origin for the sequence instance, or null if no transform should be applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Extensions/SudsProSequenceProvider.h" },
		{ "ToolTip", "Try to get an instance transform actor for a named Level Sequence. This allows you to offset the origin\nlocation of a sequence in a specific use case.\n@see https://dev.epicgames.com/documentation/en-us/unreal-engine/creating-level-sequences-with-dynamic-transforms-in-unreal-engine\n@param Name The name of the sequence\n@return An actor which should be used as the origin for the sequence instance, or null if no transform should be applied." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOriginActor_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOriginActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProSequenceProvider, nullptr, "GetDialogueLevelSequenceTransformOriginActor", nullptr, nullptr, Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::PropPointers), sizeof(SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOriginActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProSequenceProvider_eventGetDialogueLevelSequenceTransformOriginActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProSequenceProvider::execGetDialogueLevelSequenceTransformOriginActor)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetDialogueLevelSequenceTransformOriginActor_Implementation(Z_Param_Name);
	P_NATIVE_END;
}
// End Interface USudsProSequenceProvider Function GetDialogueLevelSequenceTransformOriginActor

// Begin Interface USudsProSequenceProvider
void USudsProSequenceProvider::StaticRegisterNativesUSudsProSequenceProvider()
{
	UClass* Class = USudsProSequenceProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueLevelSequence", &ISudsProSequenceProvider::execGetDialogueLevelSequence },
		{ "GetDialogueLevelSequenceTransformOrigin", &ISudsProSequenceProvider::execGetDialogueLevelSequenceTransformOrigin },
		{ "GetDialogueLevelSequenceTransformOriginActor", &ISudsProSequenceProvider::execGetDialogueLevelSequenceTransformOriginActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProSequenceProvider);
UClass* Z_Construct_UClass_USudsProSequenceProvider_NoRegister()
{
	return USudsProSequenceProvider::StaticClass();
}
struct Z_Construct_UClass_USudsProSequenceProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProSequenceProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequence, "GetDialogueLevelSequence" }, // 710002960
		{ &Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOrigin, "GetDialogueLevelSequenceTransformOrigin" }, // 274658673
		{ &Z_Construct_UFunction_USudsProSequenceProvider_GetDialogueLevelSequenceTransformOriginActor, "GetDialogueLevelSequenceTransformOriginActor" }, // 972361718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISudsProSequenceProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProSequenceProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSequenceProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProSequenceProvider_Statics::ClassParams = {
	&USudsProSequenceProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProSequenceProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProSequenceProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProSequenceProvider()
{
	if (!Z_Registration_Info_UClass_USudsProSequenceProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProSequenceProvider.OuterSingleton, Z_Construct_UClass_USudsProSequenceProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProSequenceProvider.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProSequenceProvider>()
{
	return USudsProSequenceProvider::StaticClass();
}
USudsProSequenceProvider::USudsProSequenceProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProSequenceProvider);
USudsProSequenceProvider::~USudsProSequenceProvider() {}
// End Interface USudsProSequenceProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProSequenceProvider, USudsProSequenceProvider::StaticClass, TEXT("USudsProSequenceProvider"), &Z_Registration_Info_UClass_USudsProSequenceProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProSequenceProvider), 3385071201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_3818183640(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SudsPro_Source_SudsPro_Public_Extensions_SudsProSequenceProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
