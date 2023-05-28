// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConvertToPolygonsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvertToPolygonsTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertToPolygonsToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOutputPolygroupLayerProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOutputPolygroupLayerProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UConvertToPolygonsToolBuilder::StaticRegisterNativesUConvertToPolygonsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertToPolygonsToolBuilder);
	UClass* Z_Construct_UClass_UConvertToPolygonsToolBuilder_NoRegister()
	{
		return UConvertToPolygonsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertToPolygonsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::ClassParams = {
		&UConvertToPolygonsToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConvertToPolygonsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.OuterSingleton, Z_Construct_UClass_UConvertToPolygonsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertToPolygonsToolBuilder>()
	{
		return UConvertToPolygonsToolBuilder::StaticClass();
	}
	UConvertToPolygonsToolBuilder::UConvertToPolygonsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertToPolygonsToolBuilder);
	UConvertToPolygonsToolBuilder::~UConvertToPolygonsToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConvertToPolygonsMode;
	static UEnum* EConvertToPolygonsMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EConvertToPolygonsMode"));
		}
		return Z_Registration_Info_UEnum_EConvertToPolygonsMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EConvertToPolygonsMode>()
	{
		return EConvertToPolygonsMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enumerators[] = {
		{ "EConvertToPolygonsMode::FaceNormalDeviation", (int64)EConvertToPolygonsMode::FaceNormalDeviation },
		{ "EConvertToPolygonsMode::FindPolygons", (int64)EConvertToPolygonsMode::FindPolygons },
		{ "EConvertToPolygonsMode::FromUVIslands", (int64)EConvertToPolygonsMode::FromUVIslands },
		{ "EConvertToPolygonsMode::FromNormalSeams", (int64)EConvertToPolygonsMode::FromNormalSeams },
		{ "EConvertToPolygonsMode::FromConnectedTris", (int64)EConvertToPolygonsMode::FromConnectedTris },
		{ "EConvertToPolygonsMode::FromFurthestPointSampling", (int64)EConvertToPolygonsMode::FromFurthestPointSampling },
		{ "EConvertToPolygonsMode::CopyFromLayer", (int64)EConvertToPolygonsMode::CopyFromLayer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enum_MetaDataParams[] = {
		{ "CopyFromLayer.Comment", "/** Copy from existing Polygroup Layer */" },
		{ "CopyFromLayer.DisplayName", "Copy From Layer" },
		{ "CopyFromLayer.Name", "EConvertToPolygonsMode::CopyFromLayer" },
		{ "CopyFromLayer.ToolTip", "Copy from existing Polygroup Layer" },
		{ "FaceNormalDeviation.Comment", "/** Convert based on Angle Tolerance between Face Normals */" },
		{ "FaceNormalDeviation.DisplayName", "Face Normal Deviation" },
		{ "FaceNormalDeviation.Name", "EConvertToPolygonsMode::FaceNormalDeviation" },
		{ "FaceNormalDeviation.ToolTip", "Convert based on Angle Tolerance between Face Normals" },
		{ "FindPolygons.Comment", "/** Create Polygroups by merging triangle pairs into Quads */" },
		{ "FindPolygons.DisplayName", "Find Quads" },
		{ "FindPolygons.Name", "EConvertToPolygonsMode::FindPolygons" },
		{ "FindPolygons.ToolTip", "Create Polygroups by merging triangle pairs into Quads" },
		{ "FromConnectedTris.Comment", "/** Create Polygroups based on Connected Triangles */" },
		{ "FromConnectedTris.DisplayName", "From Connected Tris" },
		{ "FromConnectedTris.Name", "EConvertToPolygonsMode::FromConnectedTris" },
		{ "FromConnectedTris.ToolTip", "Create Polygroups based on Connected Triangles" },
		{ "FromFurthestPointSampling.Comment", "/** Create Polygroups centered on well-spaced sample points, approximating a surface Voronoi diagram */" },
		{ "FromFurthestPointSampling.DisplayName", "Furthest Point Sampling" },
		{ "FromFurthestPointSampling.Name", "EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "FromFurthestPointSampling.ToolTip", "Create Polygroups centered on well-spaced sample points, approximating a surface Voronoi diagram" },
		{ "FromNormalSeams.Comment", "/** Create PolyGroups based on Hard Normal Seams */" },
		{ "FromNormalSeams.DisplayName", "From Hard Normal Seams" },
		{ "FromNormalSeams.Name", "EConvertToPolygonsMode::FromNormalSeams" },
		{ "FromNormalSeams.ToolTip", "Create PolyGroups based on Hard Normal Seams" },
		{ "FromUVIslands.Comment", "/** Create PolyGroups based on UV Islands */" },
		{ "FromUVIslands.DisplayName", "From UV Islands" },
		{ "FromUVIslands.Name", "EConvertToPolygonsMode::FromUVIslands" },
		{ "FromUVIslands.ToolTip", "Create PolyGroups based on UV Islands" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EConvertToPolygonsMode",
		"EConvertToPolygonsMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode()
	{
		if (!Z_Registration_Info_UEnum_EConvertToPolygonsMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConvertToPolygonsMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConvertToPolygonsMode.InnerSingleton;
	}
	void UConvertToPolygonsToolProperties::StaticRegisterNativesUConvertToPolygonsToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertToPolygonsToolProperties);
	UClass* Z_Construct_UClass_UConvertToPolygonsToolProperties_NoRegister()
	{
		return UConvertToPolygonsToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConversionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConversionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitExisting_MetaData[];
#endif
		static void NewProp_bSplitExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitExisting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalWeighted_MetaData[];
#endif
		static void NewProp_bNormalWeighted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalWeighted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalWeighting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalWeighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadAdjacencyWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuadAdjacencyWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadMetricClamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuadMetricClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadSearchRounds_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuadSearchRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRespectUVSeams_MetaData[];
#endif
		static void NewProp_bRespectUVSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectUVSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRespectHardNormals_MetaData[];
#endif
		static void NewProp_bRespectHardNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectHardNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGroupSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinGroupSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateNormals_MetaData[];
#endif
		static void NewProp_bCalculateNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGroupColors_MetaData[];
#endif
		static void NewProp_bShowGroupColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGroupColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode_MetaData[] = {
		{ "Category", "PolyGroups" },
		{ "Comment", "/** Strategy to use to group triangles */" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Strategy to use to group triangles" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode = { "ConversionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsToolProperties, ConversionMode), Z_Construct_UEnum_MeshModelingToolsExp_EConvertToPolygonsMode, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode_MetaData)) }; // 2140291588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_AngleTolerance_MetaData[] = {
		{ "Category", "NormalDeviation" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Tolerance for planarity */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FaceNormalDeviation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Tolerance for planarity" },
		{ "UIMax", "60.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_AngleTolerance = { "AngleTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsToolProperties, AngleTolerance), METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_AngleTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_AngleTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NumPoints_MetaData[] = {
		{ "Category", "FurthestPoint" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Furthest-Point Sample count, approximately this number of polygroups will be generated */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Furthest-Point Sample count, approximately this number of polygroups will be generated" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsToolProperties, NumPoints), METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NumPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NumPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting_MetaData[] = {
		{ "Category", "FurthestPoint" },
		{ "Comment", "/** If enabled, then furthest-point sampling happens with respect to existing Polygroups, ie the existing groups are further subdivided */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If enabled, then furthest-point sampling happens with respect to existing Polygroups, ie the existing groups are further subdivided" },
	};
#endif
	void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting_SetBit(void* Obj)
	{
		((UConvertToPolygonsToolProperties*)Obj)->bSplitExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting = { "bSplitExisting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted_MetaData[] = {
		{ "Category", "FurthestPoint" },
		{ "Comment", "/** If true, region-growing in Sampling modes will be controlled by face normals, resulting in regions with borders that are more-aligned with curvature ridges */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If true, region-growing in Sampling modes will be controlled by face normals, resulting in regions with borders that are more-aligned with curvature ridges" },
	};
#endif
	void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted_SetBit(void* Obj)
	{
		((UConvertToPolygonsToolProperties*)Obj)->bNormalWeighted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted = { "bNormalWeighted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NormalWeighting_MetaData[] = {
		{ "Category", "FurthestPoint" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** This parameter modulates the effect of normal weighting during region-growing */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FromFurthestPointSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "This parameter modulates the effect of normal weighting during region-growing" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NormalWeighting = { "NormalWeighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsToolProperties, NormalWeighting), METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NormalWeighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NormalWeighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadAdjacencyWeight_MetaData[] = {
		{ "Category", "FindQuads" },
		{ "Comment", "/** Bias for Quads that are adjacent to already-discovered Quads. Set to 0 to disable.  */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Bias for Quads that are adjacent to already-discovered Quads. Set to 0 to disable." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadAdjacencyWeight = { "QuadAdjacencyWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsToolProperties, QuadAdjacencyWeight), METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadAdjacencyWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadAdjacencyWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadMetricClamp_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "FindQuads" },
		{ "Comment", "/** Set to values below 1 to ignore less-likely triangle pairings */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Set to values below 1 to ignore less-likely triangle pairings" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadMetricClamp = { "QuadMetricClamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsToolProperties, QuadMetricClamp), METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadMetricClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadMetricClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadSearchRounds_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "FindQuads" },
		{ "Comment", "/** Iteratively repeat quad-searching in uncertain areas, to try to slightly improve results */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Iteratively repeat quad-searching in uncertain areas, to try to slightly improve results" },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadSearchRounds = { "QuadSearchRounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsToolProperties, QuadSearchRounds), METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadSearchRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadSearchRounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams_MetaData[] = {
		{ "Category", "Topology" },
		{ "Comment", "/** If true, polygroup borders will not cross existing UV seams */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FaceNormalDeviation || ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If true, polygroup borders will not cross existing UV seams" },
	};
#endif
	void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams_SetBit(void* Obj)
	{
		((UConvertToPolygonsToolProperties*)Obj)->bRespectUVSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams = { "bRespectUVSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals_MetaData[] = {
		{ "Category", "Topology" },
		{ "Comment", "/** If true, polygroup borders will not cross existing hard normal seams */" },
		{ "EditCondition", "ConversionMode == EConvertToPolygonsMode::FaceNormalDeviation || ConversionMode == EConvertToPolygonsMode::FindPolygons" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If true, polygroup borders will not cross existing hard normal seams" },
	};
#endif
	void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals_SetBit(void* Obj)
	{
		((UConvertToPolygonsToolProperties*)Obj)->bRespectHardNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals = { "bRespectHardNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_MinGroupSize_MetaData[] = {
		{ "Category", "Filtering" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** group filtering */" },
		{ "EditCondition", "ConversionMode != EConvertToPolygonsMode::CopyFromLayer" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "group filtering" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_MinGroupSize = { "MinGroupSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsToolProperties, MinGroupSize), METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_MinGroupSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_MinGroupSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** If true, normals are recomputed per-group, with hard edges at group boundaries */" },
		{ "EditCondition", "ConversionMode != EConvertToPolygonsMode::CopyFromLayer" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "If true, normals are recomputed per-group, with hard edges at group boundaries" },
	};
#endif
	void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals_SetBit(void* Obj)
	{
		((UConvertToPolygonsToolProperties*)Obj)->bCalculateNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals = { "bCalculateNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Display each group with a different auto-generated color */" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Display each group with a different auto-generated color" },
	};
#endif
	void Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors_SetBit(void* Obj)
	{
		((UConvertToPolygonsToolProperties*)Obj)->bShowGroupColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors = { "bShowGroupColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConvertToPolygonsToolProperties), &Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_ConversionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_AngleTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bSplitExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bNormalWeighted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_NormalWeighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadAdjacencyWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadMetricClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_QuadSearchRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectUVSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bRespectHardNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_MinGroupSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bCalculateNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::NewProp_bShowGroupColors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertToPolygonsToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::ClassParams = {
		&UConvertToPolygonsToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConvertToPolygonsToolProperties()
	{
		if (!Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.OuterSingleton, Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertToPolygonsToolProperties>()
	{
		return UConvertToPolygonsToolProperties::StaticClass();
	}
	UConvertToPolygonsToolProperties::UConvertToPolygonsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertToPolygonsToolProperties);
	UConvertToPolygonsToolProperties::~UConvertToPolygonsToolProperties() {}
	DEFINE_FUNCTION(UOutputPolygroupLayerProperties::execGetGroupOptionsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetGroupOptionsList();
		P_NATIVE_END;
	}
	void UOutputPolygroupLayerProperties::StaticRegisterNativesUOutputPolygroupLayerProperties()
	{
		UClass* Class = UOutputPolygroupLayerProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroupOptionsList", &UOutputPolygroupLayerProperties::execGetGroupOptionsList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics
	{
		struct OutputPolygroupLayerProperties_eventGetGroupOptionsList_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OutputPolygroupLayerProperties_eventGetGroupOptionsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Provides set of available group layers\n" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "Provides set of available group layers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOutputPolygroupLayerProperties, nullptr, "GetGroupOptionsList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::OutputPolygroupLayerProperties_eventGetGroupOptionsList_Parms), Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOutputPolygroupLayerProperties);
	UClass* Z_Construct_UClass_UOutputPolygroupLayerProperties_NoRegister()
	{
		return UOutputPolygroupLayerProperties::StaticClass();
	}
	struct Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupLayer_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionsList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionsList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionsList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNewLayerName_MetaData[];
#endif
		static void NewProp_bShowNewLayerName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNewLayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewLayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOutputPolygroupLayerProperties_GetGroupOptionsList, "GetGroupOptionsList" }, // 1796760484
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_GroupLayer_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Select PolyGroup layer to use. */" },
		{ "DisplayName", "Output Layer" },
		{ "GetOptions", "GetGroupOptionsList" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Select PolyGroup layer to use." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOutputPolygroupLayerProperties, GroupLayer), METADATA_PARAMS(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_GroupLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_GroupLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList_Inner = { "OptionsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList_MetaData[] = {
		{ "Comment", "// internal list used to implement above\n" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "ToolTip", "internal list used to implement above" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList = { "OptionsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOutputPolygroupLayerProperties, OptionsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName_SetBit(void* Obj)
	{
		((UOutputPolygroupLayerProperties*)Obj)->bShowNewLayerName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName = { "bShowNewLayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOutputPolygroupLayerProperties), &Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_NewLayerName_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Name of the new Group Layer */" },
		{ "DisplayName", "New Layer Name" },
		{ "EditCondition", "bShowNewLayerName" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Name of the new Group Layer" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_NewLayerName = { "NewLayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOutputPolygroupLayerProperties, NewLayerName), METADATA_PARAMS(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_NewLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_NewLayerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_OptionsList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_bShowNewLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::NewProp_NewLayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutputPolygroupLayerProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::ClassParams = {
		&UOutputPolygroupLayerProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOutputPolygroupLayerProperties()
	{
		if (!Z_Registration_Info_UClass_UOutputPolygroupLayerProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutputPolygroupLayerProperties.OuterSingleton, Z_Construct_UClass_UOutputPolygroupLayerProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOutputPolygroupLayerProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOutputPolygroupLayerProperties>()
	{
		return UOutputPolygroupLayerProperties::StaticClass();
	}
	UOutputPolygroupLayerProperties::UOutputPolygroupLayerProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOutputPolygroupLayerProperties);
	UOutputPolygroupLayerProperties::~UOutputPolygroupLayerProperties() {}
	void UConvertToPolygonsOperatorFactory::StaticRegisterNativesUConvertToPolygonsOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertToPolygonsOperatorFactory);
	UClass* Z_Construct_UClass_UConvertToPolygonsOperatorFactory_NoRegister()
	{
		return UConvertToPolygonsOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvertToPolygonsTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConvertToPolygonsTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::NewProp_ConvertToPolygonsTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::NewProp_ConvertToPolygonsTool = { "ConvertToPolygonsTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsOperatorFactory, ConvertToPolygonsTool), Z_Construct_UClass_UConvertToPolygonsTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::NewProp_ConvertToPolygonsTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::NewProp_ConvertToPolygonsTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::NewProp_ConvertToPolygonsTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertToPolygonsOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::ClassParams = {
		&UConvertToPolygonsOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConvertToPolygonsOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.OuterSingleton, Z_Construct_UClass_UConvertToPolygonsOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertToPolygonsOperatorFactory>()
	{
		return UConvertToPolygonsOperatorFactory::StaticClass();
	}
	UConvertToPolygonsOperatorFactory::UConvertToPolygonsOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertToPolygonsOperatorFactory);
	UConvertToPolygonsOperatorFactory::~UConvertToPolygonsOperatorFactory() {}
	void UConvertToPolygonsTool::StaticRegisterNativesUConvertToPolygonsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertToPolygonsTool);
	UClass* Z_Construct_UClass_UConvertToPolygonsTool_NoRegister()
	{
		return UConvertToPolygonsTool::StaticClass();
	}
	struct Z_Construct_UClass_UConvertToPolygonsTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyFromLayerProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CopyFromLayerProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCompute_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewCompute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvertToPolygonsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ConvertToPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsTool, Settings), Z_Construct_UClass_UConvertToPolygonsToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_CopyFromLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_CopyFromLayerProperties = { "CopyFromLayerProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsTool, CopyFromLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_CopyFromLayerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_CopyFromLayerProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_OutputProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_OutputProperties = { "OutputProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsTool, OutputProperties), Z_Construct_UClass_UOutputPolygroupLayerProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_OutputProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_OutputProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewCompute = { "PreviewCompute", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsTool, PreviewCompute), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewCompute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewCompute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertToPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertToPolygonsTool, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertToPolygonsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_CopyFromLayerProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_OutputProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewCompute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertToPolygonsTool_Statics::NewProp_PreviewGeometry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvertToPolygonsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertToPolygonsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertToPolygonsTool_Statics::ClassParams = {
		&UConvertToPolygonsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConvertToPolygonsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UConvertToPolygonsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToPolygonsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConvertToPolygonsTool()
	{
		if (!Z_Registration_Info_UClass_UConvertToPolygonsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertToPolygonsTool.OuterSingleton, Z_Construct_UClass_UConvertToPolygonsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConvertToPolygonsTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertToPolygonsTool>()
	{
		return UConvertToPolygonsTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertToPolygonsTool);
	UConvertToPolygonsTool::~UConvertToPolygonsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::EnumInfo[] = {
		{ EConvertToPolygonsMode_StaticEnum, TEXT("EConvertToPolygonsMode"), &Z_Registration_Info_UEnum_EConvertToPolygonsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2140291588U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConvertToPolygonsToolBuilder, UConvertToPolygonsToolBuilder::StaticClass, TEXT("UConvertToPolygonsToolBuilder"), &Z_Registration_Info_UClass_UConvertToPolygonsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertToPolygonsToolBuilder), 57144447U) },
		{ Z_Construct_UClass_UConvertToPolygonsToolProperties, UConvertToPolygonsToolProperties::StaticClass, TEXT("UConvertToPolygonsToolProperties"), &Z_Registration_Info_UClass_UConvertToPolygonsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertToPolygonsToolProperties), 3729921575U) },
		{ Z_Construct_UClass_UOutputPolygroupLayerProperties, UOutputPolygroupLayerProperties::StaticClass, TEXT("UOutputPolygroupLayerProperties"), &Z_Registration_Info_UClass_UOutputPolygroupLayerProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutputPolygroupLayerProperties), 3117189835U) },
		{ Z_Construct_UClass_UConvertToPolygonsOperatorFactory, UConvertToPolygonsOperatorFactory::StaticClass, TEXT("UConvertToPolygonsOperatorFactory"), &Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertToPolygonsOperatorFactory), 442344912U) },
		{ Z_Construct_UClass_UConvertToPolygonsTool, UConvertToPolygonsTool::StaticClass, TEXT("UConvertToPolygonsTool"), &Z_Registration_Info_UClass_UConvertToPolygonsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertToPolygonsTool), 1101561682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_1046149034(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertToPolygonsTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
