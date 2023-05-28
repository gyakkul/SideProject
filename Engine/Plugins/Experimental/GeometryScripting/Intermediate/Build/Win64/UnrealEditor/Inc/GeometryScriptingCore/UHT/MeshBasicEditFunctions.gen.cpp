// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshBasicEditFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBasicEditFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangleList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVectorList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSimpleMeshBuffers;
class UScriptStruct* FGeometryScriptSimpleMeshBuffers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSimpleMeshBuffers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSimpleMeshBuffers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSimpleMeshBuffers"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSimpleMeshBuffers.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSimpleMeshBuffers>()
{
	return FGeometryScriptSimpleMeshBuffers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV4_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV4_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV4;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV5_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV5_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV5;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV6_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV6_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV6;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV7_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV7_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV7;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TriGroupIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriGroupIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriGroupIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSimpleMeshBuffers>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV1_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV1_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV2_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV2_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV3_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV3_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV4_Inner = { "UV4", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV4_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV4 = { "UV4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, UV4), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV4_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV5_Inner = { "UV5", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV5_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV5 = { "UV5", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, UV5), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV5_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV6_Inner = { "UV6", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV6_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV6 = { "UV6", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, UV6), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV6_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV7_Inner = { "UV7", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV7_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV7 = { "UV7", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, UV7), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV7_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV7_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_TriGroupIDs_Inner = { "TriGroupIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_TriGroupIDs_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_TriGroupIDs = { "TriGroupIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimpleMeshBuffers, TriGroupIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_TriGroupIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_TriGroupIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV3_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV4_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV5_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV6_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV7_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_UV7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_TriGroupIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewProp_TriGroupIDs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSimpleMeshBuffers",
		sizeof(FGeometryScriptSimpleMeshBuffers),
		alignof(FGeometryScriptSimpleMeshBuffers),
		Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSimpleMeshBuffers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSimpleMeshBuffers.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSimpleMeshBuffers.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptCombineAttributesMode;
	static UEnum* EGeometryScriptCombineAttributesMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptCombineAttributesMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptCombineAttributesMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptCombineAttributesMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptCombineAttributesMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptCombineAttributesMode>()
	{
		return EGeometryScriptCombineAttributesMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode_Statics::Enumerators[] = {
		{ "EGeometryScriptCombineAttributesMode::EnableAllMatching", (int64)EGeometryScriptCombineAttributesMode::EnableAllMatching },
		{ "EGeometryScriptCombineAttributesMode::UseTarget", (int64)EGeometryScriptCombineAttributesMode::UseTarget },
		{ "EGeometryScriptCombineAttributesMode::UseSource", (int64)EGeometryScriptCombineAttributesMode::UseSource },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Options for how attributes from a source and target mesh are combined into the target mesh\n" },
		{ "EnableAllMatching.Comment", "// Include attributes enabled on either the source or target mesh\n" },
		{ "EnableAllMatching.Name", "EGeometryScriptCombineAttributesMode::EnableAllMatching" },
		{ "EnableAllMatching.ToolTip", "Include attributes enabled on either the source or target mesh" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ToolTip", "Options for how attributes from a source and target mesh are combined into the target mesh" },
		{ "UseSource.Comment", "// Make the target mesh have only the attributes that are enabled on the source mesh\n" },
		{ "UseSource.Name", "EGeometryScriptCombineAttributesMode::UseSource" },
		{ "UseSource.ToolTip", "Make the target mesh have only the attributes that are enabled on the source mesh" },
		{ "UseTarget.Comment", "// Only include attributes that are already enabled on the target mesh\n" },
		{ "UseTarget.Name", "EGeometryScriptCombineAttributesMode::UseTarget" },
		{ "UseTarget.ToolTip", "Only include attributes that are already enabled on the target mesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptCombineAttributesMode",
		"EGeometryScriptCombineAttributesMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptCombineAttributesMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptCombineAttributesMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptCombineAttributesMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptAppendMeshOptions;
class UScriptStruct* FGeometryScriptAppendMeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptAppendMeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptAppendMeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptAppendMeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptAppendMeshOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptAppendMeshOptions>()
{
	return FGeometryScriptAppendMeshOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombineMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombineMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombineMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Control how details like mesh attributes are handled when one mesh is appended to another\n */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ToolTip", "Control how details like mesh attributes are handled when one mesh is appended to another" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptAppendMeshOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::NewProp_CombineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::NewProp_CombineMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// How attributes from each mesh are combined into the result\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ToolTip", "How attributes from each mesh are combined into the result" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::NewProp_CombineMode = { "CombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptAppendMeshOptions, CombineMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineAttributesMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::NewProp_CombineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::NewProp_CombineMode_MetaData)) }; // 1777022732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::NewProp_CombineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::NewProp_CombineMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptAppendMeshOptions",
		sizeof(FGeometryScriptAppendMeshOptions),
		alignof(FGeometryScriptAppendMeshOptions),
		Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptAppendMeshOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptAppendMeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptAppendMeshOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendBuffersToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptSimpleMeshBuffers,Z_Param_Out_Buffers);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_NewTriangleIndicesList);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh(Z_Param_TargetMesh,Z_Param_Out_Buffers,Z_Param_Out_NewTriangleIndicesList,Z_Param_MaterialID,Z_Param_bDeferChangeNotifications,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMeshRepeated)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UDynamicMesh,Z_Param_AppendMesh);
		P_GET_STRUCT(FTransform,Z_Param_AppendTransform);
		P_GET_PROPERTY(FIntProperty,Z_Param_RepeatCount);
		P_GET_UBOOL(Z_Param_bApplyTransformToFirstInstance);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_STRUCT(FGeometryScriptAppendMeshOptions,Z_Param_AppendOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeated(Z_Param_TargetMesh,Z_Param_AppendMesh,Z_Param_AppendTransform,Z_Param_RepeatCount,Z_Param_bApplyTransformToFirstInstance,Z_Param_bDeferChangeNotifications,Z_Param_AppendOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMeshTransformed)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UDynamicMesh,Z_Param_AppendMesh);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_AppendTransforms);
		P_GET_STRUCT(FTransform,Z_Param_ConstantTransform);
		P_GET_UBOOL(Z_Param_bConstantTransformIsRelative);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_STRUCT(FGeometryScriptAppendMeshOptions,Z_Param_AppendOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformed(Z_Param_TargetMesh,Z_Param_AppendMesh,Z_Param_Out_AppendTransforms,Z_Param_ConstantTransform,Z_Param_bConstantTransformIsRelative,Z_Param_bDeferChangeNotifications,Z_Param_AppendOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UDynamicMesh,Z_Param_AppendMesh);
		P_GET_STRUCT(FTransform,Z_Param_AppendTransform);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_STRUCT(FGeometryScriptAppendMeshOptions,Z_Param_AppendOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMesh(Z_Param_TargetMesh,Z_Param_AppendMesh,Z_Param_AppendTransform,Z_Param_bDeferChangeNotifications,Z_Param_AppendOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteSelectedTrianglesFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumDeleted);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_NumDeleted,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteTrianglesFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_TriangleList);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumDeleted);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh(Z_Param_TargetMesh,Z_Param_TriangleList,Z_Param_Out_NumDeleted,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteTriangleFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_UBOOL_REF(Z_Param_Out_bWasTriangleDeleted);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Out_bWasTriangleDeleted,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execAddTrianglesToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptTriangleList,Z_Param_NewTrianglesList);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_NewIndicesList);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTriangleGroupID);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh(Z_Param_TargetMesh,Z_Param_NewTrianglesList,Z_Param_Out_NewIndicesList,Z_Param_NewTriangleGroupID,Z_Param_bDeferChangeNotifications,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execAddTriangleToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FIntVector,Z_Param_NewTriangle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NewTriangleIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTriangleGroupID);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh(Z_Param_TargetMesh,Z_Param_NewTriangle,Z_Param_Out_NewTriangleIndex,Z_Param_NewTriangleGroupID,Z_Param_bDeferChangeNotifications,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteVerticesFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_VertexList);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumDeleted);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh(Z_Param_TargetMesh,Z_Param_VertexList,Z_Param_Out_NumDeleted,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteVertexFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_UBOOL_REF(Z_Param_Out_bWasVertexDeleted);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_Out_bWasVertexDeleted,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execAddVerticesToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_NewPositionsList);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_NewIndicesList);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh(Z_Param_TargetMesh,Z_Param_NewPositionsList,Z_Param_Out_NewIndicesList,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execAddVertexToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_NewPosition);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NewVertexIndex);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh(Z_Param_TargetMesh,Z_Param_NewPosition,Z_Param_Out_NewVertexIndex,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execSetAllMeshVertexPositions)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_PositionList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions(Z_Param_TargetMesh,Z_Param_PositionList,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execSetVertexPosition)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_STRUCT(FVector,Z_Param_NewPosition);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidVertex);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_NewPosition,Z_Param_Out_bIsValidVertex,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBasicEditFunctions::execDiscardMeshAttributes)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes(Z_Param_TargetMesh,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshBasicEditFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshBasicEditFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTrianglesToMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execAddTrianglesToMesh },
			{ "AddTriangleToMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execAddTriangleToMesh },
			{ "AddVertexToMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execAddVertexToMesh },
			{ "AddVerticesToMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execAddVerticesToMesh },
			{ "AppendBuffersToMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendBuffersToMesh },
			{ "AppendMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMesh },
			{ "AppendMeshRepeated", &UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMeshRepeated },
			{ "AppendMeshTransformed", &UGeometryScriptLibrary_MeshBasicEditFunctions::execAppendMeshTransformed },
			{ "DeleteSelectedTrianglesFromMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteSelectedTrianglesFromMesh },
			{ "DeleteTriangleFromMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteTriangleFromMesh },
			{ "DeleteTrianglesFromMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteTrianglesFromMesh },
			{ "DeleteVertexFromMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteVertexFromMesh },
			{ "DeleteVerticesFromMesh", &UGeometryScriptLibrary_MeshBasicEditFunctions::execDeleteVerticesFromMesh },
			{ "DiscardMeshAttributes", &UGeometryScriptLibrary_MeshBasicEditFunctions::execDiscardMeshAttributes },
			{ "SetAllMeshVertexPositions", &UGeometryScriptLibrary_MeshBasicEditFunctions::execSetAllMeshVertexPositions },
			{ "SetVertexPosition", &UGeometryScriptLibrary_MeshBasicEditFunctions::execSetVertexPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptTriangleList NewTrianglesList;
			FGeometryScriptIndexList NewIndicesList;
			int32 NewTriangleGroupID;
			bool bDeferChangeNotifications;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTrianglesList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewIndicesList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewTriangleGroupID;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_NewTrianglesList = { "NewTrianglesList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms, NewTrianglesList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(nullptr, 0) }; // 2584906498
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_NewIndicesList = { "NewIndicesList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms, NewIndicesList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_NewTriangleGroupID = { "NewTriangleGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms, NewTriangleGroupID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_NewTrianglesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_NewIndicesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_NewTriangleGroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_NewTriangleGroupID", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "AddTrianglesToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTrianglesToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FIntVector NewTriangle;
			int32 NewTriangleIndex;
			int32 NewTriangleGroupID;
			bool bDeferChangeNotifications;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTriangle;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewTriangleIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewTriangleGroupID;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_NewTriangle = { "NewTriangle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms, NewTriangle), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_NewTriangleIndex = { "NewTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms, NewTriangleIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_NewTriangleGroupID = { "NewTriangleGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms, NewTriangleGroupID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_NewTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_NewTriangleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_NewTriangleGroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_NewTriangleGroupID", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "AddTriangleToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventAddTriangleToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVertexToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector NewPosition;
			int32 NewVertexIndex;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewVertexIndex;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVertexToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVertexToMesh_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_NewVertexIndex = { "NewVertexIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVertexToMesh_Parms, NewVertexIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVertexToMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVertexToMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVertexToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_NewPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_NewVertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "AddVertexToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVertexToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVerticesToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptVectorList NewPositionsList;
			FGeometryScriptIndexList NewIndicesList;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPositionsList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewIndicesList;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVerticesToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_NewPositionsList = { "NewPositionsList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVerticesToMesh_Parms, NewPositionsList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_NewIndicesList = { "NewIndicesList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVerticesToMesh_Parms, NewIndicesList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVerticesToMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVerticesToMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVerticesToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_NewPositionsList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_NewIndicesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "AddVerticesToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventAddVerticesToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptSimpleMeshBuffers Buffers;
			FGeometryScriptIndexList NewTriangleIndicesList;
			int32 MaterialID;
			bool bDeferChangeNotifications;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buffers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTriangleIndicesList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaterialID;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_Buffers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_Buffers = { "Buffers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms, Buffers), Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_Buffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_Buffers_MetaData)) }; // 3437800723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_NewTriangleIndicesList = { "NewTriangleIndicesList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms, NewTriangleIndicesList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms, MaterialID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_Buffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_NewTriangleIndicesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_MaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_MaterialID", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "AppendBuffersToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendBuffersToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* AppendMesh;
			FTransform AppendTransform;
			bool bDeferChangeNotifications;
			FGeometryScriptAppendMeshOptions AppendOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AppendMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppendTransform;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppendOptions;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_AppendMesh = { "AppendMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms, AppendMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_AppendTransform = { "AppendTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms, AppendTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_AppendOptions = { "AppendOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms, AppendOptions), Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 3007323634
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_AppendMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_AppendTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_AppendOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "Comment", "/**\n\x09 * Apply AppendTransform to AppendMesh and then add its geometry to the TargetMesh\n\x09 * @param AppendOptions Control how details like mesh attributes are handled when one mesh is appended to another\n\x09 */" },
		{ "CPP_Default_AppendOptions", "()" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply AppendTransform to AppendMesh and then add its geometry to the TargetMesh\n@param AppendOptions Control how details like mesh attributes are handled when one mesh is appended to another" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "AppendMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* AppendMesh;
			FTransform AppendTransform;
			int32 RepeatCount;
			bool bApplyTransformToFirstInstance;
			bool bDeferChangeNotifications;
			FGeometryScriptAppendMeshOptions AppendOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AppendMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppendTransform;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RepeatCount;
		static void NewProp_bApplyTransformToFirstInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyTransformToFirstInstance;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppendOptions;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_AppendMesh = { "AppendMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms, AppendMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_AppendTransform = { "AppendTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms, AppendTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_RepeatCount = { "RepeatCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms, RepeatCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_bApplyTransformToFirstInstance_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms*)Obj)->bApplyTransformToFirstInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_bApplyTransformToFirstInstance = { "bApplyTransformToFirstInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_bApplyTransformToFirstInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_AppendOptions = { "AppendOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms, AppendOptions), Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 3007323634
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_AppendMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_AppendTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_RepeatCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_bApplyTransformToFirstInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_AppendOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "Comment", "/**\n\x09 * Repeatedly apply AppendTransform to the AppendMesh, each time adding the geometry to TargetMesh.\n\x09 * @param RepeatCount number of times to repeat the transform-append cycle\n\x09 * @param bApplyTransformToFirstInstance if true, the AppendTransform is applied before the first mesh append, otherwise it is applied after\n\x09 * @param AppendOptions Control how details like mesh attributes are handled when one mesh is appended to another\n\x09 */" },
		{ "CPP_Default_AppendOptions", "()" },
		{ "CPP_Default_bApplyTransformToFirstInstance", "true" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_RepeatCount", "1" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Repeatedly apply AppendTransform to the AppendMesh, each time adding the geometry to TargetMesh.\n@param RepeatCount number of times to repeat the transform-append cycle\n@param bApplyTransformToFirstInstance if true, the AppendTransform is applied before the first mesh append, otherwise it is applied after\n@param AppendOptions Control how details like mesh attributes are handled when one mesh is appended to another" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "AppendMeshRepeated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshRepeated_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* AppendMesh;
			TArray<FTransform> AppendTransforms;
			FTransform ConstantTransform;
			bool bConstantTransformIsRelative;
			bool bDeferChangeNotifications;
			FGeometryScriptAppendMeshOptions AppendOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AppendMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppendTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppendTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AppendTransforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantTransform;
		static void NewProp_bConstantTransformIsRelative_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantTransformIsRelative;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppendOptions;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendMesh = { "AppendMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms, AppendMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendTransforms_Inner = { "AppendTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendTransforms = { "AppendTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms, AppendTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendTransforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_ConstantTransform = { "ConstantTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms, ConstantTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_bConstantTransformIsRelative_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms*)Obj)->bConstantTransformIsRelative = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_bConstantTransformIsRelative = { "bConstantTransformIsRelative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_bConstantTransformIsRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendOptions = { "AppendOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms, AppendOptions), Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 3007323634
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_ConstantTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_bConstantTransformIsRelative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_AppendOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "Comment", "/**\n\x09 * For each transform in AppendTransforms, apply the transform to AppendMesh and then add its geometry to the TargetMesh.\n\x09 * @param ConstantTransform the Constant transform will be applied after each Append transform\n\x09 * @param bConstantTransformIsRelative if true, the Constant transform is applied \"in the frame\" of the Append Transform, otherwise it is applied as a second transform in local coordinates (ie rotate around the AppendTransform X axis, vs around the local X axis)\n\x09 * @param AppendOptions Control how details like mesh attributes are handled when one mesh is appended to another\n\x09 */" },
		{ "CPP_Default_AppendOptions", "()" },
		{ "CPP_Default_bConstantTransformIsRelative", "true" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "For each transform in AppendTransforms, apply the transform to AppendMesh and then add its geometry to the TargetMesh.\n@param ConstantTransform the Constant transform will be applied after each Append transform\n@param bConstantTransformIsRelative if true, the Constant transform is applied \"in the frame\" of the Append Transform, otherwise it is applied as a second transform in local coordinates (ie rotate around the AppendTransform X axis, vs around the local X axis)\n@param AppendOptions Control how details like mesh attributes are handled when one mesh is appended to another" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "AppendMeshTransformed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventAppendMeshTransformed_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteSelectedTrianglesFromMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			int32 NumDeleted;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumDeleted;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteSelectedTrianglesFromMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteSelectedTrianglesFromMesh_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_NumDeleted = { "NumDeleted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteSelectedTrianglesFromMesh_Parms, NumDeleted), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteSelectedTrianglesFromMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteSelectedTrianglesFromMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteSelectedTrianglesFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_NumDeleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "DeleteSelectedTrianglesFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteSelectedTrianglesFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTriangleFromMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			bool bWasTriangleDeleted;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TriangleID;
		static void NewProp_bWasTriangleDeleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasTriangleDeleted;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTriangleFromMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTriangleFromMesh_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_bWasTriangleDeleted_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTriangleFromMesh_Parms*)Obj)->bWasTriangleDeleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_bWasTriangleDeleted = { "bWasTriangleDeleted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTriangleFromMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_bWasTriangleDeleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTriangleFromMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTriangleFromMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTriangleFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_bWasTriangleDeleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "DeleteTriangleFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTriangleFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTrianglesFromMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptIndexList TriangleList;
			int32 NumDeleted;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumDeleted;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTrianglesFromMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTrianglesFromMesh_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_NumDeleted = { "NumDeleted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTrianglesFromMesh_Parms, NumDeleted), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTrianglesFromMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTrianglesFromMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTrianglesFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_NumDeleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "DeleteTrianglesFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteTrianglesFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVertexFromMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			bool bWasVertexDeleted;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexID;
		static void NewProp_bWasVertexDeleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasVertexDeleted;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVertexFromMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVertexFromMesh_Parms, VertexID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_bWasVertexDeleted_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVertexFromMesh_Parms*)Obj)->bWasVertexDeleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_bWasVertexDeleted = { "bWasVertexDeleted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVertexFromMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_bWasVertexDeleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVertexFromMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVertexFromMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVertexFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_bWasVertexDeleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "DeleteVertexFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVertexFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVerticesFromMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptIndexList VertexList;
			int32 NumDeleted;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumDeleted;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVerticesFromMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_VertexList = { "VertexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVerticesFromMesh_Parms, VertexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_NumDeleted = { "NumDeleted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVerticesFromMesh_Parms, NumDeleted), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVerticesFromMesh_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVerticesFromMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVerticesFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_VertexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_NumDeleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "DeleteVerticesFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventDeleteVerticesFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventDiscardMeshAttributes_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDiscardMeshAttributes_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventDiscardMeshAttributes_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventDiscardMeshAttributes_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventDiscardMeshAttributes_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "DiscardMeshAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventDiscardMeshAttributes_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventSetAllMeshVertexPositions_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptVectorList PositionList;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionList;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetAllMeshVertexPositions_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_PositionList = { "PositionList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetAllMeshVertexPositions_Parms, PositionList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(nullptr, 0) }; // 400507777
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetAllMeshVertexPositions_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetAllMeshVertexPositions_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_PositionList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "Comment", "/**\n\x09 * Set all vertex positions in the TargetMesh to the specified Positions\n\x09 * @param PositionList new vertex Positions. Size must be less than or equal to the MaxVertexID of TargetMesh  (ie gaps are supported)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set all vertex positions in the TargetMesh to the specified Positions\n@param PositionList new vertex Positions. Size must be less than or equal to the MaxVertexID of TargetMesh  (ie gaps are supported)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "SetAllMeshVertexPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventSetAllMeshVertexPositions_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics
	{
		struct GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			FVector NewPosition;
			bool bIsValidVertex;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static void NewProp_bIsValidVertex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidVertex;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms, VertexID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_bIsValidVertex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms*)Obj)->bIsValidVertex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_bIsValidVertex = { "bIsValidVertex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_bIsValidVertex_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_NewPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_bIsValidVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshEdits" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, nullptr, "SetVertexPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::GeometryScriptLibrary_MeshBasicEditFunctions_eventSetVertexPosition_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshBasicEditFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh, "AddTrianglesToMesh" }, // 2360278387
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh, "AddTriangleToMesh" }, // 2902600318
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh, "AddVertexToMesh" }, // 2393931059
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh, "AddVerticesToMesh" }, // 1373489135
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh, "AppendBuffersToMesh" }, // 264987424
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh, "AppendMesh" }, // 2075511239
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated, "AppendMeshRepeated" }, // 283297802
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed, "AppendMeshTransformed" }, // 217641588
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh, "DeleteSelectedTrianglesFromMesh" }, // 3026870647
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh, "DeleteTriangleFromMesh" }, // 2565096666
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh, "DeleteTrianglesFromMesh" }, // 1389081409
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh, "DeleteVertexFromMesh" }, // 1738973133
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh, "DeleteVerticesFromMesh" }, // 2256800372
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes, "DiscardMeshAttributes" }, // 4230496255
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions, "SetAllMeshVertexPositions" }, // 234523197
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition, "SetVertexPosition" }, // 79343095
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshBasicEditFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBasicEditFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshEdits" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshBasicEditFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshBasicEditFunctions>()
	{
		return UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshBasicEditFunctions::UGeometryScriptLibrary_MeshBasicEditFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshBasicEditFunctions);
	UGeometryScriptLibrary_MeshBasicEditFunctions::~UGeometryScriptLibrary_MeshBasicEditFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptCombineAttributesMode_StaticEnum, TEXT("EGeometryScriptCombineAttributesMode"), &Z_Registration_Info_UEnum_EGeometryScriptCombineAttributesMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1777022732U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptSimpleMeshBuffers::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics::NewStructOps, TEXT("GeometryScriptSimpleMeshBuffers"), &Z_Registration_Info_UScriptStruct_GeometryScriptSimpleMeshBuffers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSimpleMeshBuffers), 3437800723U) },
		{ FGeometryScriptAppendMeshOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics::NewStructOps, TEXT("GeometryScriptAppendMeshOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptAppendMeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptAppendMeshOptions), 3007323634U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshBasicEditFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshBasicEditFunctions), 2667639648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_1053517116(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
