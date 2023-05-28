// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/ListUtilityFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListUtilityFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptScalarList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangleList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUVList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVectorList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannels)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_XChannelIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_YChannelIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannels(Z_Param_ColorList,Z_Param_Out_VectorList,Z_Param_XChannelIndex,Z_Param_YChannelIndex,Z_Param_ZChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannel)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannel(Z_Param_ColorList,Z_Param_Out_ScalarList,Z_Param_ChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearColorList)
	{
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_ColorList);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearColorList(Z_Param_Out_ColorList,Z_Param_ClearColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateColorList)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateColorList(Z_Param_ColorList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToColorList)
	{
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ColorArray);
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_ColorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToColorList(Z_Param_Out_ColorArray,Z_Param_Out_ColorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertColorListToArray)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ColorArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertColorListToArray(Z_Param_ColorList,Z_Param_Out_ColorArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetColorListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_ColorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetColorListItem(Z_Param_Out_ColorList,Z_Param_Index,Z_Param_NewColor,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListItem)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetColorListItem(Z_Param_ColorList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLastIndex(Z_Param_ColorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLength)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLength(Z_Param_ColorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearUVList)
	{
		P_GET_STRUCT_REF(FGeometryScriptUVList,Z_Param_Out_UVList);
		P_GET_STRUCT(FVector2D,Z_Param_ClearUV);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearUVList(Z_Param_Out_UVList,Z_Param_ClearUV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateUVList)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_GET_STRUCT_REF(FGeometryScriptUVList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateUVList(Z_Param_UVList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToUVList)
	{
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVArray);
		P_GET_STRUCT_REF(FGeometryScriptUVList,Z_Param_Out_UVList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToUVList(Z_Param_Out_UVArray,Z_Param_Out_UVList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertUVListToArray)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertUVListToArray(Z_Param_UVList,Z_Param_Out_UVArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetUVListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptUVList,Z_Param_Out_UVList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector2D,Z_Param_NewUV);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetUVListItem(Z_Param_Out_UVList,Z_Param_Index,Z_Param_NewUV,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListItem)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetUVListItem(Z_Param_UVList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLastIndex(Z_Param_UVList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLength)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLength(Z_Param_UVList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearVectorList)
	{
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_GET_STRUCT(FVector,Z_Param_ClearValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearVectorList(Z_Param_Out_VectorList,Z_Param_ClearValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateVectorList)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateVectorList(Z_Param_VectorList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToVectorList)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VectorArray);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToVectorList(Z_Param_Out_VectorArray,Z_Param_Out_VectorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertVectorListToArray)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VectorArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertVectorListToArray(Z_Param_VectorList,Z_Param_Out_VectorArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetVectorListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_NewValue);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListItem(Z_Param_Out_VectorList,Z_Param_Index,Z_Param_NewValue,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListItem)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListItem(Z_Param_VectorList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLastIndex(Z_Param_VectorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLength)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLength(Z_Param_VectorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearScalarList)
	{
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ClearValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearScalarList(Z_Param_Out_ScalarList,Z_Param_ClearValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateScalarList)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateScalarList(Z_Param_ScalarList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToScalarList)
	{
		P_GET_TARRAY_REF(double,Z_Param_Out_VectorArray);
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToScalarList(Z_Param_Out_VectorArray,Z_Param_Out_ScalarList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertScalarListToArray)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_GET_TARRAY_REF(double,Z_Param_Out_ScalarArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertScalarListToArray(Z_Param_ScalarList,Z_Param_Out_ScalarArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetScalarListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_NewValue);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetScalarListItem(Z_Param_Out_ScalarList,Z_Param_Index,Z_Param_NewValue,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListItem)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListItem(Z_Param_ScalarList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLastIndex(Z_Param_ScalarList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLength)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLength(Z_Param_ScalarList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToTriangleList)
	{
		P_GET_TARRAY_REF(FIntVector,Z_Param_Out_TriangleArray);
		P_GET_STRUCT_REF(FGeometryScriptTriangleList,Z_Param_Out_TriangleList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToTriangleList(Z_Param_Out_TriangleArray,Z_Param_Out_TriangleList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertTriangleListToArray)
	{
		P_GET_STRUCT(FGeometryScriptTriangleList,Z_Param_TriangleList);
		P_GET_TARRAY_REF(FIntVector,Z_Param_Out_TriangleArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertTriangleListToArray(Z_Param_TriangleList,Z_Param_Out_TriangleArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListItem)
	{
		P_GET_STRUCT(FGeometryScriptTriangleList,Z_Param_TriangleList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Triangle);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListItem(Z_Param_TriangleList,Z_Param_Triangle,Z_Param_Out_bIsValidTriangle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLastTriangle)
	{
		P_GET_STRUCT(FGeometryScriptTriangleList,Z_Param_TriangleList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLastTriangle(Z_Param_TriangleList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLength)
	{
		P_GET_STRUCT(FGeometryScriptTriangleList,Z_Param_TriangleList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLength(Z_Param_TriangleList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearIndexList)
	{
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_IndexList);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClearValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearIndexList(Z_Param_Out_IndexList,Z_Param_ClearValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateIndexList)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateIndexList(Z_Param_IndexList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToIndexList)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_IndexArray);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_IndexList);
		P_GET_ENUM(EGeometryScriptIndexType,Z_Param_IndexType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToIndexList(Z_Param_Out_IndexArray,Z_Param_Out_IndexList,EGeometryScriptIndexType(Z_Param_IndexType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertIndexListToArray)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_GET_TARRAY_REF(int32,Z_Param_Out_IndexArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertIndexListToArray(Z_Param_IndexList,Z_Param_Out_IndexArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetIndexListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_IndexList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetIndexListItem(Z_Param_Out_IndexList,Z_Param_Index,Z_Param_NewValue,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListItem)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListItem(Z_Param_IndexList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLastIndex(Z_Param_IndexList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLength)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLength(Z_Param_IndexList);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_ListUtilityFunctions::StaticRegisterNativesUGeometryScriptLibrary_ListUtilityFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_ListUtilityFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearColorList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearColorList },
			{ "ClearIndexList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearIndexList },
			{ "ClearScalarList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearScalarList },
			{ "ClearUVList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearUVList },
			{ "ClearVectorList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearVectorList },
			{ "ConvertArrayToColorList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToColorList },
			{ "ConvertArrayToIndexList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToIndexList },
			{ "ConvertArrayToScalarList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToScalarList },
			{ "ConvertArrayToTriangleList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToTriangleList },
			{ "ConvertArrayToUVList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToUVList },
			{ "ConvertArrayToVectorList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToVectorList },
			{ "ConvertColorListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertColorListToArray },
			{ "ConvertIndexListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertIndexListToArray },
			{ "ConvertScalarListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertScalarListToArray },
			{ "ConvertTriangleListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertTriangleListToArray },
			{ "ConvertUVListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertUVListToArray },
			{ "ConvertVectorListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertVectorListToArray },
			{ "DuplicateColorList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateColorList },
			{ "DuplicateIndexList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateIndexList },
			{ "DuplicateScalarList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateScalarList },
			{ "DuplicateUVList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateUVList },
			{ "DuplicateVectorList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateVectorList },
			{ "ExtractColorListChannel", &UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannel },
			{ "ExtractColorListChannels", &UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannels },
			{ "GetColorListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListItem },
			{ "GetColorListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLastIndex },
			{ "GetColorListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLength },
			{ "GetIndexListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListItem },
			{ "GetIndexListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLastIndex },
			{ "GetIndexListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLength },
			{ "GetScalarListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListItem },
			{ "GetScalarListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLastIndex },
			{ "GetScalarListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLength },
			{ "GetTriangleListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListItem },
			{ "GetTriangleListLastTriangle", &UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLastTriangle },
			{ "GetTriangleListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLength },
			{ "GetUVListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListItem },
			{ "GetUVListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLastIndex },
			{ "GetUVListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLength },
			{ "GetVectorListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListItem },
			{ "GetVectorListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLastIndex },
			{ "GetVectorListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLength },
			{ "SetColorListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetColorListItem },
			{ "SetIndexListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetIndexListItem },
			{ "SetScalarListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetScalarListItem },
			{ "SetUVListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetUVListItem },
			{ "SetVectorListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetVectorListItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearColorList_Parms
		{
			FGeometryScriptColorList ColorList;
			FLinearColor ClearColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearColorList_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearColorList_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::NewProp_ClearColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearColorList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearColorList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearIndexList_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 ClearValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ClearValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearIndexList_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::NewProp_ClearValue = { "ClearValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearIndexList_Parms, ClearValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::NewProp_ClearValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "CPP_Default_ClearValue", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearIndexList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearIndexList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearScalarList_Parms
		{
			FGeometryScriptScalarList ScalarList;
			double ClearValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ClearValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearScalarList_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::NewProp_ClearValue = { "ClearValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearScalarList_Parms, ClearValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::NewProp_ClearValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "CPP_Default_ClearValue", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearScalarList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearScalarList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearUVList_Parms
		{
			FGeometryScriptUVList UVList;
			FVector2D ClearUV;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearUV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearUVList_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::NewProp_ClearUV = { "ClearUV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearUVList_Parms, ClearUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::NewProp_ClearUV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearUVList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearUVList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearVectorList_Parms
		{
			FGeometryScriptVectorList VectorList;
			FVector ClearValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearVectorList_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::NewProp_ClearValue = { "ClearValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearVectorList_Parms, ClearValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::NewProp_ClearValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "CPP_Default_ClearValue", "" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearVectorList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearVectorList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToColorList_Parms
		{
			TArray<FLinearColor> ColorArray;
			FGeometryScriptColorList ColorList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_Inner = { "ColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray = { "ColorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToColorList_Parms, ColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToColorList_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToColorList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToColorList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms
		{
			TArray<int32> IndexArray;
			FGeometryScriptIndexList IndexList;
			EGeometryScriptIndexType IndexType;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IndexArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IndexType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_Inner = { "IndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray = { "IndexArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms, IndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexType = { "IndexType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms, IndexType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType, METADATA_PARAMS(nullptr, 0) }; // 4266585007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "CPP_Default_IndexType", "Any" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToIndexList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToScalarList_Parms
		{
			TArray<double> VectorArray;
			FGeometryScriptScalarList ScalarList;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToScalarList_Parms, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToScalarList_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_ScalarList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToScalarList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToScalarList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToTriangleList_Parms
		{
			TArray<FIntVector> TriangleArray;
			FGeometryScriptTriangleList TriangleList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriangleArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_Inner = { "TriangleArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray = { "TriangleArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToTriangleList_Parms, TriangleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToTriangleList_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(nullptr, 0) }; // 2584906498
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToTriangleList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToTriangleList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToUVList_Parms
		{
			TArray<FVector2D> UVArray;
			FGeometryScriptUVList UVList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_Inner = { "UVArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray = { "UVArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToUVList_Parms, UVArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToUVList_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToUVList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToUVList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToVectorList_Parms
		{
			TArray<FVector> VectorArray;
			FGeometryScriptVectorList VectorList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToVectorList_Parms, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToVectorList_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToVectorList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToVectorList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertColorListToArray_Parms
		{
			FGeometryScriptColorList ColorList;
			TArray<FLinearColor> ColorArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertColorListToArray_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorArray_Inner = { "ColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorArray = { "ColorArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertColorListToArray_Parms, ColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertColorListToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertColorListToArray_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertIndexListToArray_Parms
		{
			FGeometryScriptIndexList IndexList;
			TArray<int32> IndexArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IndexArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertIndexListToArray_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexArray_Inner = { "IndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexArray = { "IndexArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertIndexListToArray_Parms, IndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertIndexListToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertIndexListToArray_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertScalarListToArray_Parms
		{
			FGeometryScriptScalarList ScalarList;
			TArray<double> ScalarArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ScalarArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertScalarListToArray_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarArray_Inner = { "ScalarArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarArray = { "ScalarArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertScalarListToArray_Parms, ScalarArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertScalarListToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertScalarListToArray_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertTriangleListToArray_Parms
		{
			FGeometryScriptTriangleList TriangleList;
			TArray<FIntVector> TriangleArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriangleArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertTriangleListToArray_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(nullptr, 0) }; // 2584906498
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleArray_Inner = { "TriangleArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleArray = { "TriangleArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertTriangleListToArray_Parms, TriangleArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertTriangleListToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertTriangleListToArray_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertUVListToArray_Parms
		{
			FGeometryScriptUVList UVList;
			TArray<FVector2D> UVArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertUVListToArray_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVArray_Inner = { "UVArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVArray = { "UVArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertUVListToArray_Parms, UVArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertUVListToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertUVListToArray_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertVectorListToArray_Parms
		{
			FGeometryScriptVectorList VectorList;
			TArray<FVector> VectorArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertVectorListToArray_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertVectorListToArray_Parms, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertVectorListToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertVectorListToArray_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateColorList_Parms
		{
			FGeometryScriptColorList ColorList;
			FGeometryScriptColorList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateColorList_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateColorList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateColorList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateColorList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateIndexList_Parms
		{
			FGeometryScriptIndexList IndexList;
			FGeometryScriptIndexList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateIndexList_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateIndexList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateIndexList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateIndexList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateScalarList_Parms
		{
			FGeometryScriptScalarList ScalarList;
			FGeometryScriptScalarList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateScalarList_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateScalarList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateScalarList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateScalarList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateUVList_Parms
		{
			FGeometryScriptUVList UVList;
			FGeometryScriptUVList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateUVList_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateUVList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateUVList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateUVList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateVectorList_Parms
		{
			FGeometryScriptVectorList VectorList;
			FGeometryScriptVectorList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateVectorList_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateVectorList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateVectorList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateVectorList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms
		{
			FGeometryScriptColorList ColorList;
			FGeometryScriptScalarList ScalarList;
			int32 ChannelIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms, ChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ChannelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "CPP_Default_ChannelIndex", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ExtractColorListChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms
		{
			FGeometryScriptColorList ColorList;
			FGeometryScriptVectorList VectorList;
			int32 XChannelIndex;
			int32 YChannelIndex;
			int32 ZChannelIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_XChannelIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_YChannelIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZChannelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_XChannelIndex = { "XChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, XChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_YChannelIndex = { "YChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, YChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_ZChannelIndex = { "ZChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, ZChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_XChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_YChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_ZChannelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "CPP_Default_XChannelIndex", "0" },
		{ "CPP_Default_YChannelIndex", "1" },
		{ "CPP_Default_ZChannelIndex", "2" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ExtractColorListChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms
		{
			FGeometryScriptColorList ColorList;
			int32 Index;
			bool bIsValidIndex;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetColorListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLastIndex_Parms
		{
			FGeometryScriptColorList ColorList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLastIndex_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLastIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetColorListLastIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLastIndex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLength_Parms
		{
			FGeometryScriptColorList ColorList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLength_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetColorListLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLength_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 Index;
			bool bIsValidIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetIndexListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLastIndex_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLastIndex_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLastIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetIndexListLastIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLastIndex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLength_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLength_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetIndexListLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLength_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms
		{
			FGeometryScriptScalarList ScalarList;
			int32 Index;
			bool bIsValidIndex;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetScalarListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLastIndex_Parms
		{
			FGeometryScriptScalarList ScalarList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLastIndex_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLastIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetScalarListLastIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLastIndex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLength_Parms
		{
			FGeometryScriptScalarList ScalarList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLength_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetScalarListLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLength_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms
		{
			FGeometryScriptTriangleList TriangleList;
			int32 Triangle;
			bool bIsValidTriangle;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Triangle;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(nullptr, 0) }; // 2584906498
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_Triangle = { "Triangle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms, Triangle), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_Triangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetTriangleListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLastTriangle_Parms
		{
			FGeometryScriptTriangleList TriangleList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLastTriangle_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(nullptr, 0) }; // 2584906498
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLastTriangle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetTriangleListLastTriangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLastTriangle_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLength_Parms
		{
			FGeometryScriptTriangleList TriangleList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLength_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(nullptr, 0) }; // 2584906498
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetTriangleListLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLength_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms
		{
			FGeometryScriptUVList UVList;
			int32 Index;
			bool bIsValidIndex;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetUVListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLastIndex_Parms
		{
			FGeometryScriptUVList UVList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLastIndex_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLastIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetUVListLastIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLastIndex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLength_Parms
		{
			FGeometryScriptUVList UVList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLength_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetUVListLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLength_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms
		{
			FGeometryScriptVectorList VectorList;
			int32 Index;
			bool bIsValidIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetVectorListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLastIndex_Parms
		{
			FGeometryScriptVectorList VectorList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLastIndex_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLastIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetVectorListLastIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLastIndex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLength_Parms
		{
			FGeometryScriptVectorList VectorList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLength_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetVectorListLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLength_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms
		{
			FGeometryScriptColorList ColorList;
			int32 Index;
			FLinearColor NewColor;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(nullptr, 0) }; // 3651011655
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetColorListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 Index;
			int32 NewValue;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValue;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetIndexListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms
		{
			FGeometryScriptScalarList ScalarList;
			int32 Index;
			double NewValue;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NewValue;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetScalarListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms
		{
			FGeometryScriptUVList UVList;
			int32 Index;
			FVector2D NewUV;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewUV;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_NewUV = { "NewUV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms, NewUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_NewUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetUVListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms
		{
			FGeometryScriptVectorList VectorList;
			int32 Index;
			FVector NewValue;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetVectorListItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_ListUtilityFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_ListUtilityFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList, "ClearColorList" }, // 4186366152
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList, "ClearIndexList" }, // 1734753202
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList, "ClearScalarList" }, // 3206822390
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList, "ClearUVList" }, // 3343943349
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList, "ClearVectorList" }, // 2141904822
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList, "ConvertArrayToColorList" }, // 2158466103
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList, "ConvertArrayToIndexList" }, // 3500822130
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList, "ConvertArrayToScalarList" }, // 309284638
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList, "ConvertArrayToTriangleList" }, // 265172522
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList, "ConvertArrayToUVList" }, // 631480852
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList, "ConvertArrayToVectorList" }, // 3553917977
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray, "ConvertColorListToArray" }, // 25365466
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray, "ConvertIndexListToArray" }, // 1495450234
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray, "ConvertScalarListToArray" }, // 2408175466
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray, "ConvertTriangleListToArray" }, // 423184835
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray, "ConvertUVListToArray" }, // 4117779426
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray, "ConvertVectorListToArray" }, // 785172994
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList, "DuplicateColorList" }, // 4072138499
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList, "DuplicateIndexList" }, // 208671176
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList, "DuplicateScalarList" }, // 1996866531
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList, "DuplicateUVList" }, // 720464281
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList, "DuplicateVectorList" }, // 859125903
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel, "ExtractColorListChannel" }, // 784905740
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels, "ExtractColorListChannels" }, // 84761083
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem, "GetColorListItem" }, // 2958833299
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex, "GetColorListLastIndex" }, // 3828628323
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength, "GetColorListLength" }, // 3850258708
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem, "GetIndexListItem" }, // 52963175
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex, "GetIndexListLastIndex" }, // 2915443778
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength, "GetIndexListLength" }, // 3706254801
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem, "GetScalarListItem" }, // 2183756533
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex, "GetScalarListLastIndex" }, // 1578444287
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength, "GetScalarListLength" }, // 1972176952
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem, "GetTriangleListItem" }, // 271685299
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle, "GetTriangleListLastTriangle" }, // 4154108450
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength, "GetTriangleListLength" }, // 935004559
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem, "GetUVListItem" }, // 3589219703
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex, "GetUVListLastIndex" }, // 1223803782
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength, "GetUVListLength" }, // 341471338
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem, "GetVectorListItem" }, // 4182968633
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex, "GetVectorListLastIndex" }, // 2001029745
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength, "GetVectorListLength" }, // 115216546
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem, "SetColorListItem" }, // 724917772
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem, "SetIndexListItem" }, // 2247723310
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem, "SetScalarListItem" }, // 3318830017
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem, "SetUVListItem" }, // 304082865
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem, "SetVectorListItem" }, // 3229814380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/ListUtilityFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptName", "GeometryScript_List" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_ListUtilityFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_ListUtilityFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_ListUtilityFunctions>()
	{
		return UGeometryScriptLibrary_ListUtilityFunctions::StaticClass();
	}
	UGeometryScriptLibrary_ListUtilityFunctions::UGeometryScriptLibrary_ListUtilityFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_ListUtilityFunctions);
	UGeometryScriptLibrary_ListUtilityFunctions::~UGeometryScriptLibrary_ListUtilityFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, UGeometryScriptLibrary_ListUtilityFunctions::StaticClass, TEXT("UGeometryScriptLibrary_ListUtilityFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_ListUtilityFunctions), 1429010807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_581957114(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
