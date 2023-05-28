// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshQueryFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshQueryFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangle();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangleList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVectorList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetNumExtendedPolygroupLayers)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetNumExtendedPolygroupLayers(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetHasPolygroups)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetHasPolygroups(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetHasMaterialIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetHasMaterialIDs(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleVertexColor)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT(FVector,Z_Param_BarycentricCoords);
		P_GET_STRUCT(FLinearColor,Z_Param_DefaultColor);
		P_GET_UBOOL_REF(Z_Param_Out_bTriHasValidVertexColors);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InterpolatedColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_BarycentricCoords,Z_Param_DefaultColor,Z_Param_Out_bTriHasValidVertexColors,Z_Param_Out_InterpolatedColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleVertexColors)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color1);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color2);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color3);
		P_GET_UBOOL_REF(Z_Param_Out_bTriHasValidVertexColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Out_Color1,Z_Param_Out_Color2,Z_Param_Out_Color3,Z_Param_Out_bTriHasValidVertexColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetHasVertexColors)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexColors(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleNormalTangents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT(FVector,Z_Param_BarycentricCoords);
		P_GET_UBOOL_REF(Z_Param_Out_bTriHasValidElements);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InterpolatedNormal);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InterpolatedTangent);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InterpolatedBiTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_BarycentricCoords,Z_Param_Out_bTriHasValidElements,Z_Param_Out_InterpolatedNormal,Z_Param_Out_InterpolatedTangent,Z_Param_Out_InterpolatedBiTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleNormalTangents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_UBOOL_REF(Z_Param_Out_bTriHasValidElements);
		P_GET_STRUCT_REF(FGeometryScriptTriangle,Z_Param_Out_Normals);
		P_GET_STRUCT_REF(FGeometryScriptTriangle,Z_Param_Out_Tangents);
		P_GET_STRUCT_REF(FGeometryScriptTriangle,Z_Param_Out_BiTangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Out_bTriHasValidElements,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_BiTangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleNormal)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT(FVector,Z_Param_BarycentricCoords);
		P_GET_UBOOL_REF(Z_Param_Out_bTriHasValidNormals);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InterpolatedNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_BarycentricCoords,Z_Param_Out_bTriHasValidNormals,Z_Param_Out_InterpolatedNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal2);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal3);
		P_GET_UBOOL_REF(Z_Param_Out_bTriHasValidNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Out_Normal1,Z_Param_Out_Normal2,Z_Param_Out_Normal3,Z_Param_Out_bTriHasValidNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetHasTriangleNormals)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleNormals(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleUV)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT(FVector,Z_Param_BarycentricCoords);
		P_GET_UBOOL_REF(Z_Param_Out_bTriHasValidUVs);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InterpolatedUV);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_TriangleID,Z_Param_BarycentricCoords,Z_Param_Out_bTriHasValidUVs,Z_Param_Out_InterpolatedUV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV1);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV2);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV3);
		P_GET_UBOOL_REF(Z_Param_Out_bHaveValidUVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_TriangleID,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_bHaveValidUVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetUVSetBoundingBox)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidUVSet);
		P_GET_UBOOL_REF(Z_Param_Out_bUVSetIsEmpty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox2D*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_Out_bIsValidUVSet,Z_Param_Out_bUVSetIsEmpty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetNumUVSets)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVSets(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetAllVertexPositions)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_PositionList);
		P_GET_UBOOL(Z_Param_bSkipGaps);
		P_GET_UBOOL_REF(Z_Param_Out_bHasVertexIDGaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions(Z_Param_TargetMesh,Z_Param_Out_PositionList,Z_Param_bSkipGaps,Z_Param_Out_bHasVertexIDGaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetVertexPosition)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidVertex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_Out_bIsValidVertex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetAllVertexIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_VertexIDList);
		P_GET_UBOOL_REF(Z_Param_Out_bHasVertexIDGaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs(Z_Param_TargetMesh,Z_Param_Out_VertexIDList,Z_Param_Out_bHasVertexIDGaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execIsValidVertexID)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID(Z_Param_TargetMesh,Z_Param_VertexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetHasVertexIDGaps)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexIDGaps(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetNumVertexIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetNumVertexIDs(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetVertexCount)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetVertexCount(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execComputeTriangleBarycentricCoords)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vertex1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vertex2);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vertex3);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BarycentricCoords);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Out_bIsValidTriangle,Z_Param_Point,Z_Param_Out_Vertex1,Z_Param_Out_Vertex2,Z_Param_Out_Vertex3,Z_Param_Out_BarycentricCoords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleFaceNormal)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Out_bIsValidTriangle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTrianglePosition)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT(FVector,Z_Param_BarycentricCoords);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InterpolatedPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_BarycentricCoords,Z_Param_Out_bIsValidTriangle,Z_Param_Out_InterpolatedPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetTrianglePositions)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vertex1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vertex2);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vertex3);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Out_bIsValidTriangle,Z_Param_Out_Vertex1,Z_Param_Out_Vertex2,Z_Param_Out_Vertex3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetAllTriangleIndices)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptTriangleList,Z_Param_Out_TriangleList);
		P_GET_UBOOL(Z_Param_bSkipGaps);
		P_GET_UBOOL_REF(Z_Param_Out_bHasTriangleIDGaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices(Z_Param_TargetMesh,Z_Param_Out_TriangleList,Z_Param_bSkipGaps,Z_Param_Out_bHasTriangleIDGaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleIndices)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Out_bIsValidTriangle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetAllTriangleIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_TriangleIDList);
		P_GET_UBOOL_REF(Z_Param_Out_bHasTriangleIDGaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs(Z_Param_TargetMesh,Z_Param_Out_TriangleIDList,Z_Param_Out_bHasTriangleIDGaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execIsValidTriangleID)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID(Z_Param_TargetMesh,Z_Param_TriangleID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetHasTriangleIDGaps)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleIDGaps(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetNumTriangleIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetNumTriangleIDs(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetNumConnectedComponents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetNumOpenBorderEdges)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetNumOpenBorderLoops)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bAmbiguousTopologyFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops(Z_Param_TargetMesh,Z_Param_Out_bAmbiguousTopologyFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetIsClosedMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetIsClosedMesh(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshVolumeArea)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SurfaceArea);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea(Z_Param_TargetMesh,Z_Param_Out_SurfaceArea,Z_Param_Out_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshBoundingBox)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshHasAttributeSet)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetMeshHasAttributeSet(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetIsDenseMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetIsDenseMesh(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshInfoString)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGeometryScriptLibrary_MeshQueryFunctions::GetMeshInfoString(Z_Param_TargetMesh);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshQueryFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshQueryFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshQueryFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeTriangleBarycentricCoords", &UGeometryScriptLibrary_MeshQueryFunctions::execComputeTriangleBarycentricCoords },
			{ "GetAllTriangleIDs", &UGeometryScriptLibrary_MeshQueryFunctions::execGetAllTriangleIDs },
			{ "GetAllTriangleIndices", &UGeometryScriptLibrary_MeshQueryFunctions::execGetAllTriangleIndices },
			{ "GetAllVertexIDs", &UGeometryScriptLibrary_MeshQueryFunctions::execGetAllVertexIDs },
			{ "GetAllVertexPositions", &UGeometryScriptLibrary_MeshQueryFunctions::execGetAllVertexPositions },
			{ "GetHasMaterialIDs", &UGeometryScriptLibrary_MeshQueryFunctions::execGetHasMaterialIDs },
			{ "GetHasPolygroups", &UGeometryScriptLibrary_MeshQueryFunctions::execGetHasPolygroups },
			{ "GetHasTriangleIDGaps", &UGeometryScriptLibrary_MeshQueryFunctions::execGetHasTriangleIDGaps },
			{ "GetHasTriangleNormals", &UGeometryScriptLibrary_MeshQueryFunctions::execGetHasTriangleNormals },
			{ "GetHasVertexColors", &UGeometryScriptLibrary_MeshQueryFunctions::execGetHasVertexColors },
			{ "GetHasVertexIDGaps", &UGeometryScriptLibrary_MeshQueryFunctions::execGetHasVertexIDGaps },
			{ "GetInterpolatedTriangleNormal", &UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleNormal },
			{ "GetInterpolatedTriangleNormalTangents", &UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleNormalTangents },
			{ "GetInterpolatedTrianglePosition", &UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTrianglePosition },
			{ "GetInterpolatedTriangleUV", &UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleUV },
			{ "GetInterpolatedTriangleVertexColor", &UGeometryScriptLibrary_MeshQueryFunctions::execGetInterpolatedTriangleVertexColor },
			{ "GetIsClosedMesh", &UGeometryScriptLibrary_MeshQueryFunctions::execGetIsClosedMesh },
			{ "GetIsDenseMesh", &UGeometryScriptLibrary_MeshQueryFunctions::execGetIsDenseMesh },
			{ "GetMeshBoundingBox", &UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshBoundingBox },
			{ "GetMeshHasAttributeSet", &UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshHasAttributeSet },
			{ "GetMeshInfoString", &UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshInfoString },
			{ "GetMeshVolumeArea", &UGeometryScriptLibrary_MeshQueryFunctions::execGetMeshVolumeArea },
			{ "GetNumConnectedComponents", &UGeometryScriptLibrary_MeshQueryFunctions::execGetNumConnectedComponents },
			{ "GetNumExtendedPolygroupLayers", &UGeometryScriptLibrary_MeshQueryFunctions::execGetNumExtendedPolygroupLayers },
			{ "GetNumOpenBorderEdges", &UGeometryScriptLibrary_MeshQueryFunctions::execGetNumOpenBorderEdges },
			{ "GetNumOpenBorderLoops", &UGeometryScriptLibrary_MeshQueryFunctions::execGetNumOpenBorderLoops },
			{ "GetNumTriangleIDs", &UGeometryScriptLibrary_MeshQueryFunctions::execGetNumTriangleIDs },
			{ "GetNumUVSets", &UGeometryScriptLibrary_MeshQueryFunctions::execGetNumUVSets },
			{ "GetNumVertexIDs", &UGeometryScriptLibrary_MeshQueryFunctions::execGetNumVertexIDs },
			{ "GetTriangleFaceNormal", &UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleFaceNormal },
			{ "GetTriangleIndices", &UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleIndices },
			{ "GetTriangleNormals", &UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleNormals },
			{ "GetTriangleNormalTangents", &UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleNormalTangents },
			{ "GetTrianglePositions", &UGeometryScriptLibrary_MeshQueryFunctions::execGetTrianglePositions },
			{ "GetTriangleUVs", &UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleUVs },
			{ "GetTriangleVertexColors", &UGeometryScriptLibrary_MeshQueryFunctions::execGetTriangleVertexColors },
			{ "GetUVSetBoundingBox", &UGeometryScriptLibrary_MeshQueryFunctions::execGetUVSetBoundingBox },
			{ "GetVertexCount", &UGeometryScriptLibrary_MeshQueryFunctions::execGetVertexCount },
			{ "GetVertexPosition", &UGeometryScriptLibrary_MeshQueryFunctions::execGetVertexPosition },
			{ "IsValidTriangleID", &UGeometryScriptLibrary_MeshQueryFunctions::execIsValidTriangleID },
			{ "IsValidVertexID", &UGeometryScriptLibrary_MeshQueryFunctions::execIsValidVertexID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			bool bIsValidTriangle;
			FVector Point;
			FVector Vertex1;
			FVector Vertex2;
			FVector Vertex3;
			FVector BarycentricCoords;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BarycentricCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_Vertex1 = { "Vertex1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms, Vertex1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_Vertex2 = { "Vertex2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms, Vertex2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_Vertex3 = { "Vertex3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms, Vertex3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_BarycentricCoords = { "BarycentricCoords", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms, BarycentricCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_Vertex1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_Vertex2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_Vertex3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_BarycentricCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * Compute the barycentric coordinates (A,B,C) of the Point relative to the specified TriangleID of the TargetMesh.\n\x09 * The properties of barycentric coordinates are such that A,B,C are all positive, A+B+C=1.0, and A*Vertex1 + B*Vertex2 + C*Vertex3 = Point.\n\x09 * So, the barycentric coordinates can be used to smoothly interpolate/blend any other per-triangle-vertex quantities.\n\x09 * The Point must lie in the plane of the Triangle, otherwise the coordinates are somewhat meaningless (but clamped to 0-1 range to avoid catastrophic errors)\n\x09 * The Positions of the Triangle Vertices are also returned for convenience (similar to GetTrianglePositions)\n\x09 * @param bIsValidTriangle will be returned true if TriangleID exists in TargetMesh, and otherwise will be returned false\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the barycentric coordinates (A,B,C) of the Point relative to the specified TriangleID of the TargetMesh.\nThe properties of barycentric coordinates are such that A,B,C are all positive, A+B+C=1.0, and A*Vertex1 + B*Vertex2 + C*Vertex3 = Point.\nSo, the barycentric coordinates can be used to smoothly interpolate/blend any other per-triangle-vertex quantities.\nThe Point must lie in the plane of the Triangle, otherwise the coordinates are somewhat meaningless (but clamped to 0-1 range to avoid catastrophic errors)\nThe Positions of the Triangle Vertices are also returned for convenience (similar to GetTrianglePositions)\n@param bIsValidTriangle will be returned true if TriangleID exists in TargetMesh, and otherwise will be returned false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "ComputeTriangleBarycentricCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventComputeTriangleBarycentricCoords_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptIndexList TriangleIDList;
			bool bHasTriangleIDGaps;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleIDList;
		static void NewProp_bHasTriangleIDGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTriangleIDGaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_TriangleIDList = { "TriangleIDList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIDs_Parms, TriangleIDList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_bHasTriangleIDGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIDs_Parms*)Obj)->bHasTriangleIDGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_bHasTriangleIDGaps = { "bHasTriangleIDGaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIDs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_bHasTriangleIDGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_TriangleIDList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_bHasTriangleIDGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetAllTriangleIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIDs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIndices_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptTriangleList TriangleList;
			bool bSkipGaps;
			bool bHasTriangleIDGaps;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static void NewProp_bSkipGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipGaps;
		static void NewProp_bHasTriangleIDGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTriangleIDGaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIndices_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIndices_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(nullptr, 0) }; // 2584906498
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_bSkipGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIndices_Parms*)Obj)->bSkipGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_bSkipGaps = { "bSkipGaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIndices_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_bSkipGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_bHasTriangleIDGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIndices_Parms*)Obj)->bHasTriangleIDGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_bHasTriangleIDGaps = { "bHasTriangleIDGaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIndices_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_bHasTriangleIDGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIndices_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_bSkipGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_bHasTriangleIDGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetAllTriangleIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetAllTriangleIndices_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptIndexList VertexIDList;
			bool bHasVertexIDGaps;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexIDList;
		static void NewProp_bHasVertexIDGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexIDGaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_VertexIDList = { "VertexIDList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexIDs_Parms, VertexIDList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_bHasVertexIDGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexIDs_Parms*)Obj)->bHasVertexIDGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_bHasVertexIDGaps = { "bHasVertexIDGaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexIDs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_bHasVertexIDGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_VertexIDList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_bHasVertexIDGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetAllVertexIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexIDs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexPositions_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptVectorList PositionList;
			bool bSkipGaps;
			bool bHasVertexIDGaps;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionList;
		static void NewProp_bSkipGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipGaps;
		static void NewProp_bHasVertexIDGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexIDGaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexPositions_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_PositionList = { "PositionList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexPositions_Parms, PositionList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_bSkipGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexPositions_Parms*)Obj)->bSkipGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_bSkipGaps = { "bSkipGaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexPositions_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_bSkipGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_bHasVertexIDGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexPositions_Parms*)Obj)->bHasVertexIDGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_bHasVertexIDGaps = { "bHasVertexIDGaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexPositions_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_bHasVertexIDGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexPositions_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_PositionList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_bSkipGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_bHasVertexIDGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetAllVertexPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetAllVertexPositions_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetHasMaterialIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasMaterialIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Enabled" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetHasMaterialIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasMaterialIDs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "//\n// Material Queries\n//\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Material Queries" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetHasMaterialIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetHasMaterialIDs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetHasPolygroups_Parms
		{
			UDynamicMesh* TargetMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasPolygroups_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Enabled" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetHasPolygroups_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasPolygroups_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "//\n// Polygroup Queries\n//\n" },
		{ "DisplayName", "GetHasPolyGroups" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Polygroup Queries" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetHasPolygroups", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetHasPolygroups_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleIDGaps_Parms
		{
			UDynamicMesh* TargetMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleIDGaps_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleIDGaps_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleIDGaps_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetHasTriangleIDGaps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleIDGaps_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Enabled" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleNormals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleNormals_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * @return true if the TargetMesh has the Normals Attribute enabled (which allows for storing split normals)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "@return true if the TargetMesh has the Normals Attribute enabled (which allows for storing split normals)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetHasTriangleNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetHasTriangleNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexColors_Parms
		{
			UDynamicMesh* TargetMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexColors_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Enabled" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexColors_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * @return true if the TargetMesh has the Vertex Colors attribute enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "@return true if the TargetMesh has the Vertex Colors attribute enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetHasVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexColors_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexIDGaps_Parms
		{
			UDynamicMesh* TargetMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexIDGaps_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexIDGaps_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexIDGaps_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetHasVertexIDGaps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetHasVertexIDGaps_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormal_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			FVector BarycentricCoords;
			bool bTriHasValidNormals;
			FVector InterpolatedNormal;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BarycentricCoords;
		static void NewProp_bTriHasValidNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriHasValidNormals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolatedNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormal_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormal_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_BarycentricCoords = { "BarycentricCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormal_Parms, BarycentricCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_bTriHasValidNormals_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormal_Parms*)Obj)->bTriHasValidNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_bTriHasValidNormals = { "bTriHasValidNormals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormal_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_bTriHasValidNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_InterpolatedNormal = { "InterpolatedNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormal_Parms, InterpolatedNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormal_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_BarycentricCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_bTriHasValidNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_InterpolatedNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * Compute the interpolated Normal (A*Normal1 + B*Normal2 + C*Normal3), where (A,B,C)=BarycentricCoords and the Normals are taken\n\x09 * from the specified TriangleID in the Normal layer of the TargetMesh. \n\x09 * @param bTriHasValidNormals will be returned true if TriangleID exists in TargetMesh and has Normals set, and otherwise will be returned false\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the interpolated Normal (A*Normal1 + B*Normal2 + C*Normal3), where (A,B,C)=BarycentricCoords and the Normals are taken\nfrom the specified TriangleID in the Normal layer of the TargetMesh.\n@param bTriHasValidNormals will be returned true if TriangleID exists in TargetMesh and has Normals set, and otherwise will be returned false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetInterpolatedTriangleNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormal_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			FVector BarycentricCoords;
			bool bTriHasValidElements;
			FVector InterpolatedNormal;
			FVector InterpolatedTangent;
			FVector InterpolatedBiTangent;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BarycentricCoords;
		static void NewProp_bTriHasValidElements_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriHasValidElements;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolatedNormal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolatedTangent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolatedBiTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_BarycentricCoords = { "BarycentricCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms, BarycentricCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_bTriHasValidElements_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms*)Obj)->bTriHasValidElements = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_bTriHasValidElements = { "bTriHasValidElements", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_bTriHasValidElements_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_InterpolatedNormal = { "InterpolatedNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms, InterpolatedNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_InterpolatedTangent = { "InterpolatedTangent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms, InterpolatedTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_InterpolatedBiTangent = { "InterpolatedBiTangent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms, InterpolatedBiTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_BarycentricCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_bTriHasValidElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_InterpolatedNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_InterpolatedTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_InterpolatedBiTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * Compute the interpolated Normal and Tangents for the specified specified TriangleID in the Normal and Tangent attributes of the TargetMesh. \n\x09 * @param bTriHasValidElements will be returned true if TriangleID exists in TargetMesh and has Normals and Tangents set, and otherwise will be returned false\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the interpolated Normal and Tangents for the specified specified TriangleID in the Normal and Tangent attributes of the TargetMesh.\n@param bTriHasValidElements will be returned true if TriangleID exists in TargetMesh and has Normals and Tangents set, and otherwise will be returned false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetInterpolatedTriangleNormalTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleNormalTangents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTrianglePosition_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			FVector BarycentricCoords;
			bool bIsValidTriangle;
			FVector InterpolatedPosition;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BarycentricCoords;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolatedPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTrianglePosition_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTrianglePosition_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_BarycentricCoords = { "BarycentricCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTrianglePosition_Parms, BarycentricCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTrianglePosition_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTrianglePosition_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_InterpolatedPosition = { "InterpolatedPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTrianglePosition_Parms, InterpolatedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTrianglePosition_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_BarycentricCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_InterpolatedPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * Compute the interpolated Position (A*Vertex1 + B*Vertex2 + C*Vertex3), where (A,B,C)=BarycentricCoords and the Vertex positions are taken\n\x09 * from the specified TriangleID of the TargetMesh. \n\x09 * @param bIsValidTriangle will be returned true if TriangleID exists in TargetMesh, and otherwise will be returned false\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the interpolated Position (A*Vertex1 + B*Vertex2 + C*Vertex3), where (A,B,C)=BarycentricCoords and the Vertex positions are taken\nfrom the specified TriangleID of the TargetMesh.\n@param bIsValidTriangle will be returned true if TriangleID exists in TargetMesh, and otherwise will be returned false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetInterpolatedTrianglePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTrianglePosition_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			int32 TriangleID;
			FVector BarycentricCoords;
			bool bTriHasValidUVs;
			FVector2D InterpolatedUV;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BarycentricCoords;
		static void NewProp_bTriHasValidUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriHasValidUVs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolatedUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_BarycentricCoords = { "BarycentricCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms, BarycentricCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_bTriHasValidUVs_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms*)Obj)->bTriHasValidUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_bTriHasValidUVs = { "bTriHasValidUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_bTriHasValidUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_InterpolatedUV = { "InterpolatedUV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms, InterpolatedUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_BarycentricCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_bTriHasValidUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_InterpolatedUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * Compute the interpolated UV (A*UV1+ B*UV2+ C*UV3), where (A,B,C)=BarycentricCoords and the UV positions are taken\n\x09 * from the specified TriangleID in the specified UVSet of the TargetMesh. \n\x09 * @param bIsValidTriangle bTriHasValidUVs be returned true if TriangleID exists in TargetMesh and is set to valid UVs in the UV Set, and otherwise will be returned false\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the interpolated UV (A*UV1+ B*UV2+ C*UV3), where (A,B,C)=BarycentricCoords and the UV positions are taken\nfrom the specified TriangleID in the specified UVSet of the TargetMesh.\n@param bIsValidTriangle bTriHasValidUVs be returned true if TriangleID exists in TargetMesh and is set to valid UVs in the UV Set, and otherwise will be returned false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetInterpolatedTriangleUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleUV_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			FVector BarycentricCoords;
			FLinearColor DefaultColor;
			bool bTriHasValidVertexColors;
			FLinearColor InterpolatedColor;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BarycentricCoords;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultColor;
		static void NewProp_bTriHasValidVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriHasValidVertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolatedColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_BarycentricCoords = { "BarycentricCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms, BarycentricCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_DefaultColor = { "DefaultColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms, DefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_bTriHasValidVertexColors_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms*)Obj)->bTriHasValidVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_bTriHasValidVertexColors = { "bTriHasValidVertexColors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_bTriHasValidVertexColors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_InterpolatedColor = { "InterpolatedColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms, InterpolatedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_BarycentricCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_DefaultColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_bTriHasValidVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_InterpolatedColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * Compute the interpolated Vertex Color (A*Color1 + B*Color2 + C*Color3), where (A,B,C)=BarycentricCoords and the Colors are taken\n\x09 * from the specified TriangleID in the Vertex Color layer of the TargetMesh. \n\x09 * @param bTriHasValidVertexColors will be returned true if TriangleID exists in TargetMesh and has Colors set, and otherwise will be returned false\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the interpolated Vertex Color (A*Color1 + B*Color2 + C*Color3), where (A,B,C)=BarycentricCoords and the Colors are taken\nfrom the specified TriangleID in the Vertex Color layer of the TargetMesh.\n@param bTriHasValidVertexColors will be returned true if TriangleID exists in TargetMesh and has Colors set, and otherwise will be returned false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetInterpolatedTriangleVertexColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetInterpolatedTriangleVertexColor_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetIsClosedMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetIsClosedMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetIsClosedMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetIsClosedMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetIsClosedMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetIsClosedMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetIsDenseMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetIsDenseMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetIsDenseMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetIsDenseMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetIsDenseMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetIsDenseMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshBoundingBox_Parms
		{
			UDynamicMesh* TargetMesh;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshBoundingBox_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bounding Box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetMeshBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshBoundingBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshHasAttributeSet_Parms
		{
			UDynamicMesh* TargetMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshHasAttributeSet_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshHasAttributeSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshHasAttributeSet_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetMeshHasAttributeSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshHasAttributeSet_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshInfoString_Parms
		{
			UDynamicMesh* TargetMesh;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshInfoString_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshInfoString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetMeshInfoString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshInfoString_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshVolumeArea_Parms
		{
			UDynamicMesh* TargetMesh;
			float SurfaceArea;
			float Volume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshVolumeArea_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshVolumeArea_Parms, SurfaceArea), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshVolumeArea_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::NewProp_SurfaceArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetMeshVolumeArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetMeshVolumeArea_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetNumConnectedComponents_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumConnectedComponents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Num Edges" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumConnectedComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetNumConnectedComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetNumConnectedComponents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetNumExtendedPolygroupLayers_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumExtendedPolygroupLayers_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Num Layers" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumExtendedPolygroupLayers_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "DisplayName", "GetNumExtendedPolyGroupLayers" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetNumExtendedPolygroupLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetNumExtendedPolygroupLayers_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderEdges_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderEdges_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Num Edges" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderEdges_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetNumOpenBorderEdges", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderEdges_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderLoops_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bAmbiguousTopologyFound;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bAmbiguousTopologyFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAmbiguousTopologyFound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderLoops_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_bAmbiguousTopologyFound_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderLoops_Parms*)Obj)->bAmbiguousTopologyFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_bAmbiguousTopologyFound = { "bAmbiguousTopologyFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderLoops_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_bAmbiguousTopologyFound_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Num Loops" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderLoops_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_bAmbiguousTopologyFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetNumOpenBorderLoops", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetNumOpenBorderLoops_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetNumTriangleIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumTriangleIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Num Triangle IDs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumTriangleIDs_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "// UDynamicMesh already has this function\n//UFUNCTION(BlueprintPure, Category = \"GeometryScript|MeshQueries\", meta=(ScriptMethod))\n//static UPARAM(DisplayName = \"Triangle Count\") int32 GetTriangleCount( UDynamicMesh* TargetMesh );\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "UDynamicMesh already has this function\nUFUNCTION(BlueprintPure, Category = \"GeometryScript|MeshQueries\", meta=(ScriptMethod))\nstatic UPARAM(DisplayName = \"Triangle Count\") int32 GetTriangleCount( UDynamicMesh* TargetMesh );" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetNumTriangleIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetNumTriangleIDs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetNumUVSets_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumUVSets_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Num UV Channels" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumUVSets_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "//\n// UV Queries\n//\n" },
		{ "DisplayName", "Get Num UV Channels" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "UV Queries" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetNumUVSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetNumUVSets_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetNumVertexIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumVertexIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Num Vertex IDs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetNumVertexIDs_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetNumVertexIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetNumVertexIDs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleFaceNormal_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			bool bIsValidTriangle;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleFaceNormal_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleFaceNormal_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleFaceNormal_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleFaceNormal_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Normal" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleFaceNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetTriangleFaceNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleFaceNormal_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleIndices_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			bool bIsValidTriangle;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleIndices_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleIndices_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleIndices_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleIndices_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Indices" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleIndices_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetTriangleIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleIndices_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			FVector Normal1;
			FVector Normal2;
			FVector Normal3;
			bool bTriHasValidNormals;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal3;
		static void NewProp_bTriHasValidNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriHasValidNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_Normal1 = { "Normal1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms, Normal1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_Normal2 = { "Normal2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms, Normal2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_Normal3 = { "Normal3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms, Normal3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_bTriHasValidNormals_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms*)Obj)->bTriHasValidNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_bTriHasValidNormals = { "bTriHasValidNormals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_bTriHasValidNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_Normal1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_Normal2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_Normal3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_bTriHasValidNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * For the specified TriangleID of the TargetMesh, get the Normal vectors at each vertex of the Triangle.\n\x09 * These Normals will be taken from the Normal Overlay, ie they will potentially be split-normals.\n\x09 * @param bTriHasValidNormals will be returned true if TriangleID exists in TargetMesh and has Normals set\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "For the specified TriangleID of the TargetMesh, get the Normal vectors at each vertex of the Triangle.\nThese Normals will be taken from the Normal Overlay, ie they will potentially be split-normals.\n@param bTriHasValidNormals will be returned true if TriangleID exists in TargetMesh and has Normals set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetTriangleNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormals_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			bool bTriHasValidElements;
			FGeometryScriptTriangle Normals;
			FGeometryScriptTriangle Tangents;
			FGeometryScriptTriangle BiTangents;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static void NewProp_bTriHasValidElements_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriHasValidElements;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BiTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_bTriHasValidElements_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms*)Obj)->bTriHasValidElements = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_bTriHasValidElements = { "bTriHasValidElements", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_bTriHasValidElements_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms, Normals), Z_Construct_UScriptStruct_FGeometryScriptTriangle, METADATA_PARAMS(nullptr, 0) }; // 309759555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms, Tangents), Z_Construct_UScriptStruct_FGeometryScriptTriangle, METADATA_PARAMS(nullptr, 0) }; // 309759555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_BiTangents = { "BiTangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms, BiTangents), Z_Construct_UScriptStruct_FGeometryScriptTriangle, METADATA_PARAMS(nullptr, 0) }; // 309759555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_bTriHasValidElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_BiTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * For the specified TriangleID of the TargetMesh, get the Normal and Tangent vectors at each vertex of the Triangle.\n\x09 * These Normals/Tangents will be taken from the Normal and Tangents Overlays, ie they will potentially be split-normals.\n\x09 * @param bTriHasValidElements will be returned true if TriangleID exists in TargetMesh and has Normals and Tangents set\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "For the specified TriangleID of the TargetMesh, get the Normal and Tangent vectors at each vertex of the Triangle.\nThese Normals/Tangents will be taken from the Normal and Tangents Overlays, ie they will potentially be split-normals.\n@param bTriHasValidElements will be returned true if TriangleID exists in TargetMesh and has Normals and Tangents set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetTriangleNormalTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleNormalTangents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetTrianglePositions_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			bool bIsValidTriangle;
			FVector Vertex1;
			FVector Vertex2;
			FVector Vertex3;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTrianglePositions_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTrianglePositions_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetTrianglePositions_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetTrianglePositions_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_Vertex1 = { "Vertex1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTrianglePositions_Parms, Vertex1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_Vertex2 = { "Vertex2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTrianglePositions_Parms, Vertex2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_Vertex3 = { "Vertex3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTrianglePositions_Parms, Vertex3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_Vertex1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_Vertex2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::NewProp_Vertex3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetTrianglePositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetTrianglePositions_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			int32 TriangleID;
			FVector2D UV1;
			FVector2D UV2;
			FVector2D UV3;
			bool bHaveValidUVs;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV3;
		static void NewProp_bHaveValidUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaveValidUVs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_bHaveValidUVs_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms*)Obj)->bHaveValidUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_bHaveValidUVs = { "bHaveValidUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_bHaveValidUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_UV3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::NewProp_bHaveValidUVs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetTriangleUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			FLinearColor Color1;
			FLinearColor Color2;
			FLinearColor Color3;
			bool bTriHasValidVertexColors;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color3;
		static void NewProp_bTriHasValidVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriHasValidVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms, Color1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms, Color2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_Color3 = { "Color3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms, Color3), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_bTriHasValidVertexColors_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms*)Obj)->bTriHasValidVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_bTriHasValidVertexColors = { "bTriHasValidVertexColors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_bTriHasValidVertexColors_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_Color1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_Color2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_Color3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_bTriHasValidVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "Comment", "/**\n\x09 * For the specified TriangleID of the TargetMesh, get the Vertex Colors at each vertex of the Triangle.\n\x09 * These Colors will be taken from the Vertex Color Attribute, ie they will potentially be split-colors.\n\x09 * @param bTriHasValidVertexColors will be returned true if TriangleID exists in TargetMesh and has Vertex Colors set\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "For the specified TriangleID of the TargetMesh, get the Vertex Colors at each vertex of the Triangle.\nThese Colors will be taken from the Vertex Color Attribute, ie they will potentially be split-colors.\n@param bTriHasValidVertexColors will be returned true if TriangleID exists in TargetMesh and has Vertex Colors set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetTriangleVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetTriangleVertexColors_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetUVSetBoundingBox_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			bool bIsValidUVSet;
			bool bUVSetIsEmpty;
			FBox2D ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidUVSet_MetaData[];
#endif
		static void NewProp_bIsValidUVSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidUVSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUVSetIsEmpty_MetaData[];
#endif
		static void NewProp_bUVSetIsEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUVSetIsEmpty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetUVSetBoundingBox_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetUVSetBoundingBox_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_UVSetIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bIsValidUVSet_MetaData[] = {
		{ "DisplayName", "Is Valid UV Channel" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bIsValidUVSet_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetUVSetBoundingBox_Parms*)Obj)->bIsValidUVSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bIsValidUVSet = { "bIsValidUVSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetUVSetBoundingBox_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bIsValidUVSet_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bIsValidUVSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bIsValidUVSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bUVSetIsEmpty_MetaData[] = {
		{ "DisplayName", "UV Channel Is Empty" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bUVSetIsEmpty_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetUVSetBoundingBox_Parms*)Obj)->bUVSetIsEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bUVSetIsEmpty = { "bUVSetIsEmpty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetUVSetBoundingBox_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bUVSetIsEmpty_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bUVSetIsEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bUVSetIsEmpty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bounding Box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetUVSetBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bIsValidUVSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_bUVSetIsEmpty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetUVSetBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetUVSetBoundingBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexCount_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexCount_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Vertex Count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexCount_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetVertexCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexCount_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexPosition_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			bool bIsValidVertex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexID;
		static void NewProp_bIsValidVertex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidVertex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexPosition_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexPosition_Parms, VertexID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_bIsValidVertex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexPosition_Parms*)Obj)->bIsValidVertex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_bIsValidVertex = { "bIsValidVertex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexPosition_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_bIsValidVertex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_bIsValidVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "GetVertexPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventGetVertexPosition_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventIsValidTriangleID_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventIsValidTriangleID_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventIsValidTriangleID_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventIsValidTriangleID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventIsValidTriangleID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "IsValidTriangleID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventIsValidTriangleID_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics
	{
		struct GeometryScriptLibrary_MeshQueryFunctions_eventIsValidVertexID_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventIsValidVertexID_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshQueryFunctions_eventIsValidVertexID_Parms, VertexID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshQueryFunctions_eventIsValidVertexID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshQueryFunctions_eventIsValidVertexID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, nullptr, "IsValidVertexID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::GeometryScriptLibrary_MeshQueryFunctions_eventIsValidVertexID_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshQueryFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshQueryFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords, "ComputeTriangleBarycentricCoords" }, // 3529385705
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs, "GetAllTriangleIDs" }, // 3054483905
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices, "GetAllTriangleIndices" }, // 2958008449
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs, "GetAllVertexIDs" }, // 1218744333
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions, "GetAllVertexPositions" }, // 1344645099
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs, "GetHasMaterialIDs" }, // 3807540192
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups, "GetHasPolygroups" }, // 88198682
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps, "GetHasTriangleIDGaps" }, // 497148597
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals, "GetHasTriangleNormals" }, // 2600047198
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors, "GetHasVertexColors" }, // 3986145628
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps, "GetHasVertexIDGaps" }, // 1210637023
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal, "GetInterpolatedTriangleNormal" }, // 738330718
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents, "GetInterpolatedTriangleNormalTangents" }, // 3422082550
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition, "GetInterpolatedTrianglePosition" }, // 2060375890
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV, "GetInterpolatedTriangleUV" }, // 3930754289
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor, "GetInterpolatedTriangleVertexColor" }, // 760150554
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh, "GetIsClosedMesh" }, // 74239484
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh, "GetIsDenseMesh" }, // 1470986749
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox, "GetMeshBoundingBox" }, // 233425361
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet, "GetMeshHasAttributeSet" }, // 1406671958
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString, "GetMeshInfoString" }, // 4244833016
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea, "GetMeshVolumeArea" }, // 4189822355
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents, "GetNumConnectedComponents" }, // 279349009
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers, "GetNumExtendedPolygroupLayers" }, // 4069843872
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges, "GetNumOpenBorderEdges" }, // 785390687
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops, "GetNumOpenBorderLoops" }, // 2762110770
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs, "GetNumTriangleIDs" }, // 611847773
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets, "GetNumUVSets" }, // 1647907280
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs, "GetNumVertexIDs" }, // 442028926
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal, "GetTriangleFaceNormal" }, // 49031740
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices, "GetTriangleIndices" }, // 257319316
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals, "GetTriangleNormals" }, // 4235245942
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents, "GetTriangleNormalTangents" }, // 3189241867
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions, "GetTrianglePositions" }, // 1742014947
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs, "GetTriangleUVs" }, // 4233202148
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors, "GetTriangleVertexColors" }, // 3423269081
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox, "GetUVSetBoundingBox" }, // 4107673794
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount, "GetVertexCount" }, // 1855598624
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition, "GetVertexPosition" }, // 2076686703
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID, "IsValidTriangleID" }, // 2634469081
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID, "IsValidVertexID" }, // 3035792093
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshQueryFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshQueryFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshQueries" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshQueryFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshQueryFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshQueryFunctions>()
	{
		return UGeometryScriptLibrary_MeshQueryFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshQueryFunctions::UGeometryScriptLibrary_MeshQueryFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshQueryFunctions);
	UGeometryScriptLibrary_MeshQueryFunctions::~UGeometryScriptLibrary_MeshQueryFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshQueryFunctions, UGeometryScriptLibrary_MeshQueryFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshQueryFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshQueryFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshQueryFunctions), 1553863141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_4264941501(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshQueryFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
