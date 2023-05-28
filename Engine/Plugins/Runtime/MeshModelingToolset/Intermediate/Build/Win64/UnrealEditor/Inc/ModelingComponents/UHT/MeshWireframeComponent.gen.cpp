// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drawing/MeshWireframeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshWireframeComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshWireframeComponent();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshWireframeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UMeshWireframeComponent::StaticRegisterNativesUMeshWireframeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshWireframeComponent);
	UClass* Z_Construct_UClass_UMeshWireframeComponent_NoRegister()
	{
		return UMeshWireframeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMeshWireframeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineDepthBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineDepthBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineDepthBiasSizeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineDepthBiasSizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThicknessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWireframe_MetaData[];
#endif
		static void NewProp_bEnableWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWireframe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WireframeThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBoundaryEdges_MetaData[];
#endif
		static void NewProp_bEnableBoundaryEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBoundaryEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryEdgeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryEdgeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryEdgeThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundaryEdgeThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUVSeams_MetaData[];
#endif
		static void NewProp_bEnableUVSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUVSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSeamColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVSeamColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSeamThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVSeamThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNormalSeams_MetaData[];
#endif
		static void NewProp_bEnableNormalSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNormalSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalSeamColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalSeamColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalSeamThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSeamThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableColorSeams_MetaData[];
#endif
		static void NewProp_bEnableColorSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableColorSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSeamColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSeamColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSeamThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorSeamThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshWireframeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshWireframeComponent draws a mesh wireframe as lines, with line color/thickness\n * varying depending on line type and the configuration settings.\n * Currently can draw:\n *    - all mesh edges\n *    - boundary edges\n *    - UV seam edges\n *    - Normal seam edges\n *    - Color seam edges\n *\n * Client must provide a IMeshWireframeSourceProvider implementation that provides the \n * edge set, vertices, and edge type\n */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/MeshWireframeComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "UMeshWireframeComponent draws a mesh wireframe as lines, with line color/thickness\nvarying depending on line type and the configuration settings.\nCurrently can draw:\n   - all mesh edges\n   - boundary edges\n   - UV seam edges\n   - Normal seam edges\n   - Color seam edges\n\nClient must provide a IMeshWireframeSourceProvider implementation that provides the\nedge set, vertices, and edge type" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBias_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "/**\n\x09 * Depth bias of the lines, used to offset in depth to avoid z-fighting\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Depth bias of the lines, used to offset in depth to avoid z-fighting" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBias = { "LineDepthBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, LineDepthBias), METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBiasSizeScale_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "/**\n\x09 * Target-size depth bias scale. This is multiplied by LineDepthBias.\n\x09 * Client of UMeshWireframeComponent can set this if desired, eg to fraction of target object bounding box size, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Target-size depth bias scale. This is multiplied by LineDepthBias.\nClient of UMeshWireframeComponent can set this if desired, eg to fraction of target object bounding box size, etc." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBiasSizeScale = { "LineDepthBiasSizeScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, LineDepthBiasSizeScale), METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBiasSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBiasSizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ThicknessScale_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "/**\n\x09 * Scaling factor applied to the per-edge-type thicknesses defined below\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Scaling factor applied to the per-edge-type thicknesses defined below" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ThicknessScale = { "ThicknessScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, ThicknessScale), METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ThicknessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ThicknessScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// Wireframe properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Wireframe properties" },
	};
#endif
	void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe_SetBit(void* Obj)
	{
		((UMeshWireframeComponent*)Obj)->bEnableWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe = { "bEnableWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, WireframeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeThickness = { "WireframeThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, WireframeThickness), METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// Boundary Edge properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "Boundary Edge properties" },
	};
#endif
	void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges_SetBit(void* Obj)
	{
		((UMeshWireframeComponent*)Obj)->bEnableBoundaryEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges = { "bEnableBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeColor = { "BoundaryEdgeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, BoundaryEdgeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeThickness = { "BoundaryEdgeThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, BoundaryEdgeThickness), METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// UV seam properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "UV seam properties" },
	};
#endif
	void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams_SetBit(void* Obj)
	{
		((UMeshWireframeComponent*)Obj)->bEnableUVSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams = { "bEnableUVSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamColor = { "UVSeamColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, UVSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamThickness = { "UVSeamThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, UVSeamThickness), METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// normal seam properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "normal seam properties" },
	};
#endif
	void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams_SetBit(void* Obj)
	{
		((UMeshWireframeComponent*)Obj)->bEnableNormalSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams = { "bEnableNormalSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamColor = { "NormalSeamColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, NormalSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamThickness = { "NormalSeamThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, NormalSeamThickness), METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "Comment", "// color seam properties\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "ToolTip", "color seam properties" },
	};
#endif
	void Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams_SetBit(void* Obj)
	{
		((UMeshWireframeComponent*)Obj)->bEnableColorSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams = { "bEnableColorSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshWireframeComponent), &Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamColor_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamColor = { "ColorSeamColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, ColorSeamColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamThickness_MetaData[] = {
		{ "Category", "MeshWireframe" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamThickness = { "ColorSeamThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, ColorSeamThickness), METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineMaterial_MetaData[] = {
		{ "Comment", "//~ End USceneComponent Interface.\n" },
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/MeshWireframeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshWireframeComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LocalBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshWireframeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineDepthBiasSizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ThicknessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableWireframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_WireframeThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableBoundaryEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_BoundaryEdgeThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableUVSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_UVSeamThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableNormalSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_NormalSeamThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_bEnableColorSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_ColorSeamThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWireframeComponent_Statics::NewProp_LocalBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshWireframeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshWireframeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshWireframeComponent_Statics::ClassParams = {
		&UMeshWireframeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshWireframeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshWireframeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshWireframeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshWireframeComponent()
	{
		if (!Z_Registration_Info_UClass_UMeshWireframeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshWireframeComponent.OuterSingleton, Z_Construct_UClass_UMeshWireframeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshWireframeComponent.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshWireframeComponent>()
	{
		return UMeshWireframeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshWireframeComponent);
	UMeshWireframeComponent::~UMeshWireframeComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshWireframeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshWireframeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshWireframeComponent, UMeshWireframeComponent::StaticClass, TEXT("UMeshWireframeComponent"), &Z_Registration_Info_UClass_UMeshWireframeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshWireframeComponent), 1163309708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshWireframeComponent_h_2649011420(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshWireframeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_MeshWireframeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
