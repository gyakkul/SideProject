// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithGLTFImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithGLTFImportOptions() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase();
	DATASMITHGLTFTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithGLTFImportOptions();
	DATASMITHGLTFTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithGLTFImportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithGLTFTranslator();
// End Cross Module References
	void UDatasmithGLTFImportOptions::StaticRegisterNativesUDatasmithGLTFImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithGLTFImportOptions);
	UClass* Z_Construct_UClass_UDatasmithGLTFImportOptions_NoRegister()
	{
		return UDatasmithGLTFImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimationFrameRateFromFile_MetaData[];
#endif
		static void NewProp_bAnimationFrameRateFromFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimationFrameRateFromFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithGLTFTranslator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "DatasmithGLTFImportOptions.h" },
		{ "ModuleRelativePath", "Private/DatasmithGLTFImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Lightmaps" },
		{ "ModuleRelativePath", "Private/DatasmithGLTFImportOptions.h" },
		{ "ToolTip", "Generate new UV coordinates for lightmapping instead of using the highest index UV set. \nTurn this on to have Unreal Studio generate lightmap UV sets automatically.\nTurn this off to try using the highest index existing UV set (if available) as the lightmap UV set.\nFor both cases, geometry without existing UV sets will receive an empty UV set, which will by itself not be valid for use with Lightmass." },
	};
#endif
	void Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UDatasmithGLTFImportOptions*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithGLTFImportOptions), &Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_ImportScale_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Import Uniform Scale" },
		{ "ModuleRelativePath", "Private/DatasmithGLTFImportOptions.h" },
		{ "ToolTip", "Scale factor used for importing assets, by default: 100, for conversion from meters(glTF) to centimeters(Unreal default)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_ImportScale = { "ImportScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithGLTFImportOptions, ImportScale), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_ImportScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_ImportScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bAnimationFrameRateFromFile_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Animation FPS from File" },
		{ "ModuleRelativePath", "Private/DatasmithGLTFImportOptions.h" },
		{ "ToolTip", "Use animation frame rate from source (as it was exported). If unchecked, animations are resampled with 30 FPS." },
	};
#endif
	void Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bAnimationFrameRateFromFile_SetBit(void* Obj)
	{
		((UDatasmithGLTFImportOptions*)Obj)->bAnimationFrameRateFromFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bAnimationFrameRateFromFile = { "bAnimationFrameRateFromFile", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithGLTFImportOptions), &Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bAnimationFrameRateFromFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bAnimationFrameRateFromFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bAnimationFrameRateFromFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_ImportScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::NewProp_bAnimationFrameRateFromFile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithGLTFImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::ClassParams = {
		&UDatasmithGLTFImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithGLTFImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDatasmithGLTFImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithGLTFImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithGLTFImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithGLTFImportOptions.OuterSingleton;
	}
	template<> DATASMITHGLTFTRANSLATOR_API UClass* StaticClass<UDatasmithGLTFImportOptions>()
	{
		return UDatasmithGLTFImportOptions::StaticClass();
	}
	UDatasmithGLTFImportOptions::UDatasmithGLTFImportOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithGLTFImportOptions);
	UDatasmithGLTFImportOptions::~UDatasmithGLTFImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithGLTFImporter_Source_DatasmithGLTFTranslator_Private_DatasmithGLTFImportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithGLTFImporter_Source_DatasmithGLTFTranslator_Private_DatasmithGLTFImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithGLTFImportOptions, UDatasmithGLTFImportOptions::StaticClass, TEXT("UDatasmithGLTFImportOptions"), &Z_Registration_Info_UClass_UDatasmithGLTFImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithGLTFImportOptions), 1932453489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithGLTFImporter_Source_DatasmithGLTFTranslator_Private_DatasmithGLTFImportOptions_h_2416056957(TEXT("/Script/DatasmithGLTFTranslator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithGLTFImporter_Source_DatasmithGLTFTranslator_Private_DatasmithGLTFImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithGLTFImporter_Source_DatasmithGLTFTranslator_Private_DatasmithGLTFImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
