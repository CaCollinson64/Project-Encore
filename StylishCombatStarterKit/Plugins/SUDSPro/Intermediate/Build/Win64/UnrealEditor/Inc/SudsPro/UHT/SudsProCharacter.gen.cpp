// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SudsPro/Public/Extensions/SudsProCharacter.h"
#include "SUDS/Public/SUDSValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsProCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSValue();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCharacter();
SUDSPRO_API UClass* Z_Construct_UClass_USudsProCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_SudsPro();
// End Cross Module References

// Begin Interface USudsProCharacter Function GetDialogueAnimation
struct SudsProCharacter_eventGetDialogueAnimation_Parms
{
	FName AnimName;
	UAnimSequenceBase* ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProCharacter_eventGetDialogueAnimation_Parms()
		: ReturnValue(NULL)
	{
	}
};
UAnimSequenceBase* ISudsProCharacter::GetDialogueAnimation(FName AnimName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueAnimation instead.");
	SudsProCharacter_eventGetDialogueAnimation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProCharacter_GetDialogueAnimation = FName(TEXT("GetDialogueAnimation"));
UAnimSequenceBase* ISudsProCharacter::Execute_GetDialogueAnimation(UObject* O, FName AnimName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProCharacter::StaticClass()));
	SudsProCharacter_eventGetDialogueAnimation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProCharacter_GetDialogueAnimation);
	if (Func)
	{
		Parms.AnimName=AnimName;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProCharacter*)(O->GetNativeInterfaceAddress(USudsProCharacter::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueAnimation_Implementation(AnimName);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return the animation (sequence or montage) corresponding to the incoming name used in dialogue script.\n\x09 * This is used by the [event CharacterAnim `CharacterName`, `AnimName`] script command.\n\x09 * @param AnimName The name of the animation.\n\x09 * @return An animation sequence, or animation montage.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Extensions/SudsProCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the animation (sequence or montage) corresponding to the incoming name used in dialogue script.\nThis is used by the [event CharacterAnim `CharacterName`, `AnimName`] script command.\n@param AnimName The name of the animation.\n@return An animation sequence, or animation montage." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::NewProp_AnimName = { "AnimName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCharacter_eventGetDialogueAnimation_Parms, AnimName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCharacter_eventGetDialogueAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::NewProp_AnimName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProCharacter, nullptr, "GetDialogueAnimation", nullptr, nullptr, Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::PropPointers), sizeof(SudsProCharacter_eventGetDialogueAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProCharacter_eventGetDialogueAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProCharacter::execGetDialogueAnimation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimSequenceBase**)Z_Param__Result=P_THIS->GetDialogueAnimation_Implementation(Z_Param_AnimName);
	P_NATIVE_END;
}
// End Interface USudsProCharacter Function GetDialogueAnimation

// Begin Interface USudsProCharacter Function GetDialogueCharacterIdentifier
struct SudsProCharacter_eventGetDialogueCharacterIdentifier_Parms
{
	FName ReturnValue;
};
FName ISudsProCharacter::GetDialogueCharacterIdentifier()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueCharacterIdentifier instead.");
	SudsProCharacter_eventGetDialogueCharacterIdentifier_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProCharacter_GetDialogueCharacterIdentifier = FName(TEXT("GetDialogueCharacterIdentifier"));
