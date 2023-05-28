// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../ControlRigSpline/Source/ControlRigSpline/Public/ControlRigSplineUnits.h"
#include "../../../../../../../ControlRigSpline/Source/ControlRigSpline/Public/ControlRigSplineTypes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSplineUnits() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	CONTROLRIGSPLINE_API UEnum* Z_Construct_UEnum_ControlRigSpline_ESplineType();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSpline();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
	UPackage* Z_Construct_UPackage__Script_ControlRigSpline();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_ControlRigSplineBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ControlRigSplineBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase;
class UScriptStruct* FRigUnit_ControlRigSplineBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_ControlRigSplineBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_ControlRigSplineBase>()
{
	return FRigUnit_ControlRigSplineBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.3 0.1 0.1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ControlRigSplineBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ControlRigSplineBase",
		sizeof(FRigUnit_ControlRigSplineBase),
		alignof(FRigUnit_ControlRigSplineBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_ControlRigSplineFromPoints>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_ControlRigSplineFromPoints cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints;
class UScriptStruct* FRigUnit_ControlRigSplineFromPoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_ControlRigSplineFromPoints"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ControlRigSplineFromPoints_Execute;
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("Points"), TEXT("TArray<FVector>"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("SplineMode"), TEXT("ESplineType"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("bClosed"), TEXT("bool"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("SamplesPerSegment"), TEXT("int32"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("Compression"), TEXT("float"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("Stretch"), TEXT("float"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ControlRigSplineFromPoints::Execute"), &FRigUnit_ControlRigSplineFromPoints::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.OuterSingleton, Arguments_FRigUnit_ControlRigSplineFromPoints_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_ControlRigSplineFromPoints>()
{
	return FRigUnit_ControlRigSplineFromPoints::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SplineMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[];
#endif
		static void NewProp_bClosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerSegment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Compression_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Compression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stretch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Creates a Spline curve from an array of positions\n */" },
		{ "DisplayName", "Spline From Points" },
		{ "Keywords", "Spline From Positions" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Creates a Spline curve from an array of positions" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ControlRigSplineFromPoints>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode = { "SplineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, SplineMode), Z_Construct_UEnum_ControlRigSpline_ESplineType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode_MetaData)) }; // 2330869612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed_SetBit(void* Obj)
	{
		((FRigUnit_ControlRigSplineFromPoints*)Obj)->bClosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ControlRigSplineFromPoints), &Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SamplesPerSegment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SamplesPerSegment = { "SamplesPerSegment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, SamplesPerSegment), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SamplesPerSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SamplesPerSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Compression_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Compression = { "Compression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, Compression), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Compression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Compression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Stretch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Stretch = { "Stretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, Stretch), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Stretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Stretch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Spline_MetaData)) }; // 568790116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SamplesPerSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Compression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Stretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Spline,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
		&NewStructOps,
		"RigUnit_ControlRigSplineFromPoints",
		sizeof(FRigUnit_ControlRigSplineFromPoints),
		alignof(FRigUnit_ControlRigSplineFromPoints),
		Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.InnerSingleton;
	}

void FRigUnit_ControlRigSplineFromPoints::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ControlRigSplineFromPoints::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FVector> Points_0_Array(Points);
	
	StaticExecute(
		InExecuteContext,
		Points_0_Array,
		SplineMode,
		bClosed,
		SamplesPerSegment,
		Compression,
		Stretch,
		Spline
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetSplinePoints>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetSplinePoints cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints;
class UScriptStruct* FRigUnit_SetSplinePoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_SetSplinePoints"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetSplinePoints_Execute;
		Arguments_FRigUnit_SetSplinePoints_Execute.Emplace(TEXT("Points"), TEXT("TArray<FVector>"));
		Arguments_FRigUnit_SetSplinePoints_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetSplinePoints::Execute"), &FRigUnit_SetSplinePoints::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.OuterSingleton, Arguments_FRigUnit_SetSplinePoints_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_SetSplinePoints>()
{
	return FRigUnit_SetSplinePoints::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Set the points of a spline, given a spline and an array of positions\n */" },
		{ "DisplayName", "Set Spline Points" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "ToolTip", "* Set the points of a spline, given a spline and an array of positions" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetSplinePoints>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetSplinePoints, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetSplinePoints, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Spline_MetaData)) }; // 568790116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Spline,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetSplinePoints",
		sizeof(FRigUnit_SetSplinePoints),
		alignof(FRigUnit_SetSplinePoints),
		Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.InnerSingleton;
	}

void FRigUnit_SetSplinePoints::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetSplinePoints::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FVector> Points_0_Array(Points);
	
	StaticExecute(
		InExecuteContext,
		Points_0_Array,
		Spline
	);
}


static_assert(std::is_polymorphic<FRigUnit_PositionFromControlRigSpline>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_PositionFromControlRigSpline cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline;
class UScriptStruct* FRigUnit_PositionFromControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_PositionFromControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PositionFromControlRigSpline_Execute;
		Arguments_FRigUnit_PositionFromControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_PositionFromControlRigSpline_Execute.Emplace(TEXT("U"), TEXT("float"));
		Arguments_FRigUnit_PositionFromControlRigSpline_Execute.Emplace(TEXT("Position"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PositionFromControlRigSpline::Execute"), &FRigUnit_PositionFromControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.OuterSingleton, Arguments_FRigUnit_PositionFromControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_PositionFromControlRigSpline>()
{
	return FRigUnit_PositionFromControlRigSpline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the position from a given Spline and U value\n */" },
		{ "DisplayName", "Position From Spline" },
		{ "Keywords", "Point From Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the position from a given Spline and U value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PositionFromControlRigSpline>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PositionFromControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Spline_MetaData)) }; // 568790116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PositionFromControlRigSpline, U), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_U_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_U_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PositionFromControlRigSpline, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_U,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Position,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
		&NewStructOps,
		"RigUnit_PositionFromControlRigSpline",
		sizeof(FRigUnit_PositionFromControlRigSpline),
		alignof(FRigUnit_PositionFromControlRigSpline),
		Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.InnerSingleton;
	}

void FRigUnit_PositionFromControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PositionFromControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		U,
		Position
	);
}


static_assert(std::is_polymorphic<FRigUnit_TransformFromControlRigSpline>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_TransformFromControlRigSpline cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline;
class UScriptStruct* FRigUnit_TransformFromControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_TransformFromControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TransformFromControlRigSpline_Execute;
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("UpVector"), TEXT("FVector"));
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("Roll"), TEXT("float"));
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("U"), TEXT("float"));
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TransformFromControlRigSpline::Execute"), &FRigUnit_TransformFromControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.OuterSingleton, Arguments_FRigUnit_TransformFromControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_TransformFromControlRigSpline>()
{
	return FRigUnit_TransformFromControlRigSpline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the transform from a given Spline and U value based on the given Up Vector and Roll\n */" },
		{ "DisplayName", "Transform From Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the transform from a given Spline and U value based on the given Up Vector and Roll" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TransformFromControlRigSpline>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Spline_MetaData)) }; // 568790116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_UpVector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_UpVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, Roll), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, U), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_U_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_U_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_UpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_U,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
		&NewStructOps,
		"RigUnit_TransformFromControlRigSpline",
		sizeof(FRigUnit_TransformFromControlRigSpline),
		alignof(FRigUnit_TransformFromControlRigSpline),
		Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.InnerSingleton;
	}

void FRigUnit_TransformFromControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TransformFromControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		UpVector,
		Roll,
		U,
		Transform
	);
}


