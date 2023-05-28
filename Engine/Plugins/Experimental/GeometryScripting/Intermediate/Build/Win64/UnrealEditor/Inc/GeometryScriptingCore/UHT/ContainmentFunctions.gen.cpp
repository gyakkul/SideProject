// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/ContainmentFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainmentFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptConvexHullOptions;
class UScriptStruct* FGeometryScriptConvexHullOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptConvexHullOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptConvexHullOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptConvexHullOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptConvexHullOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptConvexHullOptions>()
{
	return FGeometryScriptConvexHullOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrefilterVertices_MetaData[];
#endif
		static void NewProp_bPrefilterVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrefilterVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrefilterGridResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PrefilterGridResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyToFaceCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SimplifyToFaceCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptConvexHullOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_bPrefilterVertices_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_bPrefilterVertices_SetBit(void* Obj)
	{
		((FGeometryScriptConvexHullOptions*)Obj)->bPrefilterVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_bPrefilterVertices = { "bPrefilterVertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptConvexHullOptions), &Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_bPrefilterVertices_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_bPrefilterVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_bPrefilterVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_PrefilterGridResolution_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_PrefilterGridResolution = { "PrefilterGridResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptConvexHullOptions, PrefilterGridResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_PrefilterGridResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_PrefilterGridResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_SimplifyToFaceCount_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Try to simplify each convex hull to this triangle count. If 0, no simplification */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ToolTip", "Try to simplify each convex hull to this triangle count. If 0, no simplification" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_SimplifyToFaceCount = { "SimplifyToFaceCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptConvexHullOptions, SimplifyToFaceCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_SimplifyToFaceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_SimplifyToFaceCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_bPrefilterVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_PrefilterGridResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewProp_SimplifyToFaceCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptConvexHullOptions",
		sizeof(FGeometryScriptConvexHullOptions),
		alignof(FGeometryScriptConvexHullOptions),
		Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptConvexHullOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptConvexHullOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptConvexHullOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSweptHullOptions;
class UScriptStruct* FGeometryScriptSweptHullOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSweptHullOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSweptHullOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSweptHullOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSweptHullOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSweptHullOptions>()
{
	return FGeometryScriptSweptHullOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrefilterVertices_MetaData[];
#endif
		static void NewProp_bPrefilterVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrefilterVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrefilterGridResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PrefilterGridResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplify_MetaData[];
#endif
		static void NewProp_bSimplify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinEdgeLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinEdgeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplifyTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSweptHullOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bPrefilterVertices_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bPrefilterVertices_SetBit(void* Obj)
	{
		((FGeometryScriptSweptHullOptions*)Obj)->bPrefilterVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bPrefilterVertices = { "bPrefilterVertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSweptHullOptions), &Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bPrefilterVertices_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bPrefilterVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bPrefilterVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_PrefilterGridResolution_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_PrefilterGridResolution = { "PrefilterGridResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSweptHullOptions, PrefilterGridResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_PrefilterGridResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_PrefilterGridResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinThickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinThickness = { "MinThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSweptHullOptions, MinThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bSimplify_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bSimplify_SetBit(void* Obj)
	{
		((FGeometryScriptSweptHullOptions*)Obj)->bSimplify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bSimplify = { "bSimplify", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSweptHullOptions), &Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bSimplify_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bSimplify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bSimplify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinEdgeLength_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinEdgeLength = { "MinEdgeLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSweptHullOptions, MinEdgeLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinEdgeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_SimplifyTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_SimplifyTolerance = { "SimplifyTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSweptHullOptions, SimplifyTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_SimplifyTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_SimplifyTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bPrefilterVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_PrefilterGridResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_bSimplify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_MinEdgeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewProp_SimplifyTolerance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSweptHullOptions",
		sizeof(FGeometryScriptSweptHullOptions),
		alignof(FGeometryScriptSweptHullOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSweptHullOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSweptHullOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSweptHullOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptConvexDecompositionOptions;
class UScriptStruct* FGeometryScriptConvexDecompositionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptConvexDecompositionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptConvexDecompositionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptConvexDecompositionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptConvexDecompositionOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptConvexDecompositionOptions>()
{
	return FGeometryScriptConvexDecompositionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumHulls_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumHulls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchFactor_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SearchFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPartThickness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinPartThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyToFaceCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SimplifyToFaceCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptConvexDecompositionOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_NumHulls_MetaData[] = {
		{ "Category", "DecompositionOptions" },
		{ "Comment", "/** How many convex pieces to target per mesh when creating convex decompositions.  If ErrorTolerance is set, can create fewer pieces. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ToolTip", "How many convex pieces to target per mesh when creating convex decompositions.  If ErrorTolerance is set, can create fewer pieces." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_NumHulls = { "NumHulls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptConvexDecompositionOptions, NumHulls), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_NumHulls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_NumHulls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SearchFactor_MetaData[] = {
		{ "Category", "DecompositionOptions" },
		{ "Comment", "/** How much additional decomposition decomposition + merging to do, as a fraction of max pieces.  Larger values can help better-cover small features, while smaller values create a cleaner decomposition with less overlap between hulls. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ToolTip", "How much additional decomposition decomposition + merging to do, as a fraction of max pieces.  Larger values can help better-cover small features, while smaller values create a cleaner decomposition with less overlap between hulls." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SearchFactor = { "SearchFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptConvexDecompositionOptions, SearchFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SearchFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SearchFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "DecompositionOptions" },
		{ "Comment", "/** Error tolerance to guide convex decomposition (in cm); we stop adding new parts if the volume error is below the threshold.  For volumetric errors, value will be cubed. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ToolTip", "Error tolerance to guide convex decomposition (in cm); we stop adding new parts if the volume error is below the threshold.  For volumetric errors, value will be cubed." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptConvexDecompositionOptions, ErrorTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_ErrorTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_ErrorTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_MinPartThickness_MetaData[] = {
		{ "Category", "DecompositionOptions" },
		{ "Comment", "/** Minimum part thickness for convex decomposition (in cm); hulls thinner than this will be merged into adjacent hulls, if possible. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ToolTip", "Minimum part thickness for convex decomposition (in cm); hulls thinner than this will be merged into adjacent hulls, if possible." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_MinPartThickness = { "MinPartThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptConvexDecompositionOptions, MinPartThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_MinPartThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_MinPartThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SimplifyToFaceCount_MetaData[] = {
		{ "Category", "ConvexHullOptions" },
		{ "Comment", "/** Try to simplify each convex hull to this triangle count. If 0, no simplification */" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ToolTip", "Try to simplify each convex hull to this triangle count. If 0, no simplification" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SimplifyToFaceCount = { "SimplifyToFaceCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptConvexDecompositionOptions, SimplifyToFaceCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SimplifyToFaceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SimplifyToFaceCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_NumHulls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SearchFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_ErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_MinPartThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewProp_SimplifyToFaceCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptConvexDecompositionOptions",
		sizeof(FGeometryScriptConvexDecompositionOptions),
		alignof(FGeometryScriptConvexDecompositionOptions),
		Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptConvexDecompositionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptConvexDecompositionOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptConvexDecompositionOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshConvexDecomposition)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMeshOut);
		P_GET_STRUCT(FGeometryScriptConvexDecompositionOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexDecomposition(Z_Param_TargetMesh,Z_Param_Out_CopyToMesh,Z_Param_Out_CopyToMeshOut,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshSweptHull)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMeshOut);
		P_GET_STRUCT(FTransform,Z_Param_ProjectionFrame);
		P_GET_STRUCT(FGeometryScriptSweptHullOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshSweptHull(Z_Param_TargetMesh,Z_Param_Out_CopyToMesh,Z_Param_Out_CopyToMeshOut,Z_Param_ProjectionFrame,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshConvexHull)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMeshOut);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT(FGeometryScriptConvexHullOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull(Z_Param_TargetMesh,Z_Param_Out_CopyToMesh,Z_Param_Out_CopyToMeshOut,Z_Param_Selection,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_ContainmentFunctions::StaticRegisterNativesUGeometryScriptLibrary_ContainmentFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_ContainmentFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeMeshConvexDecomposition", &UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshConvexDecomposition },
			{ "ComputeMeshConvexHull", &UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshConvexHull },
			{ "ComputeMeshSweptHull", &UGeometryScriptLibrary_ContainmentFunctions::execComputeMeshSweptHull },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics
	{
		struct GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexDecomposition_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* CopyToMesh;
			UDynamicMesh* CopyToMeshOut;
			FGeometryScriptConvexDecompositionOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMeshOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMeshOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexDecomposition_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMesh_MetaData[] = {
		{ "DisplayName", "Hull Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMesh = { "CopyToMesh", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexDecomposition_Parms, CopyToMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMeshOut_MetaData[] = {
		{ "DisplayName", "Hull Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMeshOut = { "CopyToMeshOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexDecomposition_Parms, CopyToMeshOut), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMeshOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMeshOut_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexDecomposition_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions, METADATA_PARAMS(nullptr, 0) }; // 347479845
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexDecomposition_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexDecomposition_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_CopyToMeshOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Containment|Experimental" },
		{ "Comment", "/**\n\x09 * Compute a Convex Hull Decomposition of the given TargetMesh. Assuming more than one hull is requested,\n\x09 * multiple hulls will be returned that attempt to approximate the mesh. There is no guarantee that the entire\n\x09 * mesh is contained in the hulls.\n\x09 * @warning this function can be quite expensive, and the results are expected to change in the future as the Convex Decomposition algorithm is improved\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute a Convex Hull Decomposition of the given TargetMesh. Assuming more than one hull is requested,\nmultiple hulls will be returned that attempt to approximate the mesh. There is no guarantee that the entire\nmesh is contained in the hulls.\n@warning this function can be quite expensive, and the results are expected to change in the future as the Convex Decomposition algorithm is improved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions, nullptr, "ComputeMeshConvexDecomposition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexDecomposition_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics
	{
		struct GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexHull_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* CopyToMesh;
			UDynamicMesh* CopyToMeshOut;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptConvexHullOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMeshOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMeshOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexHull_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMesh_MetaData[] = {
		{ "DisplayName", "Hull Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMesh = { "CopyToMesh", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexHull_Parms, CopyToMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMeshOut_MetaData[] = {
		{ "DisplayName", "Hull Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMeshOut = { "CopyToMeshOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexHull_Parms, CopyToMeshOut), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMeshOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMeshOut_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexHull_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexHull_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions, METADATA_PARAMS(nullptr, 0) }; // 3779006083
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexHull_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexHull_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_CopyToMeshOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Containment" },
		{ "Comment", "/**\n\x09 * Compute the Convex Hull of a given Mesh, or part of the mesh if an optional Selection is provided\n\x09 * @param Selection selection of mesh faces/vertices to contain in the convex hull. If not provided, entire mesh is used.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the Convex Hull of a given Mesh, or part of the mesh if an optional Selection is provided\n@param Selection selection of mesh faces/vertices to contain in the convex hull. If not provided, entire mesh is used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions, nullptr, "ComputeMeshConvexHull", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshConvexHull_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics
	{
		struct GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshSweptHull_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* CopyToMesh;
			UDynamicMesh* CopyToMeshOut;
			FTransform ProjectionFrame;
			FGeometryScriptSweptHullOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMeshOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMeshOut;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionFrame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshSweptHull_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMesh_MetaData[] = {
		{ "DisplayName", "Hull Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMesh = { "CopyToMesh", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshSweptHull_Parms, CopyToMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMeshOut_MetaData[] = {
		{ "DisplayName", "Hull Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMeshOut = { "CopyToMeshOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshSweptHull_Parms, CopyToMeshOut), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMeshOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMeshOut_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_ProjectionFrame = { "ProjectionFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshSweptHull_Parms, ProjectionFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshSweptHull_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions, METADATA_PARAMS(nullptr, 0) }; // 3545551349
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshSweptHull_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshSweptHull_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_CopyToMeshOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_ProjectionFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Containment" },
		{ "Comment", "/**\n\x09* Compute the Swept Hull of a given Mesh for a given 3D Plane defined by ProjectionFrame.\n\x09* The Swept Hull is a linear sweep of the 2D convex hull of the mesh vertices projected onto the plane (the sweep precisely contains the mesh extents along the plane normal)\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute the Swept Hull of a given Mesh for a given 3D Plane defined by ProjectionFrame.\nThe Swept Hull is a linear sweep of the 2D convex hull of the mesh vertices projected onto the plane (the sweep precisely contains the mesh extents along the plane normal)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions, nullptr, "ComputeMeshSweptHull", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::GeometryScriptLibrary_ContainmentFunctions_eventComputeMeshSweptHull_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_ContainmentFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_ContainmentFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition, "ComputeMeshConvexDecomposition" }, // 984925788
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull, "ComputeMeshConvexHull" }, // 1888847438
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull, "ComputeMeshSweptHull" }, // 3003047840
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/ContainmentFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/ContainmentFunctions.h" },
		{ "ScriptName", "GeometryScript_Containment" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_ContainmentFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_ContainmentFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_ContainmentFunctions>()
	{
		return UGeometryScriptLibrary_ContainmentFunctions::StaticClass();
	}
	UGeometryScriptLibrary_ContainmentFunctions::UGeometryScriptLibrary_ContainmentFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_ContainmentFunctions);
	UGeometryScriptLibrary_ContainmentFunctions::~UGeometryScriptLibrary_ContainmentFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptConvexHullOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics::NewStructOps, TEXT("GeometryScriptConvexHullOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptConvexHullOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptConvexHullOptions), 3779006083U) },
		{ FGeometryScriptSweptHullOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics::NewStructOps, TEXT("GeometryScriptSweptHullOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSweptHullOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSweptHullOptions), 3545551349U) },
		{ FGeometryScriptConvexDecompositionOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics::NewStructOps, TEXT("GeometryScriptConvexDecompositionOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptConvexDecompositionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptConvexDecompositionOptions), 347479845U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions, UGeometryScriptLibrary_ContainmentFunctions::StaticClass, TEXT("UGeometryScriptLibrary_ContainmentFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_ContainmentFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_ContainmentFunctions), 3295235657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_806630700(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
