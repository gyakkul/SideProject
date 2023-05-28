// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshSelectionQueryFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSelectionQueryFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolyPath();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionQueryFunctions::execGetMeshSelectionBoundaryLoops)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_TARRAY_REF(FGeometryScriptIndexList,Z_Param_Out_IndexLoops);
		P_GET_TARRAY_REF(FGeometryScriptPolyPath,Z_Param_Out_PathLoops);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLoops);
		P_GET_UBOOL_REF(Z_Param_Out_bFoundErrors);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_IndexLoops,Z_Param_Out_PathLoops,Z_Param_Out_NumLoops,Z_Param_Out_bFoundErrors,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionQueryFunctions::execGetMeshSelectionBoundingBox)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT_REF(FBox,Z_Param_Out_SelectionBounds);
		P_GET_UBOOL_REF(Z_Param_Out_bIsEmpty);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_SelectionBounds,Z_Param_Out_bIsEmpty,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionQueryFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeshSelectionBoundaryLoops", &UGeometryScriptLibrary_MeshSelectionQueryFunctions::execGetMeshSelectionBoundaryLoops },
			{ "GetMeshSelectionBoundingBox", &UGeometryScriptLibrary_MeshSelectionQueryFunctions::execGetMeshSelectionBoundingBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			TArray<FGeometryScriptIndexList> IndexLoops;
			TArray<FGeometryScriptPolyPath> PathLoops;
			int32 NumLoops;
			bool bFoundErrors;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexLoops_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexLoops;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathLoops_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathLoops;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumLoops;
		static void NewProp_bFoundErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundErrors;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_IndexLoops_Inner = { "IndexLoops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_IndexLoops = { "IndexLoops", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms, IndexLoops), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_PathLoops_Inner = { "PathLoops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_PathLoops = { "PathLoops", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms, PathLoops), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_bFoundErrors_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms*)Obj)->bFoundErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_bFoundErrors = { "bFoundErrors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_bFoundErrors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_IndexLoops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_IndexLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_PathLoops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_PathLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_NumLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_bFoundErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SelectionQueries" },
		{ "Comment", "/**\n\x09 * Compute the set of Vertex Loops bordering a Mesh Selection. Both the 3D polylines and lists of vertex indices are returned for each Loop.\n\x09 * Note that for a Vertex selection this will function return the border loops around the set of vertex triangle one-rings.\n\x09 * \n\x09 * @param IndexLoops for each discovered Loop, the IndexList of mesh vertex indices around the loop is returned here\n\x09 * @param PathLoops for each discovered Loop, the PolyPath of mesh vertex positions around the loop is returned here. The ordering for each loop is the same as IndexLoops.\n\x09 * @param NumLoops number of loops found is returned here\n\x09 * @param bFoundErrors true is returned here if topological errors were found during loop computation. In this case the Loop set may be incomplete.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the set of Vertex Loops bordering a Mesh Selection. Both the 3D polylines and lists of vertex indices are returned for each Loop.\nNote that for a Vertex selection this will function return the border loops around the set of vertex triangle one-rings.\n\n@param IndexLoops for each discovered Loop, the IndexList of mesh vertex indices around the loop is returned here\n@param PathLoops for each discovered Loop, the PolyPath of mesh vertex positions around the loop is returned here. The ordering for each loop is the same as IndexLoops.\n@param NumLoops number of loops found is returned here\n@param bFoundErrors true is returned here if topological errors were found during loop computation. In this case the Loop set may be incomplete." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions, nullptr, "GetMeshSelectionBoundaryLoops", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundaryLoops_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundingBox_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FBox SelectionBounds;
			bool bIsEmpty;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionBounds;
		static void NewProp_bIsEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEmpty;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundingBox_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundingBox_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_SelectionBounds = { "SelectionBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundingBox_Parms, SelectionBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_bIsEmpty_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundingBox_Parms*)Obj)->bIsEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_bIsEmpty = { "bIsEmpty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundingBox_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_bIsEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundingBox_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundingBox_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_SelectionBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_bIsEmpty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SelectionQueries" },
		{ "Comment", "/**\n\x09 * Get the 3D Bounding Box of a Mesh Selection, ie bounding box of vertices contained in the Selection\n\x09 * @param bIsEmpty will return as true if the selection was empty (the box will be initialized to 0 in this case)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionQueryFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the 3D Bounding Box of a Mesh Selection, ie bounding box of vertices contained in the Selection\n@param bIsEmpty will return as true if the selection was empty (the box will be initialized to 0 in this case)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions, nullptr, "GetMeshSelectionBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::GeometryScriptLibrary_MeshSelectionQueryFunctions_eventGetMeshSelectionBoundingBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshSelectionQueryFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops, "GetMeshSelectionBoundaryLoops" }, // 900438324
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox, "GetMeshSelectionBoundingBox" }, // 2237335225
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshSelectionQueryFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionQueryFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshSelectionQueries" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshSelectionQueryFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshSelectionQueryFunctions>()
	{
		return UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshSelectionQueryFunctions::UGeometryScriptLibrary_MeshSelectionQueryFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshSelectionQueryFunctions);
	UGeometryScriptLibrary_MeshSelectionQueryFunctions::~UGeometryScriptLibrary_MeshSelectionQueryFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions, UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshSelectionQueryFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionQueryFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshSelectionQueryFunctions), 354294357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_646649295(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionQueryFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