static_assert(std::is_polymorphic<FRigUnit_TangentFromControlRigSpline>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_TangentFromControlRigSpline cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline;
class UScriptStruct* FRigUnit_TangentFromControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_TangentFromControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TangentFromControlRigSpline_Execute;
		Arguments_FRigUnit_TangentFromControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_TangentFromControlRigSpline_Execute.Emplace(TEXT("U"), TEXT("float"));
		Arguments_FRigUnit_TangentFromControlRigSpline_Execute.Emplace(TEXT("Tangent"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TangentFromControlRigSpline::Execute"), &FRigUnit_TangentFromControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.OuterSingleton, Arguments_FRigUnit_TangentFromControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_TangentFromControlRigSpline>()
{
	return FRigUnit_TangentFromControlRigSpline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the tangent from a given Spline and U value\n */" },
		{ "DisplayName", "Tangent From Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the tangent from a given Spline and U value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TangentFromControlRigSpline>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TangentFromControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Spline_MetaData)) }; // 568790116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TangentFromControlRigSpline, U), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_U_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_U_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TangentFromControlRigSpline, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Tangent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_U,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Tangent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
		&NewStructOps,
		"RigUnit_TangentFromControlRigSpline",
		sizeof(FRigUnit_TangentFromControlRigSpline),
		alignof(FRigUnit_TangentFromControlRigSpline),
		Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.InnerSingleton;
	}

void FRigUnit_TangentFromControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TangentFromControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		U,
		Tangent
	);
}


static_assert(std::is_polymorphic<FRigUnit_DrawControlRigSpline>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_DrawControlRigSpline cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline;
class UScriptStruct* FRigUnit_DrawControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_DrawControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DrawControlRigSpline_Execute;
		Arguments_FRigUnit_DrawControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_DrawControlRigSpline_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DrawControlRigSpline_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DrawControlRigSpline_Execute.Emplace(TEXT("Detail"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DrawControlRigSpline::Execute"), &FRigUnit_DrawControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.OuterSingleton, Arguments_FRigUnit_DrawControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_DrawControlRigSpline>()
{
	return FRigUnit_DrawControlRigSpline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Detail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Draws the given spline in the viewport\n */" },
		{ "DisplayName", "Draw Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
		{ "ToolTip", "* Draws the given spline in the viewport" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DrawControlRigSpline>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DrawControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Spline_MetaData)) }; // 568790116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DrawControlRigSpline, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DrawControlRigSpline, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Detail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DrawControlRigSpline, Detail), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Detail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Detail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Detail,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_DrawControlRigSpline",
		sizeof(FRigUnit_DrawControlRigSpline),
		alignof(FRigUnit_DrawControlRigSpline),
		Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.InnerSingleton;
	}

void FRigUnit_DrawControlRigSpline::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_DrawControlRigSpline::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		Color,
		Thickness,
		Detail
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetLengthControlRigSpline>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetLengthControlRigSpline cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline;
class UScriptStruct* FRigUnit_GetLengthControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_GetLengthControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetLengthControlRigSpline_Execute;
		Arguments_FRigUnit_GetLengthControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_GetLengthControlRigSpline_Execute.Emplace(TEXT("Length"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetLengthControlRigSpline::Execute"), &FRigUnit_GetLengthControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.OuterSingleton, Arguments_FRigUnit_GetLengthControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_GetLengthControlRigSpline>()
{
	return FRigUnit_GetLengthControlRigSpline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the length from a given Splin\n */" },
		{ "DisplayName", "Get Length Of Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the length from a given Splin" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetLengthControlRigSpline>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetLengthControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Spline_MetaData)) }; // 568790116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetLengthControlRigSpline, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_GetLengthControlRigSpline",
		sizeof(FRigUnit_GetLengthControlRigSpline),
		alignof(FRigUnit_GetLengthControlRigSpline),
		Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.InnerSingleton;
	}

void FRigUnit_GetLengthControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetLengthControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		Length
	);
}


static_assert(std::is_polymorphic<FRigUnit_FitChainToSplineCurve>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitChainToSplineCurve cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve;
class UScriptStruct* FRigUnit_FitChainToSplineCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_FitChainToSplineCurve"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitChainToSplineCurve_Execute;
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Alignment"), TEXT("EControlRigCurveAlignment"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("SamplingPrecision"), TEXT("int32"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("PoleVectorPosition"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_FitChainToCurve_Rotation>"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_FitChainToCurve_DebugSettings"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FitChainToCurve_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitChainToSplineCurve::Execute"), &FRigUnit_FitChainToSplineCurve::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.OuterSingleton, Arguments_FRigUnit_FitChainToSplineCurve_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_FitChainToSplineCurve>()
{
	return FRigUnit_FitChainToSplineCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVectorPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Fits a given chain to a spline curve.\n * Additionally provides rotational control matching the features of the Distribute Rotation node.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Fit Chain on Spline Curve" },
		{ "Keywords", "Fit,Resample,Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Fits a given chain to a spline curve.\nAdditionally provides rotational control matching the features of the Distribute Rotation node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToSplineCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The items to align" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Items_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The curve to align to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Spline_MetaData)) }; // 568790116
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * Specifies how to align the chain on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Specifies how to align the chain on the curve" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Alignment), Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment_MetaData)) }; // 3595744133
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minimum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The minimum U value to use on the curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The maximum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The maximum U value to use on the curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SamplingPrecision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The number of samples to use on the curve. Clamped at 64.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The number of samples to use on the curve. Clamped at 64." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SamplingPrecision = { "SamplingPrecision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, SamplingPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SamplingPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SamplingPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PrimaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PrimaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The minor axis being aligned - towards the pole vector.\n\x09 * You can use (0.0, 0.0, 0.0) to disable it.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The minor axis being aligned - towards the pole vector.\nYou can use (0.0, 0.0, 0.0) to disable it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SecondaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SecondaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PoleVectorPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The the position of the pole vector used for aligning the secondary axis.\n\x09 * Only has an effect if the secondary axis is set.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The the position of the pole vector used for aligning the secondary axis.\nOnly has an effect if the secondary axis is set." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PoleVectorPosition = { "PoleVectorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, PoleVectorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PoleVectorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PoleVectorPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation, METADATA_PARAMS(nullptr, 0) }; // 2815587899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied along the curve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The list of rotations to be applied along the curve" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations_MetaData)) }; // 2815587899
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType_MetaData)) }; // 3365060979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_FitChainToSplineCurve*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_FitChainToSplineCurve), &Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_DebugSettings_MetaData)) }; // 1548436928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, WorkData), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_WorkData_MetaData)) }; // 2064531782
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SamplingPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PrimaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SecondaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PoleVectorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_FitChainToSplineCurve",
		sizeof(FRigUnit_FitChainToSplineCurve),
		alignof(FRigUnit_FitChainToSplineCurve),
		Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.InnerSingleton;
	}

