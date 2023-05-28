// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshPolygroupFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPolygroupFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execSetPolygroupForMeshSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SetPolygroupIDOut);
		P_GET_PROPERTY(FIntProperty,Z_Param_SetPolygroupID);
		P_GET_UBOOL(Z_Param_bGenerateNewPolygroup);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_Selection,Z_Param_Out_SetPolygroupIDOut,Z_Param_SetPolygroupID,Z_Param_bGenerateNewPolygroup,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execGetTrianglesInPolygroup)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygroupID);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_TriangleIDsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_PolygroupID,Z_Param_Out_TriangleIDsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execGetPolygroupIDsInMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_PolygroupIDsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_Out_PolygroupIDsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execGetAllTrianglePolygroupIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_PolygroupIDsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_Out_PolygroupIDsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execDeleteTrianglesInPolygroup)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygroupID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumDeleted);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_PolygroupID,Z_Param_Out_NumDeleted,Z_Param_bDeferChangeNotifications,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execGetTrianglePolygroupID)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_TriangleID,Z_Param_Out_bIsValidTriangle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execComputePolygroupsFromPolygonDetection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_UBOOL(Z_Param_bRespectUVSeams);
		P_GET_UBOOL(Z_Param_bRespectHardNormals);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_QuadAdjacencyWeight);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_QuadMetricClamp);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxSearchRounds);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_bRespectUVSeams,Z_Param_bRespectHardNormals,Z_Param_QuadAdjacencyWeight,Z_Param_QuadMetricClamp,Z_Param_MaxSearchRounds,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execComputePolygroupsFromAngleThreshold)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CreaseAngle);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinGroupSize);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_CreaseAngle,Z_Param_MinGroupSize,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execConvertComponentsToPolygroups)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execConvertUVIslandsToPolygroups)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVLayer);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_UVLayer,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execCopyPolygroupsLayer)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_FromGroupLayer);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_ToGroupLayer);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer(Z_Param_TargetMesh,Z_Param_FromGroupLayer,Z_Param_ToGroupLayer,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execClearPolygroups)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClearValue);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_ClearValue,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execSetNumExtendedPolygroupLayers)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLayers);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::SetNumExtendedPolygroupLayers(Z_Param_TargetMesh,Z_Param_NumLayers,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshPolygroupFunctions::execEnablePolygroups)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshPolygroupFunctions::EnablePolygroups(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshPolygroupFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshPolygroupFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPolygroups", &UGeometryScriptLibrary_MeshPolygroupFunctions::execClearPolygroups },
			{ "ComputePolygroupsFromAngleThreshold", &UGeometryScriptLibrary_MeshPolygroupFunctions::execComputePolygroupsFromAngleThreshold },
			{ "ComputePolygroupsFromPolygonDetection", &UGeometryScriptLibrary_MeshPolygroupFunctions::execComputePolygroupsFromPolygonDetection },
			{ "ConvertComponentsToPolygroups", &UGeometryScriptLibrary_MeshPolygroupFunctions::execConvertComponentsToPolygroups },
			{ "ConvertUVIslandsToPolygroups", &UGeometryScriptLibrary_MeshPolygroupFunctions::execConvertUVIslandsToPolygroups },
			{ "CopyPolygroupsLayer", &UGeometryScriptLibrary_MeshPolygroupFunctions::execCopyPolygroupsLayer },
			{ "DeleteTrianglesInPolygroup", &UGeometryScriptLibrary_MeshPolygroupFunctions::execDeleteTrianglesInPolygroup },
			{ "EnablePolygroups", &UGeometryScriptLibrary_MeshPolygroupFunctions::execEnablePolygroups },
			{ "GetAllTrianglePolygroupIDs", &UGeometryScriptLibrary_MeshPolygroupFunctions::execGetAllTrianglePolygroupIDs },
			{ "GetPolygroupIDsInMesh", &UGeometryScriptLibrary_MeshPolygroupFunctions::execGetPolygroupIDsInMesh },
			{ "GetTrianglePolygroupID", &UGeometryScriptLibrary_MeshPolygroupFunctions::execGetTrianglePolygroupID },
			{ "GetTrianglesInPolygroup", &UGeometryScriptLibrary_MeshPolygroupFunctions::execGetTrianglesInPolygroup },
			{ "SetNumExtendedPolygroupLayers", &UGeometryScriptLibrary_MeshPolygroupFunctions::execSetNumExtendedPolygroupLayers },
			{ "SetPolygroupForMeshSelection", &UGeometryScriptLibrary_MeshPolygroupFunctions::execSetPolygroupForMeshSelection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventClearPolygroups_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			int32 ClearValue;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ClearValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventClearPolygroups_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventClearPolygroups_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_ClearValue = { "ClearValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventClearPolygroups_Parms, ClearValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventClearPolygroups_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventClearPolygroups_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_ClearValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "CPP_Default_ClearValue", "0" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "ClearPolyGroups" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "ClearPolygroups", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventClearPolygroups_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromAngleThreshold_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			float CreaseAngle;
			int32 MinGroupSize;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CreaseAngle;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinGroupSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromAngleThreshold_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromAngleThreshold_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_CreaseAngle = { "CreaseAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromAngleThreshold_Parms, CreaseAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_MinGroupSize = { "MinGroupSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromAngleThreshold_Parms, MinGroupSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromAngleThreshold_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromAngleThreshold_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_CreaseAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_MinGroupSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "CPP_Default_CreaseAngle", "15.000000" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_MinGroupSize", "2" },
		{ "DisplayName", "ComputePolyGroupsFromAngleThreshold" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "ComputePolygroupsFromAngleThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromAngleThreshold_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			bool bRespectUVSeams;
			bool bRespectHardNormals;
			double QuadAdjacencyWeight;
			double QuadMetricClamp;
			int32 MaxSearchRounds;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static void NewProp_bRespectUVSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectUVSeams;
		static void NewProp_bRespectHardNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectHardNormals;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_QuadAdjacencyWeight;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_QuadMetricClamp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxSearchRounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_bRespectUVSeams_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms*)Obj)->bRespectUVSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_bRespectUVSeams = { "bRespectUVSeams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_bRespectUVSeams_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_bRespectHardNormals_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms*)Obj)->bRespectHardNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_bRespectHardNormals = { "bRespectHardNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_bRespectHardNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_QuadAdjacencyWeight = { "QuadAdjacencyWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms, QuadAdjacencyWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_QuadMetricClamp = { "QuadMetricClamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms, QuadMetricClamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_MaxSearchRounds = { "MaxSearchRounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms, MaxSearchRounds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_bRespectUVSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_bRespectHardNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_QuadAdjacencyWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_QuadMetricClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_MaxSearchRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "CPP_Default_bRespectHardNormals", "false" },
		{ "CPP_Default_bRespectUVSeams", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_MaxSearchRounds", "1" },
		{ "CPP_Default_QuadAdjacencyWeight", "1.000000" },
		{ "CPP_Default_QuadMetricClamp", "1.000000" },
		{ "DisplayName", "ComputePolyGroupsFromPolygonDetection" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "ComputePolygroupsFromPolygonDetection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventComputePolygroupsFromPolygonDetection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertComponentsToPolygroups_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertComponentsToPolygroups_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertComponentsToPolygroups_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertComponentsToPolygroups_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertComponentsToPolygroups_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "ConvertComponentsToPolyGroups" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "ConvertComponentsToPolygroups", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertComponentsToPolygroups_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertUVIslandsToPolygroups_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			int32 UVLayer;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertUVIslandsToPolygroups_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertUVIslandsToPolygroups_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_UVLayer = { "UVLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertUVIslandsToPolygroups_Parms, UVLayer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertUVIslandsToPolygroups_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertUVIslandsToPolygroups_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_UVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_UVLayer", "0" },
		{ "DisplayName", "ConvertUVIslandsToPolyGroups" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "ConvertUVIslandsToPolygroups", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventConvertUVIslandsToPolygroups_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventCopyPolygroupsLayer_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer FromGroupLayer;
			FGeometryScriptGroupLayer ToGroupLayer;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromGroupLayer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToGroupLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventCopyPolygroupsLayer_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_FromGroupLayer = { "FromGroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventCopyPolygroupsLayer_Parms, FromGroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_ToGroupLayer = { "ToGroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventCopyPolygroupsLayer_Parms, ToGroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventCopyPolygroupsLayer_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventCopyPolygroupsLayer_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_FromGroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_ToGroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "CopyPolyGroupsLayer" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "CopyPolygroupsLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventCopyPolygroupsLayer_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			int32 PolygroupID;
			int32 NumDeleted;
			bool bDeferChangeNotifications;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PolygroupID;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumDeleted;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_PolygroupID_MetaData[] = {
		{ "DisplayName", "PolyGroup ID" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_PolygroupID = { "PolygroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms, PolygroupID), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_PolygroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_PolygroupID_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_NumDeleted = { "NumDeleted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms, NumDeleted), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_PolygroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_NumDeleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "DeleteTrianglesInPolyGroup" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "DeleteTrianglesInPolygroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventDeleteTrianglesInPolygroup_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventEnablePolygroups_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventEnablePolygroups_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventEnablePolygroups_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventEnablePolygroups_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "EnablePolyGroups" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "EnablePolygroups", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventEnablePolygroups_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventGetAllTrianglePolygroupIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			FGeometryScriptIndexList PolygroupIDsOut;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupIDsOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygroupIDsOut;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetAllTrianglePolygroupIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetAllTrianglePolygroupIDs_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_PolygroupIDsOut_MetaData[] = {
		{ "DisplayName", "PolyGroup IDs Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_PolygroupIDsOut = { "PolygroupIDsOut", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetAllTrianglePolygroupIDs_Parms, PolygroupIDsOut), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_PolygroupIDsOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_PolygroupIDsOut_MetaData)) }; // 2920384414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetAllTrianglePolygroupIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_PolygroupIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "Comment", "/**\n\x09* Create list of per-triangle PolyGroup IDs for the PolyGroup in the Mesh\n\x09* @warning if the mesh is not Triangle-Compact (eg GetHasTriangleIDGaps == false) then the returned list will also have the same gaps\n\x09*/" },
		{ "DisplayName", "GetAllTrianglePolyGroupIDs" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create list of per-triangle PolyGroup IDs for the PolyGroup in the Mesh\n@warning if the mesh is not Triangle-Compact (eg GetHasTriangleIDGaps == false) then the returned list will also have the same gaps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "GetAllTrianglePolygroupIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventGetAllTrianglePolygroupIDs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventGetPolygroupIDsInMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			FGeometryScriptIndexList PolygroupIDsOut;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupIDsOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygroupIDsOut;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetPolygroupIDsInMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetPolygroupIDsInMesh_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_PolygroupIDsOut_MetaData[] = {
		{ "DisplayName", "PolyGroup IDs Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_PolygroupIDsOut = { "PolygroupIDsOut", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetPolygroupIDsInMesh_Parms, PolygroupIDsOut), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_PolygroupIDsOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_PolygroupIDsOut_MetaData)) }; // 2920384414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetPolygroupIDsInMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_PolygroupIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "Comment", "/**\n\x09* Create list of all unique PolyGroup IDs that exist in the PolyGroup Layer in the Mesh\n\x09*/" },
		{ "DisplayName", "GetPolyGroupIDsInMesh" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create list of all unique PolyGroup IDs that exist in the PolyGroup Layer in the Mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "GetPolygroupIDsInMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventGetPolygroupIDsInMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglePolygroupID_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			int32 TriangleID;
			bool bIsValidTriangle;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TriangleID;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglePolygroupID_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglePolygroupID_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglePolygroupID_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglePolygroupID_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglePolygroupID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "PolyGroup ID" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglePolygroupID_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "DisplayName", "GetTrianglePolyGroupID" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "GetTrianglePolygroupID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglePolygroupID_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglesInPolygroup_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			int32 PolygroupID;
			FGeometryScriptIndexList TriangleIDsOut;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PolygroupID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleIDsOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleIDsOut;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglesInPolygroup_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglesInPolygroup_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_PolygroupID_MetaData[] = {
		{ "DisplayName", "PolyGroup ID" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_PolygroupID = { "PolygroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglesInPolygroup_Parms, PolygroupID), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_PolygroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_PolygroupID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_TriangleIDsOut_MetaData[] = {
		{ "DisplayName", "Triangle IDs Out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_TriangleIDsOut = { "TriangleIDsOut", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglesInPolygroup_Parms, TriangleIDsOut), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_TriangleIDsOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_TriangleIDsOut_MetaData)) }; // 2920384414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglesInPolygroup_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_PolygroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_TriangleIDsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Polygroups" },
		{ "Comment", "/**\n\x09 * Create list of all triangles with the given PolyGroup ID in the given GroupLayer (not necessarily a single connected-component)\n\x09 */" },
		{ "DisplayName", "GetTrianglesInPolyGroup" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create list of all triangles with the given PolyGroup ID in the given GroupLayer (not necessarily a single connected-component)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "GetTrianglesInPolygroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventGetTrianglesInPolygroup_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventSetNumExtendedPolygroupLayers_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 NumLayers;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumLayers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetNumExtendedPolygroupLayers_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_NumLayers = { "NumLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetNumExtendedPolygroupLayers_Parms, NumLayers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetNumExtendedPolygroupLayers_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetNumExtendedPolygroupLayers_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_NumLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "SetNumExtendedPolyGroupLayers" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "SetNumExtendedPolygroupLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventSetNumExtendedPolygroupLayers_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			FGeometryScriptMeshSelection Selection;
			int32 SetPolygroupIDOut;
			int32 SetPolygroupID;
			bool bGenerateNewPolygroup;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetPolygroupIDOut_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SetPolygroupIDOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetPolygroupID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SetPolygroupID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNewPolygroup_MetaData[];
#endif
		static void NewProp_bGenerateNewPolygroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNewPolygroup;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupIDOut_MetaData[] = {
		{ "DisplayName", "Set PolyGroup ID Out" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupIDOut = { "SetPolygroupIDOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms, SetPolygroupIDOut), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupIDOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupIDOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupID_MetaData[] = {
		{ "DisplayName", "Set PolyGroup ID" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupID = { "SetPolygroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms, SetPolygroupID), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bGenerateNewPolygroup_MetaData[] = {
		{ "DisplayName", "Generate New PolyGroup" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bGenerateNewPolygroup_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms*)Obj)->bGenerateNewPolygroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bGenerateNewPolygroup = { "bGenerateNewPolygroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bGenerateNewPolygroup_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bGenerateNewPolygroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bGenerateNewPolygroup_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupIDOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_SetPolygroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bGenerateNewPolygroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "Comment", "/**\n\x09 * Set a new PolyGroup on all the triangles of the given Selection, for the given GroupLayer.\n\x09 * @param SetPolygroupID explicit new PolyGroupID to set\n\x09 * @param bGenerateNewPolygroup if true, SetPolyGroupID is ignored and a new unique PolyGroupID is generated\n\x09 * @param SetPolygroupIDOut the PolyGroupID that was set on the triangles is returned here (whether explicit or auto-generated)\n\x09 * @param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification\n\x09 */" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_bGenerateNewPolygroup", "false" },
		{ "CPP_Default_SetPolygroupID", "0" },
		{ "DisplayName", "SetPolyGroupForMeshSelection" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set a new PolyGroup on all the triangles of the given Selection, for the given GroupLayer.\n@param SetPolygroupID explicit new PolyGroupID to set\n@param bGenerateNewPolygroup if true, SetPolyGroupID is ignored and a new unique PolyGroupID is generated\n@param SetPolygroupIDOut the PolyGroupID that was set on the triangles is returned here (whether explicit or auto-generated)\n@param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, nullptr, "SetPolygroupForMeshSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::GeometryScriptLibrary_MeshPolygroupFunctions_eventSetPolygroupForMeshSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshPolygroupFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups, "ClearPolygroups" }, // 3685895177
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold, "ComputePolygroupsFromAngleThreshold" }, // 2148516643
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection, "ComputePolygroupsFromPolygonDetection" }, // 2435241164
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups, "ConvertComponentsToPolygroups" }, // 2881143353
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups, "ConvertUVIslandsToPolygroups" }, // 3849352907
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer, "CopyPolygroupsLayer" }, // 2478357499
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup, "DeleteTrianglesInPolygroup" }, // 2194369908
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups, "EnablePolygroups" }, // 3238110246
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs, "GetAllTrianglePolygroupIDs" }, // 2417832591
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh, "GetPolygroupIDsInMesh" }, // 1660954870
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID, "GetTrianglePolygroupID" }, // 148940157
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup, "GetTrianglesInPolygroup" }, // 2977363221
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers, "SetNumExtendedPolygroupLayers" }, // 2939937336
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection, "SetPolygroupForMeshSelection" }, // 174606557
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshPolygroupFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshPolygroupFunctions.h" },
		{ "ScriptName", "GeometryScript_PolyGroups" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshPolygroupFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshPolygroupFunctions>()
	{
		return UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshPolygroupFunctions::UGeometryScriptLibrary_MeshPolygroupFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshPolygroupFunctions);
	UGeometryScriptLibrary_MeshPolygroupFunctions::~UGeometryScriptLibrary_MeshPolygroupFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshPolygroupFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshPolygroupFunctions), 1569179617U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_4009746516(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
