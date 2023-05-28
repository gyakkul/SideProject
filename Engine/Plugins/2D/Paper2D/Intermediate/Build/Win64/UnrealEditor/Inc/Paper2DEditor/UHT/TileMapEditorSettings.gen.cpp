// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TileMapEditing/TileMapEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileMapEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileMapEditorSettings();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileMapEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UTileMapEditorSettings::StaticRegisterNativesUTileMapEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileMapEditorSettings);
	UClass* Z_Construct_UClass_UTileMapEditorSettings_NoRegister()
	{
		return UTileMapEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTileMapEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGridByDefault_MetaData[];
#endif
		static void NewProp_bShowGridByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGridByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTileGridColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTileGridColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMultiTileGridColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMultiTileGridColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMultiTileGridWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMultiTileGridWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMultiTileGridHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMultiTileGridHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMultiTileGridOffsetX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMultiTileGridOffsetX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMultiTileGridOffsetY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMultiTileGridOffsetY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayerGridColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLayerGridColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileMapEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings for the Paper2D tile map editor\n" },
		{ "IncludePath", "TileMapEditing/TileMapEditorSettings.h" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Settings for the Paper2D tile map editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultBackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Default background color for new tile map assets */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Default background color for new tile map assets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultBackgroundColor = { "DefaultBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileMapEditorSettings, DefaultBackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Should the grid be shown by default when the editor is opened? */" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Should the grid be shown by default when the editor is opened?" },
	};
#endif
	void Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit(void* Obj)
	{
		((UTileMapEditorSettings*)Obj)->bShowGridByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_bShowGridByDefault = { "bShowGridByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTileMapEditorSettings), &Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultTileGridColor_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Default per tile grid color for new tile map assets */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Default per tile grid color for new tile map assets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultTileGridColor = { "DefaultTileGridColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileMapEditorSettings, DefaultTileGridColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultTileGridColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultTileGridColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridColor_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Default multi tile grid color for new tile map assets */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Default multi tile grid color for new tile map assets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridColor = { "DefaultMultiTileGridColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileMapEditorSettings, DefaultMultiTileGridColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridWidth_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Default number of tiles the multi tile grid spans horizontally for new tile map assets. 0 removes vertical lines */" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Default number of tiles the multi tile grid spans horizontally for new tile map assets. 0 removes vertical lines" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridWidth = { "DefaultMultiTileGridWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileMapEditorSettings, DefaultMultiTileGridWidth), METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridHeight_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Default number of tiles the multi tile grid spans vertically for new tile map assets. 0 removes horizontal lines */" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Default number of tiles the multi tile grid spans vertically for new tile map assets. 0 removes horizontal lines" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridHeight = { "DefaultMultiTileGridHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileMapEditorSettings, DefaultMultiTileGridHeight), METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetX_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Default number of tiles the multi tile grid is shifted to the right for new tile map assets */" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Default number of tiles the multi tile grid is shifted to the right for new tile map assets" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetX = { "DefaultMultiTileGridOffsetX", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileMapEditorSettings, DefaultMultiTileGridOffsetX), METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetY_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Default number of tiles the multi tile grid is shifted downwards for new tile map assets */" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Default number of tiles the multi tile grid is shifted downwards for new tile map assets" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetY = { "DefaultMultiTileGridOffsetY", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileMapEditorSettings, DefaultMultiTileGridOffsetY), METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultLayerGridColor_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Default layer grid color for new tile map assets */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Private/TileMapEditing/TileMapEditorSettings.h" },
		{ "ToolTip", "Default layer grid color for new tile map assets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultLayerGridColor = { "DefaultLayerGridColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileMapEditorSettings, DefaultLayerGridColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultLayerGridColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultLayerGridColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileMapEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_bShowGridByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultTileGridColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultMultiTileGridOffsetY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapEditorSettings_Statics::NewProp_DefaultLayerGridColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileMapEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileMapEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileMapEditorSettings_Statics::ClassParams = {
		&UTileMapEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileMapEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileMapEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileMapEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UTileMapEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileMapEditorSettings.OuterSingleton, Z_Construct_UClass_UTileMapEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileMapEditorSettings.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UTileMapEditorSettings>()
	{
		return UTileMapEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileMapEditorSettings);
	UTileMapEditorSettings::~UTileMapEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileMapEditing_TileMapEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileMapEditing_TileMapEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileMapEditorSettings, UTileMapEditorSettings::StaticClass, TEXT("UTileMapEditorSettings"), &Z_Registration_Info_UClass_UTileMapEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileMapEditorSettings), 2837622580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileMapEditing_TileMapEditorSettings_h_2759951622(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileMapEditing_TileMapEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileMapEditing_TileMapEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
