// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StevesUEHelpers/Public/StevesEditorVisComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStevesEditorVisComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesEditorVisComponent();
STEVESUEHELPERS_API UClass* Z_Construct_UClass_UStevesEditorVisComponent_NoRegister();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisArc();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisBox();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisCapsule();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisCircle();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisCylinder();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisLine();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisMesh();
STEVESUEHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisSphere();
UPackage* Z_Construct_UPackage__Script_StevesUEHelpers();
// End Cross Module References

// Begin ScriptStruct FStevesEditorVisLine
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesEditorVisLine;
class UScriptStruct* FStevesEditorVisLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesEditorVisLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesEditorVisLine, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesEditorVisLine"));
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisLine.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesEditorVisLine>()
{
	return FStevesEditorVisLine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "StevesEditorVisLine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Start location relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start location relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "StevesEditorVisLine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// End location relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End location relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colour_MetaData[] = {
		{ "Category", "StevesEditorVisLine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The colour of the line render \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The colour of the line render" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colour;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesEditorVisLine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisLine, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisLine, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::NewProp_Colour = { "Colour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisLine, Colour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colour_MetaData), NewProp_Colour_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::NewProp_Colour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	&NewStructOps,
	"StevesEditorVisLine",
	Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::PropPointers),
	sizeof(FStevesEditorVisLine),
	alignof(FStevesEditorVisLine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisLine()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisLine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesEditorVisLine.InnerSingleton, Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisLine.InnerSingleton;
}
// End ScriptStruct FStevesEditorVisLine

// Begin ScriptStruct FStevesEditorVisCircle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesEditorVisCircle;
class UScriptStruct* FStevesEditorVisCircle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisCircle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesEditorVisCircle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesEditorVisCircle, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesEditorVisCircle"));
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisCircle.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesEditorVisCircle>()
{
	return FStevesEditorVisCircle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "StevesEditorVisCircle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Location relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "StevesEditorVisCircle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Rotation relative to component; circles will be rendered in the X/Y plane\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation relative to component; circles will be rendered in the X/Y plane" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "StevesEditorVisCircle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Circle radius\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Circle radius" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[] = {
		{ "Category", "StevesEditorVisCircle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The number of line segments to render the circle with\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of line segments to render the circle with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colour_MetaData[] = {
		{ "Category", "StevesEditorVisCircle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The colour of the line render \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The colour of the line render" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colour;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesEditorVisCircle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCircle, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCircle, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCircle, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCircle, NumSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSegments_MetaData), NewProp_NumSegments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_Colour = { "Colour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCircle, Colour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colour_MetaData), NewProp_Colour_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_NumSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewProp_Colour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	&NewStructOps,
	"StevesEditorVisCircle",
	Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::PropPointers),
	sizeof(FStevesEditorVisCircle),
	alignof(FStevesEditorVisCircle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisCircle()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisCircle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesEditorVisCircle.InnerSingleton, Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisCircle.InnerSingleton;
}
// End ScriptStruct FStevesEditorVisCircle

// Begin ScriptStruct FStevesEditorVisArc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesEditorVisArc;
class UScriptStruct* FStevesEditorVisArc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisArc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesEditorVisArc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesEditorVisArc, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesEditorVisArc"));
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisArc.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesEditorVisArc>()
{
	return FStevesEditorVisArc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "StevesEditorVisArc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Location relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "StevesEditorVisArc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Rotation relative to component; arcs will be rendered in the X/Y plane\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation relative to component; arcs will be rendered in the X/Y plane" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[] = {
		{ "Category", "StevesEditorVisArc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Minimum angle to render arc from \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum angle to render arc from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[] = {
		{ "Category", "StevesEditorVisArc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Maximum angle to render arc to \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum angle to render arc to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "StevesEditorVisArc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Circle radius\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Circle radius" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[] = {
		{ "Category", "StevesEditorVisArc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The number of line segments to render the circle with\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of line segments to render the circle with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colour_MetaData[] = {
		{ "Category", "StevesEditorVisArc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The colour of the line render \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The colour of the line render" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colour;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesEditorVisArc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisArc, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisArc, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisArc, MinAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAngle_MetaData), NewProp_MinAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisArc, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngle_MetaData), NewProp_MaxAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisArc, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisArc, NumSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSegments_MetaData), NewProp_NumSegments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_Colour = { "Colour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisArc, Colour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colour_MetaData), NewProp_Colour_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_MinAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_MaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_NumSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewProp_Colour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	&NewStructOps,
	"StevesEditorVisArc",
	Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::PropPointers),
	sizeof(FStevesEditorVisArc),
	alignof(FStevesEditorVisArc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisArc()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisArc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesEditorVisArc.InnerSingleton, Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisArc.InnerSingleton;
}
// End ScriptStruct FStevesEditorVisArc

// Begin ScriptStruct FStevesEditorVisSphere
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesEditorVisSphere;
class UScriptStruct* FStevesEditorVisSphere::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisSphere.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesEditorVisSphere.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesEditorVisSphere, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesEditorVisSphere"));
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisSphere.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesEditorVisSphere>()
{
	return FStevesEditorVisSphere::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "StevesEditorVisSphere" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Location relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "StevesEditorVisSphere" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Sphere radius\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere radius" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colour_MetaData[] = {
		{ "Category", "StevesEditorVisSphere" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The colour of the line render \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The colour of the line render" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colour;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesEditorVisSphere>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisSphere, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisSphere, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::NewProp_Colour = { "Colour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisSphere, Colour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colour_MetaData), NewProp_Colour_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::NewProp_Colour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	&NewStructOps,
	"StevesEditorVisSphere",
	Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::PropPointers),
	sizeof(FStevesEditorVisSphere),
	alignof(FStevesEditorVisSphere),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisSphere()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisSphere.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesEditorVisSphere.InnerSingleton, Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisSphere.InnerSingleton;
}
// End ScriptStruct FStevesEditorVisSphere

// Begin ScriptStruct FStevesEditorVisBox
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesEditorVisBox;
class UScriptStruct* FStevesEditorVisBox::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisBox.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesEditorVisBox.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesEditorVisBox, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesEditorVisBox"));
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisBox.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesEditorVisBox>()
{
	return FStevesEditorVisBox::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "StevesEditorVisBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Location relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "StevesEditorVisBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Size of box in each axis\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of box in each axis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "StevesEditorVisBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Rotation relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colour_MetaData[] = {
		{ "Category", "StevesEditorVisBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The colour of the line render \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The colour of the line render" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colour;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesEditorVisBox>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisBox, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisBox, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisBox, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::NewProp_Colour = { "Colour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisBox, Colour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colour_MetaData), NewProp_Colour_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::NewProp_Colour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	&NewStructOps,
	"StevesEditorVisBox",
	Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::PropPointers),
	sizeof(FStevesEditorVisBox),
	alignof(FStevesEditorVisBox),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisBox()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisBox.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesEditorVisBox.InnerSingleton, Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisBox.InnerSingleton;
}
// End ScriptStruct FStevesEditorVisBox

// Begin ScriptStruct FStevesEditorVisCylinder
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesEditorVisCylinder;
class UScriptStruct* FStevesEditorVisCylinder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisCylinder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesEditorVisCylinder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesEditorVisCylinder, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesEditorVisCylinder"));
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisCylinder.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesEditorVisCylinder>()
{
	return FStevesEditorVisCylinder::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "StevesEditorVisCylinder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Location relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "StevesEditorVisCylinder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Height of cylinder\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height of cylinder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "StevesEditorVisCylinder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Radius of cylinder\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of cylinder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "StevesEditorVisCylinder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Rotation relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colour_MetaData[] = {
		{ "Category", "StevesEditorVisCylinder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The colour of the line render \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The colour of the line render" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colour;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesEditorVisCylinder>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCylinder, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCylinder, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCylinder, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCylinder, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Colour = { "Colour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisCylinder, Colour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colour_MetaData), NewProp_Colour_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewProp_Colour,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	&NewStructOps,
	"StevesEditorVisCylinder",
	Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::PropPointers),
	sizeof(FStevesEditorVisCylinder),
	alignof(FStevesEditorVisCylinder),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisCylinder()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisCylinder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesEditorVisCylinder.InnerSingleton, Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisCylinder.InnerSingleton;
}
// End ScriptStruct FStevesEditorVisCylinder

// Begin ScriptStruct FStevesEditorVisCapsule
static_assert(std::is_polymorphic<FStevesEditorVisCapsule>() == std::is_polymorphic<FStevesEditorVisCylinder>(), "USTRUCT FStevesEditorVisCapsule cannot be polymorphic unless super FStevesEditorVisCylinder is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesEditorVisCapsule;
class UScriptStruct* FStevesEditorVisCapsule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisCapsule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesEditorVisCapsule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesEditorVisCapsule, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesEditorVisCapsule"));
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisCapsule.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesEditorVisCapsule>()
{
	return FStevesEditorVisCapsule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesEditorVisCapsule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesEditorVisCapsule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesEditorVisCapsule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	Z_Construct_UScriptStruct_FStevesEditorVisCylinder,
	&NewStructOps,
	"StevesEditorVisCapsule",
	nullptr,
	0,
	sizeof(FStevesEditorVisCapsule),
	alignof(FStevesEditorVisCapsule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisCapsule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesEditorVisCapsule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisCapsule()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisCapsule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesEditorVisCapsule.InnerSingleton, Z_Construct_UScriptStruct_FStevesEditorVisCapsule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisCapsule.InnerSingleton;
}
// End ScriptStruct FStevesEditorVisCapsule

// Begin ScriptStruct FStevesEditorVisMesh
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StevesEditorVisMesh;
class UScriptStruct* FStevesEditorVisMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StevesEditorVisMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStevesEditorVisMesh, (UObject*)Z_Construct_UPackage__Script_StevesUEHelpers(), TEXT("StevesEditorVisMesh"));
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisMesh.OuterSingleton;
}
template<> STEVESUEHELPERS_API UScriptStruct* StaticStruct<FStevesEditorVisMesh>()
{
	return FStevesEditorVisMesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "StevesEditorVisMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The mesh do display\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh do display" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "StevesEditorVisMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Location relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "StevesEditorVisMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Scale of the mesh compared to component scale\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale of the mesh compared to component scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "StevesEditorVisMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Rotation relative to component\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation relative to component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colour_MetaData[] = {
		{ "Category", "StevesEditorVisMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// The colour of the line render \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The colour of the line render" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLowestLOD_MetaData[] = {
		{ "Category", "StevesEditorVisMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Whether to use the lowest detail LOD for vis \n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use the lowest detail LOD for vis" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colour;
	static void NewProp_bUseLowestLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLowestLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStevesEditorVisMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisMesh, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisMesh, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisMesh, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Colour = { "Colour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStevesEditorVisMesh, Colour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colour_MetaData), NewProp_Colour_MetaData) };
void Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_bUseLowestLOD_SetBit(void* Obj)
{
	((FStevesEditorVisMesh*)Obj)->bUseLowestLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_bUseLowestLOD = { "bUseLowestLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStevesEditorVisMesh), &Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_bUseLowestLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLowestLOD_MetaData), NewProp_bUseLowestLOD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_Colour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewProp_bUseLowestLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
	nullptr,
	&NewStructOps,
	"StevesEditorVisMesh",
	Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::PropPointers),
	sizeof(FStevesEditorVisMesh),
	alignof(FStevesEditorVisMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStevesEditorVisMesh()
{
	if (!Z_Registration_Info_UScriptStruct_StevesEditorVisMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StevesEditorVisMesh.InnerSingleton, Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StevesEditorVisMesh.InnerSingleton;
}
// End ScriptStruct FStevesEditorVisMesh

// Begin Class UStevesEditorVisComponent
void UStevesEditorVisComponent::StaticRegisterNativesUStevesEditorVisComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStevesEditorVisComponent);
UClass* Z_Construct_UClass_UStevesEditorVisComponent_NoRegister()
{
	return UStevesEditorVisComponent::StaticClass();
}
struct Z_Construct_UClass_UStevesEditorVisComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n * A component that solely exists to provide arbitrary editor visualisation when not selected.\n * FComponentVisualizer can only display visualisation when selected. \n * To display vis on an unselected object, you need a UPrimitiveComponent, and sometimes you don't want/need one of those\n * in your actor. Instead, add UStevesEditorVisComponent at construction of your actor, or registration of another component,\n * but only in a WITH_EDITOR block. Then, get nice visualisation of your actor/component without making more invasive changes\n * to your code.\n *\n * If you want to, you can add this to your Blueprints too. This component automatically marks itself as \"visualisation\n * only\" so shouldn't have a runtime impact.\n */" },
#endif
		{ "DisplayName", "Steves Editor Visualisation" },
		{ "HideCategories", "Collision Physics Object LOD Lighting TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "StevesEditorVisComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A component that solely exists to provide arbitrary editor visualisation when not selected.\nFComponentVisualizer can only display visualisation when selected.\nTo display vis on an unselected object, you need a UPrimitiveComponent, and sometimes you don't want/need one of those\nin your actor. Instead, add UStevesEditorVisComponent at construction of your actor, or registration of another component,\nbut only in a WITH_EDITOR block. Then, get nice visualisation of your actor/component without making more invasive changes\nto your code.\n\nIf you want to, you can add this to your Blueprints too. This component automatically marks itself as \"visualisation\nonly\" so shouldn't have a runtime impact." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lines_MetaData[] = {
		{ "Category", "StevesEditorVisComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Circles to render\n" },
#endif
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Circles to render" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arrows_MetaData[] = {
		{ "Category", "StevesEditorVisComponent" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Circles_MetaData[] = {
		{ "Category", "StevesEditorVisComponent" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arcs_MetaData[] = {
		{ "Category", "StevesEditorVisComponent" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[] = {
		{ "Category", "StevesEditorVisComponent" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[] = {
		{ "Category", "StevesEditorVisComponent" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cylinders_MetaData[] = {
		{ "Category", "StevesEditorVisComponent" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capsules_MetaData[] = {
		{ "Category", "StevesEditorVisComponent" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "StevesEditorVisComponent" },
		{ "ModuleRelativePath", "Public/StevesEditorVisComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Lines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Arrows_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arrows;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Circles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Circles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Arcs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Arcs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spheres;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Boxes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cylinders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cylinders;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Capsules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Capsules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStevesEditorVisComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStevesEditorVisLine, METADATA_PARAMS(0, nullptr) }; // 210938140
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesEditorVisComponent, Lines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lines_MetaData), NewProp_Lines_MetaData) }; // 210938140
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Arrows_Inner = { "Arrows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStevesEditorVisLine, METADATA_PARAMS(0, nullptr) }; // 210938140
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Arrows = { "Arrows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesEditorVisComponent, Arrows), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arrows_MetaData), NewProp_Arrows_MetaData) }; // 210938140
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Circles_Inner = { "Circles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStevesEditorVisCircle, METADATA_PARAMS(0, nullptr) }; // 686304219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Circles = { "Circles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesEditorVisComponent, Circles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Circles_MetaData), NewProp_Circles_MetaData) }; // 686304219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Arcs_Inner = { "Arcs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStevesEditorVisArc, METADATA_PARAMS(0, nullptr) }; // 133635127
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Arcs = { "Arcs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesEditorVisComponent, Arcs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arcs_MetaData), NewProp_Arcs_MetaData) }; // 133635127
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStevesEditorVisSphere, METADATA_PARAMS(0, nullptr) }; // 4286296238
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesEditorVisComponent, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spheres_MetaData), NewProp_Spheres_MetaData) }; // 4286296238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStevesEditorVisBox, METADATA_PARAMS(0, nullptr) }; // 4225962186
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesEditorVisComponent, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boxes_MetaData), NewProp_Boxes_MetaData) }; // 4225962186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Cylinders_Inner = { "Cylinders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStevesEditorVisCylinder, METADATA_PARAMS(0, nullptr) }; // 2148947040
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Cylinders = { "Cylinders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesEditorVisComponent, Cylinders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cylinders_MetaData), NewProp_Cylinders_MetaData) }; // 2148947040
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Capsules_Inner = { "Capsules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStevesEditorVisCapsule, METADATA_PARAMS(0, nullptr) }; // 1685388279
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Capsules = { "Capsules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesEditorVisComponent, Capsules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capsules_MetaData), NewProp_Capsules_MetaData) }; // 1685388279
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStevesEditorVisMesh, METADATA_PARAMS(0, nullptr) }; // 2921147651
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStevesEditorVisComponent, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) }; // 2921147651
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStevesEditorVisComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Lines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Lines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Arrows_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Arrows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Circles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Circles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Arcs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Arcs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Spheres_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Spheres,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Boxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Boxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Cylinders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Cylinders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Capsules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Capsules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStevesEditorVisComponent_Statics::NewProp_Meshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesEditorVisComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStevesEditorVisComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_StevesUEHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesEditorVisComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStevesEditorVisComponent_Statics::ClassParams = {
	&UStevesEditorVisComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStevesEditorVisComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStevesEditorVisComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStevesEditorVisComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStevesEditorVisComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStevesEditorVisComponent()
{
	if (!Z_Registration_Info_UClass_UStevesEditorVisComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStevesEditorVisComponent.OuterSingleton, Z_Construct_UClass_UStevesEditorVisComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStevesEditorVisComponent.OuterSingleton;
}
template<> STEVESUEHELPERS_API UClass* StaticClass<UStevesEditorVisComponent>()
{
	return UStevesEditorVisComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStevesEditorVisComponent);
UStevesEditorVisComponent::~UStevesEditorVisComponent() {}
// End Class UStevesEditorVisComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEditorVisComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStevesEditorVisLine::StaticStruct, Z_Construct_UScriptStruct_FStevesEditorVisLine_Statics::NewStructOps, TEXT("StevesEditorVisLine"), &Z_Registration_Info_UScriptStruct_StevesEditorVisLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesEditorVisLine), 210938140U) },
		{ FStevesEditorVisCircle::StaticStruct, Z_Construct_UScriptStruct_FStevesEditorVisCircle_Statics::NewStructOps, TEXT("StevesEditorVisCircle"), &Z_Registration_Info_UScriptStruct_StevesEditorVisCircle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesEditorVisCircle), 686304219U) },
		{ FStevesEditorVisArc::StaticStruct, Z_Construct_UScriptStruct_FStevesEditorVisArc_Statics::NewStructOps, TEXT("StevesEditorVisArc"), &Z_Registration_Info_UScriptStruct_StevesEditorVisArc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesEditorVisArc), 133635127U) },
		{ FStevesEditorVisSphere::StaticStruct, Z_Construct_UScriptStruct_FStevesEditorVisSphere_Statics::NewStructOps, TEXT("StevesEditorVisSphere"), &Z_Registration_Info_UScriptStruct_StevesEditorVisSphere, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesEditorVisSphere), 4286296238U) },
		{ FStevesEditorVisBox::StaticStruct, Z_Construct_UScriptStruct_FStevesEditorVisBox_Statics::NewStructOps, TEXT("StevesEditorVisBox"), &Z_Registration_Info_UScriptStruct_StevesEditorVisBox, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesEditorVisBox), 4225962186U) },
		{ FStevesEditorVisCylinder::StaticStruct, Z_Construct_UScriptStruct_FStevesEditorVisCylinder_Statics::NewStructOps, TEXT("StevesEditorVisCylinder"), &Z_Registration_Info_UScriptStruct_StevesEditorVisCylinder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesEditorVisCylinder), 2148947040U) },
		{ FStevesEditorVisCapsule::StaticStruct, Z_Construct_UScriptStruct_FStevesEditorVisCapsule_Statics::NewStructOps, TEXT("StevesEditorVisCapsule"), &Z_Registration_Info_UScriptStruct_StevesEditorVisCapsule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesEditorVisCapsule), 1685388279U) },
		{ FStevesEditorVisMesh::StaticStruct, Z_Construct_UScriptStruct_FStevesEditorVisMesh_Statics::NewStructOps, TEXT("StevesEditorVisMesh"), &Z_Registration_Info_UScriptStruct_StevesEditorVisMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStevesEditorVisMesh), 2921147651U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStevesEditorVisComponent, UStevesEditorVisComponent::StaticClass, TEXT("UStevesEditorVisComponent"), &Z_Registration_Info_UClass_UStevesEditorVisComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStevesEditorVisComponent), 1256227172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEditorVisComponent_h_2134428375(TEXT("/Script/StevesUEHelpers"),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEditorVisComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEditorVisComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEditorVisComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Project_Encore_StylishCombatStarterKit_Plugins_StevesUEHelpers_Source_StevesUEHelpers_Public_StevesEditorVisComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