void FRigUnit_FitChainToSplineCurve::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_FitChainToSplineCurve::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_FitChainToCurve_Rotation> Rotations_9_Array(Rotations);
	
	StaticExecute(
		InExecuteContext,
		Items,
		Spline,
		Alignment,
		Minimum,
		Maximum,
		SamplingPrecision,
		PrimaryAxis,
		SecondaryAxis,
		PoleVectorPosition,
		Rotations_9_Array,
		RotationEaseType,
		Weight,
		bPropagateToChildren,
		DebugSettings,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_FitChainToSplineCurveItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitChainToSplineCurveItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray;
class UScriptStruct* FRigUnit_FitChainToSplineCurveItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_FitChainToSplineCurveItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute;
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Alignment"), TEXT("EControlRigCurveAlignment"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("SamplingPrecision"), TEXT("int32"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("PoleVectorPosition"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_FitChainToCurve_Rotation>"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_FitChainToCurve_DebugSettings"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FitChainToCurve_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitChainToSplineCurveItemArray::Execute"), &FRigUnit_FitChainToSplineCurveItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.OuterSingleton, Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_FitChainToSplineCurveItemArray>()
{
	return FRigUnit_FitChainToSplineCurveItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVectorPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/**\n * Fits a given chain to a spline curve.\n * Additionally provides rotational control matching the features of the Distribute Rotation node.\n */" },
		{ "DisplayName", "Fit Chain on Spline Curve" },
		{ "Keywords", "Fit,Resample,Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Fits a given chain to a spline curve.\nAdditionally provides rotational control matching the features of the Distribute Rotation node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToSplineCurveItemArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The items to align" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The curve to align to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Spline_MetaData)) }; // 568790116
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * Specifies how to align the chain on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Specifies how to align the chain on the curve" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Alignment), Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment_MetaData)) }; // 3595744133
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minimum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The minimum U value to use on the curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The maximum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The maximum U value to use on the curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SamplingPrecision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The number of samples to use on the curve. Clamped at 64.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The number of samples to use on the curve. Clamped at 64." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SamplingPrecision = { "SamplingPrecision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, SamplingPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SamplingPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SamplingPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PrimaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PrimaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The minor axis being aligned - towards the pole vector.\n\x09 * You can use (0.0, 0.0, 0.0) to disable it.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The minor axis being aligned - towards the pole vector.\nYou can use (0.0, 0.0, 0.0) to disable it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SecondaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SecondaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PoleVectorPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The the position of the pole vector used for aligning the secondary axis.\n\x09 * Only has an effect if the secondary axis is set.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The the position of the pole vector used for aligning the secondary axis.\nOnly has an effect if the secondary axis is set." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PoleVectorPosition = { "PoleVectorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, PoleVectorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PoleVectorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PoleVectorPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation, METADATA_PARAMS(nullptr, 0) }; // 2815587899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied along the curve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The list of rotations to be applied along the curve" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations_MetaData)) }; // 2815587899
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType_MetaData)) }; // 3365060979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_FitChainToSplineCurveItemArray*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_FitChainToSplineCurveItemArray), &Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_DebugSettings_MetaData)) }; // 1548436928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_WorkData_MetaData)) }; // 2064531782
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SamplingPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PrimaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SecondaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PoleVectorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_FitChainToSplineCurveItemArray",
		sizeof(FRigUnit_FitChainToSplineCurveItemArray),
		alignof(FRigUnit_FitChainToSplineCurveItemArray),
		Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.InnerSingleton;
	}

