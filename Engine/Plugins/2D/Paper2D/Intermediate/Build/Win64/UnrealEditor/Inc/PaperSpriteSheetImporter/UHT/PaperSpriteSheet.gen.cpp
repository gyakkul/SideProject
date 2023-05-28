// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperSpriteSheet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteSheet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PAPERSPRITESHEETIMPORTER_API UClass* Z_Construct_UClass_UPaperSpriteSheet();
	PAPERSPRITESHEETIMPORTER_API UClass* Z_Construct_UClass_UPaperSpriteSheet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperSpriteSheetImporter();
// End Cross Module References
	void UPaperSpriteSheet::StaticRegisterNativesUPaperSpriteSheet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteSheet);
	UClass* Z_Construct_UClass_UPaperSpriteSheet_NoRegister()
	{
		return UPaperSpriteSheet::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpriteNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpriteNames;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sprites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sprites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sprites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalMapTextureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NormalMapTextureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalMapTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NormalMapTexture;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperSpriteSheetImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "PaperSpriteSheet.h" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_SpriteNames_Inner = { "SpriteNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_SpriteNames_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The names of sprites during import\n" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheet.h" },
		{ "ToolTip", "The names of sprites during import" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_SpriteNames = { "SpriteNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteSheet, SpriteNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_SpriteNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_SpriteNames_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Sprites_Inner = { "Sprites", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Sprites_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Sprites = { "Sprites", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteSheet, Sprites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Sprites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Sprites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_TextureName_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The name of the default or diffuse texture during import\n" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheet.h" },
		{ "ToolTip", "The name of the default or diffuse texture during import" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_TextureName = { "TextureName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteSheet, TextureName), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_TextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_TextureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The asset that was created for TextureName\n" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheet.h" },
		{ "ToolTip", "The asset that was created for TextureName" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteSheet, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTextureName_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The name of the normal map texture during import (if any)\n" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheet.h" },
		{ "ToolTip", "The name of the normal map texture during import (if any)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTextureName = { "NormalMapTextureName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteSheet, NormalMapTextureName), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTextureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTexture_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The asset that was created for NormalMapTextureName (if any)\n" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheet.h" },
		{ "ToolTip", "The asset that was created for NormalMapTextureName (if any)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTexture = { "NormalMapTexture", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteSheet, NormalMapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTexture_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "// Import data for this \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheet.h" },
		{ "ToolTip", "Import data for this" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteSheet, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperSpriteSheet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_SpriteNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_SpriteNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Sprites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Sprites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_TextureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTextureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_NormalMapTexture,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteSheet_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteSheet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteSheet_Statics::ClassParams = {
		&UPaperSpriteSheet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperSpriteSheet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheet_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteSheet()
	{
		if (!Z_Registration_Info_UClass_UPaperSpriteSheet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteSheet.OuterSingleton, Z_Construct_UClass_UPaperSpriteSheet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperSpriteSheet.OuterSingleton;
	}
	template<> PAPERSPRITESHEETIMPORTER_API UClass* StaticClass<UPaperSpriteSheet>()
	{
		return UPaperSpriteSheet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteSheet);
	UPaperSpriteSheet::~UPaperSpriteSheet() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperSpriteSheet)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteSheet, UPaperSpriteSheet::StaticClass, TEXT("UPaperSpriteSheet"), &Z_Registration_Info_UClass_UPaperSpriteSheet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteSheet), 355050031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_1828347(TEXT("/Script/PaperSpriteSheetImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
