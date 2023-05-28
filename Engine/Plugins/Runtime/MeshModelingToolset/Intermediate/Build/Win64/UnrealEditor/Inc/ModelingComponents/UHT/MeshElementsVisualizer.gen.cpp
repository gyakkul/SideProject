// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drawing/MeshElementsVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshElementsVisualizer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizerProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizerProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshWireframeComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UMeshElementsVisualizerProperties::StaticRegisterNativesUMeshElementsVisualizerProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshElementsVisualizerProperties);
	UClass* Z_Construct_UClass_UMeshElementsVisualizerProperties_NoRegister()
	{
		return UMeshElementsVisualizerProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[];
#endif
		static void NewProp_bShowWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBorders_MetaData[];
#endif
		static void NewProp_bShowBorders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBorders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowUVSeams_MetaData[];
#endif
		static void NewProp_bShowUVSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUVSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNormalSeams_MetaData[];
#endif
		static void NewProp_bShowNormalSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNormalSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowColorSeams_MetaData[];
#endif
		static void NewProp_bShowColorSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowColorSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThicknessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryEdgeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryEdgeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSeamColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVSeamColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalSeamColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalSeamColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSeamColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSeamColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustDepthBiasUsingMeshSize_MetaData[];
#endif
		static void NewProp_bAdjustDepthBiasUsingMeshSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustDepthBiasUsingMeshSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visualization settings UMeshElementsVisualizer\n */" },
		{ "IncludePath", "Drawing/MeshElementsVisualizer.h" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Visualization settings UMeshElementsVisualizer" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should any be mesh elements be shown */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should any be mesh elements be shown" },
	};
#endif
	void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UMeshElementsVisualizerProperties*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh wireframe be shown */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh wireframe be shown" },
	};
#endif
	void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
	{
		((UMeshElementsVisualizerProperties*)Obj)->bShowWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh boundary edges be shown */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh boundary edges be shown" },
	};
