// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionFieldNodes.h"
#include "Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionFieldNodes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSphere();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FNoiseFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowFieldFalloffType;
	static UEnum* EDataflowFieldFalloffType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataflowFieldFalloffType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataflowFieldFalloffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EDataflowFieldFalloffType"));
		}
		return Z_Registration_Info_UEnum_EDataflowFieldFalloffType.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowFieldFalloffType>()
	{
		return EDataflowFieldFalloffType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType_Statics::Enumerators[] = {
		{ "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_None", (int64)EDataflowFieldFalloffType::Dataflow_FieldFalloffType_None },
		{ "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Linear", (int64)EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Linear },
		{ "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Inverse", (int64)EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Inverse },
		{ "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Squared", (int64)EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Squared },
		{ "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Logarithmic", (int64)EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Logarithmic },
		{ "EDataflowFieldFalloffType::Dataflow_Max", (int64)EDataflowFieldFalloffType::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n * \n *\n */" },
		{ "Dataflow_FieldFalloffType_Inverse.Comment", "/**\n *\n * \n *\n */" },
		{ "Dataflow_FieldFalloffType_Inverse.DisplayName", "Inverse" },
		{ "Dataflow_FieldFalloffType_Inverse.Name", "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Inverse" },
		{ "Dataflow_FieldFalloffType_Inverse.ToolTip", "The falloff function will be proportional to 1.0/x" },
		{ "Dataflow_FieldFalloffType_Linear.Comment", "/**\n *\n * \n *\n */" },
		{ "Dataflow_FieldFalloffType_Linear.DisplayName", "Linear" },
		{ "Dataflow_FieldFalloffType_Linear.Name", "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Linear" },
		{ "Dataflow_FieldFalloffType_Linear.ToolTip", "The falloff function will be proportional to x" },
		{ "Dataflow_FieldFalloffType_Logarithmic.Comment", "/**\n *\n * \n *\n */" },
		{ "Dataflow_FieldFalloffType_Logarithmic.DisplayName", "Logarithmic" },
		{ "Dataflow_FieldFalloffType_Logarithmic.Name", "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Logarithmic" },
		{ "Dataflow_FieldFalloffType_Logarithmic.ToolTip", "The falloff function will be proportional to log(x)" },
		{ "Dataflow_FieldFalloffType_None.Comment", "/**\n *\n * \n *\n */" },
		{ "Dataflow_FieldFalloffType_None.DisplayName", "None" },
		{ "Dataflow_FieldFalloffType_None.Name", "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_None" },
		{ "Dataflow_FieldFalloffType_None.ToolTip", "No falloff function is used" },
		{ "Dataflow_FieldFalloffType_Squared.Comment", "/**\n *\n * \n *\n */" },
		{ "Dataflow_FieldFalloffType_Squared.DisplayName", "Squared" },
		{ "Dataflow_FieldFalloffType_Squared.Name", "EDataflowFieldFalloffType::Dataflow_FieldFalloffType_Squared" },
		{ "Dataflow_FieldFalloffType_Squared.ToolTip", "The falloff function will be proportional to x*x" },
		{ "Dataflow_Max.Comment", "/**\n *\n * \n *\n *///~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EDataflowFieldFalloffType::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "//256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EDataflowFieldFalloffType",
		"EDataflowFieldFalloffType",
		Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType()
	{
		if (!Z_Registration_Info_UEnum_EDataflowFieldFalloffType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowFieldFalloffType.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataflowFieldFalloffType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRadialFalloffFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRadialFalloffFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialFalloffFieldDataflowNode;
class UScriptStruct* FRadialFalloffFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialFalloffFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialFalloffFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("RadialFalloffFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_RadialFalloffFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FRadialFalloffFieldDataflowNode>()
{
	return FRadialFalloffFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldSelectionMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldSelectionMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * RadialFalloff Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "RadialFalloff Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialFalloffFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Sphere_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, Sphere), Z_Construct_UScriptStruct_FSphere, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MinRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, MinRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MinRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MinRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, FalloffType), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FalloffType_MetaData)) }; // 1727979728
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, FieldFloatResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask = { "FieldSelectionMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, FieldSelectionMask), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialFalloffFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Sphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"RadialFalloffFieldDataflowNode",
		sizeof(FRadialFalloffFieldDataflowNode),
		alignof(FRadialFalloffFieldDataflowNode),
		Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_RadialFalloffFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialFalloffFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RadialFalloffFieldDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBoxFalloffFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FBoxFalloffFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxFalloffFieldDataflowNode;
class UScriptStruct* FBoxFalloffFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxFalloffFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxFalloffFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("BoxFalloffFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_BoxFalloffFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FBoxFalloffFieldDataflowNode>()
{
	return FBoxFalloffFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldSelectionMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldSelectionMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * BoxFalloff Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "BoxFalloff Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxFalloffFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Box_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MinRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, MinRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MinRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MinRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, FalloffType), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FalloffType_MetaData)) }; // 1727979728
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, FieldFloatResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask = { "FieldSelectionMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, FieldSelectionMask), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxFalloffFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"BoxFalloffFieldDataflowNode",
		sizeof(FBoxFalloffFieldDataflowNode),
		alignof(FBoxFalloffFieldDataflowNode),
		Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_BoxFalloffFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxFalloffFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoxFalloffFieldDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPlaneFalloffFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FPlaneFalloffFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaneFalloffFieldDataflowNode;
class UScriptStruct* FPlaneFalloffFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneFalloffFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaneFalloffFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("PlaneFalloffFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_PlaneFalloffFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FPlaneFalloffFieldDataflowNode>()
{
	return FPlaneFalloffFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldSelectionMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldSelectionMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * PlaneFalloff Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "PlaneFalloff Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneFalloffFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MinRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, MinRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MinRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MinRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, FalloffType), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FalloffType_MetaData)) }; // 1727979728
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, FieldFloatResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask = { "FieldSelectionMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, FieldSelectionMask), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneFalloffFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldFloatResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_FieldSelectionMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"PlaneFalloffFieldDataflowNode",
		sizeof(FPlaneFalloffFieldDataflowNode),
		alignof(FPlaneFalloffFieldDataflowNode),
		Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_PlaneFalloffFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaneFalloffFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlaneFalloffFieldDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowSetMaskConditionType;
	static UEnum* EDataflowSetMaskConditionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataflowSetMaskConditionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataflowSetMaskConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EDataflowSetMaskConditionType"));
		}
		return Z_Registration_Info_UEnum_EDataflowSetMaskConditionType.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowSetMaskConditionType>()
	{
		return EDataflowSetMaskConditionType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType_Statics::Enumerators[] = {
		{ "EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_Always", (int64)EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_Always },
		{ "EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_IFF_NOT_Interior", (int64)EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_IFF_NOT_Interior },
		{ "EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_IFF_NOT_Exterior", (int64)EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_IFF_NOT_Exterior },
		{ "EDataflowSetMaskConditionType::Dataflow_Max", (int64)EDataflowSetMaskConditionType::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_Max.Comment", "/**\n *\n *\n *\n *///~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EDataflowSetMaskConditionType::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "//256th entry" },
		{ "Dataflow_SetMaskConditionType_Always.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_SetMaskConditionType_Always.DisplayName", "Set Always" },
		{ "Dataflow_SetMaskConditionType_Always.Name", "EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_Always" },
		{ "Dataflow_SetMaskConditionType_Always.ToolTip", "The particle output value will be equal to Interior-value if the particle position is inside a sphere / Exterior-value otherwise." },
		{ "Dataflow_SetMaskConditionType_IFF_NOT_Exterior.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_SetMaskConditionType_IFF_NOT_Exterior.DisplayName", "Merge Exterior" },
		{ "Dataflow_SetMaskConditionType_IFF_NOT_Exterior.Name", "EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_IFF_NOT_Exterior" },
		{ "Dataflow_SetMaskConditionType_IFF_NOT_Exterior.ToolTip", "The particle output value will be equal to Exterior-value if the particle position is outside the sphere or if the particle input value is already Exterior-Value / Interior-value otherwise." },
		{ "Dataflow_SetMaskConditionType_IFF_NOT_Interior.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_SetMaskConditionType_IFF_NOT_Interior.DisplayName", "Merge Interior" },
		{ "Dataflow_SetMaskConditionType_IFF_NOT_Interior.Name", "EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_IFF_NOT_Interior" },
		{ "Dataflow_SetMaskConditionType_IFF_NOT_Interior.ToolTip", "The particle output value will be equal to Interior-value if the particle position is inside the sphere or if the particle input value is already Interior-Value / Exterior-value otherwise." },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EDataflowSetMaskConditionType",
		"EDataflowSetMaskConditionType",
		Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType()
	{
		if (!Z_Registration_Info_UEnum_EDataflowSetMaskConditionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowSetMaskConditionType.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataflowSetMaskConditionType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRadialIntMaskFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRadialIntMaskFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialIntMaskFieldDataflowNode;
class UScriptStruct* FRadialIntMaskFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialIntMaskFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialIntMaskFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("RadialIntMaskFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_RadialIntMaskFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FRadialIntMaskFieldDataflowNode>()
{
	return FRadialIntMaskFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteriorValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InteriorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExteriorValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SetMaskConditionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetMaskConditionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SetMaskConditionType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldIntResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldIntResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldIntResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * RadialIntMask Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "RadialIntMask Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialIntMaskFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Sphere_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, Sphere), Z_Construct_UScriptStruct_FSphere, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_InteriorValue_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_InteriorValue = { "InteriorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, InteriorValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_InteriorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_InteriorValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_ExteriorValue_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_ExteriorValue = { "ExteriorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, ExteriorValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_ExteriorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_ExteriorValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SetMaskConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SetMaskConditionType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SetMaskConditionType = { "SetMaskConditionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, SetMaskConditionType), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowSetMaskConditionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SetMaskConditionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SetMaskConditionType_MetaData)) }; // 1936589001
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldIntResult_Inner = { "FieldIntResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldIntResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldIntResult = { "FieldIntResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, FieldIntResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldIntResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldIntResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialIntMaskFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Sphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_InteriorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_ExteriorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SetMaskConditionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_SetMaskConditionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldIntResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldIntResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"RadialIntMaskFieldDataflowNode",
		sizeof(FRadialIntMaskFieldDataflowNode),
		alignof(FRadialIntMaskFieldDataflowNode),
		Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_RadialIntMaskFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialIntMaskFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RadialIntMaskFieldDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUniformScalarFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUniformScalarFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniformScalarFieldDataflowNode;
class UScriptStruct* FUniformScalarFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniformScalarFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniformScalarFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UniformScalarFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_UniformScalarFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUniformScalarFieldDataflowNode>()
{
	return FUniformScalarFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * UniformScalar Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "UniformScalar Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniformScalarFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScalarFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScalarFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScalarFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScalarFieldDataflowNode, FieldFloatResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScalarFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScalarFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"UniformScalarFieldDataflowNode",
		sizeof(FUniformScalarFieldDataflowNode),
		alignof(FUniformScalarFieldDataflowNode),
		Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_UniformScalarFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniformScalarFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UniformScalarFieldDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUniformVectorFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUniformVectorFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniformVectorFieldDataflowNode;
class UScriptStruct* FUniformVectorFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniformVectorFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniformVectorFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UniformVectorFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_UniformVectorFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUniformVectorFieldDataflowNode>()
{
	return FUniformVectorFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldVectorResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldVectorResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldVectorResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * UniformVector Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "UniformVector Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniformVectorFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformVectorFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformVectorFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformVectorFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformVectorFieldDataflowNode, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_Inner = { "FieldVectorResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult = { "FieldVectorResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformVectorFieldDataflowNode, FieldVectorResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformVectorFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformVectorFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"UniformVectorFieldDataflowNode",
		sizeof(FUniformVectorFieldDataflowNode),
		alignof(FUniformVectorFieldDataflowNode),
		Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_UniformVectorFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniformVectorFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UniformVectorFieldDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRadialVectorFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRadialVectorFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialVectorFieldDataflowNode;
class UScriptStruct* FRadialVectorFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialVectorFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialVectorFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("RadialVectorFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_RadialVectorFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FRadialVectorFieldDataflowNode>()
{
	return FRadialVectorFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldVectorResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldVectorResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldVectorResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * RadialVector Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "RadialVector Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialVectorFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialVectorFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialVectorFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialVectorFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialVectorFieldDataflowNode, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_Inner = { "FieldVectorResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult = { "FieldVectorResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialVectorFieldDataflowNode, FieldVectorResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialVectorFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialVectorFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"RadialVectorFieldDataflowNode",
		sizeof(FRadialVectorFieldDataflowNode),
		alignof(FRadialVectorFieldDataflowNode),
		Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_RadialVectorFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialVectorFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RadialVectorFieldDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRandomVectorFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRandomVectorFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RandomVectorFieldDataflowNode;
class UScriptStruct* FRandomVectorFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RandomVectorFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RandomVectorFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("RandomVectorFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_RandomVectorFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FRandomVectorFieldDataflowNode>()
{
	return FRandomVectorFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldVectorResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldVectorResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldVectorResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * RandomVector Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "RandomVector Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomVectorFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomVectorFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomVectorFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomVectorFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_Inner = { "FieldVectorResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult = { "FieldVectorResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomVectorFieldDataflowNode, FieldVectorResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomVectorFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRandomVectorFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"RandomVectorFieldDataflowNode",
		sizeof(FRandomVectorFieldDataflowNode),
		alignof(FRandomVectorFieldDataflowNode),
		Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_RandomVectorFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RandomVectorFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RandomVectorFieldDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNoiseFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FNoiseFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NoiseFieldDataflowNode;
class UScriptStruct* FNoiseFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NoiseFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NoiseFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("NoiseFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_NoiseFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FNoiseFieldDataflowNode>()
{
	return FNoiseFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Noise Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "Noise Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoiseFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MinRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseFieldDataflowNode, MinRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MinRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MinRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseFieldDataflowNode, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseFieldDataflowNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldFloatResult = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseFieldDataflowNode, FieldFloatResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldFloatResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"NoiseFieldDataflowNode",
		sizeof(FNoiseFieldDataflowNode),
		alignof(FNoiseFieldDataflowNode),
		Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoiseFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_NoiseFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NoiseFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NoiseFieldDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUniformIntegerFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUniformIntegerFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniformIntegerFieldDataflowNode;
class UScriptStruct* FUniformIntegerFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniformIntegerFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniformIntegerFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UniformIntegerFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_UniformIntegerFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUniformIntegerFieldDataflowNode>()
{
	return FUniformIntegerFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldIntResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldIntResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldIntResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * UniformInteger Field Dataflow node\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "UniformInteger Field Dataflow node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniformIntegerFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformIntegerFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformIntegerFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformIntegerFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldIntResult_Inner = { "FieldIntResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldIntResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldIntResult = { "FieldIntResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformIntegerFieldDataflowNode, FieldIntResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldIntResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldIntResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformIntegerFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformIntegerFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldIntResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldIntResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"UniformIntegerFieldDataflowNode",
		sizeof(FUniformIntegerFieldDataflowNode),
		alignof(FUniformIntegerFieldDataflowNode),
		Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_UniformIntegerFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniformIntegerFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UniformIntegerFieldDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowWaveFunctionType;
	static UEnum* EDataflowWaveFunctionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataflowWaveFunctionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataflowWaveFunctionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EDataflowWaveFunctionType"));
		}
		return Z_Registration_Info_UEnum_EDataflowWaveFunctionType.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowWaveFunctionType>()
	{
		return EDataflowWaveFunctionType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType_Statics::Enumerators[] = {
		{ "EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Cosine", (int64)EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Cosine },
		{ "EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Gaussian", (int64)EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Gaussian },
		{ "EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Falloff", (int64)EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Falloff },
		{ "EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Decay", (int64)EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Decay },
		{ "EDataflowWaveFunctionType::Dataflow_Max", (int64)EDataflowWaveFunctionType::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_Max.Comment", "/**\n *\n *\n *\n *///~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EDataflowWaveFunctionType::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "//256th entry" },
		{ "Dataflow_WaveFunctionType_Cosine.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_WaveFunctionType_Cosine.DisplayName", "Cosine" },
		{ "Dataflow_WaveFunctionType_Cosine.Name", "EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Cosine" },
		{ "Dataflow_WaveFunctionType_Cosine.ToolTip", "Cosine wave that will move in time." },
		{ "Dataflow_WaveFunctionType_Decay.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_WaveFunctionType_Decay.DisplayName", "Decay" },
		{ "Dataflow_WaveFunctionType_Decay.Name", "EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Decay" },
		{ "Dataflow_WaveFunctionType_Decay.ToolTip", "The magnitude of the field will decay in time." },
		{ "Dataflow_WaveFunctionType_Falloff.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_WaveFunctionType_Falloff.DisplayName", "Falloff" },
		{ "Dataflow_WaveFunctionType_Falloff.Name", "EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Falloff" },
		{ "Dataflow_WaveFunctionType_Falloff.ToolTip", "The radial falloff radius will move along temporal wave." },
		{ "Dataflow_WaveFunctionType_Gaussian.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_WaveFunctionType_Gaussian.DisplayName", "Gaussian" },
		{ "Dataflow_WaveFunctionType_Gaussian.Name", "EDataflowWaveFunctionType::Dataflow_WaveFunctionType_Gaussian" },
		{ "Dataflow_WaveFunctionType_Gaussian.ToolTip", "Gaussian wave that will move in time." },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EDataflowWaveFunctionType",
		"EDataflowWaveFunctionType",
		Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType()
	{
		if (!Z_Registration_Info_UEnum_EDataflowWaveFunctionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowWaveFunctionType.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataflowWaveFunctionType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWaveScalarFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FWaveScalarFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveScalarFieldDataflowNode;
class UScriptStruct* FWaveScalarFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveScalarFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveScalarFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("WaveScalarFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_WaveScalarFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FWaveScalarFieldDataflowNode>()
{
	return FWaveScalarFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wavelength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Wavelength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FunctionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FunctionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * WaveScalar Field Dataflow node v2\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "WaveScalar Field Dataflow node v2" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveScalarFieldDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SamplePositions_Inner = { "SamplePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SamplePositions = { "SamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, SamplePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, SampleIndices), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SampleIndices_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Wavelength_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Wavelength = { "Wavelength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, Wavelength), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Wavelength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Wavelength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, Period), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Period_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FunctionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FunctionType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FunctionType = { "FunctionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, FunctionType), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowWaveFunctionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FunctionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FunctionType_MetaData)) }; // 2471933488
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, FalloffType), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFieldFalloffType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FalloffType_MetaData)) }; // 1727979728
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, FieldFloatResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveScalarFieldDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SamplePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Wavelength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FunctionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FunctionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewProp_NumSamplePositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"WaveScalarFieldDataflowNode",
		sizeof(FWaveScalarFieldDataflowNode),
		alignof(FWaveScalarFieldDataflowNode),
		Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveScalarFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveScalarFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveScalarFieldDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowFloatFieldOperationType;
	static UEnum* EDataflowFloatFieldOperationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataflowFloatFieldOperationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataflowFloatFieldOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EDataflowFloatFieldOperationType"));
		}
		return Z_Registration_Info_UEnum_EDataflowFloatFieldOperationType.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowFloatFieldOperationType>()
	{
		return EDataflowFloatFieldOperationType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType_Statics::Enumerators[] = {
		{ "EDataflowFloatFieldOperationType::Dataflow_FloatFieldOperationType_Multiply", (int64)EDataflowFloatFieldOperationType::Dataflow_FloatFieldOperationType_Multiply },
		{ "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Divide", (int64)EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Divide },
		{ "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Add", (int64)EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Add },
		{ "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Substract", (int64)EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Substract },
		{ "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Min", (int64)EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Min },
		{ "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Max", (int64)EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Max },
		{ "EDataflowFloatFieldOperationType::Dataflow_Max", (int64)EDataflowFloatFieldOperationType::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_FloatFieldFalloffType_Add.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_FloatFieldFalloffType_Add.DisplayName", "Add" },
		{ "Dataflow_FloatFieldFalloffType_Add.Name", "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Add" },
		{ "Dataflow_FloatFieldFalloffType_Add.ToolTip", "Add the fields output values : Output = Left + Right" },
		{ "Dataflow_FloatFieldFalloffType_Divide.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_FloatFieldFalloffType_Divide.DisplayName", "Divide" },
		{ "Dataflow_FloatFieldFalloffType_Divide.Name", "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Divide" },
		{ "Dataflow_FloatFieldFalloffType_Divide.ToolTip", "Divide the fields output values : Output = Left / Right" },
		{ "Dataflow_FloatFieldFalloffType_Max.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_FloatFieldFalloffType_Max.DisplayName", "Max" },
		{ "Dataflow_FloatFieldFalloffType_Max.Name", "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Max" },
		{ "Dataflow_FloatFieldFalloffType_Max.ToolTip", "Max of the fields output values: Output = Max(Left, Right)" },
		{ "Dataflow_FloatFieldFalloffType_Min.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_FloatFieldFalloffType_Min.DisplayName", "Min" },
		{ "Dataflow_FloatFieldFalloffType_Min.Name", "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Min" },
		{ "Dataflow_FloatFieldFalloffType_Min.ToolTip", "Min of the fields output values: Output = Min(Left, Right)" },
		{ "Dataflow_FloatFieldFalloffType_Substract.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_FloatFieldFalloffType_Substract.DisplayName", "Subtract" },
		{ "Dataflow_FloatFieldFalloffType_Substract.Name", "EDataflowFloatFieldOperationType::Dataflow_FloatFieldFalloffType_Substract" },
		{ "Dataflow_FloatFieldFalloffType_Substract.ToolTip", "Subtract the fields output : Output = Left - Right" },
		{ "Dataflow_FloatFieldOperationType_Multiply.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_FloatFieldOperationType_Multiply.DisplayName", "Multiply" },
		{ "Dataflow_FloatFieldOperationType_Multiply.Name", "EDataflowFloatFieldOperationType::Dataflow_FloatFieldOperationType_Multiply" },
		{ "Dataflow_FloatFieldOperationType_Multiply.ToolTip", "Multiply the fields output values : Output = Left * Right" },
		{ "Dataflow_Max.Comment", "/**\n *\n *\n *\n *///~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EDataflowFloatFieldOperationType::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "//256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EDataflowFloatFieldOperationType",
		"EDataflowFloatFieldOperationType",
		Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType()
	{
		if (!Z_Registration_Info_UEnum_EDataflowFloatFieldOperationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowFloatFieldOperationType.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataflowFloatFieldOperationType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSumScalarFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSumScalarFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SumScalarFieldDataflowNode;
class UScriptStruct* FSumScalarFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SumScalarFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SumScalarFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SumScalarFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SumScalarFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSumScalarFieldDataflowNode>()
{
	return FSumScalarFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatLeft_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatLeft_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatLeft;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemapLeft_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemapLeft_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemapLeft;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatRight_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatRight_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatRight;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemapRight_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemapRight_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemapRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwapInputs_MetaData[];
#endif
		static void NewProp_bSwapInputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwapInputs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSumScalarFieldDataflowNode>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatLeft_Inner = { "FieldFloatLeft", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatLeft_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatLeft = { "FieldFloatLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumScalarFieldDataflowNode, FieldFloatLeft), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatLeft_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapLeft_Inner = { "FieldRemapLeft", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapLeft_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapLeft = { "FieldRemapLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumScalarFieldDataflowNode, FieldRemapLeft), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapLeft_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatRight_Inner = { "FieldFloatRight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatRight_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatRight = { "FieldFloatRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumScalarFieldDataflowNode, FieldFloatRight), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatRight_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapRight_Inner = { "FieldRemapRight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapRight_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapRight = { "FieldRemapRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumScalarFieldDataflowNode, FieldRemapRight), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumScalarFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumScalarFieldDataflowNode, Operation), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowFloatFieldOperationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Operation_MetaData)) }; // 3188810660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_bSwapInputs_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_bSwapInputs_SetBit(void* Obj)
	{
		((FSumScalarFieldDataflowNode*)Obj)->bSwapInputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_bSwapInputs = { "bSwapInputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSumScalarFieldDataflowNode), &Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_bSwapInputs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_bSwapInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_bSwapInputs_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumScalarFieldDataflowNode, FieldFloatResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumScalarFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatLeft_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapLeft_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatRight_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapRight_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemapRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_bSwapInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldFloatResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewProp_FieldRemap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SumScalarFieldDataflowNode",
		sizeof(FSumScalarFieldDataflowNode),
		alignof(FSumScalarFieldDataflowNode),
		Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SumScalarFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SumScalarFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SumScalarFieldDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataflowVectorFieldOperationType;
	static UEnum* EDataflowVectorFieldOperationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataflowVectorFieldOperationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataflowVectorFieldOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EDataflowVectorFieldOperationType"));
		}
		return Z_Registration_Info_UEnum_EDataflowVectorFieldOperationType.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EDataflowVectorFieldOperationType>()
	{
		return EDataflowVectorFieldOperationType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType_Statics::Enumerators[] = {
		{ "EDataflowVectorFieldOperationType::Dataflow_VectorFieldOperationType_Multiply", (int64)EDataflowVectorFieldOperationType::Dataflow_VectorFieldOperationType_Multiply },
		{ "EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_Divide", (int64)EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_Divide },
		{ "EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_Add", (int64)EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_Add },
		{ "EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_Substract", (int64)EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_Substract },
		{ "EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_CrossProduct", (int64)EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_CrossProduct },
		{ "EDataflowVectorFieldOperationType::Dataflow_Max", (int64)EDataflowVectorFieldOperationType::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_Max.Comment", "/**\n *\n *\n *\n *///~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EDataflowVectorFieldOperationType::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "//256th entry" },
		{ "Dataflow_VectorFieldFalloffType_Add.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_VectorFieldFalloffType_Add.DisplayName", "Add" },
		{ "Dataflow_VectorFieldFalloffType_Add.Name", "EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_Add" },
		{ "Dataflow_VectorFieldFalloffType_Add.ToolTip", "Add the fields output values : Output = Left + Right" },
		{ "Dataflow_VectorFieldFalloffType_CrossProduct.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_VectorFieldFalloffType_CrossProduct.DisplayName", "Cross product" },
		{ "Dataflow_VectorFieldFalloffType_CrossProduct.Name", "EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_CrossProduct" },
		{ "Dataflow_VectorFieldFalloffType_CrossProduct.ToolTip", "Cross product of the fields output values: Output = Left x Right" },
		{ "Dataflow_VectorFieldFalloffType_Divide.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_VectorFieldFalloffType_Divide.DisplayName", "Divide" },
		{ "Dataflow_VectorFieldFalloffType_Divide.Name", "EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_Divide" },
		{ "Dataflow_VectorFieldFalloffType_Divide.ToolTip", "Divide the fields output values : Output = Left / Right" },
		{ "Dataflow_VectorFieldFalloffType_Substract.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_VectorFieldFalloffType_Substract.DisplayName", "Subtract" },
		{ "Dataflow_VectorFieldFalloffType_Substract.Name", "EDataflowVectorFieldOperationType::Dataflow_VectorFieldFalloffType_Substract" },
		{ "Dataflow_VectorFieldFalloffType_Substract.ToolTip", "Subtract the fields output : Output = Left - Right" },
		{ "Dataflow_VectorFieldOperationType_Multiply.Comment", "/**\n *\n *\n *\n */" },
		{ "Dataflow_VectorFieldOperationType_Multiply.DisplayName", "Multiply" },
		{ "Dataflow_VectorFieldOperationType_Multiply.Name", "EDataflowVectorFieldOperationType::Dataflow_VectorFieldOperationType_Multiply" },
		{ "Dataflow_VectorFieldOperationType_Multiply.ToolTip", "Multiply the fields output values : Output = Left * Right" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EDataflowVectorFieldOperationType",
		"EDataflowVectorFieldOperationType",
		Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType()
	{
		if (!Z_Registration_Info_UEnum_EDataflowVectorFieldOperationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataflowVectorFieldOperationType.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataflowVectorFieldOperationType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSumVectorFieldDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSumVectorFieldDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SumVectorFieldDataflowNode;
class UScriptStruct* FSumVectorFieldDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SumVectorFieldDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SumVectorFieldDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SumVectorFieldDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SumVectorFieldDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSumVectorFieldDataflowNode>()
{
	return FSumVectorFieldDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloat;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldFloatRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatRemap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldVectorLeft_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldVectorLeft_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldVectorLeft;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemapLeft_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemapLeft_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemapLeft;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldVectorRight_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldVectorRight_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldVectorRight;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemapRight_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemapRight_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemapRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwapVectorInputs_MetaData[];
#endif
		static void NewProp_bSwapVectorInputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwapVectorInputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldVectorResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldVectorResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldVectorResult;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n *\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSumVectorFieldDataflowNode>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloat_Inner = { "FieldFloat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloat_MetaData[] = {
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloat = { "FieldFloat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, FieldFloat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloat_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloatRemap_Inner = { "FieldFloatRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloatRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloatRemap = { "FieldFloatRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, FieldFloatRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloatRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloatRemap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorLeft_Inner = { "FieldVectorLeft", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorLeft_MetaData[] = {
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorLeft = { "FieldVectorLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, FieldVectorLeft), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorLeft_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapLeft_Inner = { "FieldRemapLeft", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapLeft_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapLeft = { "FieldRemapLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, FieldRemapLeft), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapLeft_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorRight_Inner = { "FieldVectorRight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorRight_MetaData[] = {
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorRight = { "FieldVectorRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, FieldVectorRight), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorRight_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapRight_Inner = { "FieldRemapRight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapRight_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapRight = { "FieldRemapRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, FieldRemapRight), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, Operation), Z_Construct_UEnum_GeometryCollectionNodes_EDataflowVectorFieldOperationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Operation_MetaData)) }; // 477962761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_bSwapVectorInputs_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_bSwapVectorInputs_SetBit(void* Obj)
	{
		((FSumVectorFieldDataflowNode*)Obj)->bSwapVectorInputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_bSwapVectorInputs = { "bSwapVectorInputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSumVectorFieldDataflowNode), &Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_bSwapVectorInputs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_bSwapVectorInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_bSwapVectorInputs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_Inner = { "FieldVectorResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult = { "FieldVectorResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, FieldVectorResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSumVectorFieldDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloatRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldFloatRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorLeft_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapLeft_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorRight_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapRight_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemapRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_bSwapVectorInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldVectorResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewProp_FieldRemap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SumVectorFieldDataflowNode",
		sizeof(FSumVectorFieldDataflowNode),
		alignof(FSumVectorFieldDataflowNode),
		Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SumVectorFieldDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SumVectorFieldDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SumVectorFieldDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFieldMakeDenseFloatArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFieldMakeDenseFloatArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldMakeDenseFloatArrayDataflowNode;
class UScriptStruct* FFieldMakeDenseFloatArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldMakeDenseFloatArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldMakeDenseFloatArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("FieldMakeDenseFloatArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FieldMakeDenseFloatArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FFieldMakeDenseFloatArrayDataflowNode>()
{
	return FFieldMakeDenseFloatArrayDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatInput_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatInput_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatInput;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FieldRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplePositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldFloatResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFloatResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldFloatResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a sparse FloatArray (a selected subset of the whole incoming array) into a dense FloatArray\n * (same number of elements as the incoming array using NumSamplePositions) using the Remap input\n * NumSamplePositions controls the size of the output array, only indices smaller than l to than NumSamplePositions\n * will be processed\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
		{ "ToolTip", "Converts a sparse FloatArray (a selected subset of the whole incoming array) into a dense FloatArray\n(same number of elements as the incoming array using NumSamplePositions) using the Remap input\nNumSamplePositions controls the size of the output array, only indices smaller than l to than NumSamplePositions\nwill be processed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldMakeDenseFloatArrayDataflowNode>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatInput_Inner = { "FieldFloatInput", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatInput_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatInput = { "FieldFloatInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldMakeDenseFloatArrayDataflowNode, FieldFloatInput), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatInput_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldRemap_Inner = { "FieldRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldRemap_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldRemap = { "FieldRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldMakeDenseFloatArrayDataflowNode, FieldRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_NumSamplePositions_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Number of Sample Positions" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_NumSamplePositions = { "NumSamplePositions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldMakeDenseFloatArrayDataflowNode, NumSamplePositions), METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_NumSamplePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_NumSamplePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldMakeDenseFloatArrayDataflowNode, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatResult_Inner = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatResult_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFieldNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatResult = { "FieldFloatResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldMakeDenseFloatArrayDataflowNode, FieldFloatResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatResult_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatInput_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_NumSamplePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewProp_FieldFloatResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"FieldMakeDenseFloatArrayDataflowNode",
		sizeof(FFieldMakeDenseFloatArrayDataflowNode),
		alignof(FFieldMakeDenseFloatArrayDataflowNode),
		Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_FieldMakeDenseFloatArrayDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldMakeDenseFloatArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FieldMakeDenseFloatArrayDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFieldNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFieldNodes_h_Statics::EnumInfo[] = {
		{ EDataflowFieldFalloffType_StaticEnum, TEXT("EDataflowFieldFalloffType"), &Z_Registration_Info_UEnum_EDataflowFieldFalloffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1727979728U) },
		{ EDataflowSetMaskConditionType_StaticEnum, TEXT("EDataflowSetMaskConditionType"), &Z_Registration_Info_UEnum_EDataflowSetMaskConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1936589001U) },
		{ EDataflowWaveFunctionType_StaticEnum, TEXT("EDataflowWaveFunctionType"), &Z_Registration_Info_UEnum_EDataflowWaveFunctionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2471933488U) },
		{ EDataflowFloatFieldOperationType_StaticEnum, TEXT("EDataflowFloatFieldOperationType"), &Z_Registration_Info_UEnum_EDataflowFloatFieldOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3188810660U) },
		{ EDataflowVectorFieldOperationType_StaticEnum, TEXT("EDataflowVectorFieldOperationType"), &Z_Registration_Info_UEnum_EDataflowVectorFieldOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 477962761U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFieldNodes_h_Statics::ScriptStructInfo[] = {
		{ FRadialFalloffFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FRadialFalloffFieldDataflowNode_Statics::NewStructOps, TEXT("RadialFalloffFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_RadialFalloffFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialFalloffFieldDataflowNode), 3647940756U) },
		{ FBoxFalloffFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode_Statics::NewStructOps, TEXT("BoxFalloffFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_BoxFalloffFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxFalloffFieldDataflowNode), 832850579U) },
		{ FPlaneFalloffFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode_Statics::NewStructOps, TEXT("PlaneFalloffFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_PlaneFalloffFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneFalloffFieldDataflowNode), 2702004597U) },
		{ FRadialIntMaskFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FRadialIntMaskFieldDataflowNode_Statics::NewStructOps, TEXT("RadialIntMaskFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_RadialIntMaskFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialIntMaskFieldDataflowNode), 3887623581U) },
		{ FUniformScalarFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FUniformScalarFieldDataflowNode_Statics::NewStructOps, TEXT("UniformScalarFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_UniformScalarFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniformScalarFieldDataflowNode), 4129452570U) },
		{ FUniformVectorFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FUniformVectorFieldDataflowNode_Statics::NewStructOps, TEXT("UniformVectorFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_UniformVectorFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniformVectorFieldDataflowNode), 714605160U) },
		{ FRadialVectorFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FRadialVectorFieldDataflowNode_Statics::NewStructOps, TEXT("RadialVectorFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_RadialVectorFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialVectorFieldDataflowNode), 3824625707U) },
		{ FRandomVectorFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FRandomVectorFieldDataflowNode_Statics::NewStructOps, TEXT("RandomVectorFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_RandomVectorFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRandomVectorFieldDataflowNode), 876656198U) },
		{ FNoiseFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FNoiseFieldDataflowNode_Statics::NewStructOps, TEXT("NoiseFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_NoiseFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNoiseFieldDataflowNode), 521718230U) },
		{ FUniformIntegerFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FUniformIntegerFieldDataflowNode_Statics::NewStructOps, TEXT("UniformIntegerFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_UniformIntegerFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniformIntegerFieldDataflowNode), 1068762984U) },
		{ FWaveScalarFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FWaveScalarFieldDataflowNode_Statics::NewStructOps, TEXT("WaveScalarFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_WaveScalarFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveScalarFieldDataflowNode), 3977382931U) },
		{ FSumScalarFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode_Statics::NewStructOps, TEXT("SumScalarFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_SumScalarFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSumScalarFieldDataflowNode), 201150634U) },
		{ FSumVectorFieldDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSumVectorFieldDataflowNode_Statics::NewStructOps, TEXT("SumVectorFieldDataflowNode"), &Z_Registration_Info_UScriptStruct_SumVectorFieldDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSumVectorFieldDataflowNode), 2280320647U) },
		{ FFieldMakeDenseFloatArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode_Statics::NewStructOps, TEXT("FieldMakeDenseFloatArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_FieldMakeDenseFloatArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldMakeDenseFloatArrayDataflowNode), 3113270291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFieldNodes_h_218627658(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFieldNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFieldNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFieldNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFieldNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
