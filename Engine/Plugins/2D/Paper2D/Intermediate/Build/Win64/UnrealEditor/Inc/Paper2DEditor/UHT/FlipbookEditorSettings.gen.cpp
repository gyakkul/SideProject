// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FlipbookEditor/FlipbookEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlipbookEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UFlipbookEditorSettings();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UFlipbookEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UFlipbookEditorSettings::StaticRegisterNativesUFlipbookEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlipbookEditorSettings);
	UClass* Z_Construct_UClass_UFlipbookEditorSettings_NoRegister()
	{
		return UFlipbookEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFlipbookEditorSettings_Statics
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
	UObject* (*const Z_Construct_UClass_UFlipbookEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipbookEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings for the Paper2D sprite editor\n" },
		{ "IncludePath", "FlipbookEditor/FlipbookEditorSettings.h" },
		{ "ModuleRelativePath", "Private/FlipbookEditor/FlipbookEditorSettings.h" },
		{ "ToolTip", "Settings for the Paper2D sprite editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Background color in the flipbook editor */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Private/FlipbookEditor/FlipbookEditorSettings.h" },
		{ "ToolTip", "Background color in the flipbook editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlipbookEditorSettings, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Should the grid be shown by default when the editor is opened? */" },
		{ "ModuleRelativePath", "Private/FlipbookEditor/FlipbookEditorSettings.h" },
		{ "ToolTip", "Should the grid be shown by default when the editor is opened?" },
	};
#endif
	void Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit(void* Obj)
	{
		((UFlipbookEditorSettings*)Obj)->bShowGridByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_bShowGridByDefault = { "bShowGridByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFlipbookEditorSettings), &Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlipbookEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlipbookEditorSettings_Statics::NewProp_bShowGridByDefault,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlipbookEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlipbookEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlipbookEditorSettings_Statics::ClassParams = {
		&UFlipbookEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlipbookEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbookEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlipbookEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbookEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlipbookEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UFlipbookEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlipbookEditorSettings.OuterSingleton, Z_Construct_UClass_UFlipbookEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlipbookEditorSettings.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UFlipbookEditorSettings>()
	{
		return UFlipbookEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlipbookEditorSettings);
	UFlipbookEditorSettings::~UFlipbookEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_FlipbookEditor_FlipbookEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_FlipbookEditor_FlipbookEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlipbookEditorSettings, UFlipbookEditorSettings::StaticClass, TEXT("UFlipbookEditorSettings"), &Z_Registration_Info_UClass_UFlipbookEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlipbookEditorSettings), 2960185520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_FlipbookEditor_FlipbookEditorSettings_h_450267946(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_FlipbookEditor_FlipbookEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_FlipbookEditor_FlipbookEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
