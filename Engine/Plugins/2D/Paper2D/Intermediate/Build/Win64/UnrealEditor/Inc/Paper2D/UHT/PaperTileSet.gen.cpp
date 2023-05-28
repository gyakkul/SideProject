// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperTileSet.h"
#include "IntMargin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "SpriteEditorOnlyTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FIntMargin();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileMetadata();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileSetTerrain();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryCollection();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperTileMetadata;
class UScriptStruct* FPaperTileMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTileMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperTileMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileMetadata, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTileMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_PaperTileMetadata.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTileMetadata>()
{
	return FPaperTileMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperTileMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDataName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserDataName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMembership_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TerrainMembership;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Information about a single tile in a tile set\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Information about a single tile in a tile set" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTileMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// A tag that can be used for grouping and categorizing (consider using it as the index into a UDataTable asset).\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "A tag that can be used for grouping and categorizing (consider using it as the index into a UDataTable asset)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName = { "UserDataName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTileMetadata, UserDataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Collision data for the tile\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Collision data for the tile" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTileMetadata, CollisionData), Z_Construct_UScriptStruct_FSpriteGeometryCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData_MetaData)) }; // 671462443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership_MetaData[] = {
		{ "Comment", "// Indexes into the Terrains array of the owning tile set, in counterclockwise order starting from top-left\n// 0xFF indicates no membership.\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Indexes into the Terrains array of the owning tile set, in counterclockwise order starting from top-left\n0xFF indicates no membership." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership = { "TerrainMembership", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(TerrainMembership, FPaperTileMetadata), nullptr, nullptr, STRUCT_OFFSET(FPaperTileMetadata, TerrainMembership), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_UserDataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_CollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewProp_TerrainMembership,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperTileMetadata",
		sizeof(FPaperTileMetadata),
		alignof(FPaperTileMetadata),
		Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperTileMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperTileMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperTileMetadata.InnerSingleton, Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperTileMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperTileSetTerrain;
class UScriptStruct* FPaperTileSetTerrain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTileSetTerrain, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTileSetTerrain"));
	}
	return Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTileSetTerrain>()
{
	return FPaperTileSetTerrain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TerrainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterTileIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CenterTileIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Information about a terrain type\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Information about a terrain type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTileSetTerrain>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName = { "TerrainName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTileSetTerrain, TerrainName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex = { "CenterTileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperTileSetTerrain, CenterTileIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_TerrainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewProp_CenterTileIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperTileSetTerrain",
		sizeof(FPaperTileSetTerrain),
		alignof(FPaperTileSetTerrain),
		Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperTileSetTerrain()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.InnerSingleton, Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperTileSetTerrain.InnerSingleton;
	}
	void UPaperTileSet::StaticRegisterNativesUPaperTileSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTileSet);
	UClass* Z_Construct_UClass_UPaperTileSet_NoRegister()
	{
		return UPaperTileSet::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTileSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSheet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TileSheet;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalSourceTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSourceTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSourceTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerTileSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerTileSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawingOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawingOffset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthInTiles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WidthInTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightInTiles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeightInTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AllocatedWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AllocatedHeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerTileData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerTileData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerTileData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Terrains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Terrains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Terrains;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Spacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTileSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A tile set is a collection of tiles pulled from a texture that can be used to fill out a tile map.\n *\n * @see UPaperTileMap, UPaperTileMapComponent\n */" },
		{ "IncludePath", "PaperTileSet.h" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "A tile set is a collection of tiles pulled from a texture that can be used to fill out a tile map.\n\n@see UPaperTileMap, UPaperTileMapComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "ClampMin", "1" },
		{ "Comment", "// The width and height of a single tile (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The width and height of a single tile (in pixels)" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, TileSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "Comment", "// The tile sheet texture associated with this tile set\n" },
		{ "DisplayName", "Tile Sheet Texture" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The tile sheet texture associated with this tile set" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet = { "TileSheet", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, TileSheet), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_Inner = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_MetaData[] = {
		{ "Category", "TileSet" },
		{ "Comment", "// Additional source textures for other slots\n" },
		{ "DisplayName", "Additional Textures" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Additional source textures for other slots" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures = { "AdditionalSourceTextures", nullptr, (EPropertyFlags)0x0044010000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, AdditionalSourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of padding around the border of the tile sheet (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The amount of padding around the border of the tile sheet (in pixels)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin = { "BorderMargin", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, BorderMargin), Z_Construct_UScriptStruct_FIntMargin, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin_MetaData)) }; // 172439931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "ClampMin", "0" },
		{ "Comment", "// The amount of padding between tiles in the tile sheet (in pixels)\n" },
		{ "DisplayName", "Per-Tile Spacing" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The amount of padding between tiles in the tile sheet (in pixels)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing = { "PerTileSpacing", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, PerTileSpacing), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "Comment", "// The drawing offset for tiles from this set (in pixels)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The drawing offset for tiles from this set (in pixels)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset = { "DrawingOffset", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, DrawingOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileSet" },
		{ "Comment", "/** The background color displayed in the tile set viewer */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "The background color displayed in the tile set viewer" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles_MetaData[] = {
		{ "Comment", "// Cached width of this tile set (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Cached width of this tile set (in tiles)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles = { "WidthInTiles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, WidthInTiles), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles_MetaData[] = {
		{ "Comment", "// Cached height of this tile set (in tiles)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Cached height of this tile set (in tiles)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles = { "HeightInTiles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, HeightInTiles), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth_MetaData[] = {
		{ "Comment", "// Allocated width of the per-tile data\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Allocated width of the per-tile data" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth = { "AllocatedWidth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, AllocatedWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight_MetaData[] = {
		{ "Comment", "// Allocated height of the per-tile data\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Allocated height of the per-tile data" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight = { "AllocatedHeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, AllocatedHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_Inner = { "PerTileData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperTileMetadata, METADATA_PARAMS(nullptr, 0) }; // 2396356789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Per-tile information\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Per-tile information" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData = { "PerTileData", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, PerTileData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_MetaData)) }; // 2396356789
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_Inner = { "Terrains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperTileSetTerrain, METADATA_PARAMS(nullptr, 0) }; // 3262103868
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_MetaData[] = {
		{ "Comment", "// Terrain information\n//@TODO: TileMapTerrains: (EditAnywhere, Category=Sprite)\n" },
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
		{ "ToolTip", "Terrain information\n@TODO: TileMapTerrains: (EditAnywhere, Category=Sprite)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains = { "Terrains", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, Terrains), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_MetaData)) }; // 3262103868
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth = { "TileWidth", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, TileWidth_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight = { "TileHeight", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, TileHeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, Margin_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperTileSet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileSet, Spacing_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTileSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AdditionalSourceTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BorderMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_DrawingOffset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_BackgroundColor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_WidthInTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_HeightInTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_AllocatedHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_PerTileData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Terrains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_TileHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Margin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileSet_Statics::NewProp_Spacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTileSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileSet_Statics::ClassParams = {
		&UPaperTileSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperTileSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTileSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTileSet()
	{
		if (!Z_Registration_Info_UClass_UPaperTileSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTileSet.OuterSingleton, Z_Construct_UClass_UPaperTileSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperTileSet.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<UPaperTileSet>()
	{
		return UPaperTileSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileSet);
	UPaperTileSet::~UPaperTileSet() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileSet)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ScriptStructInfo[] = {
		{ FPaperTileMetadata::StaticStruct, Z_Construct_UScriptStruct_FPaperTileMetadata_Statics::NewStructOps, TEXT("PaperTileMetadata"), &Z_Registration_Info_UScriptStruct_PaperTileMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperTileMetadata), 2396356789U) },
		{ FPaperTileSetTerrain::StaticStruct, Z_Construct_UScriptStruct_FPaperTileSetTerrain_Statics::NewStructOps, TEXT("PaperTileSetTerrain"), &Z_Registration_Info_UScriptStruct_PaperTileSetTerrain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperTileSetTerrain), 3262103868U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTileSet, UPaperTileSet::StaticClass, TEXT("UPaperTileSet"), &Z_Registration_Info_UClass_UPaperTileSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTileSet), 3167368689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_4091239320(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