FName ISudsProCharacter::Execute_GetDialogueCharacterIdentifier(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProCharacter::StaticClass()));
	SudsProCharacter_eventGetDialogueCharacterIdentifier_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProCharacter_GetDialogueCharacterIdentifier);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProCharacter*)(O->GetNativeInterfaceAddress(USudsProCharacter::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueCharacterIdentifier_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Return an identifier for this dialogue character, which will be used to locate specific characters.\n\x09 * This is not a player-visible identifier and only needs to match the identifier you use in dialogue scripts.\n\x09 * It doesn't have to be the same as the character's speaker ID in the dialogue script, but it probably makes sense\n\x09 * for that to be the case.\n\x09 * @return Unique identifier for this character in this dialogue.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Extensions/SudsProCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return an identifier for this dialogue character, which will be used to locate specific characters.\nThis is not a player-visible identifier and only needs to match the identifier you use in dialogue scripts.\nIt doesn't have to be the same as the character's speaker ID in the dialogue script, but it probably makes sense\nfor that to be the case.\n@return Unique identifier for this character in this dialogue." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCharacter_eventGetDialogueCharacterIdentifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProCharacter, nullptr, "GetDialogueCharacterIdentifier", nullptr, nullptr, Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::PropPointers), sizeof(SudsProCharacter_eventGetDialogueCharacterIdentifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProCharacter_eventGetDialogueCharacterIdentifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProCharacter::execGetDialogueCharacterIdentifier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetDialogueCharacterIdentifier_Implementation();
	P_NATIVE_END;
}
// End Interface USudsProCharacter Function GetDialogueCharacterIdentifier

// Begin Interface USudsProCharacter Function GetDialogueSkeleton
struct SudsProCharacter_eventGetDialogueSkeleton_Parms
{
	FName AnimName;
	USkeletalMeshComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProCharacter_eventGetDialogueSkeleton_Parms()
		: ReturnValue(NULL)
	{
	}
};
USkeletalMeshComponent* ISudsProCharacter::GetDialogueSkeleton(FName AnimName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueSkeleton instead.");
	SudsProCharacter_eventGetDialogueSkeleton_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProCharacter_GetDialogueSkeleton = FName(TEXT("GetDialogueSkeleton"));
USkeletalMeshComponent* ISudsProCharacter::Execute_GetDialogueSkeleton(UObject* O, FName AnimName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProCharacter::StaticClass()));
	SudsProCharacter_eventGetDialogueSkeleton_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProCharacter_GetDialogueSkeleton);
	if (Func)
	{
		Parms.AnimName=AnimName;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProCharacter*)(O->GetNativeInterfaceAddress(USudsProCharacter::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueSkeleton_Implementation(AnimName);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional function that allows you to specify which skeletal mesh component in the character should\n\x09 * be targetted by a given animation name. If you don't implement this, or return null for a given\n\x09 * character, the first skeletal mesh component found in the character will be used.\n\x09 * You would want to implement this if you needed separate animation for a specific character component,\n\x09 * for example to do facial animation on a Metahuman. I recommend naming your animations with a convention\n\x09 * that indicates this, for example \"Face_Smile\", \"Face_Frown\", then you could simply look for a prefix\n\x09 * in your implementation rather than explicitly determining the skeleton for each animation.\n\x09 * @param AnimName The name of the animation\n\x09 * @return The skeletal mesh component that should be targetted by this animation. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Extensions/SudsProCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional function that allows you to specify which skeletal mesh component in the character should\nbe targetted by a given animation name. If you don't implement this, or return null for a given\ncharacter, the first skeletal mesh component found in the character will be used.\nYou would want to implement this if you needed separate animation for a specific character component,\nfor example to do facial animation on a Metahuman. I recommend naming your animations with a convention\nthat indicates this, for example \"Face_Smile\", \"Face_Frown\", then you could simply look for a prefix\nin your implementation rather than explicitly determining the skeleton for each animation.\n@param AnimName The name of the animation\n@return The skeletal mesh component that should be targetted by this animation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::NewProp_AnimName = { "AnimName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCharacter_eventGetDialogueSkeleton_Parms, AnimName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCharacter_eventGetDialogueSkeleton_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::NewProp_AnimName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProCharacter, nullptr, "GetDialogueSkeleton", nullptr, nullptr, Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::PropPointers), sizeof(SudsProCharacter_eventGetDialogueSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProCharacter_eventGetDialogueSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProCharacter::execGetDialogueSkeleton)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetDialogueSkeleton_Implementation(Z_Param_AnimName);
	P_NATIVE_END;
}
// End Interface USudsProCharacter Function GetDialogueSkeleton

