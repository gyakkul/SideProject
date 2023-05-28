// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StaticMeshExporterUSDOptions.h"
#include "USDAssetOptions.h"
#include "USDStageOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshExporterUSDOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions();
	USDEXPORTER_API UClass* Z_Construct_UClass_UStaticMeshExporterUSDOptions();
	USDEXPORTER_API UClass* Z_Construct_UClass_UStaticMeshExporterUSDOptions_NoRegister();
	USDEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FUsdMeshAssetOptions();
// End Cross Module References
	void UStaticMeshExporterUSDOptions::StaticRegisterNativesUStaticMeshExporterUSDOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshExporterUSDOptions);
	UClass* Z_Construct_UClass_UStaticMeshExporterUSDOptions_NoRegister()
	{
		return UStaticMeshExporterUSDOptions::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StageOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshAssetOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshAssetOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReExportIdenticalAssets_MetaData[];
#endif
		static void NewProp_bReExportIdenticalAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReExportIdenticalAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options for exporting static meshes to USD format.\n */" },
		{ "IncludePath", "StaticMeshExporterUSDOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StaticMeshExporterUSDOptions.h" },
		{ "ToolTip", "Options for exporting static meshes to USD format." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_StageOptions_MetaData[] = {
		{ "Category", "Stage options" },
		{ "ModuleRelativePath", "Public/StaticMeshExporterUSDOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_StageOptions = { "StageOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshExporterUSDOptions, StageOptions), Z_Construct_UScriptStruct_FUsdStageOptions, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_StageOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_StageOptions_MetaData)) }; // 3802012082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_MeshAssetOptions_MetaData[] = {
		{ "Category", "Mesh options" },
		{ "ModuleRelativePath", "Public/StaticMeshExporterUSDOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_MeshAssetOptions = { "MeshAssetOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshExporterUSDOptions, MeshAssetOptions), Z_Construct_UScriptStruct_FUsdMeshAssetOptions, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_MeshAssetOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_MeshAssetOptions_MetaData)) }; // 1571745038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\n\x09 * This is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files.\n\x09 */" },
		{ "DisplayName", "Re-export Identical Assets" },
		{ "ModuleRelativePath", "Public/StaticMeshExporterUSDOptions.h" },
		{ "ToolTip", "Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\nThis is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit(void* Obj)
	{
		((UStaticMeshExporterUSDOptions*)Obj)->bReExportIdenticalAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets = { "bReExportIdenticalAssets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStaticMeshExporterUSDOptions), &Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_StageOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_MeshAssetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshExporterUSDOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::ClassParams = {
		&UStaticMeshExporterUSDOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshExporterUSDOptions()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshExporterUSDOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshExporterUSDOptions.OuterSingleton, Z_Construct_UClass_UStaticMeshExporterUSDOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshExporterUSDOptions.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<UStaticMeshExporterUSDOptions>()
	{
		return UStaticMeshExporterUSDOptions::StaticClass();
	}
	UStaticMeshExporterUSDOptions::UStaticMeshExporterUSDOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshExporterUSDOptions);
	UStaticMeshExporterUSDOptions::~UStaticMeshExporterUSDOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshExporterUSDOptions, UStaticMeshExporterUSDOptions::StaticClass, TEXT("UStaticMeshExporterUSDOptions"), &Z_Registration_Info_UClass_UStaticMeshExporterUSDOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshExporterUSDOptions), 2020557696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_2759130307(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSDOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
