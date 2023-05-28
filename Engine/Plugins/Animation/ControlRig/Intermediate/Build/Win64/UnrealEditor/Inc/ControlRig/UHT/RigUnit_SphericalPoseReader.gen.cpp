// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SphericalPoseReader() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRegionScaleFactors();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalRegion();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegionScaleFactors;
class UScriptStruct* FRegionScaleFactors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegionScaleFactors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegionScaleFactors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegionScaleFactors, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RegionScaleFactors"));
	}
	return Z_Registration_Info_UScriptStruct_RegionScaleFactors.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRegionScaleFactors>()
{
	return FRegionScaleFactors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRegionScaleFactors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositiveWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositiveWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NegativeWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositiveHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositiveHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NegativeHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegionScaleFactors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveWidth_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale the region in the POSITIVE width direction. Range is 0-1. Default is 1.0.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Scale the region in the POSITIVE width direction. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveWidth = { "PositiveWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegionScaleFactors, PositiveWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeWidth_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale the region in the NEGATIVE width direction. Range is 0-1. Default is 1.0.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Scale the region in the NEGATIVE width direction. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeWidth = { "NegativeWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegionScaleFactors, NegativeWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveHeight_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale the region in the POSITIVE height direction. Range is 0-1. Default is 1.0.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Scale the region in the POSITIVE height direction. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveHeight = { "PositiveHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegionScaleFactors, PositiveHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeHeight_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale the region in the NEGATIVE height direction. Range is 0-1. Default is 1.0.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Scale the region in the NEGATIVE height direction. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeHeight = { "NegativeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegionScaleFactors, NegativeHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeHeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RegionScaleFactors",
		sizeof(FRegionScaleFactors),
		alignof(FRegionScaleFactors),
		Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegionScaleFactors()
	{
		if (!Z_Registration_Info_UScriptStruct_RegionScaleFactors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegionScaleFactors.InnerSingleton, Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RegionScaleFactors.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalRegion;
class UScriptStruct* FSphericalRegion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalRegion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalRegion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalRegion, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("SphericalRegion"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalRegion.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FSphericalRegion>()
{
	return FSphericalRegion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSphericalRegion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalRegion_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalRegion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalRegion>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalRegion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"SphericalRegion",
		sizeof(FSphericalRegion),
		alignof(FSphericalRegion),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalRegion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalRegion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalRegion()
	{
		if (!Z_Registration_Info_UScriptStruct_SphericalRegion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalRegion.InnerSingleton, Z_Construct_UScriptStruct_FSphericalRegion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SphericalRegion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings;
class UScriptStruct* FSphericalPoseReaderDebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("SphericalPoseReaderDebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FSphericalPoseReaderDebugSettings>()
{
	return FSphericalPoseReaderDebugSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDraw2D_MetaData[];
#endif
		static void NewProp_bDraw2D_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDraw2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLocalAxes_MetaData[];
#endif
		static void NewProp_bDrawLocalAxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLocalAxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSegments_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DebugSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalPoseReaderDebugSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FSphericalPoseReaderDebugSettings*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSphericalPoseReaderDebugSettings), &Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D_SetBit(void* Obj)
	{
		((FSphericalPoseReaderDebugSettings*)Obj)->bDraw2D = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D = { "bDraw2D", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSphericalPoseReaderDebugSettings), &Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes_SetBit(void* Obj)
	{
		((FSphericalPoseReaderDebugSettings*)Obj)->bDrawLocalAxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes = { "bDrawLocalAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSphericalPoseReaderDebugSettings), &Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugScale_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugScale = { "DebugScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPoseReaderDebugSettings, DebugScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugSegments_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugSegments = { "DebugSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPoseReaderDebugSettings, DebugSegments), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugThickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugThickness = { "DebugThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalPoseReaderDebugSettings, DebugThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugThickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugThickness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"SphericalPoseReaderDebugSettings",
		sizeof(FSphericalPoseReaderDebugSettings),
		alignof(FSphericalPoseReaderDebugSettings),
		Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_SphericalPoseReader>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SphericalPoseReader cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader;
class UScriptStruct* FRigUnit_SphericalPoseReader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SphericalPoseReader"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SphericalPoseReader_Execute;
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("OutputParam"), TEXT("float"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("DriverItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("DriverAxis"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("RotationOffset"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("ActiveRegionSize"), TEXT("float"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("ActiveRegionScaleFactors"), TEXT("FRegionScaleFactors"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("FalloffSize"), TEXT("float"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("FalloffRegionScaleFactors"), TEXT("FRegionScaleFactors"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("FlipWidthScaling"), TEXT("bool"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("FlipHeightScaling"), TEXT("bool"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("OptionalParentItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("Debug"), TEXT("FSphericalPoseReaderDebugSettings"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("InnerRegion"), TEXT("FSphericalRegion"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("OuterRegion"), TEXT("FSphericalRegion"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("DriverNormal"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("Driver2D"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("DriverCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("OptionalParentCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("LocalDriverTransformInit"), TEXT("FTransform"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("CachedRotationOffset"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("bCachedInitTransforms"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SphericalPoseReader::Execute"), &FRigUnit_SphericalPoseReader::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.OuterSingleton, Arguments_FRigUnit_SphericalPoseReader_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SphericalPoseReader>()
{
	return FRigUnit_SphericalPoseReader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputParam_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriverItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DriverItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriverAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DriverAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRegionSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveRegionSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRegionScaleFactors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveRegionScaleFactors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffRegionScaleFactors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FalloffRegionScaleFactors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipWidthScaling_MetaData[];
#endif
		static void NewProp_FlipWidthScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipWidthScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipHeightScaling_MetaData[];
#endif
		static void NewProp_FlipHeightScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipHeightScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalParentItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalParentItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRegion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterRegion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriverNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DriverNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Driver2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Driver2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriverCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DriverCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalParentCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalParentCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalDriverTransformInit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalDriverTransformInit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachedInitTransforms_MetaData[];
#endif
		static void NewProp_bCachedInitTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedInitTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/*\n * Outputs a float value between 0-1 based off of the driver item's rotation in a specified region.\n */" },
		{ "DisplayName", "Spherical Pose Reader" },
		{ "Keywords", "Pose Reader" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "* Outputs a float value between 0-1 based off of the driver item's rotation in a specified region." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SphericalPoseReader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OutputParam_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The normalized output parameter; ranges from 0 (when outside yellow region) to 1 (in the green region) and smoothly blends from 0-1 in the yellow region.\n" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "Output", "" },
		{ "ToolTip", "The normalized output parameter; ranges from 0 (when outside yellow region) to 1 (in the green region) and smoothly blends from 0-1 in the yellow region." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OutputParam = { "OutputParam", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, OutputParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OutputParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OutputParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The bone that will drive the output parameter when rotated into the active regions of this pose reader.\n" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The bone that will drive the output parameter when rotated into the active regions of this pose reader." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverItem = { "DriverItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, DriverItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverItem_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The axis of the driver transform that is compared against the falloff regions. Typically the axis that is pointing at the child; usually X by convention. Default is X-axis (1,0,0).\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The axis of the driver transform that is compared against the falloff regions. Typically the axis that is pointing at the child; usually X by convention. Default is X-axis (1,0,0)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverAxis = { "DriverAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, DriverAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Rotate the entire falloff region to align with the desired area of effect.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Rotate the entire falloff region to align with the desired area of effect." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, RotationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The size of the active region (green) that outputs the full value (1.0). Range is 0-1. Default is 0.1.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The size of the active region (green) that outputs the full value (1.0). Range is 0-1. Default is 0.1." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionSize = { "ActiveRegionSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, ActiveRegionSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionScaleFactors_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The directional scaling parameters for the active region (green).\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The directional scaling parameters for the active region (green)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionScaleFactors = { "ActiveRegionScaleFactors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, ActiveRegionScaleFactors), Z_Construct_UScriptStruct_FRegionScaleFactors, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionScaleFactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionScaleFactors_MetaData)) }; // 3722538345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The size of the falloff region (yellow) that defines the start of the output range. A value of 1 wraps the entire sphere with falloff. Range is 0-1. Default is 0.2.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The size of the falloff region (yellow) that defines the start of the output range. A value of 1 wraps the entire sphere with falloff. Range is 0-1. Default is 0.2." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffSize = { "FalloffSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, FalloffSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffRegionScaleFactors_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The directional scaling parameters for the falloff region (yellow).\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The directional scaling parameters for the falloff region (yellow)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffRegionScaleFactors = { "FalloffRegionScaleFactors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, FalloffRegionScaleFactors), Z_Construct_UScriptStruct_FRegionScaleFactors, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffRegionScaleFactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffRegionScaleFactors_MetaData)) }; // 3722538345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Flip the positive / negative directions of the width scale factors.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Flip the positive / negative directions of the width scale factors." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling_SetBit(void* Obj)
	{
		((FRigUnit_SphericalPoseReader*)Obj)->FlipWidthScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling = { "FlipWidthScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SphericalPoseReader), &Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Flip the positive / negative directions of the height scale factors.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Flip the positive / negative directions of the height scale factors." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling_SetBit(void* Obj)
	{
		((FRigUnit_SphericalPoseReader*)Obj)->FlipHeightScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling = { "FlipHeightScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SphericalPoseReader), &Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// An optional parent to use as a stable frame of reference for the active regions (defaults to DriverItem's parent if unset).\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "An optional parent to use as a stable frame of reference for the active regions (defaults to DriverItem's parent if unset)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentItem = { "OptionalParentItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, OptionalParentItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentItem_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Debug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, Debug), Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Debug_MetaData)) }; // 2033230411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_InnerRegion_MetaData[] = {
		{ "Comment", "// private work data\n" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "private work data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_InnerRegion = { "InnerRegion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, InnerRegion), Z_Construct_UScriptStruct_FSphericalRegion, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_InnerRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_InnerRegion_MetaData)) }; // 3959098980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OuterRegion_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OuterRegion = { "OuterRegion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, OuterRegion), Z_Construct_UScriptStruct_FSphericalRegion, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OuterRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OuterRegion_MetaData)) }; // 3959098980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverNormal_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverNormal = { "DriverNormal", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, DriverNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Driver2D_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Driver2D = { "Driver2D", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, Driver2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Driver2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Driver2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverCache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverCache = { "DriverCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, DriverCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverCache_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentCache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentCache = { "OptionalParentCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, OptionalParentCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentCache_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_LocalDriverTransformInit_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_LocalDriverTransformInit = { "LocalDriverTransformInit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, LocalDriverTransformInit), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_LocalDriverTransformInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_LocalDriverTransformInit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_CachedRotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_CachedRotationOffset = { "CachedRotationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, CachedRotationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_CachedRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_CachedRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms_SetBit(void* Obj)
	{
		((FRigUnit_SphericalPoseReader*)Obj)->bCachedInitTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms = { "bCachedInitTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SphericalPoseReader), &Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OutputParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionScaleFactors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffRegionScaleFactors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_InnerRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OuterRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Driver2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_LocalDriverTransformInit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_CachedRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_SphericalPoseReader",
		sizeof(FRigUnit_SphericalPoseReader),
		alignof(FRigUnit_SphericalPoseReader),
		Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.InnerSingleton;
	}

void FRigUnit_SphericalPoseReader::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SphericalPoseReader::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		OutputParam,
		DriverItem,
		DriverAxis,
		RotationOffset,
		ActiveRegionSize,
		ActiveRegionScaleFactors,
		FalloffSize,
		FalloffRegionScaleFactors,
		FlipWidthScaling,
		FlipHeightScaling,
		OptionalParentItem,
		Debug,
		InnerRegion,
		OuterRegion,
		DriverNormal,
		Driver2D,
		DriverCache,
		OptionalParentCache,
		LocalDriverTransformInit,
		CachedRotationOffset,
		bCachedInitTransforms
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_Statics::ScriptStructInfo[] = {
		{ FRegionScaleFactors::StaticStruct, Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewStructOps, TEXT("RegionScaleFactors"), &Z_Registration_Info_UScriptStruct_RegionScaleFactors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegionScaleFactors), 3722538345U) },
		{ FSphericalRegion::StaticStruct, Z_Construct_UScriptStruct_FSphericalRegion_Statics::NewStructOps, TEXT("SphericalRegion"), &Z_Registration_Info_UScriptStruct_SphericalRegion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalRegion), 3959098980U) },
		{ FSphericalPoseReaderDebugSettings::StaticStruct, Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewStructOps, TEXT("SphericalPoseReaderDebugSettings"), &Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalPoseReaderDebugSettings), 2033230411U) },
		{ FRigUnit_SphericalPoseReader::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewStructOps, TEXT("RigUnit_SphericalPoseReader"), &Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SphericalPoseReader), 3939328955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_626275040(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