// Begin Interface USudsProCharacter Function OnDialogueNotify
struct SudsProCharacter_eventOnDialogueNotify_Parms
{
	FName NotifyName;
	TArray<FSUDSValue> Args;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProCharacter_eventOnDialogueNotify_Parms()
		: ReturnValue(false)
	{
	}
};
bool ISudsProCharacter::OnDialogueNotify(FName NotifyName, TArray<FSUDSValue> const& Args)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueNotify instead.");
	SudsProCharacter_eventOnDialogueNotify_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProCharacter_OnDialogueNotify = FName(TEXT("OnDialogueNotify"));
bool ISudsProCharacter::Execute_OnDialogueNotify(UObject* O, FName NotifyName, TArray<FSUDSValue> const& Args)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProCharacter::StaticClass()));
	SudsProCharacter_eventOnDialogueNotify_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProCharacter_OnDialogueNotify);
	if (Func)
	{
		Parms.NotifyName=NotifyName;
		Parms.Args=Args;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProCharacter*)(O->GetNativeInterfaceAddress(USudsProCharacter::StaticClass())))
	{
		Parms.ReturnValue = I->OnDialogueNotify_Implementation(NotifyName,Args);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Receive a general notification from dialogue for this character.\n\x09 * This call will be generated by the script command [event CharacterNotify `CharacterName`, `NotificationName`, Args...]\n\x09 * Any number of arguments are supported of the types supported by FSUDSValue.\n\x09 * This is quite similar to dialogue events, except that this notification is ONLY delivered to a specific character,\n\x09 * and you also have the option of returning `true` to prevent the execution of subsequent dialogue lines until\n\x09 * you say so.\n\x09 * @param NotifyName The name of the event \n\x09 * @param Args Arguments accompanying the event\n\x09 * @return Return true if you want the dialogue system to wait until you call USudsProSubsystem::CharacterNotifyCompleted.\n\x09 * It's *essential* that you call this function when you're done, or your dialogue will break.\n\x09 * before continuing with other lines in the dialogue. Return false if you don't mind dialogue continuing immediately\n\x09 * after this call.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Extensions/SudsProCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Receive a general notification from dialogue for this character.\nThis call will be generated by the script command [event CharacterNotify `CharacterName`, `NotificationName`, Args...]\nAny number of arguments are supported of the types supported by FSUDSValue.\nThis is quite similar to dialogue events, except that this notification is ONLY delivered to a specific character,\nand you also have the option of returning `true` to prevent the execution of subsequent dialogue lines until\nyou say so.\n@param NotifyName The name of the event\n@param Args Arguments accompanying the event\n@return Return true if you want the dialogue system to wait until you call USudsProSubsystem::CharacterNotifyCompleted.\nIt's *essential* that you call this function when you're done, or your dialogue will break.\nbefore continuing with other lines in the dialogue. Return false if you don't mind dialogue continuing immediately\nafter this call." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Args_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Args;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCharacter_eventOnDialogueNotify_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUDSValue, METADATA_PARAMS(0, nullptr) }; // 774184046
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCharacter_eventOnDialogueNotify_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Args_MetaData), NewProp_Args_MetaData) }; // 774184046
void Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SudsProCharacter_eventOnDialogueNotify_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProCharacter_eventOnDialogueNotify_Parms), &Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_Args_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_Args,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProCharacter, nullptr, "OnDialogueNotify", nullptr, nullptr, Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::PropPointers), sizeof(SudsProCharacter_eventOnDialogueNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProCharacter_eventOnDialogueNotify_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProCharacter::execOnDialogueNotify)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_TARRAY_REF(FSUDSValue,Z_Param_Out_Args);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnDialogueNotify_Implementation(Z_Param_NotifyName,Z_Param_Out_Args);
	P_NATIVE_END;
}
// End Interface USudsProCharacter Function OnDialogueNotify