void FRigUnit_FitChainToSplineCurveItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_FitChainToSplineCurveItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	TArrayView<const FRigUnit_FitChainToCurve_Rotation> Rotations_9_Array(Rotations);
	
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Spline,
		Alignment,
		Minimum,
		Maximum,
		SamplingPrecision,
		PrimaryAxis,
		SecondaryAxis,
		PoleVectorPosition,
		Rotations_9_Array,
		RotationEaseType,
		Weight,
		bPropagateToChildren,
		DebugSettings,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_FitSplineCurveToChain>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitSplineCurveToChain cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain;
class UScriptStruct* FRigUnit_FitSplineCurveToChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_FitSplineCurveToChain"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitSplineCurveToChain_Execute;
		Arguments_FRigUnit_FitSplineCurveToChain_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_FitSplineCurveToChain_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitSplineCurveToChain::Execute"), &FRigUnit_FitSplineCurveToChain::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.OuterSingleton, Arguments_FRigUnit_FitSplineCurveToChain_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_FitSplineCurveToChain>()
{
	return FRigUnit_FitSplineCurveToChain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Fits a given spline curve to a chain.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Fit Spline Curve on Chain" },
		{ "Keywords", "Fit,Resample,Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Fits a given spline curve to a chain." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitSplineCurveToChain>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The items to align to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitSplineCurveToChain, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Items_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
		{ "ToolTip", "The curve to align" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitSplineCurveToChain, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Spline_MetaData)) }; // 568790116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Spline,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_FitSplineCurveToChain",
		sizeof(FRigUnit_FitSplineCurveToChain),
		alignof(FRigUnit_FitSplineCurveToChain),
		Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.InnerSingleton;
	}

