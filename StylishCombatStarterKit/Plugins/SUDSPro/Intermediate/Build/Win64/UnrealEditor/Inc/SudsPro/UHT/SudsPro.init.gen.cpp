// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSudsPro_init() {}
	SUDSPRO_API UFunction* Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature();
	SUDSPRO_API UFunction* Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature();
	SUDSPRO_API UFunction* Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SudsPro;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SudsPro()
	{
		if (!Z_Registration_Info_UPackage__Script_SudsPro.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SudsPro_OnSudsProDialogueStarting__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SudsPro_OnSudsProSpeakerLineShown__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SudsPro",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8D3AFDC1,
				0xC87B7F0D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SudsPro.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SudsPro.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SudsPro(Z_Construct_UPackage__Script_SudsPro, TEXT("/Script/SudsPro"), Z_Registration_Info_UPackage__Script_SudsPro, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8D3AFDC1, 0xC87B7F0D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
