// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshAssetFunctions.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshAssetFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromAssetOptions;
class UScriptStruct* FGeometryScriptCopyMeshFromAssetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromAssetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromAssetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptCopyMeshFromAssetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromAssetOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptCopyMeshFromAssetOptions>()
{
	return FGeometryScriptCopyMeshFromAssetOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyBuildSettings_MetaData[];
#endif
		static void NewProp_bApplyBuildSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyBuildSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequestTangents_MetaData[];
#endif
		static void NewProp_bRequestTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bIgnoreRemoveDegenerates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRemoveDegenerates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptCopyMeshFromAssetOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bApplyBuildSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bApplyBuildSettings_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshFromAssetOptions*)Obj)->bApplyBuildSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bApplyBuildSettings = { "bApplyBuildSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshFromAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bApplyBuildSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bApplyBuildSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bApplyBuildSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bRequestTangents_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bRequestTangents_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshFromAssetOptions*)Obj)->bRequestTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bRequestTangents = { "bRequestTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshFromAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bRequestTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bRequestTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bRequestTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bIgnoreRemoveDegenerates_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bIgnoreRemoveDegenerates_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshFromAssetOptions*)Obj)->bIgnoreRemoveDegenerates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bIgnoreRemoveDegenerates = { "bIgnoreRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshFromAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bIgnoreRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bIgnoreRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bIgnoreRemoveDegenerates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bApplyBuildSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bRequestTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewProp_bIgnoreRemoveDegenerates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptCopyMeshFromAssetOptions",
		sizeof(FGeometryScriptCopyMeshFromAssetOptions),
		alignof(FGeometryScriptCopyMeshFromAssetOptions),
		Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromAssetOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromAssetOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromAssetOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptNaniteOptions;
class UScriptStruct* FGeometryScriptNaniteOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptNaniteOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptNaniteOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptNaniteOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptNaniteOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptNaniteOptions>()
{
	return FGeometryScriptNaniteOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackPercentTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallbackPercentTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackRelativeError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallbackRelativeError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Configuration settings for Nanite Rendering on StaticMesh Assets\n */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
		{ "ToolTip", "Configuration settings for Nanite Rendering on StaticMesh Assets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptNaniteOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Set Nanite to Enabled/Disabled */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
		{ "ToolTip", "Set Nanite to Enabled/Disabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FGeometryScriptNaniteOptions*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptNaniteOptions), &Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackPercentTriangles_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Percentage of triangles to maintain in Fallback Mesh used when Nanite is unavailable */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
		{ "ToolTip", "Percentage of triangles to maintain in Fallback Mesh used when Nanite is unavailable" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackPercentTriangles = { "FallbackPercentTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptNaniteOptions, FallbackPercentTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackPercentTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackPercentTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackRelativeError_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Relative Error to maintain in Fallback Mesh used when Nanite is unavailable. Overrides FallbackPercentTriangles. Set to 0 to only use FallbackPercentTriangles (default). */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
		{ "ToolTip", "Relative Error to maintain in Fallback Mesh used when Nanite is unavailable. Overrides FallbackPercentTriangles. Set to 0 to only use FallbackPercentTriangles (default)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackRelativeError = { "FallbackRelativeError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptNaniteOptions, FallbackRelativeError), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackRelativeError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackRelativeError_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackPercentTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewProp_FallbackRelativeError,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptNaniteOptions",
		sizeof(FGeometryScriptNaniteOptions),
		alignof(FGeometryScriptNaniteOptions),
		Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptNaniteOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptNaniteOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptNaniteOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshToAssetOptions;
class UScriptStruct* FGeometryScriptCopyMeshToAssetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshToAssetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshToAssetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptCopyMeshToAssetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshToAssetOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptCopyMeshToAssetOptions>()
{
	return FGeometryScriptCopyMeshToAssetOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeNormals_MetaData[];
#endif
		static void NewProp_bEnableRecomputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeTangents_MetaData[];
#endif
		static void NewProp_bEnableRecomputeTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bEnableRemoveDegenerates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRemoveDegenerates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceMaterials_MetaData[];
#endif
		static void NewProp_bReplaceMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceMaterials;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewMaterials;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewMaterialSlotNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMaterialSlotNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewMaterialSlotNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyNaniteSettings_MetaData[];
#endif
		static void NewProp_bApplyNaniteSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNaniteSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewNaniteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewNaniteSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmitTransaction_MetaData[];
#endif
		static void NewProp_bEmitTransaction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitTransaction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeferMeshPostEditChange_MetaData[];
#endif
		static void NewProp_bDeferMeshPostEditChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferMeshPostEditChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptCopyMeshToAssetOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeNormals_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeNormals_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshToAssetOptions*)Obj)->bEnableRecomputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeNormals = { "bEnableRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshToAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeTangents_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeTangents_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshToAssetOptions*)Obj)->bEnableRecomputeTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeTangents = { "bEnableRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshToAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRemoveDegenerates_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRemoveDegenerates_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshToAssetOptions*)Obj)->bEnableRemoveDegenerates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRemoveDegenerates = { "bEnableRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshToAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bReplaceMaterials_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bReplaceMaterials_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshToAssetOptions*)Obj)->bReplaceMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bReplaceMaterials = { "bReplaceMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshToAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bReplaceMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bReplaceMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bReplaceMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterials_Inner = { "NewMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterials_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterials = { "NewMaterials", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCopyMeshToAssetOptions, NewMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterials_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterialSlotNames_Inner = { "NewMaterialSlotNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterialSlotNames_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterialSlotNames = { "NewMaterialSlotNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCopyMeshToAssetOptions, NewMaterialSlotNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterialSlotNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterialSlotNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bApplyNaniteSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, NaniteSettings will be applied to the target Asset if possible */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
		{ "ToolTip", "If enabled, NaniteSettings will be applied to the target Asset if possible" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bApplyNaniteSettings_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshToAssetOptions*)Obj)->bApplyNaniteSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bApplyNaniteSettings = { "bApplyNaniteSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshToAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bApplyNaniteSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bApplyNaniteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bApplyNaniteSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NaniteSettings_MetaData[] = {
		{ "Category", "Deprecated" },
		{ "Comment", "/** Replaced FGeometryScriptNaniteOptions with usage of Engine FMeshNaniteSettings */" },
		{ "DisplayName", "DEPRECATED NANITE SETTING" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
		{ "ToolTip", "Replaced FGeometryScriptNaniteOptions with usage of Engine FMeshNaniteSettings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCopyMeshToAssetOptions, NaniteSettings), Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NaniteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NaniteSettings_MetaData)) }; // 3624250931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewNaniteSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Nanite Settings applied to the target Asset, if bApplyNaniteSettings = true */" },
		{ "DisplayName", "Nanite Settings" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
		{ "ToolTip", "Nanite Settings applied to the target Asset, if bApplyNaniteSettings = true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewNaniteSettings = { "NewNaniteSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCopyMeshToAssetOptions, NewNaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewNaniteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewNaniteSettings_MetaData)) }; // 2370712239
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEmitTransaction_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEmitTransaction_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshToAssetOptions*)Obj)->bEmitTransaction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEmitTransaction = { "bEmitTransaction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshToAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEmitTransaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEmitTransaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEmitTransaction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bDeferMeshPostEditChange_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bDeferMeshPostEditChange_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshToAssetOptions*)Obj)->bDeferMeshPostEditChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bDeferMeshPostEditChange = { "bDeferMeshPostEditChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshToAssetOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bDeferMeshPostEditChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bDeferMeshPostEditChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bDeferMeshPostEditChange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRecomputeTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEnableRemoveDegenerates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bReplaceMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterialSlotNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewMaterialSlotNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bApplyNaniteSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NaniteSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_NewNaniteSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bEmitTransaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewProp_bDeferMeshPostEditChange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptCopyMeshToAssetOptions",
		sizeof(FGeometryScriptCopyMeshToAssetOptions),
		alignof(FGeometryScriptCopyMeshToAssetOptions),
		Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshToAssetOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshToAssetOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshToAssetOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshToSkeletalMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_ToSkeletalMeshAsset);
		P_GET_STRUCT(FGeometryScriptCopyMeshToAssetOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptMeshWriteLOD,Z_Param_TargetLOD);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToSkeletalMesh(Z_Param_FromDynamicMesh,Z_Param_ToSkeletalMeshAsset,Z_Param_Options,Z_Param_TargetLOD,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshFromSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_FromSkeletalMeshAsset);
		P_GET_OBJECT(UDynamicMesh,Z_Param_ToDynamicMesh);
		P_GET_STRUCT(FGeometryScriptCopyMeshFromAssetOptions,Z_Param_AssetOptions);
		P_GET_STRUCT(FGeometryScriptMeshReadLOD,Z_Param_RequestedLOD);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromSkeletalMesh(Z_Param_FromSkeletalMeshAsset,Z_Param_ToDynamicMesh,Z_Param_AssetOptions,Z_Param_RequestedLOD,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_StaticMeshFunctions::execGetSectionMaterialListFromStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_FromStaticMeshAsset);
		P_GET_STRUCT(FGeometryScriptMeshReadLOD,Z_Param_RequestedLOD);
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_MaterialList);
		P_GET_TARRAY_REF(int32,Z_Param_Out_MaterialIndex);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_StaticMeshFunctions::GetSectionMaterialListFromStaticMesh(Z_Param_FromStaticMeshAsset,Z_Param_RequestedLOD,Z_Param_Out_MaterialList,Z_Param_Out_MaterialIndex,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshToStaticMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
		P_GET_OBJECT(UStaticMesh,Z_Param_ToStaticMeshAsset);
		P_GET_STRUCT(FGeometryScriptCopyMeshToAssetOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptMeshWriteLOD,Z_Param_TargetLOD);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToStaticMesh(Z_Param_FromDynamicMesh,Z_Param_ToStaticMeshAsset,Z_Param_Options,Z_Param_TargetLOD,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshFromStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_FromStaticMeshAsset);
		P_GET_OBJECT(UDynamicMesh,Z_Param_ToDynamicMesh);
		P_GET_STRUCT(FGeometryScriptCopyMeshFromAssetOptions,Z_Param_AssetOptions);
		P_GET_STRUCT(FGeometryScriptMeshReadLOD,Z_Param_RequestedLOD);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMesh(Z_Param_FromStaticMeshAsset,Z_Param_ToDynamicMesh,Z_Param_AssetOptions,Z_Param_RequestedLOD,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_StaticMeshFunctions::StaticRegisterNativesUGeometryScriptLibrary_StaticMeshFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_StaticMeshFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyMeshFromSkeletalMesh", &UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshFromSkeletalMesh },
			{ "CopyMeshFromStaticMesh", &UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshFromStaticMesh },
			{ "CopyMeshToSkeletalMesh", &UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshToSkeletalMesh },
			{ "CopyMeshToStaticMesh", &UGeometryScriptLibrary_StaticMeshFunctions::execCopyMeshToStaticMesh },
			{ "GetSectionMaterialListFromStaticMesh", &UGeometryScriptLibrary_StaticMeshFunctions::execGetSectionMaterialListFromStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics
	{
		struct GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromSkeletalMesh_Parms
		{
			USkeletalMesh* FromSkeletalMeshAsset;
			UDynamicMesh* ToDynamicMesh;
			FGeometryScriptCopyMeshFromAssetOptions AssetOptions;
			FGeometryScriptMeshReadLOD RequestedLOD;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromSkeletalMeshAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToDynamicMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestedLOD;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_FromSkeletalMeshAsset = { "FromSkeletalMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromSkeletalMesh_Parms, FromSkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_ToDynamicMesh = { "ToDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromSkeletalMesh_Parms, ToDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_AssetOptions = { "AssetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromSkeletalMesh_Parms, AssetOptions), Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions, METADATA_PARAMS(nullptr, 0) }; // 2721920070
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_RequestedLOD = { "RequestedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromSkeletalMesh_Parms, RequestedLOD), Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD, METADATA_PARAMS(nullptr, 0) }; // 3978269310
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromSkeletalMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromSkeletalMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_FromSkeletalMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_ToDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_AssetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_RequestedLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SkeletalMesh" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions, nullptr, "CopyMeshFromSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromSkeletalMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics
	{
		struct GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromStaticMesh_Parms
		{
			UStaticMesh* FromStaticMeshAsset;
			UDynamicMesh* ToDynamicMesh;
			FGeometryScriptCopyMeshFromAssetOptions AssetOptions;
			FGeometryScriptMeshReadLOD RequestedLOD;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromStaticMeshAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToDynamicMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestedLOD;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_FromStaticMeshAsset = { "FromStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromStaticMesh_Parms, FromStaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_ToDynamicMesh = { "ToDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromStaticMesh_Parms, ToDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_AssetOptions = { "AssetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromStaticMesh_Parms, AssetOptions), Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions, METADATA_PARAMS(nullptr, 0) }; // 2721920070
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_RequestedLOD = { "RequestedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromStaticMesh_Parms, RequestedLOD), Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD, METADATA_PARAMS(nullptr, 0) }; // 3978269310
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromStaticMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromStaticMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_FromStaticMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_ToDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_AssetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_RequestedLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|StaticMesh" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions, nullptr, "CopyMeshFromStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshFromStaticMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics
	{
		struct GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToSkeletalMesh_Parms
		{
			UDynamicMesh* FromDynamicMesh;
			USkeletalMesh* ToSkeletalMeshAsset;
			FGeometryScriptCopyMeshToAssetOptions Options;
			FGeometryScriptMeshWriteLOD TargetLOD;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToSkeletalMeshAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLOD;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToSkeletalMesh_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_ToSkeletalMeshAsset = { "ToSkeletalMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToSkeletalMesh_Parms, ToSkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToSkeletalMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions, METADATA_PARAMS(nullptr, 0) }; // 754883835
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_TargetLOD = { "TargetLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToSkeletalMesh_Parms, TargetLOD), Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD, METADATA_PARAMS(nullptr, 0) }; // 2178222923
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToSkeletalMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToSkeletalMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_FromDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_ToSkeletalMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_TargetLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SkeletalMesh" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions, nullptr, "CopyMeshToSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToSkeletalMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics
	{
		struct GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToStaticMesh_Parms
		{
			UDynamicMesh* FromDynamicMesh;
			UStaticMesh* ToStaticMeshAsset;
			FGeometryScriptCopyMeshToAssetOptions Options;
			FGeometryScriptMeshWriteLOD TargetLOD;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToStaticMeshAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLOD;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToStaticMesh_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_ToStaticMeshAsset = { "ToStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToStaticMesh_Parms, ToStaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToStaticMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions, METADATA_PARAMS(nullptr, 0) }; // 754883835
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_TargetLOD = { "TargetLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToStaticMesh_Parms, TargetLOD), Z_Construct_UScriptStruct_FGeometryScriptMeshWriteLOD, METADATA_PARAMS(nullptr, 0) }; // 2178222923
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToStaticMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToStaticMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_FromDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_ToStaticMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_TargetLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|StaticMesh" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions, nullptr, "CopyMeshToStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::GeometryScriptLibrary_StaticMeshFunctions_eventCopyMeshToStaticMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics
	{
		struct GeometryScriptLibrary_StaticMeshFunctions_eventGetSectionMaterialListFromStaticMesh_Parms
		{
			UStaticMesh* FromStaticMeshAsset;
			FGeometryScriptMeshReadLOD RequestedLOD;
			TArray<UMaterialInterface*> MaterialList;
			TArray<int32> MaterialIndex;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromStaticMeshAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestedLOD;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_FromStaticMeshAsset = { "FromStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventGetSectionMaterialListFromStaticMesh_Parms, FromStaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_RequestedLOD = { "RequestedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventGetSectionMaterialListFromStaticMesh_Parms, RequestedLOD), Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD, METADATA_PARAMS(nullptr, 0) }; // 3978269310
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_MaterialList_Inner = { "MaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_MaterialList = { "MaterialList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventGetSectionMaterialListFromStaticMesh_Parms, MaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_MaterialIndex_Inner = { "MaterialIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventGetSectionMaterialListFromStaticMesh_Parms, MaterialIndex), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventGetSectionMaterialListFromStaticMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_StaticMeshFunctions_eventGetSectionMaterialListFromStaticMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_FromStaticMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_RequestedLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_MaterialList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_MaterialList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_MaterialIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::NewProp_Debug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|StaticMesh" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions, nullptr, "GetSectionMaterialListFromStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::GeometryScriptLibrary_StaticMeshFunctions_eventGetSectionMaterialListFromStaticMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_StaticMeshFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_StaticMeshFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh, "CopyMeshFromSkeletalMesh" }, // 1563574909
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh, "CopyMeshFromStaticMesh" }, // 1149205923
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh, "CopyMeshToSkeletalMesh" }, // 36842688
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh, "CopyMeshToStaticMesh" }, // 3458586207
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh, "GetSectionMaterialListFromStaticMesh" }, // 3044294655
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Although the class name indicates StaticMeshFunctions, that was a naming mistake that is difficult\n// to correct. This class is intended to serve as a generic asset utils function library. The naming\n// issue is only visible at the C++ level. It is not visible in Python or BP.\n" },
		{ "IncludePath", "GeometryScript/MeshAssetFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshAssetFunctions.h" },
		{ "ScriptName", "GeometryScript_AssetUtils" },
		{ "ToolTip", "Although the class name indicates StaticMeshFunctions, that was a naming mistake that is difficult\nto correct. This class is intended to serve as a generic asset utils function library. The naming\nissue is only visible at the C++ level. It is not visible in Python or BP." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_StaticMeshFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_StaticMeshFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_StaticMeshFunctions>()
	{
		return UGeometryScriptLibrary_StaticMeshFunctions::StaticClass();
	}
	UGeometryScriptLibrary_StaticMeshFunctions::UGeometryScriptLibrary_StaticMeshFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_StaticMeshFunctions);
	UGeometryScriptLibrary_StaticMeshFunctions::~UGeometryScriptLibrary_StaticMeshFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptCopyMeshFromAssetOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromAssetOptions_Statics::NewStructOps, TEXT("GeometryScriptCopyMeshFromAssetOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromAssetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptCopyMeshFromAssetOptions), 2721920070U) },
		{ FGeometryScriptNaniteOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptNaniteOptions_Statics::NewStructOps, TEXT("GeometryScriptNaniteOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptNaniteOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptNaniteOptions), 3624250931U) },
		{ FGeometryScriptCopyMeshToAssetOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptCopyMeshToAssetOptions_Statics::NewStructOps, TEXT("GeometryScriptCopyMeshToAssetOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshToAssetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptCopyMeshToAssetOptions), 754883835U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_StaticMeshFunctions, UGeometryScriptLibrary_StaticMeshFunctions::StaticClass, TEXT("UGeometryScriptLibrary_StaticMeshFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_StaticMeshFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_StaticMeshFunctions), 1169386301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_3412459567(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshAssetFunctions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
