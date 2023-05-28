// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithScene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithScene() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
// End Cross Module References
	void UDatasmithScene::StaticRegisterNativesUDatasmithScene()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithScene);
	UClass* Z_Construct_UClass_UDatasmithScene_NoRegister()
	{
		return UDatasmithScene::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulkDataVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BulkDataVersion;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMeshes_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StaticMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshes;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Clothes_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Clothes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clothes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Clothes;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Textures_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Textures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialFunctions_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialFunctions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialFunctions;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Materials_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Materials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelSequences_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelSequences_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequences_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LevelSequences;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelVariantSets_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelVariantSets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelVariantSets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LevelVariantSets;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithScene.h" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this Datasmith scene */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Importing data and options used for this Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0016000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, AssetImportData), Z_Construct_UClass_UDatasmithSceneImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion = { "BulkDataVersion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, BulkDataVersion), METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_ValueProp = { "StaticMeshes", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_Key_KeyProp = { "StaticMeshes_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the static meshes related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the static meshes related to this Datasmith Scene" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, StaticMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_ValueProp = { "Clothes", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_Key_KeyProp = { "Clothes_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the cloth related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the cloth related to this Datasmith Scene" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes = { "Clothes", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, Clothes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the textures related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the textures related to this Datasmith Scene" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, Textures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_ValueProp = { "MaterialFunctions", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_Key_KeyProp = { "MaterialFunctions_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the material functions related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the material functions related to this Datasmith Scene" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions = { "MaterialFunctions", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, MaterialFunctions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the materials related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the materials related to this Datasmith Scene" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, Materials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_ValueProp = { "LevelSequences", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_Key_KeyProp = { "LevelSequences_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the level sequences related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the level sequences related to this Datasmith Scene" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences = { "LevelSequences", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, LevelSequences), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_ValueProp = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0004000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_Key_KeyProp = { "LevelVariantSets_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the level variant sets related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the level variant sets related to this Datasmith Scene" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0014040800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, LevelVariantSets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0004000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0014008800000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithScene, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Clothes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_MaterialFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetUserData,
	};
#endif // WITH_EDITORONLY_DATA
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDatasmithScene_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UDatasmithScene, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithScene>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithScene_Statics::ClassParams = {
		&UDatasmithScene::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithScene_Statics::PropPointers, nullptr),
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::PropPointers), 0),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithScene()
	{
		if (!Z_Registration_Info_UClass_UDatasmithScene.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithScene.OuterSingleton, Z_Construct_UClass_UDatasmithScene_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithScene.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithScene>()
	{
		return UDatasmithScene::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithScene);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithScene)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithScene, UDatasmithScene::StaticClass, TEXT("UDatasmithScene"), &Z_Registration_Info_UClass_UDatasmithScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithScene), 2968248349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_2463743109(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