void FRigUnit_FitSplineCurveToChain::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_FitSplineCurveToChain::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items,
		Spline
	);
}


static_assert(std::is_polymorphic<FRigUnit_FitSplineCurveToChainItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitSplineCurveToChainItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray;
class UScriptStruct* FRigUnit_FitSplineCurveToChainItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_FitSplineCurveToChainItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitSplineCurveToChainItemArray_Execute;
		Arguments_FRigUnit_FitSplineCurveToChainItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_FitSplineCurveToChainItemArray_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitSplineCurveToChainItemArray::Execute"), &FRigUnit_FitSplineCurveToChainItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.OuterSingleton, Arguments_FRigUnit_FitSplineCurveToChainItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_FitSplineCurveToChainItemArray>()
{
	return FRigUnit_FitSplineCurveToChainItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/**\n * Fits a given spline curve to a chain.\n */" },
		{ "DisplayName", "Fit Spline Curve on Chain" },
		{ "Keywords", "Fit,Resample,Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Fits a given spline curve to a chain." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitSplineCurveToChainItemArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The items to align to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitSplineCurveToChainItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
		{ "ToolTip", "The curve to align" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FitSplineCurveToChainItemArray, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Spline_MetaData)) }; // 568790116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Spline,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_FitSplineCurveToChainItemArray",
		sizeof(FRigUnit_FitSplineCurveToChainItemArray),
		alignof(FRigUnit_FitSplineCurveToChainItemArray),
		Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.InnerSingleton;
	}

void FRigUnit_FitSplineCurveToChainItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_FitSplineCurveToChainItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Spline
	);
}


static_assert(std::is_polymorphic<FRigUnit_ClosestParameterFromControlRigSpline>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_ClosestParameterFromControlRigSpline cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline;
class UScriptStruct* FRigUnit_ClosestParameterFromControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_ClosestParameterFromControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute;
		Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute.Emplace(TEXT("Position"), TEXT("FVector"));
		Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute.Emplace(TEXT("U"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ClosestParameterFromControlRigSpline::Execute"), &FRigUnit_ClosestParameterFromControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.OuterSingleton, Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_ClosestParameterFromControlRigSpline>()
{
	return FRigUnit_ClosestParameterFromControlRigSpline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the closest U value from a given Spline and a position\n */" },
		{ "DisplayName", "Closest Parameter From Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the closest U value from a given Spline and a position" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ClosestParameterFromControlRigSpline>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ClosestParameterFromControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Spline_MetaData)) }; // 568790116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ClosestParameterFromControlRigSpline, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ClosestParameterFromControlRigSpline, U), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_U_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_U_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_U,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
		&NewStructOps,
		"RigUnit_ClosestParameterFromControlRigSpline",
		sizeof(FRigUnit_ClosestParameterFromControlRigSpline),
		alignof(FRigUnit_ClosestParameterFromControlRigSpline),
		Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.InnerSingleton;
	}

void FRigUnit_ClosestParameterFromControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ClosestParameterFromControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		Position,
		U
	);
}