#endif
	void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders_SetBit(void* Obj)
	{
		((UMeshElementsVisualizerProperties*)Obj)->bShowBorders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders = { "bShowBorders", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh uv seam edges be shown */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh uv seam edges be shown" },
	};
#endif
	void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams_SetBit(void* Obj)
	{
		((UMeshElementsVisualizerProperties*)Obj)->bShowUVSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams = { "bShowUVSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh normal seam edges be shown */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh normal seam edges be shown" },
	};
#endif
	void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams_SetBit(void* Obj)
	{
		((UMeshElementsVisualizerProperties*)Obj)->bShowNormalSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams = { "bShowNormalSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Should mesh color seam edges be shown */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Should mesh color seam edges be shown" },
	};
#endif
	void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams_SetBit(void* Obj)
	{
		((UMeshElementsVisualizerProperties*)Obj)->bShowColorSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams = { "bShowColorSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ThicknessScale_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** multiplier on edge thicknesses */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "multiplier on edge thicknesses" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ThicknessScale = { "ThicknessScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshElementsVisualizerProperties, ThicknessScale), METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ThicknessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ThicknessScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_WireframeColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh wireframe */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh wireframe" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshElementsVisualizerProperties, WireframeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_WireframeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_WireframeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_BoundaryEdgeColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh boundary edges */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh boundary edges" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_BoundaryEdgeColor = { "BoundaryEdgeColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshElementsVisualizerProperties, BoundaryEdgeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_BoundaryEdgeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_BoundaryEdgeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_UVSeamColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh UV seam edges */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh UV seam edges" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_UVSeamColor = { "UVSeamColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshElementsVisualizerProperties, UVSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_UVSeamColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_UVSeamColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_NormalSeamColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh normal seam edges */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh normal seam edges" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_NormalSeamColor = { "NormalSeamColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshElementsVisualizerProperties, NormalSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_NormalSeamColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_NormalSeamColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ColorSeamColor_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** Color of mesh color seam edges */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Color of mesh color seam edges" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ColorSeamColor = { "ColorSeamColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshElementsVisualizerProperties, ColorSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ColorSeamColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ColorSeamColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_DepthBias_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** depth bias used to slightly shift depth of lines */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "depth bias used to slightly shift depth of lines" },
		{ "UIMax", "2.000000" },
		{ "UIMin", "-2.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshElementsVisualizerProperties, DepthBias), METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_DepthBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_DepthBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize_MetaData[] = {
		{ "Category", "MeshElementVisualization" },
		{ "Comment", "/** If true, the depth bias will be adjusted depending on the diagonal length of the mesh bounding box (smaller for smaller meshes). */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "If true, the depth bias will be adjusted depending on the diagonal length of the mesh bounding box (smaller for smaller meshes)." },
	};
#endif
	void Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize_SetBit(void* Obj)
	{
		((UMeshElementsVisualizerProperties*)Obj)->bAdjustDepthBiasUsingMeshSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize = { "bAdjustDepthBiasUsingMeshSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshElementsVisualizerProperties), &Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowWireframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowBorders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowUVSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowNormalSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bShowColorSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ThicknessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_WireframeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_BoundaryEdgeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_UVSeamColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_NormalSeamColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_ColorSeamColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_DepthBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::NewProp_bAdjustDepthBiasUsingMeshSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshElementsVisualizerProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::ClassParams = {
		&UMeshElementsVisualizerProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshElementsVisualizerProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.OuterSingleton, Z_Construct_UClass_UMeshElementsVisualizerProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshElementsVisualizerProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshElementsVisualizerProperties>()
	{
		return UMeshElementsVisualizerProperties::StaticClass();
	}
	UMeshElementsVisualizerProperties::UMeshElementsVisualizerProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshElementsVisualizerProperties);
	UMeshElementsVisualizerProperties::~UMeshElementsVisualizerProperties() {}
	void UMeshElementsVisualizer::StaticRegisterNativesUMeshElementsVisualizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshElementsVisualizer);
	UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister()
	{
		return UMeshElementsVisualizer::StaticClass();
	}
	struct Z_Construct_UClass_UMeshElementsVisualizer_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WireframeComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshElementsVisualizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPreviewGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshElementsVisualizer is a subclass of UPreviewGeometry that displays mesh elements.\n * Currently supports wireframe, boundary edges, UV seams, Normal seams and Color seams.\n *\n * UMeshElementsVisualizer initializes an instance of UMeshElementsVisualizerProperties\n * as its .Settings value, and will watch for changes in these properties.\n *\n * Mesh is accessed via lambda callback provided by creator/client. See SetMeshAccessFunction() comments\n */" },
		{ "IncludePath", "Drawing/MeshElementsVisualizer.h" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "UMeshElementsVisualizer is a subclass of UPreviewGeometry that displays mesh elements.\nCurrently supports wireframe, boundary edges, UV seams, Normal seams and Color seams.\n\nUMeshElementsVisualizer initializes an instance of UMeshElementsVisualizerProperties\nas its .Settings value, and will watch for changes in these properties.\n\nMesh is accessed via lambda callback provided by creator/client. See SetMeshAccessFunction() comments" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/** Visualization settings */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Visualization settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshElementsVisualizer, Settings), Z_Construct_UClass_UMeshElementsVisualizerProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_WireframeComponent_MetaData[] = {
		{ "Comment", "/** Mesh Wireframe component, draws wireframe, boundaries, UV seams, normal seams, color seams */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Drawing/MeshElementsVisualizer.h" },
		{ "ToolTip", "Mesh Wireframe component, draws wireframe, boundaries, UV seams, normal seams, color seams" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_WireframeComponent = { "WireframeComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshElementsVisualizer, WireframeComponent), Z_Construct_UClass_UMeshWireframeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_WireframeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_WireframeComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshElementsVisualizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshElementsVisualizer_Statics::NewProp_WireframeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshElementsVisualizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshElementsVisualizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshElementsVisualizer_Statics::ClassParams = {
		&UMeshElementsVisualizer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshElementsVisualizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizer_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshElementsVisualizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshElementsVisualizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshElementsVisualizer()
	{
		if (!Z_Registration_Info_UClass_UMeshElementsVisualizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshElementsVisualizer.OuterSingleton, Z_Construct_UClass_UMeshElementsVisualizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshElementsVisualizer.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshElementsVisualizer>()
	{
		return UMeshElementsVisualizer::StaticClass();
	}
	UMeshElementsVisualizer::UMeshElementsVisualizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshElementsVisualizer);
	UMeshElementsVisualizer::~UMeshElementsVisualizer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshElementsVisualizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshElementsVisualizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshElementsVisualizerProperties, UMeshElementsVisualizerProperties::StaticClass, TEXT("UMeshElementsVisualizerProperties"), &Z_Registration_Info_UClass_UMeshElementsVisualizerProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshElementsVisualizerProperties), 1454127676U) },
		{ Z_Construct_UClass_UMeshElementsVisualizer, UMeshElementsVisualizer::StaticClass, TEXT("UMeshElementsVisualizer"), &Z_Registration_Info_UClass_UMeshElementsVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshElementsVisualizer), 57681604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshElementsVisualizer_h_626760190(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshElementsVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshElementsVisualizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