// Begin Interface USudsProCharacter Function PostDialogueMoveCharacter
void ISudsProCharacter::PostDialogueMoveCharacter()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PostDialogueMoveCharacter instead.");
}
static FName NAME_USudsProCharacter_PostDialogueMoveCharacter = FName(TEXT("PostDialogueMoveCharacter"));
void ISudsProCharacter::Execute_PostDialogueMoveCharacter(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProCharacter::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_USudsProCharacter_PostDialogueMoveCharacter);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ISudsProCharacter*)(O->GetNativeInterfaceAddress(USudsProCharacter::StaticClass())))
	{
		I->PostDialogueMoveCharacter_Implementation();
	}
}
struct Z_Construct_UFunction_USudsProCharacter_PostDialogueMoveCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called just after this character has been moved in response to a dialogue event.\n\x09 * Note: you will not receive this call if you returned true from PreDialogueMoveCharacter to indicate you're doing the\n\x09 * movement instead.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Extensions/SudsProCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called just after this character has been moved in response to a dialogue event.\nNote: you will not receive this call if you returned true from PreDialogueMoveCharacter to indicate you're doing the\nmovement instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProCharacter_PostDialogueMoveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProCharacter, nullptr, "PostDialogueMoveCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_PostDialogueMoveCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProCharacter_PostDialogueMoveCharacter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USudsProCharacter_PostDialogueMoveCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProCharacter_PostDialogueMoveCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProCharacter::execPostDialogueMoveCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostDialogueMoveCharacter_Implementation();
	P_NATIVE_END;
}
// End Interface USudsProCharacter Function PostDialogueMoveCharacter

// Begin Interface USudsProCharacter Function PreDialogueMoveCharacter
struct SudsProCharacter_eventPreDialogueMoveCharacter_Parms
{
	FVector Location;
	FRotator Rotator;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SudsProCharacter_eventPreDialogueMoveCharacter_Parms()
		: ReturnValue(false)
	{
	}
};
bool ISudsProCharacter::PreDialogueMoveCharacter(FVector const& Location, FRotator const& Rotator)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PreDialogueMoveCharacter instead.");
	SudsProCharacter_eventPreDialogueMoveCharacter_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USudsProCharacter_PreDialogueMoveCharacter = FName(TEXT("PreDialogueMoveCharacter"));
bool ISudsProCharacter::Execute_PreDialogueMoveCharacter(UObject* O, FVector const& Location, FRotator const& Rotator)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USudsProCharacter::StaticClass()));
	SudsProCharacter_eventPreDialogueMoveCharacter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USudsProCharacter_PreDialogueMoveCharacter);
	if (Func)
	{
		Parms.Location=Location;
		Parms.Rotator=Rotator;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISudsProCharacter*)(O->GetNativeInterfaceAddress(USudsProCharacter::StaticClass())))
	{
		Parms.ReturnValue = I->PreDialogueMoveCharacter_Implementation(Location,Rotator);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SudsPro|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called just before this character is about to be moved in response to a dialogue event.\n\x09 * SUDS Pro will usually do the movement for you, but if you want to move the character yourself,\n\x09 * then return true from this call. Return false to let SUDS Pro move the character (teleport).\n\x09 * \n\x09 * @param Location The location the character is to be moved to\n\x09 * @param Rotator The rotation the character is to be moved to\n\x09 * @return Whether you will perform this character movement rather than letting SUDS Pro do it. If you'd prefer to move the character\n\x09 * yourself (e.g. for making a character AI path to the location), or simply just cancel this movement, return\n\x09 * true from this method to indicate you're handling it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Extensions/SudsProCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called just before this character is about to be moved in response to a dialogue event.\nSUDS Pro will usually do the movement for you, but if you want to move the character yourself,\nthen return true from this call. Return false to let SUDS Pro move the character (teleport).\n\n@param Location The location the character is to be moved to\n@param Rotator The rotation the character is to be moved to\n@return Whether you will perform this character movement rather than letting SUDS Pro do it. If you'd prefer to move the character\nyourself (e.g. for making a character AI path to the location), or simply just cancel this movement, return\ntrue from this method to indicate you're handling it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCharacter_eventPreDialogueMoveCharacter_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SudsProCharacter_eventPreDialogueMoveCharacter_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator_MetaData), NewProp_Rotator_MetaData) };
void Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SudsProCharacter_eventPreDialogueMoveCharacter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SudsProCharacter_eventPreDialogueMoveCharacter_Parms), &Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::NewProp_Rotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USudsProCharacter, nullptr, "PreDialogueMoveCharacter", nullptr, nullptr, Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::PropPointers), sizeof(SudsProCharacter_eventPreDialogueMoveCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(SudsProCharacter_eventPreDialogueMoveCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISudsProCharacter::execPreDialogueMoveCharacter)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PreDialogueMoveCharacter_Implementation(Z_Param_Out_Location,Z_Param_Out_Rotator);
	P_NATIVE_END;
}
// End Interface USudsProCharacter Function PreDialogueMoveCharacter

// Begin Interface USudsProCharacter
void USudsProCharacter::StaticRegisterNativesUSudsProCharacter()
{
	UClass* Class = USudsProCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueAnimation", &ISudsProCharacter::execGetDialogueAnimation },
		{ "GetDialogueCharacterIdentifier", &ISudsProCharacter::execGetDialogueCharacterIdentifier },
		{ "GetDialogueSkeleton", &ISudsProCharacter::execGetDialogueSkeleton },
		{ "OnDialogueNotify", &ISudsProCharacter::execOnDialogueNotify },
		{ "PostDialogueMoveCharacter", &ISudsProCharacter::execPostDialogueMoveCharacter },
		{ "PreDialogueMoveCharacter", &ISudsProCharacter::execPreDialogueMoveCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USudsProCharacter);
UClass* Z_Construct_UClass_USudsProCharacter_NoRegister()
{
	return USudsProCharacter::StaticClass();
}
struct Z_Construct_UClass_USudsProCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Extensions/SudsProCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USudsProCharacter_GetDialogueAnimation, "GetDialogueAnimation" }, // 2022338190
		{ &Z_Construct_UFunction_USudsProCharacter_GetDialogueCharacterIdentifier, "GetDialogueCharacterIdentifier" }, // 1203205677
		{ &Z_Construct_UFunction_USudsProCharacter_GetDialogueSkeleton, "GetDialogueSkeleton" }, // 1425192393
		{ &Z_Construct_UFunction_USudsProCharacter_OnDialogueNotify, "OnDialogueNotify" }, // 742871513
		{ &Z_Construct_UFunction_USudsProCharacter_PostDialogueMoveCharacter, "PostDialogueMoveCharacter" }, // 1818483506
		{ &Z_Construct_UFunction_USudsProCharacter_PreDialogueMoveCharacter, "PreDialogueMoveCharacter" }, // 1541295004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISudsProCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USudsProCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SudsPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USudsProCharacter_Statics::ClassParams = {
	&USudsProCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USudsProCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_USudsProCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USudsProCharacter()
{
	if (!Z_Registration_Info_UClass_USudsProCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USudsProCharacter.OuterSingleton, Z_Construct_UClass_USudsProCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USudsProCharacter.OuterSingleton;
}
template<> SUDSPRO_API UClass* StaticClass<USudsProCharacter>()
{
	return USudsProCharacter::StaticClass();
}
USudsProCharacter::USudsProCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USudsProCharacter);
USudsProCharacter::~USudsProCharacter() {}
// End Interface USudsProCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USudsProCharacter, USudsProCharacter::StaticClass, TEXT("USudsProCharacter"), &Z_Registration_Info_UClass_USudsProCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USudsProCharacter), 3644165205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_2469593478(TEXT("/Script/SudsPro"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SudsPro_Public_Extensions_SudsProCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
