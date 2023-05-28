// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceExporterUSDOptions.h"
#include "LevelExporterUSDOptions.h"
#include "USDStageOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceExporterUSDOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions();
	USDEXPORTER_API UClass* Z_Construct_UClass_ULevelSequenceExporterUsdOptions();
	USDEXPORTER_API UClass* Z_Construct_UClass_ULevelSequenceExporterUsdOptions_NoRegister();
	USDEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner();
// End Cross Module References
	void ULevelSequenceExporterUsdOptions::StaticRegisterNativesULevelSequenceExporterUsdOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceExporterUsdOptions);
	UClass* Z_Construct_UClass_ULevelSequenceExporterUsdOptions_NoRegister()
	{
		return ULevelSequenceExporterUsdOptions::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StageOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeCodesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCodesPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideExportRange_MetaData[];
#endif
		static void NewProp_bOverrideExportRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideExportRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectionOnly_MetaData[];
#endif
		static void NewProp_bSelectionOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectionOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSubsequencesAsLayers_MetaData[];
#endif
		static void NewProp_bExportSubsequencesAsLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSubsequencesAsLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLevel_MetaData[];
#endif
		static void NewProp_bExportLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExportedLevelAsSublayer_MetaData[];
#endif
		static void NewProp_bUseExportedLevelAsSublayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExportedLevelAsSublayer;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelExportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelExportOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options for level sequences to the USD format.\n */" },
		{ "IncludePath", "LevelSequenceExporterUSDOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Options for level sequences to the USD format." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StageOptions_MetaData[] = {
		{ "Category", "USDSettings" },
		{ "Comment", "/** Export options to use for the layer where the animation is emitted */" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Export options to use for the layer where the animation is emitted" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StageOptions = { "StageOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceExporterUsdOptions, StageOptions), Z_Construct_UScriptStruct_FUsdStageOptions, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StageOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StageOptions_MetaData)) }; // 3802012082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_TimeCodesPerSecond_MetaData[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09 * Value to bake all generated USD layers with\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Value to bake all generated USD layers with" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_TimeCodesPerSecond = { "TimeCodesPerSecond", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceExporterUsdOptions, TimeCodesPerSecond), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_TimeCodesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_TimeCodesPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bOverrideExportRange_MetaData[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09 * If checked will cause StartFrame and EndFrame to be used as the frame range for the level sequence export.\n\x09 * If unchecked the existing playback range of each level sequence will be used instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "If checked will cause StartFrame and EndFrame to be used as the frame range for the level sequence export.\nIf unchecked the existing playback range of each level sequence will be used instead." },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bOverrideExportRange_SetBit(void* Obj)
	{
		((ULevelSequenceExporterUsdOptions*)Obj)->bOverrideExportRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bOverrideExportRange = { "bOverrideExportRange", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceExporterUsdOptions), &Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bOverrideExportRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bOverrideExportRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bOverrideExportRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/** Initial frame of the level sequence to bake out to USD (inclusive) */" },
		{ "EditCondition", "bOverrideExportRange" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Initial frame of the level sequence to bake out to USD (inclusive)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceExporterUsdOptions, StartFrame), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/** Final frame of the level sequence to bake out to USD (inclusive) */" },
		{ "EditCondition", "bOverrideExportRange" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Final frame of the level sequence to bake out to USD (inclusive)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceExporterUsdOptions, EndFrame), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_EndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_EndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bSelectionOnly_MetaData[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09 * Whether to export animations exclusively from selected actors or components\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Whether to export animations exclusively from selected actors or components" },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bSelectionOnly_SetBit(void* Obj)
	{
		((ULevelSequenceExporterUsdOptions*)Obj)->bSelectionOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bSelectionOnly = { "bSelectionOnly", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceExporterUsdOptions), &Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bSelectionOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bSelectionOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bSelectionOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportSubsequencesAsLayers_MetaData[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09 * The effect of subsequences is always included on the main exported layer, but if this option is true we will also\n\x09 * export individual sublayers for each subsequence, so that they can be used by themselves if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "The effect of subsequences is always included on the main exported layer, but if this option is true we will also\nexport individual sublayers for each subsequence, so that they can be used by themselves if needed." },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportSubsequencesAsLayers_SetBit(void* Obj)
	{
		((ULevelSequenceExporterUsdOptions*)Obj)->bExportSubsequencesAsLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportSubsequencesAsLayers = { "bExportSubsequencesAsLayers", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceExporterUsdOptions), &Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportSubsequencesAsLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportSubsequencesAsLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportSubsequencesAsLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportLevel_MetaData[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09 * Exports the provided level alongside the layer that represents the exported Level Sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Exports the provided level alongside the layer that represents the exported Level Sequence" },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportLevel_SetBit(void* Obj)
	{
		((ULevelSequenceExporterUsdOptions*)Obj)->bExportLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportLevel = { "bExportLevel", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceExporterUsdOptions), &Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bUseExportedLevelAsSublayer_MetaData[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09 * If checked this will also add the exported level as a sublayer to the USD files emitted for all exported level sequences\n\x09 */" },
		{ "DisplayName", "Use Exported Level as USD Sublayer" },
		{ "EditCondition", "bExportLevel" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "If checked this will also add the exported level as a sublayer to the USD files emitted for all exported level sequences" },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bUseExportedLevelAsSublayer_SetBit(void* Obj)
	{
		((ULevelSequenceExporterUsdOptions*)Obj)->bUseExportedLevelAsSublayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bUseExportedLevelAsSublayer = { "bUseExportedLevelAsSublayer", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceExporterUsdOptions), &Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bUseExportedLevelAsSublayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bUseExportedLevelAsSublayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bUseExportedLevelAsSublayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Whether to export levels and LevelSequences even if the existing files already describe the same versions of compatible assets.\n\x09 * This is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files.\n\x09 */" },
		{ "DisplayName", "Re-export Identical Levels and Sequences" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Whether to export levels and LevelSequences even if the existing files already describe the same versions of compatible assets.\nThis is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files." },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_SetBit(void* Obj)
	{
		((ULevelSequenceExporterUsdOptions*)Obj)->bReExportIdenticalLevelsAndSequences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences = { "bReExportIdenticalLevelsAndSequences", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceExporterUsdOptions), &Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\n\x09 * This is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files.\n\x09 */" },
		{ "DisplayName", "Re-export Identical Assets" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\nThis is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files." },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit(void* Obj)
	{
		((ULevelSequenceExporterUsdOptions*)Obj)->bReExportIdenticalAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalAssets = { "bReExportIdenticalAssets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceExporterUsdOptions), &Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Level Export" },
		{ "EditCondition", "bExportLevel" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceExporterUsdOptions, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_LevelExportOptions_MetaData[] = {
		{ "Category", "Level Export" },
		{ "EditCondition", "bExportLevel" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSDOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_LevelExportOptions = { "LevelExportOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceExporterUsdOptions, LevelExportOptions), Z_Construct_UScriptStruct_FLevelExporterUSDOptionsInner, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_LevelExportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_LevelExportOptions_MetaData)) }; // 1694113040
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StageOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_TimeCodesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bOverrideExportRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bSelectionOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportSubsequencesAsLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bExportLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bUseExportedLevelAsSublayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalLevelsAndSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_bReExportIdenticalAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::NewProp_LevelExportOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceExporterUsdOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::ClassParams = {
		&ULevelSequenceExporterUsdOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceExporterUsdOptions()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceExporterUsdOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceExporterUsdOptions.OuterSingleton, Z_Construct_UClass_ULevelSequenceExporterUsdOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceExporterUsdOptions.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<ULevelSequenceExporterUsdOptions>()
	{
		return ULevelSequenceExporterUsdOptions::StaticClass();
	}
	ULevelSequenceExporterUsdOptions::ULevelSequenceExporterUsdOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceExporterUsdOptions);
	ULevelSequenceExporterUsdOptions::~ULevelSequenceExporterUsdOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceExporterUsdOptions, ULevelSequenceExporterUsdOptions::StaticClass, TEXT("ULevelSequenceExporterUsdOptions"), &Z_Registration_Info_UClass_ULevelSequenceExporterUsdOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceExporterUsdOptions), 2164564132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_3245278791(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSDOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
