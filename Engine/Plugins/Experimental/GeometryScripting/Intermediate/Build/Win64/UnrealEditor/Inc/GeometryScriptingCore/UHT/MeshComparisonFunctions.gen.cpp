// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshComparisonFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshComparisonFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptIsSameMeshOptions;
class UScriptStruct* FGeometryScriptIsSameMeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptIsSameMeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptIsSameMeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptIsSameMeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptIsSameMeshOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptIsSameMeshOptions>()
{
	return FGeometryScriptIsSameMeshOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckConnectivity_MetaData[];
#endif
		static void NewProp_bCheckConnectivity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckConnectivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckEdgeIDs_MetaData[];
#endif
		static void NewProp_bCheckEdgeIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckEdgeIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckNormals_MetaData[];
#endif
		static void NewProp_bCheckNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckColors_MetaData[];
#endif
		static void NewProp_bCheckColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckUVs_MetaData[];
#endif
		static void NewProp_bCheckUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckGroups_MetaData[];
#endif
		static void NewProp_bCheckGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckAttributes_MetaData[];
#endif
		static void NewProp_bCheckAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Epsilon_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Epsilon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptIsSameMeshOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckConnectivity_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckConnectivity_SetBit(void* Obj)
	{
		((FGeometryScriptIsSameMeshOptions*)Obj)->bCheckConnectivity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckConnectivity = { "bCheckConnectivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptIsSameMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckConnectivity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckConnectivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckConnectivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckEdgeIDs_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckEdgeIDs_SetBit(void* Obj)
	{
		((FGeometryScriptIsSameMeshOptions*)Obj)->bCheckEdgeIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckEdgeIDs = { "bCheckEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptIsSameMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckEdgeIDs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckEdgeIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckEdgeIDs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckNormals_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckNormals_SetBit(void* Obj)
	{
		((FGeometryScriptIsSameMeshOptions*)Obj)->bCheckNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckNormals = { "bCheckNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptIsSameMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckColors_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckColors_SetBit(void* Obj)
	{
		((FGeometryScriptIsSameMeshOptions*)Obj)->bCheckColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckColors = { "bCheckColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptIsSameMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckUVs_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckUVs_SetBit(void* Obj)
	{
		((FGeometryScriptIsSameMeshOptions*)Obj)->bCheckUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckUVs = { "bCheckUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptIsSameMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckGroups_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckGroups_SetBit(void* Obj)
	{
		((FGeometryScriptIsSameMeshOptions*)Obj)->bCheckGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckGroups = { "bCheckGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptIsSameMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckGroups_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckAttributes_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckAttributes_SetBit(void* Obj)
	{
		((FGeometryScriptIsSameMeshOptions*)Obj)->bCheckAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckAttributes = { "bCheckAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptIsSameMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckAttributes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_Epsilon_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_Epsilon = { "Epsilon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptIsSameMeshOptions, Epsilon), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_Epsilon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_Epsilon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckConnectivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckEdgeIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_bCheckAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewProp_Epsilon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptIsSameMeshOptions",
		sizeof(FGeometryScriptIsSameMeshOptions),
		alignof(FGeometryScriptIsSameMeshOptions),
		Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptIsSameMeshOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptIsSameMeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptIsSameMeshOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeasureMeshDistanceOptions;
class UScriptStruct* FGeometryScriptMeasureMeshDistanceOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeasureMeshDistanceOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeasureMeshDistanceOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeasureMeshDistanceOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeasureMeshDistanceOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeasureMeshDistanceOptions>()
{
	return FGeometryScriptMeasureMeshDistanceOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSymmetric_MetaData[];
#endif
		static void NewProp_bSymmetric_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSymmetric;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeasureMeshDistanceOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::NewProp_bSymmetric_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::NewProp_bSymmetric_SetBit(void* Obj)
	{
		((FGeometryScriptMeasureMeshDistanceOptions*)Obj)->bSymmetric = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::NewProp_bSymmetric = { "bSymmetric", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeasureMeshDistanceOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::NewProp_bSymmetric_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::NewProp_bSymmetric_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::NewProp_bSymmetric_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::NewProp_bSymmetric,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeasureMeshDistanceOptions",
		sizeof(FGeometryScriptMeasureMeshDistanceOptions),
		alignof(FGeometryScriptMeasureMeshDistanceOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeasureMeshDistanceOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeasureMeshDistanceOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeasureMeshDistanceOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshComparisonFunctions::execIsIntersectingMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
		P_GET_OBJECT(UDynamicMesh,Z_Param_OtherMesh);
		P_GET_STRUCT(FTransform,Z_Param_OtherTransform);
		P_GET_UBOOL_REF(Z_Param_Out_bIsIntersecting);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh(Z_Param_TargetMesh,Z_Param_TargetTransform,Z_Param_OtherMesh,Z_Param_OtherTransform,Z_Param_Out_bIsIntersecting,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshComparisonFunctions::execMeasureDistancesBetweenMeshes)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UDynamicMesh,Z_Param_OtherMesh);
		P_GET_STRUCT(FGeometryScriptMeasureMeshDistanceOptions,Z_Param_Options);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_MaxDistance);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_MinDistance);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AverageDistance);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_RootMeanSqrDeviation);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes(Z_Param_TargetMesh,Z_Param_OtherMesh,Z_Param_Options,Z_Param_Out_MaxDistance,Z_Param_Out_MinDistance,Z_Param_Out_AverageDistance,Z_Param_Out_RootMeanSqrDeviation,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshComparisonFunctions::execIsSameMeshAs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UDynamicMesh,Z_Param_OtherMesh);
		P_GET_STRUCT(FGeometryScriptIsSameMeshOptions,Z_Param_Options);
		P_GET_UBOOL_REF(Z_Param_Out_bIsSameMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs(Z_Param_TargetMesh,Z_Param_OtherMesh,Z_Param_Options,Z_Param_Out_bIsSameMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshComparisonFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshComparisonFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsIntersectingMesh", &UGeometryScriptLibrary_MeshComparisonFunctions::execIsIntersectingMesh },
			{ "IsSameMeshAs", &UGeometryScriptLibrary_MeshComparisonFunctions::execIsSameMeshAs },
			{ "MeasureDistancesBetweenMeshes", &UGeometryScriptLibrary_MeshComparisonFunctions::execMeasureDistancesBetweenMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics
	{
		struct GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FTransform TargetTransform;
			UDynamicMesh* OtherMesh;
			FTransform OtherTransform;
			bool bIsIntersecting;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherTransform;
		static void NewProp_bIsIntersecting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntersecting;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_OtherMesh = { "OtherMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms, OtherMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_OtherTransform = { "OtherTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms, OtherTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_bIsIntersecting_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms*)Obj)->bIsIntersecting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_bIsIntersecting = { "bIsIntersecting", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_bIsIntersecting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_TargetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_OtherMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_OtherTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_bIsIntersecting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Comparison" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions, nullptr, "IsIntersectingMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::GeometryScriptLibrary_MeshComparisonFunctions_eventIsIntersectingMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics
	{
		struct GeometryScriptLibrary_MeshComparisonFunctions_eventIsSameMeshAs_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* OtherMesh;
			FGeometryScriptIsSameMeshOptions Options;
			bool bIsSameMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static void NewProp_bIsSameMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSameMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsSameMeshAs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_OtherMesh = { "OtherMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsSameMeshAs_Parms, OtherMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsSameMeshAs_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 1396998558
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_bIsSameMesh_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshComparisonFunctions_eventIsSameMeshAs_Parms*)Obj)->bIsSameMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_bIsSameMesh = { "bIsSameMesh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshComparisonFunctions_eventIsSameMeshAs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_bIsSameMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsSameMeshAs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventIsSameMeshAs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_OtherMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_bIsSameMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Comparison" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions, nullptr, "IsSameMeshAs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::GeometryScriptLibrary_MeshComparisonFunctions_eventIsSameMeshAs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics
	{
		struct GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* OtherMesh;
			FGeometryScriptMeasureMeshDistanceOptions Options;
			double MaxDistance;
			double MinDistance;
			double AverageDistance;
			double RootMeanSqrDeviation;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinDistance;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AverageDistance;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RootMeanSqrDeviation;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_OtherMesh = { "OtherMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms, OtherMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions, METADATA_PARAMS(nullptr, 0) }; // 2179872464
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms, MinDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_AverageDistance = { "AverageDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms, AverageDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_RootMeanSqrDeviation = { "RootMeanSqrDeviation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms, RootMeanSqrDeviation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_OtherMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_MinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_AverageDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_RootMeanSqrDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Comparison" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions, nullptr, "MeasureDistancesBetweenMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::GeometryScriptLibrary_MeshComparisonFunctions_eventMeasureDistancesBetweenMeshes_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshComparisonFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh, "IsIntersectingMesh" }, // 2035447770
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs, "IsSameMeshAs" }, // 3497088372
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes, "MeasureDistancesBetweenMeshes" }, // 341293097
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshComparisonFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshComparisonFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshComparison" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshComparisonFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshComparisonFunctions>()
	{
		return UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshComparisonFunctions::UGeometryScriptLibrary_MeshComparisonFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshComparisonFunctions);
	UGeometryScriptLibrary_MeshComparisonFunctions::~UGeometryScriptLibrary_MeshComparisonFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptIsSameMeshOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptIsSameMeshOptions_Statics::NewStructOps, TEXT("GeometryScriptIsSameMeshOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptIsSameMeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptIsSameMeshOptions), 1396998558U) },
		{ FGeometryScriptMeasureMeshDistanceOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeasureMeshDistanceOptions_Statics::NewStructOps, TEXT("GeometryScriptMeasureMeshDistanceOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeasureMeshDistanceOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeasureMeshDistanceOptions), 2179872464U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions, UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshComparisonFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshComparisonFunctions), 1976664229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_231005797(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshComparisonFunctions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
