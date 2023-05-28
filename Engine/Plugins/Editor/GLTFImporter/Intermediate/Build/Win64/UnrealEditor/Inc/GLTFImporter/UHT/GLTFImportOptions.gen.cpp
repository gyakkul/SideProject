// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFImportOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GLTFIMPORTER_API UClass* Z_Construct_UClass_UGLTFImportOptions();
	GLTFIMPORTER_API UClass* Z_Construct_UClass_UGLTFImportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GLTFImporter();
// End Cross Module References
	void UGLTFImportOptions::StaticRegisterNativesUGLTFImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFImportOptions);
	UClass* Z_Construct_UClass_UGLTFImportOptions_NoRegister()
	{
		return UGLTFImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFImportOptions_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFImportOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "GLTFImportOptions.h" },
		{ "ModuleRelativePath", "Public/GLTFImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Lightmaps" },
		{ "ModuleRelativePath", "Public/GLTFImportOptions.h" },
		{ "ToolTip", "Generate new UV coordinates for lightmapping instead of using the highest index UV set. \nTurn this on to have Unreal Studio generate lightmap UV sets automatically.\nTurn this off to try using the highest index existing UV set (if available) as the lightmap UV set.\nFor both cases, geometry without existing UV sets will receive an empty UV set, which will by itself not be valid for use with Lightmass." },
	};
#endif
	void Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UGLTFImportOptions*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFImportOptions), &Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_ImportScale_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Import Uniform Scale" },
		{ "ModuleRelativePath", "Public/GLTFImportOptions.h" },
		{ "ToolTip", "Scale factor used for importing assets, by default: 100, for conversion from meters(glTF) to centimeters(Unreal default)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_ImportScale = { "ImportScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFImportOptions, ImportScale), METADATA_PARAMS(Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_ImportScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_ImportScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLTFImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFImportOptions_Statics::NewProp_ImportScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFImportOptions_Statics::ClassParams = {
		&UGLTFImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGLTFImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFImportOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFImportOptions()
	{
		if (!Z_Registration_Info_UClass_UGLTFImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFImportOptions.OuterSingleton, Z_Construct_UClass_UGLTFImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFImportOptions.OuterSingleton;
	}
	template<> GLTFIMPORTER_API UClass* StaticClass<UGLTFImportOptions>()
	{
		return UGLTFImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFImportOptions);
	UGLTFImportOptions::~UGLTFImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GLTFImporter_Source_GLTFImporter_Public_GLTFImportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GLTFImporter_Source_GLTFImporter_Public_GLTFImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFImportOptions, UGLTFImportOptions::StaticClass, TEXT("UGLTFImportOptions"), &Z_Registration_Info_UClass_UGLTFImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFImportOptions), 2159819928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GLTFImporter_Source_GLTFImporter_Public_GLTFImportOptions_h_2064954589(TEXT("/Script/GLTFImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GLTFImporter_Source_GLTFImporter_Public_GLTFImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GLTFImporter_Source_GLTFImporter_Public_GLTFImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
