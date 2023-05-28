// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TileSetEditor/TileSetEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileSetEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileSetEditorSettings();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileSetEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UTileSetEditorSettings::StaticRegisterNativesUTileSetEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileSetEditorSettings);
	UClass* Z_Construct_UClass_UTileSetEditorSettings_NoRegister()
	{
		return UTileSetEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTileSetEditorSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrusionAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExtrusionAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPadToPowerOf2_MetaData[];
#endif
		static void NewProp_bPadToPowerOf2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPadToPowerOf2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillWithTransparentBlack_MetaData[];
#endif
		static void NewProp_bFillWithTransparentBlack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillWithTransparentBlack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileSetEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSetEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings for the Paper2D tile set editor\n" },
		{ "IncludePath", "TileSetEditor/TileSetEditorSettings.h" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSetEditorSettings.h" },
		{ "ToolTip", "Settings for the Paper2D tile set editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_DefaultBackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "// Default background color for new tile set assets\n" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSetEditorSettings.h" },
		{ "ToolTip", "Default background color for new tile set assets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_DefaultBackgroundColor = { "DefaultBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileSetEditorSettings, DefaultBackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_DefaultBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_DefaultBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData[] = {
		{ "Category", "Tile Editor" },
		{ "Comment", "// Should the grid be shown by default when the editor is opened?\n" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSetEditorSettings.h" },
		{ "ToolTip", "Should the grid be shown by default when the editor is opened?" },
	};
#endif
	void Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit(void* Obj)
	{
		((UTileSetEditorSettings*)Obj)->bShowGridByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bShowGridByDefault = { "bShowGridByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTileSetEditorSettings), &Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_ExtrusionAmount_MetaData[] = {
		{ "Category", "Tile Sheet Conditioning" },
		{ "ClampMin", "1" },
		{ "Comment", "// The amount to extrude out from the edge of each tile (in pixels)\n" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSetEditorSettings.h" },
		{ "ToolTip", "The amount to extrude out from the edge of each tile (in pixels)" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_ExtrusionAmount = { "ExtrusionAmount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileSetEditorSettings, ExtrusionAmount), METADATA_PARAMS(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_ExtrusionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_ExtrusionAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bPadToPowerOf2_MetaData[] = {
		{ "Category", "Tile Sheet Conditioning" },
		{ "Comment", "// Should we pad the conditioned texture to the next power of 2?\n" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSetEditorSettings.h" },
		{ "ToolTip", "Should we pad the conditioned texture to the next power of 2?" },
	};
#endif
	void Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bPadToPowerOf2_SetBit(void* Obj)
	{
		((UTileSetEditorSettings*)Obj)->bPadToPowerOf2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bPadToPowerOf2 = { "bPadToPowerOf2", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTileSetEditorSettings), &Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bPadToPowerOf2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bPadToPowerOf2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bPadToPowerOf2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bFillWithTransparentBlack_MetaData[] = {
		{ "Category", "Tile Sheet Conditioning" },
		{ "Comment", "// Should we use transparent black or white when filling the texture areas that aren't covered by tiles?\n" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSetEditorSettings.h" },
		{ "ToolTip", "Should we use transparent black or white when filling the texture areas that aren't covered by tiles?" },
	};
#endif
	void Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bFillWithTransparentBlack_SetBit(void* Obj)
	{
		((UTileSetEditorSettings*)Obj)->bFillWithTransparentBlack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bFillWithTransparentBlack = { "bFillWithTransparentBlack", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTileSetEditorSettings), &Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bFillWithTransparentBlack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bFillWithTransparentBlack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bFillWithTransparentBlack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileSetEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_DefaultBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bShowGridByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_ExtrusionAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bPadToPowerOf2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSetEditorSettings_Statics::NewProp_bFillWithTransparentBlack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileSetEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileSetEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileSetEditorSettings_Statics::ClassParams = {
		&UTileSetEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileSetEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileSetEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileSetEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSetEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileSetEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UTileSetEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileSetEditorSettings.OuterSingleton, Z_Construct_UClass_UTileSetEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileSetEditorSettings.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UTileSetEditorSettings>()
	{
		return UTileSetEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileSetEditorSettings);
	UTileSetEditorSettings::~UTileSetEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSetEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSetEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileSetEditorSettings, UTileSetEditorSettings::StaticClass, TEXT("UTileSetEditorSettings"), &Z_Registration_Info_UClass_UTileSetEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileSetEditorSettings), 1198275788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSetEditorSettings_h_1801041355(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSetEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSetEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
