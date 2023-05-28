// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SpriteEditor/SpriteEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpriteEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_USpriteEditorSettings();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_USpriteEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void USpriteEditorSettings::StaticRegisterNativesUSpriteEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpriteEditorSettings);
	UClass* Z_Construct_UClass_USpriteEditorSettings_NoRegister()
	{
		return USpriteEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USpriteEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGridByDefault_MetaData[];
#endif
		static void NewProp_bShowGridByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGridByDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpriteEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpriteEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings for the Paper2D sprite editor\n" },
		{ "IncludePath", "SpriteEditor/SpriteEditorSettings.h" },
		{ "ModuleRelativePath", "Private/SpriteEditor/SpriteEditorSettings.h" },
		{ "ToolTip", "Settings for the Paper2D sprite editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Background color in the sprite editor */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Private/SpriteEditor/SpriteEditorSettings.h" },
		{ "ToolTip", "Background color in the sprite editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpriteEditorSettings, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Should the grid be shown by default when the editor is opened? */" },
		{ "ModuleRelativePath", "Private/SpriteEditor/SpriteEditorSettings.h" },
		{ "ToolTip", "Should the grid be shown by default when the editor is opened?" },
	};
#endif
	void Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit(void* Obj)
	{
		((USpriteEditorSettings*)Obj)->bShowGridByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_bShowGridByDefault = { "bShowGridByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USpriteEditorSettings), &Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpriteEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteEditorSettings_Statics::NewProp_bShowGridByDefault,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpriteEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpriteEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpriteEditorSettings_Statics::ClassParams = {
		&USpriteEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpriteEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpriteEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpriteEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpriteEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpriteEditorSettings()
	{
		if (!Z_Registration_Info_UClass_USpriteEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpriteEditorSettings.OuterSingleton, Z_Construct_UClass_USpriteEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpriteEditorSettings.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<USpriteEditorSettings>()
	{
		return USpriteEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpriteEditorSettings);
	USpriteEditorSettings::~USpriteEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpriteEditorSettings, USpriteEditorSettings::StaticClass, TEXT("USpriteEditorSettings"), &Z_Registration_Info_UClass_USpriteEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpriteEditorSettings), 578641536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_3755505089(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_SpriteEditor_SpriteEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
