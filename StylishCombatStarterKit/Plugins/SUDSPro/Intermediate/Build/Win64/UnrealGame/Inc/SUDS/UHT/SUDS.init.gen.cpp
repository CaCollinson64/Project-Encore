// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDS_init() {}
	SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature();
	SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature();
	SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature();
	SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature();
	SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature();
	SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature();
	SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature();
	SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature();
	SUDS_API UFunction* Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SUDS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SUDS()
	{
		if (!Z_Registration_Info_UPackage__Script_SUDS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SUDS_OnDialogueChoice__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SUDS_OnDialogueEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SUDS_OnDialogueFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SUDS_OnDialogueProceeding__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SUDS_OnDialogueSpeakerLine__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SUDS_OnDialogueStarting__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SUDS_OnGlobalVariableChangedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SUDS_OnVariableChangedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SUDS_OnVariableRequestedEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SUDS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC4AE6AA6,
				0x27EC4FB5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SUDS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SUDS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SUDS(Z_Construct_UPackage__Script_SUDS, TEXT("/Script/SUDS"), Z_Registration_Info_UPackage__Script_SUDS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC4AE6AA6, 0x27EC4FB5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
