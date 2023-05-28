// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelExporterUSDOptions.h"
#include "USDAssetOptions.h"
#include "USDStageOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelExporterUSDOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions();
	USDEXPORTER_API UClass* Z_Construct_UClass_ULevelExporterUSDOptions();
	USDEXPORTER_API UClass* Z_Construct_UClass_ULevelExporterUSDOptions_NoRegister();
	USDEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner();
	USDEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FUsdMeshAssetOptions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelExporterUSDOptionsInner;
class UScriptStruct* FLevelExporterUSDOptionsInner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelExporterUSDOptionsInner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelExporterUSDOptionsInner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner, (UObject*)Z_Construct_UPackage__Script_USDExporter(), TEXT("LevelExporterUSDOptionsInner"));
	}
	return Z_Registration_Info_UScriptStruct_LevelExporterUSDOptionsInner.OuterSingleton;
}
template<> USDEXPORTER_API UScriptStruct* StaticStruct<FLevelExporterUSDOptionsInner>()
{
	return FLevelExporterUSDOptionsInner::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectionOnly_MetaData[];
#endif
		static void NewProp_bSelectionOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectionOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportActorFolders_MetaData[];
#endif
		static void NewProp_bExportActorFolders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportActorFolders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSequencerAnimations_MetaData[];
#endif
		static void NewProp_bIgnoreSequencerAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSequencerAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportFoliageOnActorsLayer_MetaData[];
#endif
		static void NewProp_bExportFoliageOnActorsLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportFoliageOnActorsLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowestLandscapeLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LowestLandscapeLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighestLandscapeLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HighestLandscapeLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeBakeResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeBakeResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSublayers_MetaData[];
#endif
		static void NewProp_bExportSublayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSublayers;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelsToIgnore_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LevelsToIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelExporterUSDOptionsInner>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bSelectionOnly_MetaData[] = {
		{ "Category", "Export options" },
		{ "Comment", "/** Whether to export only the selected actors, and assets used by them */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Whether to export only the selected actors, and assets used by them" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bSelectionOnly_SetBit(void* Obj)
	{
		((FLevelExporterUSDOptionsInner*)Obj)->bSelectionOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bSelectionOnly = { "bSelectionOnly", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelExporterUSDOptionsInner), &Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bSelectionOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bSelectionOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bSelectionOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportActorFolders_MetaData[] = {
		{ "Category", "Export options" },
		{ "Comment", "/** Whether to use UE actor folders as empty prims */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Whether to use UE actor folders as empty prims" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportActorFolders_SetBit(void* Obj)
	{
		((FLevelExporterUSDOptionsInner*)Obj)->bExportActorFolders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportActorFolders = { "bExportActorFolders", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelExporterUSDOptionsInner), &Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportActorFolders_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportActorFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportActorFolders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bIgnoreSequencerAnimations_MetaData[] = {
		{ "Category", "Export options" },
		{ "Comment", "/** If true, and if we have a level sequence animating the level during export, it will revert any actor or component to its unanimated state before writing to USD */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "If true, and if we have a level sequence animating the level during export, it will revert any actor or component to its unanimated state before writing to USD" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bIgnoreSequencerAnimations_SetBit(void* Obj)
	{
		((FLevelExporterUSDOptionsInner*)Obj)->bIgnoreSequencerAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bIgnoreSequencerAnimations = { "bIgnoreSequencerAnimations", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelExporterUSDOptionsInner), &Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bIgnoreSequencerAnimations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bIgnoreSequencerAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bIgnoreSequencerAnimations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportFoliageOnActorsLayer_MetaData[] = {
		{ "Category", "Export options" },
		{ "Comment", "/**\n\x09 * By default foliage instances will be exported to the same layer as the component they were placed on in the editor.\n\x09 * Enable this to instead export the foliage instances to the same layer as the foliage actor they belong to.\n\x09 * This is useful if those foliage instances were placed with the \"Place In Current Level\" option.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "By default foliage instances will be exported to the same layer as the component they were placed on in the editor.\nEnable this to instead export the foliage instances to the same layer as the foliage actor they belong to.\nThis is useful if those foliage instances were placed with the \"Place In Current Level\" option." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportFoliageOnActorsLayer_SetBit(void* Obj)
	{
		((FLevelExporterUSDOptionsInner*)Obj)->bExportFoliageOnActorsLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportFoliageOnActorsLayer = { "bExportFoliageOnActorsLayer", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelExporterUSDOptionsInner), &Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportFoliageOnActorsLayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportFoliageOnActorsLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportFoliageOnActorsLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetFolder_MetaData[] = {
		{ "Category", "Asset options" },
		{ "Comment", "/** Where to place all the generated asset files */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Where to place all the generated asset files" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetFolder = { "AssetFolder", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelExporterUSDOptionsInner, AssetFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetOptions_MetaData[] = {
		{ "Category", "Asset options" },
		{ "Comment", "/** Options to use for all exported assets when appropriate (e.g. static and skeletal meshes, materials, etc.) */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Options to use for all exported assets when appropriate (e.g. static and skeletal meshes, materials, etc.)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetOptions = { "AssetOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelExporterUSDOptionsInner, AssetOptions), Z_Construct_UScriptStruct_FUsdMeshAssetOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetOptions_MetaData)) }; // 1571745038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LowestLandscapeLOD_MetaData[] = {
		{ "Category", "Landscape options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Lowest of the LOD indices to export landscapes with (use 0 for full resolution) */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Lowest of the LOD indices to export landscapes with (use 0 for full resolution)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LowestLandscapeLOD = { "LowestLandscapeLOD", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelExporterUSDOptionsInner, LowestLandscapeLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LowestLandscapeLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LowestLandscapeLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_HighestLandscapeLOD_MetaData[] = {
		{ "Category", "Landscape options" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Highest of the LOD indices to export landscapes with. Each value above 0 halves resolution.\n\x09 * The max value depends on the number of components and sections per component of each landscape, and may be clamped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Highest of the LOD indices to export landscapes with. Each value above 0 halves resolution.\nThe max value depends on the number of components and sections per component of each landscape, and may be clamped." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_HighestLandscapeLOD = { "HighestLandscapeLOD", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelExporterUSDOptionsInner, HighestLandscapeLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_HighestLandscapeLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_HighestLandscapeLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LandscapeBakeResolution_MetaData[] = {
		{ "Category", "Landscape options" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Resolution to use when baking landscape materials into textures  */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Resolution to use when baking landscape materials into textures" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LandscapeBakeResolution = { "LandscapeBakeResolution", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelExporterUSDOptionsInner, LandscapeBakeResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LandscapeBakeResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LandscapeBakeResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportSublayers_MetaData[] = {
		{ "Category", "Sublayers" },
		{ "Comment", "/** If true, will export sub-levels as separate layers (referenced as sublayers). If false, will collapse all sub-levels in a single exported root layer */" },
		{ "DisplayName", "Export Sublevels as Layers" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "If true, will export sub-levels as separate layers (referenced as sublayers). If false, will collapse all sub-levels in a single exported root layer" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportSublayers_SetBit(void* Obj)
	{
		((FLevelExporterUSDOptionsInner*)Obj)->bExportSublayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportSublayers = { "bExportSublayers", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelExporterUSDOptionsInner), &Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportSublayers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportSublayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportSublayers_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LevelsToIgnore_ElementProp = { "LevelsToIgnore", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LevelsToIgnore_MetaData[] = {
		{ "Category", "Sublayers" },
		{ "Comment", "/** Names of levels that should be ignored when collecting actors to export (e.g. \"Persistent Level\", \"Level1\", \"MySubLevel\", etc.) */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Names of levels that should be ignored when collecting actors to export (e.g. \"Persistent Level\", \"Level1\", \"MySubLevel\", etc.)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LevelsToIgnore = { "LevelsToIgnore", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelExporterUSDOptionsInner, LevelsToIgnore), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LevelsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LevelsToIgnore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bSelectionOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportActorFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bIgnoreSequencerAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportFoliageOnActorsLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_AssetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LowestLandscapeLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_HighestLandscapeLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LandscapeBakeResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_bExportSublayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LevelsToIgnore_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewProp_LevelsToIgnore,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
		nullptr,
		&NewStructOps,
		"LevelExporterUSDOptionsInner",
		sizeof(FLevelExporterUSDOptionsInner),
		alignof(FLevelExporterUSDOptionsInner),
		Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelExporterUSDOptionsInner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelExporterUSDOptionsInner.InnerSingleton, Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelExporterUSDOptionsInner.InnerSingleton;
	}
	DEFINE_FUNCTION(ULevelExporterUSDOptions::execGetUsdExtensions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=ULevelExporterUSDOptions::GetUsdExtensions();
		P_NATIVE_END;
	}
	void ULevelExporterUSDOptions::StaticRegisterNativesULevelExporterUSDOptions()
	{
		UClass* Class = ULevelExporterUSDOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUsdExtensions", &ULevelExporterUSDOptions::execGetUsdExtensions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics
	{
		struct LevelExporterUSDOptions_eventGetUsdExtensions_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelExporterUSDOptions_eventGetUsdExtensions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelExporterUSDOptions, nullptr, "GetUsdExtensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::LevelExporterUSDOptions_eventGetUsdExtensions_Parms), Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelExporterUSDOptions);
	UClass* Z_Construct_UClass_ULevelExporterUSDOptions_NoRegister()
	{
		return ULevelExporterUSDOptions::StaticClass();
	}
	struct Z_Construct_UClass_ULevelExporterUSDOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StageOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeCode_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTimeCode_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTimeCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReExportIdenticalLevelsAndSequences_MetaData[];
#endif
		static void NewProp_bReExportIdenticalLevelsAndSequences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReExportIdenticalLevelsAndSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReExportIdenticalAssets_MetaData[];
#endif
		static void NewProp_bReExportIdenticalAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReExportIdenticalAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTask_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelExporterUSDOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelExporterUSDOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelExporterUSDOptions_GetUsdExtensions, "GetUsdExtensions" }, // 581127006
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterUSDOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options for exporting levels to USD format.\n */" },
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "LevelExporterUSDOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Options for exporting levels to USD format." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StageOptions_MetaData[] = {
		{ "Category", "Stage options" },
		{ "Comment", "/** Basic options about the stage to export */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Basic options about the stage to export" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StageOptions = { "StageOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelExporterUSDOptions, StageOptions), Z_Construct_UScriptStruct_FUsdStageOptions, METADATA_PARAMS(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StageOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StageOptions_MetaData)) }; // 3802012082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StartTimeCode_MetaData[] = {
		{ "Category", "Stage options" },
		{ "Comment", "/** StartTimeCode to be used for all exported layers */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "StartTimeCode to be used for all exported layers" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StartTimeCode = { "StartTimeCode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelExporterUSDOptions, StartTimeCode), METADATA_PARAMS(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StartTimeCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StartTimeCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_EndTimeCode_MetaData[] = {
		{ "Category", "Stage options" },
		{ "Comment", "/** EndTimeCode to be used for all exported layers */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "EndTimeCode to be used for all exported layers" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_EndTimeCode = { "EndTimeCode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelExporterUSDOptions, EndTimeCode), METADATA_PARAMS(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_EndTimeCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_EndTimeCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_Inner_MetaData[] = {
		{ "Category", "Export settings" },
		{ "Comment", "/** Inner struct that actually contains most of the export options */" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Inner struct that actually contains most of the export options" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_Inner = { "Inner", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelExporterUSDOptions, Inner), Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner, METADATA_PARAMS(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_Inner_MetaData)) }; // 1694113040
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Whether to export levels and LevelSequences even if the existing files already describe the same versions of compatible assets.\n\x09 * This is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files.\n\x09 */" },
		{ "DisplayName", "Re-export Identical Levels and Sequences" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Whether to export levels and LevelSequences even if the existing files already describe the same versions of compatible assets.\nThis is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files." },
	};
#endif
	void Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_SetBit(void* Obj)
	{
		((ULevelExporterUSDOptions*)Obj)->bReExportIdenticalLevelsAndSequences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences = { "bReExportIdenticalLevelsAndSequences", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelExporterUSDOptions), &Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\n\x09 * This is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files.\n\x09 */" },
		{ "DisplayName", "Re-export Identical Assets" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\nThis is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files." },
	};
#endif
	void Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit(void* Obj)
	{
		((ULevelExporterUSDOptions*)Obj)->bReExportIdenticalAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets = { "bReExportIdenticalAssets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelExporterUSDOptions), &Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_CurrentTask_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "// We temporarily stash our export task here as a way of passing our options down to\n// the Python exporter, that does the actual level exporting.\n// This is weak because we often use the CDO of this class directly, and we never want to\n// permanently hold on to a particular export task\n" },
		{ "ModuleRelativePath", "Public/LevelExporterUSDOptions.h" },
		{ "ToolTip", "We temporarily stash our export task here as a way of passing our options down to\nthe Python exporter, that does the actual level exporting.\nThis is weak because we often use the CDO of this class directly, and we never want to\npermanently hold on to a particular export task" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_CurrentTask = { "CurrentTask", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelExporterUSDOptions, CurrentTask), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_CurrentTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_CurrentTask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelExporterUSDOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StageOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_StartTimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_EndTimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelExporterUSDOptions_Statics::NewProp_CurrentTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelExporterUSDOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelExporterUSDOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelExporterUSDOptions_Statics::ClassParams = {
		&ULevelExporterUSDOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelExporterUSDOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSDOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelExporterUSDOptions()
	{
		if (!Z_Registration_Info_UClass_ULevelExporterUSDOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelExporterUSDOptions.OuterSingleton, Z_Construct_UClass_ULevelExporterUSDOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelExporterUSDOptions.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<ULevelExporterUSDOptions>()
	{
		return ULevelExporterUSDOptions::StaticClass();
	}
	ULevelExporterUSDOptions::ULevelExporterUSDOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelExporterUSDOptions);
	ULevelExporterUSDOptions::~ULevelExporterUSDOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_Statics::ScriptStructInfo[] = {
		{ FLevelExporterUSDOptionsInner::StaticStruct, Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner_Statics::NewStructOps, TEXT("LevelExporterUSDOptionsInner"), &Z_Registration_Info_UScriptStruct_LevelExporterUSDOptionsInner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelExporterUSDOptionsInner), 1694113040U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelExporterUSDOptions, ULevelExporterUSDOptions::StaticClass, TEXT("ULevelExporterUSDOptions"), &Z_Registration_Info_UClass_ULevelExporterUSDOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelExporterUSDOptions), 455298308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_2406260105(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSDOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