static_assert(std::is_polymorphic<FRigUnit_ParameterAtPercentage>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_ParameterAtPercentage cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage;
class UScriptStruct* FRigUnit_ParameterAtPercentage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_ParameterAtPercentage"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ParameterAtPercentage_Execute;
		Arguments_FRigUnit_ParameterAtPercentage_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_ParameterAtPercentage_Execute.Emplace(TEXT("Percentage"), TEXT("float"));
		Arguments_FRigUnit_ParameterAtPercentage_Execute.Emplace(TEXT("U"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ParameterAtPercentage::Execute"), &FRigUnit_ParameterAtPercentage::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.OuterSingleton, Arguments_FRigUnit_ParameterAtPercentage_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_ParameterAtPercentage>()
{
	return FRigUnit_ParameterAtPercentage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Percentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Returns the U parameter of a spline given a length percentage (0.0 - 1.0)\n */" },
		{ "DisplayName", "Parameter At Length Percentage" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "* Returns the U parameter of a spline given a length percentage (0.0 - 1.0)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParameterAtPercentage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParameterAtPercentage, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Spline_MetaData)) }; // 568790116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Percentage_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParameterAtPercentage, Percentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Percentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Percentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParameterAtPercentage, U), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_U_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_U_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Percentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_U,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
		&NewStructOps,
		"RigUnit_ParameterAtPercentage",
		sizeof(FRigUnit_ParameterAtPercentage),
		alignof(FRigUnit_ParameterAtPercentage),
		Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.InnerSingleton;
	}

void FRigUnit_ParameterAtPercentage::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ParameterAtPercentage::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		Percentage,
		U
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ControlRigSplineBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::NewStructOps, TEXT("RigUnit_ControlRigSplineBase"), &Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ControlRigSplineBase), 1581339266U) },
		{ FRigUnit_ControlRigSplineFromPoints::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewStructOps, TEXT("RigUnit_ControlRigSplineFromPoints"), &Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ControlRigSplineFromPoints), 2093315294U) },
		{ FRigUnit_SetSplinePoints::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewStructOps, TEXT("RigUnit_SetSplinePoints"), &Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetSplinePoints), 4272985250U) },
		{ FRigUnit_PositionFromControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_PositionFromControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PositionFromControlRigSpline), 4052794083U) },
		{ FRigUnit_TransformFromControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_TransformFromControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TransformFromControlRigSpline), 1496857367U) },
		{ FRigUnit_TangentFromControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_TangentFromControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TangentFromControlRigSpline), 1254972514U) },
		{ FRigUnit_DrawControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_DrawControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DrawControlRigSpline), 1182973399U) },
		{ FRigUnit_GetLengthControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_GetLengthControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetLengthControlRigSpline), 791802460U) },
		{ FRigUnit_FitChainToSplineCurve::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewStructOps, TEXT("RigUnit_FitChainToSplineCurve"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToSplineCurve), 3412338353U) },
		{ FRigUnit_FitChainToSplineCurveItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewStructOps, TEXT("RigUnit_FitChainToSplineCurveItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToSplineCurveItemArray), 262281354U) },
		{ FRigUnit_FitSplineCurveToChain::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewStructOps, TEXT("RigUnit_FitSplineCurveToChain"), &Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitSplineCurveToChain), 4086792432U) },
		{ FRigUnit_FitSplineCurveToChainItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewStructOps, TEXT("RigUnit_FitSplineCurveToChainItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitSplineCurveToChainItemArray), 1464080358U) },
		{ FRigUnit_ClosestParameterFromControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_ClosestParameterFromControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ClosestParameterFromControlRigSpline), 1476735300U) },
		{ FRigUnit_ParameterAtPercentage::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewStructOps, TEXT("RigUnit_ParameterAtPercentage"), &Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParameterAtPercentage), 1728828864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_3987323841(TEXT("/Script/ControlRigSpline"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
