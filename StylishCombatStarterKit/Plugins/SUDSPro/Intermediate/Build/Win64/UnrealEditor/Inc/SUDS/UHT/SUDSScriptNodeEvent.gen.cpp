// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SUDS/Public/SUDSScriptNodeEvent.h"
#include "SUDS/Public/SUDSExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUDSScriptNodeEvent() {}

// Begin Cross Module References
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNode();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeEvent();
SUDS_API UClass* Z_Construct_UClass_USUDSScriptNodeEvent_NoRegister();
SUDS_API UScriptStruct* Z_Construct_UScriptStruct_FSUDSExpression();
UPackage* Z_Construct_UPackage__Script_SUDS();
// End Cross Module References

// Begin Class USUDSScriptNodeEvent
void USUDSScriptNodeEvent::StaticRegisterNativesUSUDSScriptNodeEvent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USUDSScriptNodeEvent);
UClass* Z_Construct_UClass_USUDSScriptNodeEvent_NoRegister()
{
	return USUDSScriptNodeEvent::StaticClass();
}
struct Z_Construct_UClass_USUDSScriptNodeEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SUDSScriptNodeEvent.h" },
		{ "ModuleRelativePath", "Public/SUDSScriptNodeEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable identifier\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptNodeEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable identifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[] = {
		{ "Category", "SUDS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Literal arguments\n" },
#endif
		{ "ModuleRelativePath", "Public/SUDSScriptNodeEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Literal arguments" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Args_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Args;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USUDSScriptNodeEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USUDSScriptNodeEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNodeEvent, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USUDSScriptNodeEvent_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUDSExpression, METADATA_PARAMS(0, nullptr) }; // 169834246
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USUDSScriptNodeEvent_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USUDSScriptNodeEvent, Args), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Args_MetaData), NewProp_Args_MetaData) }; // 169834246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USUDSScriptNodeEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeEvent_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeEvent_Statics::NewProp_Args_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USUDSScriptNodeEvent_Statics::NewProp_Args,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USUDSScriptNodeEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USUDSScriptNode,
	(UObject* (*)())Z_Construct_UPackage__Script_SUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USUDSScriptNodeEvent_Statics::ClassParams = {
	&USUDSScriptNodeEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USUDSScriptNodeEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeEvent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USUDSScriptNodeEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_USUDSScriptNodeEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USUDSScriptNodeEvent()
{
	if (!Z_Registration_Info_UClass_USUDSScriptNodeEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USUDSScriptNodeEvent.OuterSingleton, Z_Construct_UClass_USUDSScriptNodeEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USUDSScriptNodeEvent.OuterSingleton;
}
template<> SUDS_API UClass* StaticClass<USUDSScriptNodeEvent>()
{
	return USUDSScriptNodeEvent::StaticClass();
}
USUDSScriptNodeEvent::USUDSScriptNodeEvent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USUDSScriptNodeEvent);
USUDSScriptNodeEvent::~USUDSScriptNodeEvent() {}
// End Class USUDSScriptNodeEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USUDSScriptNodeEvent, USUDSScriptNodeEvent::StaticClass, TEXT("USUDSScriptNodeEvent"), &Z_Registration_Info_UClass_USUDSScriptNodeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USUDSScriptNodeEvent), 3267573979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeEvent_h_2851820940(TEXT("/Script/SUDS"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_SUDSPro_Source_SUDS_Public_SUDSScriptNodeEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
