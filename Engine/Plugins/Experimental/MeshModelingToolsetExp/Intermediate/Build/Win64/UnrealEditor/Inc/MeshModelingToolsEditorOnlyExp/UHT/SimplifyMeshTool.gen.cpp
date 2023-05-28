// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplifyMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplifyMeshTool() {}
// Cross Module References
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USimplifyMeshTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USimplifyMeshTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USimplifyMeshToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USimplifyMeshToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USimplifyMeshToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USimplifyMeshToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshConstraintProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType();
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void USimplifyMeshToolBuilder::StaticRegisterNativesUSimplifyMeshToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplifyMeshToolBuilder);
	UClass* Z_Construct_UClass_USimplifyMeshToolBuilder_NoRegister()
	{
		return USimplifyMeshToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USimplifyMeshToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplifyMeshToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SimplifyMeshTool.h" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplifyMeshToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplifyMeshToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplifyMeshToolBuilder_Statics::ClassParams = {
		&USimplifyMeshToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplifyMeshToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USimplifyMeshToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplifyMeshToolBuilder.OuterSingleton, Z_Construct_UClass_USimplifyMeshToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimplifyMeshToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<USimplifyMeshToolBuilder>()
	{
		return USimplifyMeshToolBuilder::StaticClass();
	}
	USimplifyMeshToolBuilder::USimplifyMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplifyMeshToolBuilder);
	USimplifyMeshToolBuilder::~USimplifyMeshToolBuilder() {}
	void USimplifyMeshToolProperties::StaticRegisterNativesUSimplifyMeshToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplifyMeshToolProperties);
	UClass* Z_Construct_UClass_USimplifyMeshToolProperties_NoRegister()
	{
		return USimplifyMeshToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_USimplifyMeshToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimplifierType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifierType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimplifierType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEdgeLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetEdgeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetTriangleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVertexCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetVertexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimalAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimalAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyEdgeAngleTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PolyEdgeAngleTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardAttributes_MetaData[];
#endif
		static void NewProp_bDiscardAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGeometricConstraint_MetaData[];
#endif
		static void NewProp_bGeometricConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeometricConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometricTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GeometricTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGroupColors_MetaData[];
#endif
		static void NewProp_bShowGroupColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGroupColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReproject_MetaData[];
#endif
		static void NewProp_bReproject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReproject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplifyMeshToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshConstraintProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Simplify operation\n */" },
		{ "IncludePath", "SimplifyMeshTool.h" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Standard properties of the Simplify operation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_SimplifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_SimplifierType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Simplification Scheme  */" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Simplification Scheme" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_SimplifierType = { "SimplifierType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshToolProperties, SimplifierType), Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_SimplifierType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_SimplifierType_MetaData)) }; // 3173694660
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Simplification Target Type  */" },
		{ "EditCondition", "SimplifierType != ESimplifyType::MinimalPlanar && SimplifierType != ESimplifyType::MinimalPolygroup" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Simplification Target Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetMode = { "TargetMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshToolProperties, TargetMode), Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetMode_MetaData)) }; // 303187214
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetPercentage_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Target percentage of original triangle count */" },
		{ "EditCondition", "SimplifierType != ESimplifyType::MinimalPolygroup && SimplifierType != ESimplifyType::MinimalPlanar && TargetMode == ESimplifyTargetType::Percentage" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Target percentage of original triangle count" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetPercentage = { "TargetPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshToolProperties, TargetPercentage), METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetEdgeLength_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Target edge length */" },
		{ "EditCondition", "TargetMode == ESimplifyTargetType::EdgeLength && SimplifierType != ESimplifyType::UEStandard && SimplifierType != ESimplifyType::MinimalPlanar && SimplifierType != ESimplifyType::MinimalPolygroup" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Target edge length" },
		{ "UIMax", "10.0" },
		{ "UIMin", "3.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetEdgeLength = { "TargetEdgeLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshToolProperties, TargetEdgeLength), METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetEdgeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetTriangleCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "9999999999" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Target triangle count */" },
		{ "EditCondition", "TargetMode == ESimplifyTargetType::TriangleCount && SimplifierType != ESimplifyType::MinimalPlanar && SimplifierType != ESimplifyType::MinimalPolygroup" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Target triangle count" },
		{ "UIMax", "10000" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetTriangleCount = { "TargetTriangleCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshToolProperties, TargetTriangleCount), METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetTriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetTriangleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetVertexCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "9999999999" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Target vertex count */" },
		{ "EditCondition", "TargetMode == ESimplifyTargetType::VertexCount && SimplifierType != ESimplifyType::MinimalPlanar" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Target vertex count" },
		{ "UIMax", "10000" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetVertexCount = { "TargetVertexCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshToolProperties, TargetVertexCount), METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetVertexCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetVertexCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_MinimalAngleThreshold_MetaData[] = {
		{ "Comment", "/** Angle threshold in degrees used for testing if two triangles should be considered coplanar, or two lines collinear */" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Angle threshold in degrees used for testing if two triangles should be considered coplanar, or two lines collinear" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_MinimalAngleThreshold = { "MinimalAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshToolProperties, MinimalAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_MinimalAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_MinimalAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_PolyEdgeAngleTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold angle change (in degrees) along a polygroup edge, above which a vertex must be added */" },
		{ "EditCondition", "SimplifierType == ESimplifyType::MinimalPolygroup" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Threshold angle change (in degrees) along a polygroup edge, above which a vertex must be added" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_PolyEdgeAngleTolerance = { "PolyEdgeAngleTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshToolProperties, PolyEdgeAngleTolerance), METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_PolyEdgeAngleTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_PolyEdgeAngleTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bDiscardAttributes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Discard UVs and existing normals, allowing the simplifier to ignore any UV and normal seams. New per-vertex normals are computed. */" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Discard UVs and existing normals, allowing the simplifier to ignore any UV and normal seams. New per-vertex normals are computed." },
	};
#endif
	void Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bDiscardAttributes_SetBit(void* Obj)
	{
		((USimplifyMeshToolProperties*)Obj)->bDiscardAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bDiscardAttributes = { "bDiscardAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USimplifyMeshToolProperties), &Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bDiscardAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bDiscardAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bDiscardAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bGeometricConstraint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, then simplification will consider geometric deviation with the input mesh  */" },
		{ "EditCondition", "SimplifierType != ESimplifyType::MinimalPolygroup" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "If true, then simplification will consider geometric deviation with the input mesh" },
	};
#endif
	void Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bGeometricConstraint_SetBit(void* Obj)
	{
		((USimplifyMeshToolProperties*)Obj)->bGeometricConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bGeometricConstraint = { "bGeometricConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USimplifyMeshToolProperties), &Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bGeometricConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bGeometricConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bGeometricConstraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_GeometricTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "10000000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Geometric deviation tolerance used when bGeometricConstraint is enabled, to limit the geometric deviation between the simplified and original meshes */" },
		{ "EditCondition", "bGeometricConstraint && SimplifierType != ESimplifyType::UEStandard && SimplifierType != ESimplifyType::MinimalPolygroup" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Geometric deviation tolerance used when bGeometricConstraint is enabled, to limit the geometric deviation between the simplified and original meshes" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_GeometricTolerance = { "GeometricTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshToolProperties, GeometricTolerance), METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_GeometricTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_GeometricTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bShowGroupColors_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Display colors corresponding to the mesh's polygon groups */" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Display colors corresponding to the mesh's polygon groups" },
	};
#endif
	void Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bShowGroupColors_SetBit(void* Obj)
	{
		((USimplifyMeshToolProperties*)Obj)->bShowGroupColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bShowGroupColors = { "bShowGroupColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USimplifyMeshToolProperties), &Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bShowGroupColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bShowGroupColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bShowGroupColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bReproject_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Enable projection back to input mesh */" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Enable projection back to input mesh" },
	};
#endif
	void Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bReproject_SetBit(void* Obj)
	{
		((USimplifyMeshToolProperties*)Obj)->bReproject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bReproject = { "bReproject", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USimplifyMeshToolProperties), &Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bReproject_SetBit, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bReproject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bReproject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplifyMeshToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_SimplifierType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_SimplifierType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetEdgeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetTriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_TargetVertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_MinimalAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_PolyEdgeAngleTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bDiscardAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bGeometricConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_GeometricTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bShowGroupColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshToolProperties_Statics::NewProp_bReproject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplifyMeshToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplifyMeshToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplifyMeshToolProperties_Statics::ClassParams = {
		&USimplifyMeshToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplifyMeshToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplifyMeshToolProperties()
	{
		if (!Z_Registration_Info_UClass_USimplifyMeshToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplifyMeshToolProperties.OuterSingleton, Z_Construct_UClass_USimplifyMeshToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimplifyMeshToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<USimplifyMeshToolProperties>()
	{
		return USimplifyMeshToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplifyMeshToolProperties);
	USimplifyMeshToolProperties::~USimplifyMeshToolProperties() {}
	void USimplifyMeshTool::StaticRegisterNativesUSimplifyMeshTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplifyMeshTool);
	UClass* Z_Construct_UClass_USimplifyMeshTool_NoRegister()
	{
		return USimplifyMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_USimplifyMeshTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimplifyProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshStatisticsProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshStatisticsProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshElementsDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshElementsDisplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplifyMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Simplifying Tool\n */" },
		{ "IncludePath", "SimplifyMeshTool.h" },
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
		{ "ToolTip", "Simple Mesh Simplifying Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_SimplifyProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_SimplifyProperties = { "SimplifyProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshTool, SimplifyProperties), Z_Construct_UClass_USimplifyMeshToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_SimplifyProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_SimplifyProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshStatisticsProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshStatisticsProperties = { "MeshStatisticsProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshTool, MeshStatisticsProperties), Z_Construct_UClass_UMeshStatisticsProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshStatisticsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshStatisticsProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_Preview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshElementsDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimplifyMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshElementsDisplay = { "MeshElementsDisplay", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimplifyMeshTool, MeshElementsDisplay), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshElementsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshElementsDisplay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimplifyMeshTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_SimplifyProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshStatisticsProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimplifyMeshTool_Statics::NewProp_MeshElementsDisplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplifyMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplifyMeshTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplifyMeshTool_Statics::ClassParams = {
		&USimplifyMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimplifyMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USimplifyMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimplifyMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplifyMeshTool()
	{
		if (!Z_Registration_Info_UClass_USimplifyMeshTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplifyMeshTool.OuterSingleton, Z_Construct_UClass_USimplifyMeshTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimplifyMeshTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<USimplifyMeshTool>()
	{
		return USimplifyMeshTool::StaticClass();
	}
	USimplifyMeshTool::USimplifyMeshTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplifyMeshTool);
	USimplifyMeshTool::~USimplifyMeshTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SimplifyMeshTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SimplifyMeshTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimplifyMeshToolBuilder, USimplifyMeshToolBuilder::StaticClass, TEXT("USimplifyMeshToolBuilder"), &Z_Registration_Info_UClass_USimplifyMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplifyMeshToolBuilder), 3062025789U) },
		{ Z_Construct_UClass_USimplifyMeshToolProperties, USimplifyMeshToolProperties::StaticClass, TEXT("USimplifyMeshToolProperties"), &Z_Registration_Info_UClass_USimplifyMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplifyMeshToolProperties), 1763612861U) },
		{ Z_Construct_UClass_USimplifyMeshTool, USimplifyMeshTool::StaticClass, TEXT("USimplifyMeshTool"), &Z_Registration_Info_UClass_USimplifyMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplifyMeshTool), 544274835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SimplifyMeshTool_h_4284465862(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SimplifyMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_SimplifyMeshTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
