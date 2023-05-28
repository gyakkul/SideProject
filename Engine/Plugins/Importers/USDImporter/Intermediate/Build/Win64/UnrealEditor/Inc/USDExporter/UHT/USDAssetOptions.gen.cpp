// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDAssetOptions.h"
#include "MaterialOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDAssetOptions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	MATERIALBAKING_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyEntry();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FUsdMaterialBakingOptions();
	USDEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FUsdMeshAssetOptions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdMaterialBakingOptions;
class UScriptStruct* FUsdMaterialBakingOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdMaterialBakingOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdMaterialBakingOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions, (UObject*)Z_Construct_UPackage__Script_USDExporter(), TEXT("UsdMaterialBakingOptions"));
	}
	return Z_Registration_Info_UScriptStruct_UsdMaterialBakingOptions.OuterSingleton;
}
template<> USDEXPORTER_API UScriptStruct* StaticStruct<FUsdMaterialBakingOptions>()
{
	return FUsdMaterialBakingOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstantColorAsSingleValue_MetaData[];
#endif
		static void NewProp_bConstantColorAsSingleValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantColorAsSingleValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturesDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexturesDir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdMaterialBakingOptions>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyEntry, METADATA_PARAMS(nullptr, 0) }; // 3594713815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Material baking options" },
		{ "Comment", "/** Properties which are supposed to be baked out for the material */" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
		{ "ToolTip", "Properties which are supposed to be baked out for the material" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdMaterialBakingOptions, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_Properties_MetaData)) }; // 3594713815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_DefaultTextureSize_MetaData[] = {
		{ "Category", "Material baking options" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size of the baked texture for all properties that don't have a CustomSize set */" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
		{ "ToolTip", "Size of the baked texture for all properties that don't have a CustomSize set" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_DefaultTextureSize = { "DefaultTextureSize", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdMaterialBakingOptions, DefaultTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_DefaultTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_DefaultTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_bConstantColorAsSingleValue_MetaData[] = {
		{ "Category", "Material baking options" },
		{ "Comment", "/** When this is true and a baked texture contains a single flat color we will write out that color value directly on the USD layer and skip generating a texture */" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
		{ "ToolTip", "When this is true and a baked texture contains a single flat color we will write out that color value directly on the USD layer and skip generating a texture" },
	};
#endif
	void Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_bConstantColorAsSingleValue_SetBit(void* Obj)
	{
		((FUsdMaterialBakingOptions*)Obj)->bConstantColorAsSingleValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_bConstantColorAsSingleValue = { "bConstantColorAsSingleValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUsdMaterialBakingOptions), &Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_bConstantColorAsSingleValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_bConstantColorAsSingleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_bConstantColorAsSingleValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_TexturesDir_MetaData[] = {
		{ "Category", "Material baking options" },
		{ "Comment", "/** Where baked textures are placed. Intentionally not a config as it's heavily dependent on where the stage is */" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
		{ "ToolTip", "Where baked textures are placed. Intentionally not a config as it's heavily dependent on where the stage is" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_TexturesDir = { "TexturesDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdMaterialBakingOptions, TexturesDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_TexturesDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_TexturesDir_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_DefaultTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_bConstantColorAsSingleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewProp_TexturesDir,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
		nullptr,
		&NewStructOps,
		"UsdMaterialBakingOptions",
		sizeof(FUsdMaterialBakingOptions),
		alignof(FUsdMaterialBakingOptions),
		Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUsdMaterialBakingOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_UsdMaterialBakingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdMaterialBakingOptions.InnerSingleton, Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UsdMaterialBakingOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdMeshAssetOptions;
class UScriptStruct* FUsdMeshAssetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdMeshAssetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdMeshAssetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdMeshAssetOptions, (UObject*)Z_Construct_UPackage__Script_USDExporter(), TEXT("UsdMeshAssetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_UsdMeshAssetOptions.OuterSingleton;
}
template<> USDEXPORTER_API UScriptStruct* StaticStruct<FUsdMeshAssetOptions>()
{
	return FUsdMeshAssetOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePayload_MetaData[];
#endif
		static void NewProp_bUsePayload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeMaterials_MetaData[];
#endif
		static void NewProp_bBakeMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveUnrealMaterials_MetaData[];
#endif
		static void NewProp_bRemoveUnrealMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveUnrealMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBakingOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialBakingOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowestMeshLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LowestMeshLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighestMeshLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HighestMeshLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdMeshAssetOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bUsePayload_MetaData[] = {
		{ "Category", "Mesh options" },
		{ "Comment", "/** If true, the mesh data is exported to yet another \"payload\" file, and referenced via a payload composition arc */" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
		{ "ToolTip", "If true, the mesh data is exported to yet another \"payload\" file, and referenced via a payload composition arc" },
	};
#endif
	void Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bUsePayload_SetBit(void* Obj)
	{
		((FUsdMeshAssetOptions*)Obj)->bUsePayload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bUsePayload = { "bUsePayload", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUsdMeshAssetOptions), &Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bUsePayload_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bUsePayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bUsePayload_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_PayloadFormat_MetaData[] = {
		{ "Category", "Mesh options" },
		{ "Comment", "/** USD format to use for exported payload files */" },
		{ "EditCondition", "bUsePayload" },
		{ "GetOptions", "USDExporter.LevelExporterUSDOptions.GetUsdExtensions" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
		{ "ToolTip", "USD format to use for exported payload files" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_PayloadFormat = { "PayloadFormat", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdMeshAssetOptions, PayloadFormat), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_PayloadFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_PayloadFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bBakeMaterials_MetaData[] = {
		{ "Category", "Material options" },
		{ "Comment", "/** Whether to bake the mesh's assigned material and export these as separate UsdPreviewSurface assets */" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
		{ "ToolTip", "Whether to bake the mesh's assigned material and export these as separate UsdPreviewSurface assets" },
	};
#endif
	void Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bBakeMaterials_SetBit(void* Obj)
	{
		((FUsdMeshAssetOptions*)Obj)->bBakeMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bBakeMaterials = { "bBakeMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUsdMeshAssetOptions), &Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bBakeMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bBakeMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bBakeMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bRemoveUnrealMaterials_MetaData[] = {
		{ "EditCondition", "bBakeMaterials" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bRemoveUnrealMaterials_SetBit(void* Obj)
	{
		((FUsdMeshAssetOptions*)Obj)->bRemoveUnrealMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bRemoveUnrealMaterials = { "bRemoveUnrealMaterials", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUsdMeshAssetOptions), &Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bRemoveUnrealMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bRemoveUnrealMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bRemoveUnrealMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_MaterialBakingOptions_MetaData[] = {
		{ "Category", "Material options" },
		{ "EditCondition", "bBakeMaterials" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_MaterialBakingOptions = { "MaterialBakingOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdMeshAssetOptions, MaterialBakingOptions), Z_Construct_UScriptStruct_FUsdMaterialBakingOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_MaterialBakingOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_MaterialBakingOptions_MetaData)) }; // 3991817369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_LowestMeshLOD_MetaData[] = {
		{ "Category", "Mesh options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Lowest of the LOD indices to export static and skeletal meshes with (use 0 for full detail) */" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
		{ "ToolTip", "Lowest of the LOD indices to export static and skeletal meshes with (use 0 for full detail)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_LowestMeshLOD = { "LowestMeshLOD", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdMeshAssetOptions, LowestMeshLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_LowestMeshLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_LowestMeshLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_HighestMeshLOD_MetaData[] = {
		{ "Category", "Mesh options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Highest of the LOD indices to export static and skeletal meshes with */" },
		{ "ModuleRelativePath", "Public/USDAssetOptions.h" },
		{ "ToolTip", "Highest of the LOD indices to export static and skeletal meshes with" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_HighestMeshLOD = { "HighestMeshLOD", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdMeshAssetOptions, HighestMeshLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_HighestMeshLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_HighestMeshLOD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bUsePayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_PayloadFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bBakeMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_bRemoveUnrealMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_MaterialBakingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_LowestMeshLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewProp_HighestMeshLOD,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
		nullptr,
		&NewStructOps,
		"UsdMeshAssetOptions",
		sizeof(FUsdMeshAssetOptions),
		alignof(FUsdMeshAssetOptions),
		Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUsdMeshAssetOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_UsdMeshAssetOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdMeshAssetOptions.InnerSingleton, Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UsdMeshAssetOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDAssetOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDAssetOptions_h_Statics::ScriptStructInfo[] = {
		{ FUsdMaterialBakingOptions::StaticStruct, Z_Construct_UScriptStruct_FUsdMaterialBakingOptions_Statics::NewStructOps, TEXT("UsdMaterialBakingOptions"), &Z_Registration_Info_UScriptStruct_UsdMaterialBakingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdMaterialBakingOptions), 3991817369U) },
		{ FUsdMeshAssetOptions::StaticStruct, Z_Construct_UScriptStruct_FUsdMeshAssetOptions_Statics::NewStructOps, TEXT("UsdMeshAssetOptions"), &Z_Registration_Info_UScriptStruct_UsdMeshAssetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdMeshAssetOptions), 1571745038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDAssetOptions_h_3045002777(TEXT("/Script/USDExporter"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDAssetOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDAssetOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
