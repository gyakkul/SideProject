// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshDecompositionFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDecompositionFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshPool_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDecompositionFunctions::execCopyMeshToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_CopyFromMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMeshOut);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh(Z_Param_CopyFromMesh,Z_Param_Out_CopyToMesh,Z_Param_Out_CopyToMeshOut,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDecompositionFunctions::execCopyMeshSelectionToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_StoreToSubmesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_StoreToSubmeshOut);
		P_GET_UBOOL(Z_Param_bAppendToExisting);
		P_GET_UBOOL(Z_Param_bPreserveGroupIDs);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh(Z_Param_TargetMesh,Z_Param_Out_StoreToSubmesh,Z_Param_Selection,Z_Param_Out_StoreToSubmeshOut,Z_Param_bAppendToExisting,Z_Param_bPreserveGroupIDs,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDecompositionFunctions::execGetSubMeshFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_StoreToSubmesh);
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_TriangleList);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_StoreToSubmeshOut);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh(Z_Param_TargetMesh,Z_Param_Out_StoreToSubmesh,Z_Param_TriangleList,Z_Param_Out_StoreToSubmeshOut,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByPolygroups)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_TARRAY_REF(UDynamicMesh*,Z_Param_Out_ComponentMeshes);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ComponentPolygroups);
		P_GET_OBJECT(UDynamicMeshPool,Z_Param_MeshPool);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_Out_ComponentMeshes,Z_Param_Out_ComponentPolygroups,Z_Param_MeshPool,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByMaterialIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_TARRAY_REF(UDynamicMesh*,Z_Param_Out_ComponentMeshes);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ComponentMaterialIDs);
		P_GET_OBJECT(UDynamicMeshPool,Z_Param_MeshPool);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs(Z_Param_TargetMesh,Z_Param_Out_ComponentMeshes,Z_Param_Out_ComponentMaterialIDs,Z_Param_MeshPool,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByComponents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_TARRAY_REF(UDynamicMesh*,Z_Param_Out_ComponentMeshes);
		P_GET_OBJECT(UDynamicMeshPool,Z_Param_MeshPool);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents(Z_Param_TargetMesh,Z_Param_Out_ComponentMeshes,Z_Param_MeshPool,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshDecompositionFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshDecompositionFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyMeshSelectionToMesh", &UGeometryScriptLibrary_MeshDecompositionFunctions::execCopyMeshSelectionToMesh },
			{ "CopyMeshToMesh", &UGeometryScriptLibrary_MeshDecompositionFunctions::execCopyMeshToMesh },
			{ "GetSubMeshFromMesh", &UGeometryScriptLibrary_MeshDecompositionFunctions::execGetSubMeshFromMesh },
			{ "SplitMeshByComponents", &UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByComponents },
			{ "SplitMeshByMaterialIDs", &UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByMaterialIDs },
			{ "SplitMeshByPolygroups", &UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByPolygroups },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* StoreToSubmesh;
			FGeometryScriptMeshSelection Selection;
			UDynamicMesh* StoreToSubmeshOut;
			bool bAppendToExisting;
			bool bPreserveGroupIDs;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreToSubmesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreToSubmesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreToSubmeshOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreToSubmeshOut;
		static void NewProp_bAppendToExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppendToExisting;
		static void NewProp_bPreserveGroupIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveGroupIDs;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmesh_MetaData[] = {
		{ "DisplayName", "Copy To Submesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmesh = { "StoreToSubmesh", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms, StoreToSubmesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmeshOut_MetaData[] = {
		{ "DisplayName", "Copy To Submesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmeshOut = { "StoreToSubmeshOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms, StoreToSubmeshOut), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmeshOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmeshOut_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_bAppendToExisting_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms*)Obj)->bAppendToExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_bAppendToExisting = { "bAppendToExisting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_bAppendToExisting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_bPreserveGroupIDs_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms*)Obj)->bPreserveGroupIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_bPreserveGroupIDs = { "bPreserveGroupIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_bPreserveGroupIDs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_StoreToSubmeshOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_bAppendToExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_bPreserveGroupIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Decomposition" },
		{ "Comment", "/**\n\x09 * Extract the triangles identified by Selection from TargetMesh and copy/add them to StoreToSubmesh\n\x09 * @param bAppendToExisting if false (default), StoreToSubmesh is cleared, otherwise selected triangles are appended\n\x09 * @param bPreserveGroupIDs if true, GroupIDs of triangles on TargetMesh are preserved in StoreToSubmesh. Otherwise new GroupIDs are allocated.\n\x09 */" },
		{ "CPP_Default_bAppendToExisting", "false" },
		{ "CPP_Default_bPreserveGroupIDs", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDecompositionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Extract the triangles identified by Selection from TargetMesh and copy/add them to StoreToSubmesh\n@param bAppendToExisting if false (default), StoreToSubmesh is cleared, otherwise selected triangles are appended\n@param bPreserveGroupIDs if true, GroupIDs of triangles on TargetMesh are preserved in StoreToSubmesh. Otherwise new GroupIDs are allocated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions, nullptr, "CopyMeshSelectionToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshSelectionToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshToMesh_Parms
		{
			UDynamicMesh* CopyFromMesh;
			UDynamicMesh* CopyToMesh;
			UDynamicMesh* CopyToMeshOut;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyFromMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMeshOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMeshOut;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyFromMesh = { "CopyFromMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshToMesh_Parms, CopyFromMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMesh_MetaData[] = {
		{ "DisplayName", "Copy To Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMesh = { "CopyToMesh", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshToMesh_Parms, CopyToMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMeshOut_MetaData[] = {
		{ "DisplayName", "Copy To Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMeshOut = { "CopyToMeshOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshToMesh_Parms, CopyToMeshOut), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMeshOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMeshOut_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Copy From Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyFromMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_CopyToMeshOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Decomposition" },
		{ "Comment", "/**\n\x09 * Set CopyToMesh to be the same mesh as CopyFromMesh\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDecompositionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set CopyToMesh to be the same mesh as CopyFromMesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions, nullptr, "CopyMeshToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::GeometryScriptLibrary_MeshDecompositionFunctions_eventCopyMeshToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics
	{
		struct GeometryScriptLibrary_MeshDecompositionFunctions_eventGetSubMeshFromMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* StoreToSubmesh;
			FGeometryScriptIndexList TriangleList;
			UDynamicMesh* StoreToSubmeshOut;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreToSubmesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreToSubmesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreToSubmeshOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreToSubmeshOut;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventGetSubMeshFromMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmesh_MetaData[] = {
		{ "DisplayName", "Copy To Submesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmesh = { "StoreToSubmesh", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventGetSubMeshFromMesh_Parms, StoreToSubmesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventGetSubMeshFromMesh_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmeshOut_MetaData[] = {
		{ "DisplayName", "Copy To Submesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmeshOut = { "StoreToSubmeshOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventGetSubMeshFromMesh_Parms, StoreToSubmeshOut), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmeshOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmeshOut_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventGetSubMeshFromMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventGetSubMeshFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_StoreToSubmeshOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Decomposition" },
		{ "Comment", "/**\n\x09 * CopyMeshSelectionToMesh should be used instead of this function\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDecompositionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "CopyMeshSelectionToMesh should be used instead of this function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions, nullptr, "GetSubMeshFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::GeometryScriptLibrary_MeshDecompositionFunctions_eventGetSubMeshFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics
	{
		struct GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByComponents_Parms
		{
			UDynamicMesh* TargetMesh;
			TArray<UDynamicMesh*> ComponentMeshes;
			UDynamicMeshPool* MeshPool;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentMeshes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentMeshes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshPool;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByComponents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_ComponentMeshes_Inner = { "ComponentMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_ComponentMeshes = { "ComponentMeshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByComponents_Parms, ComponentMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_MeshPool = { "MeshPool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByComponents_Parms, MeshPool), Z_Construct_UClass_UDynamicMeshPool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByComponents_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByComponents_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_ComponentMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_ComponentMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_MeshPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Decomposition" },
		{ "Comment", "/**\n\x09 * Create a new Mesh for each Connected Component of TargetMesh.\n\x09 * New meshes are drawn from MeshPool if it is provided, otherwise new UDynamicMesh instances are allocated\n\x09 * @param ComponentMeshes New List of meshes is returned here\n\x09 * @param MeshPool New meshes in ComponentMeshes output list are allocated from this pool if it is provided (highly recommended!!)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDecompositionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new Mesh for each Connected Component of TargetMesh.\nNew meshes are drawn from MeshPool if it is provided, otherwise new UDynamicMesh instances are allocated\n@param ComponentMeshes New List of meshes is returned here\n@param MeshPool New meshes in ComponentMeshes output list are allocated from this pool if it is provided (highly recommended!!)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions, nullptr, "SplitMeshByComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByComponents_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics
	{
		struct GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByMaterialIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			TArray<UDynamicMesh*> ComponentMeshes;
			TArray<int32> ComponentMaterialIDs;
			UDynamicMeshPool* MeshPool;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentMeshes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentMeshes;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ComponentMaterialIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentMaterialIDs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshPool;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByMaterialIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ComponentMeshes_Inner = { "ComponentMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ComponentMeshes = { "ComponentMeshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByMaterialIDs_Parms, ComponentMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ComponentMaterialIDs_Inner = { "ComponentMaterialIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ComponentMaterialIDs = { "ComponentMaterialIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByMaterialIDs_Parms, ComponentMaterialIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_MeshPool = { "MeshPool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByMaterialIDs_Parms, MeshPool), Z_Construct_UClass_UDynamicMeshPool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByMaterialIDs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByMaterialIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ComponentMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ComponentMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ComponentMaterialIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ComponentMaterialIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_MeshPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Decomposition" },
		{ "Comment", "/**\n\x09 * Create a new Mesh for each MaterialID of TargetMesh.\n\x09 * New meshes are drawn from MeshPool if it is provided, otherwise new UDynamicMesh instances are allocated\n\x09 * @param ComponentMeshes New List of meshes is returned here\n\x09 * @param ComponentMaterialIDs MaterialID for each Mesh in ComponentMeshes is returned here\n\x09 * @param MeshPool New meshes in ComponentMeshes output list are allocated from this pool if it is provided (highly recommended!!)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDecompositionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new Mesh for each MaterialID of TargetMesh.\nNew meshes are drawn from MeshPool if it is provided, otherwise new UDynamicMesh instances are allocated\n@param ComponentMeshes New List of meshes is returned here\n@param ComponentMaterialIDs MaterialID for each Mesh in ComponentMeshes is returned here\n@param MeshPool New meshes in ComponentMeshes output list are allocated from this pool if it is provided (highly recommended!!)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions, nullptr, "SplitMeshByMaterialIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByMaterialIDs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics
	{
		struct GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByPolygroups_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			TArray<UDynamicMesh*> ComponentMeshes;
			TArray<int32> ComponentPolygroups;
			UDynamicMeshPool* MeshPool;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentMeshes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentMeshes;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ComponentPolygroups_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentPolygroups;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshPool;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByPolygroups_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByPolygroups_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ComponentMeshes_Inner = { "ComponentMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ComponentMeshes = { "ComponentMeshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByPolygroups_Parms, ComponentMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ComponentPolygroups_Inner = { "ComponentPolygroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ComponentPolygroups = { "ComponentPolygroups", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByPolygroups_Parms, ComponentPolygroups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_MeshPool = { "MeshPool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByPolygroups_Parms, MeshPool), Z_Construct_UClass_UDynamicMeshPool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByPolygroups_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByPolygroups_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ComponentMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ComponentMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ComponentPolygroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ComponentPolygroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_MeshPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Decomposition" },
		{ "Comment", "/**\n\x09 * Create a new Mesh for each Polygroup of TargetMesh. Note that this may be a *large* number of meshes!\n\x09 * New meshes are drawn from MeshPool if it is provided, otherwise new UDynamicMesh instances are allocated\n\x09 * @param ComponentMeshes New List of meshes is returned here\n\x09 * @param ComponentPolygroups Original Polygroup for each Mesh in ComponentMeshes is returned here\n\x09 * @param MeshPool New meshes in ComponentMeshes output list are allocated from this pool if it is provided (highly recommended!!)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDecompositionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new Mesh for each Polygroup of TargetMesh. Note that this may be a *large* number of meshes!\nNew meshes are drawn from MeshPool if it is provided, otherwise new UDynamicMesh instances are allocated\n@param ComponentMeshes New List of meshes is returned here\n@param ComponentPolygroups Original Polygroup for each Mesh in ComponentMeshes is returned here\n@param MeshPool New meshes in ComponentMeshes output list are allocated from this pool if it is provided (highly recommended!!)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions, nullptr, "SplitMeshByPolygroups", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::GeometryScriptLibrary_MeshDecompositionFunctions_eventSplitMeshByPolygroups_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshDecompositionFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh, "CopyMeshSelectionToMesh" }, // 1201045875
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh, "CopyMeshToMesh" }, // 113561322
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh, "GetSubMeshFromMesh" }, // 3958859384
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents, "SplitMeshByComponents" }, // 1699052900
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs, "SplitMeshByMaterialIDs" }, // 1905591984
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups, "SplitMeshByPolygroups" }, // 2308027515
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshDecompositionFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshDecompositionFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshDecomposition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshDecompositionFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshDecompositionFunctions>()
	{
		return UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshDecompositionFunctions::UGeometryScriptLibrary_MeshDecompositionFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshDecompositionFunctions);
	UGeometryScriptLibrary_MeshDecompositionFunctions::~UGeometryScriptLibrary_MeshDecompositionFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions, UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshDecompositionFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshDecompositionFunctions), 1502144799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_2535257062(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
