// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialExporterUSDOptions.h"
#include "USDAssetOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExporterUSDOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDEXPORTER_API UClass* Z_Construct_UClass_UMaterialExporterUSDOptions();
	USDEXPORTER_API UClass* Z_Construct_UClass_UMaterialExporterUSDOptions_NoRegister();
	USDEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FUsdMaterialBakingOptions();
// End Cross Module References
	void UMaterialExporterUSDOptions::StaticRegisterNativesUMaterialExporterUSDOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExporterUSDOptions);
	UClass* Z_Construct_UClass_UMaterialExporterUSDOptions_NoRegister()
	{
		return UMaterialExporterUSDOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExporterUSDOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBakingOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialBakingOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReExportIdenticalAssets_MetaData[];
#endif
		static void NewProp_bReExportIdenticalAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReExportIdenticalAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options for exporting materials to USD format.\n * We use a dedicated object instead of reusing the MaterialBaking module as automated export tasks\n * can only have one options object, and we need to also provide the textures directory.\n */" },
		{ "IncludePath", "MaterialExporterUSDOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialExporterUSDOptions.h" },
		{ "ToolTip", "Options for exporting materials to USD format.\nWe use a dedicated object instead of reusing the MaterialBaking module as automated export tasks\ncan only have one options object, and we need to also provide the textures directory." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_MaterialBakingOptions_MetaData[] = {
		{ "Category", "Material baking options" },
		{ "ModuleRelativePath", "Public/MaterialExporterUSDOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_MaterialBakingOptions = { "MaterialBakingOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExporterUSDOptions, MaterialBakingOptions), Z_Construct_UScriptStruct_FUsdMaterialBakingOptions, METADATA_PARAMS(Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_MaterialBakingOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_MaterialBakingOptions_MetaData)) }; // 3991817369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\n\x09 * This is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files.\n\x09 */" },
		{ "DisplayName", "Re-export Identical Assets" },
		{ "ModuleRelativePath", "Public/MaterialExporterUSDOptions.h" },
		{ "ToolTip", "Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\nThis is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files." },
	};
#endif
	void Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit(void* Obj)
	{
		((UMaterialExporterUSDOptions*)Obj)->bReExportIdenticalAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets = { "bReExportIdenticalAssets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExporterUSDOptions), &Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_MaterialBakingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExporterUSDOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::ClassParams = {
		&UMaterialExporterUSDOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExporterUSDOptions()
	{
		if (!Z_Registration_Info_UClass_UMaterialExporterUSDOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExporterUSDOptions.OuterSingleton, Z_Construct_UClass_UMaterialExporterUSDOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExporterUSDOptions.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<UMaterialExporterUSDOptions>()
	{
		return UMaterialExporterUSDOptions::StaticClass();
	}
	UMaterialExporterUSDOptions::UMaterialExporterUSDOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExporterUSDOptions);
	UMaterialExporterUSDOptions::~UMaterialExporterUSDOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExporterUSDOptions, UMaterialExporterUSDOptions::StaticClass, TEXT("UMaterialExporterUSDOptions"), &Z_Registration_Info_UClass_UMaterialExporterUSDOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExporterUSDOptions), 3727892712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_700518059(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSDOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
