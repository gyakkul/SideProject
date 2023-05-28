// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperImporterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperImporterSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperImporterSettings();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperImporterSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperImporterSettings::StaticRegisterNativesUPaperImporterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperImporterSettings);
	UClass* Z_Construct_UClass_UPaperImporterSettings_NoRegister()
	{
		return UPaperImporterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPaperImporterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPickBestMaterialWhenCreatingSprites_MetaData[];
#endif
		static void NewProp_bPickBestMaterialWhenCreatingSprites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPickBestMaterialWhenCreatingSprites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPickBestMaterialWhenCreatingTileMaps_MetaData[];
#endif
		static void NewProp_bPickBestMaterialWhenCreatingTileMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPickBestMaterialWhenCreatingTileMaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnalysisCanUseOpaque_MetaData[];
#endif
		static void NewProp_bAnalysisCanUseOpaque_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnalysisCanUseOpaque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPixelsPerUnrealUnit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPixelsPerUnrealUnit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NormalMapTextureSuffixes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalMapTextureSuffixes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NormalMapTextureSuffixes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseMapTextureSuffixes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMapTextureSuffixes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseMapTextureSuffixes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpriteTextureGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSpriteTextureGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTextureCompression_MetaData[];
#endif
		static void NewProp_bOverrideTextureCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTextureCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpriteTextureCompression_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSpriteTextureCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlitDefaultMaskedMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnlitDefaultMaskedMaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlitDefaultTranslucentMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnlitDefaultTranslucentMaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlitDefaultOpaqueMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnlitDefaultOpaqueMaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LitDefaultMaskedMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LitDefaultMaskedMaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LitDefaultTranslucentMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LitDefaultTranslucentMaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LitDefaultOpaqueMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LitDefaultOpaqueMaterialName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperImporterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for imported Paper2D assets, such as sprite sheet textures.\n */" },
		{ "IncludePath", "PaperImporterSettings.h" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "Implements the settings for imported Paper2D assets, such as sprite sheet textures." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingSprites_MetaData[] = {
		{ "Category", "NewAssetSettings" },
		{ "Comment", "// Should the source texture be scanned when creating new sprites to determine the appropriate material? (if false, the Default Masked Material is always used)\n" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "Should the source texture be scanned when creating new sprites to determine the appropriate material? (if false, the Default Masked Material is always used)" },
	};
#endif
	void Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingSprites_SetBit(void* Obj)
	{
		((UPaperImporterSettings*)Obj)->bPickBestMaterialWhenCreatingSprites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingSprites = { "bPickBestMaterialWhenCreatingSprites", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperImporterSettings), &Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingSprites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingSprites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingSprites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingTileMaps_MetaData[] = {
		{ "Category", "NewAssetSettings" },
		{ "Comment", "// Should the source texture be scanned when creating new tile maps (from a tile set or via importing) to determine the appropriate material? (if false, the Default Masked Material is always used)\n" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "Should the source texture be scanned when creating new tile maps (from a tile set or via importing) to determine the appropriate material? (if false, the Default Masked Material is always used)" },
	};
#endif
	void Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingTileMaps_SetBit(void* Obj)
	{
		((UPaperImporterSettings*)Obj)->bPickBestMaterialWhenCreatingTileMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingTileMaps = { "bPickBestMaterialWhenCreatingTileMaps", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperImporterSettings), &Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingTileMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingTileMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingTileMaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bAnalysisCanUseOpaque_MetaData[] = {
		{ "Category", "NewAssetSettings" },
		{ "Comment", "// Can opaque materials be applied as part of the 'best material' analysis?\n" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "Can opaque materials be applied as part of the 'best material' analysis?" },
	};
#endif
	void Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bAnalysisCanUseOpaque_SetBit(void* Obj)
	{
		((UPaperImporterSettings*)Obj)->bAnalysisCanUseOpaque = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bAnalysisCanUseOpaque = { "bAnalysisCanUseOpaque", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperImporterSettings), &Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bAnalysisCanUseOpaque_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bAnalysisCanUseOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bAnalysisCanUseOpaque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultPixelsPerUnrealUnit_MetaData[] = {
		{ "Category", "NewAssetSettings" },
		{ "Comment", "// The default scaling factor between pixels and Unreal units (cm) to use for newly created sprite assets (e.g., 0.64 would make a 64 pixel wide sprite take up 100 cm)\n" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "The default scaling factor between pixels and Unreal units (cm) to use for newly created sprite assets (e.g., 0.64 would make a 64 pixel wide sprite take up 100 cm)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultPixelsPerUnrealUnit = { "DefaultPixelsPerUnrealUnit", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, DefaultPixelsPerUnrealUnit), METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultPixelsPerUnrealUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultPixelsPerUnrealUnit_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_NormalMapTextureSuffixes_Inner = { "NormalMapTextureSuffixes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_NormalMapTextureSuffixes_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "// A list of default suffixes to use when looking for associated normal maps while importing sprites or creating sprites from textures\n" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "A list of default suffixes to use when looking for associated normal maps while importing sprites or creating sprites from textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_NormalMapTextureSuffixes = { "NormalMapTextureSuffixes", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, NormalMapTextureSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_NormalMapTextureSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_NormalMapTextureSuffixes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_BaseMapTextureSuffixes_Inner = { "BaseMapTextureSuffixes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_BaseMapTextureSuffixes_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "// The default suffix to remove (if present) from a texture name before looking for an associated normal map using NormalMapTextureSuffixes\n" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "The default suffix to remove (if present) from a texture name before looking for an associated normal map using NormalMapTextureSuffixes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_BaseMapTextureSuffixes = { "BaseMapTextureSuffixes", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, BaseMapTextureSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_BaseMapTextureSuffixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_BaseMapTextureSuffixes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureGroup_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "// The default texture group for imported sprite textures, tile sheets, etc... (typically set to UI for 'modern 2D' or 2D pixels for 'retro 2D')\n" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "The default texture group for imported sprite textures, tile sheets, etc... (typically set to UI for 'modern 2D' or 2D pixels for 'retro 2D')" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureGroup = { "DefaultSpriteTextureGroup", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, DefaultSpriteTextureGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureGroup_MetaData)) }; // 3720270347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bOverrideTextureCompression_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "// Should texture compression settings be overridden on imported sprite textures, tile sheets, etc...?\n" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "Should texture compression settings be overridden on imported sprite textures, tile sheets, etc...?" },
	};
#endif
	void Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bOverrideTextureCompression_SetBit(void* Obj)
	{
		((UPaperImporterSettings*)Obj)->bOverrideTextureCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bOverrideTextureCompression = { "bOverrideTextureCompression", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperImporterSettings), &Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bOverrideTextureCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bOverrideTextureCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bOverrideTextureCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureCompression_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "// Compression settings to use when building the texture.\n// The default texture group for imported sprite textures, tile sheets, etc... (typically set to UI for 'modern 2D' or 2D pixels for 'retro 2D')\n" },
		{ "EditCondition", "bOverrideTextureCompression" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "Compression settings to use when building the texture.\nThe default texture group for imported sprite textures, tile sheets, etc... (typically set to UI for 'modern 2D' or 2D pixels for 'retro 2D')" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureCompression = { "DefaultSpriteTextureCompression", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, DefaultSpriteTextureCompression), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureCompression_MetaData)) }; // 3296291951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultMaskedMaterialName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "MaterialSettings" },
		{ "Comment", "// The unlit default masked material for newly created sprites (masked means binary opacity: things are either opaque or see-thru, with nothing in between)\n" },
		{ "DisplayName", "Unlit Default Masked Material" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "The unlit default masked material for newly created sprites (masked means binary opacity: things are either opaque or see-thru, with nothing in between)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultMaskedMaterialName = { "UnlitDefaultMaskedMaterialName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, UnlitDefaultMaskedMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultMaskedMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultMaskedMaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultTranslucentMaterialName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "MaterialSettings" },
		{ "Comment", "// The unlit default translucent material for newly created sprites (translucent means smooth opacity which can vary continuously from 0..1, but translucent rendering is more expensive that opaque or masked rendering and has different sorting rules)\n" },
		{ "DisplayName", "Unlit Default Translucent Material" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "The unlit default translucent material for newly created sprites (translucent means smooth opacity which can vary continuously from 0..1, but translucent rendering is more expensive that opaque or masked rendering and has different sorting rules)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultTranslucentMaterialName = { "UnlitDefaultTranslucentMaterialName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, UnlitDefaultTranslucentMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultTranslucentMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultTranslucentMaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultOpaqueMaterialName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "MaterialSettings" },
		{ "Comment", "// The unlit default opaque material for newly created sprites\n" },
		{ "DisplayName", "Unlit Default Opaque Sprite Material" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "The unlit default opaque material for newly created sprites" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultOpaqueMaterialName = { "UnlitDefaultOpaqueMaterialName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, UnlitDefaultOpaqueMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultOpaqueMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultOpaqueMaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultMaskedMaterialName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "MaterialSettings" },
		{ "Comment", "// The lit default masked material for newly created sprites (masked means binary opacity: things are either opaque or see-thru, with nothing in between)\n" },
		{ "DisplayName", "Lit Default Masked Material" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "The lit default masked material for newly created sprites (masked means binary opacity: things are either opaque or see-thru, with nothing in between)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultMaskedMaterialName = { "LitDefaultMaskedMaterialName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, LitDefaultMaskedMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultMaskedMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultMaskedMaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultTranslucentMaterialName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "MaterialSettings" },
		{ "Comment", "// The lit default translucent material for newly created sprites (translucent means smooth opacity which can vary continuously from 0..1, but translucent rendering is more expensive that opaque or masked rendering and has different sorting rules)\n" },
		{ "DisplayName", "Lit Default Translucent Material" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "The lit default translucent material for newly created sprites (translucent means smooth opacity which can vary continuously from 0..1, but translucent rendering is more expensive that opaque or masked rendering and has different sorting rules)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultTranslucentMaterialName = { "LitDefaultTranslucentMaterialName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, LitDefaultTranslucentMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultTranslucentMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultTranslucentMaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultOpaqueMaterialName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "MaterialSettings" },
		{ "Comment", "// The lit default opaque material for newly created sprites\n" },
		{ "DisplayName", "Lit Default Opaque Material" },
		{ "ModuleRelativePath", "Classes/PaperImporterSettings.h" },
		{ "ToolTip", "The lit default opaque material for newly created sprites" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultOpaqueMaterialName = { "LitDefaultOpaqueMaterialName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperImporterSettings, LitDefaultOpaqueMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultOpaqueMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultOpaqueMaterialName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperImporterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingSprites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bPickBestMaterialWhenCreatingTileMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bAnalysisCanUseOpaque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultPixelsPerUnrealUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_NormalMapTextureSuffixes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_NormalMapTextureSuffixes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_BaseMapTextureSuffixes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_BaseMapTextureSuffixes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_bOverrideTextureCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_DefaultSpriteTextureCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultMaskedMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultTranslucentMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_UnlitDefaultOpaqueMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultMaskedMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultTranslucentMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperImporterSettings_Statics::NewProp_LitDefaultOpaqueMaterialName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperImporterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperImporterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperImporterSettings_Statics::ClassParams = {
		&UPaperImporterSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperImporterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperImporterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperImporterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperImporterSettings()
	{
		if (!Z_Registration_Info_UClass_UPaperImporterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperImporterSettings.OuterSingleton, Z_Construct_UClass_UPaperImporterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperImporterSettings.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperImporterSettings>()
	{
		return UPaperImporterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperImporterSettings);
	UPaperImporterSettings::~UPaperImporterSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperImporterSettings, UPaperImporterSettings::StaticClass, TEXT("UPaperImporterSettings"), &Z_Registration_Info_UClass_UPaperImporterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperImporterSettings), 388504228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_2620167689(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperImporterSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
