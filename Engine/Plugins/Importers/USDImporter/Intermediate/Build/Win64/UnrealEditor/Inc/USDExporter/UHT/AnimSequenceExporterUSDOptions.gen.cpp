// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimSequenceExporterUSDOptions.h"
#include "USDAssetOptions.h"
#include "USDStageOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceExporterUSDOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions();
	USDEXPORTER_API UClass* Z_Construct_UClass_UAnimSequenceExporterUSDOptions();
	USDEXPORTER_API UClass* Z_Construct_UClass_UAnimSequenceExporterUSDOptions_NoRegister();
	USDEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FUsdMeshAssetOptions();
// End Cross Module References
	void UAnimSequenceExporterUSDOptions::StaticRegisterNativesUAnimSequenceExporterUSDOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequenceExporterUSDOptions);
	UClass* Z_Construct_UClass_UAnimSequenceExporterUSDOptions_NoRegister()
	{
		return UAnimSequenceExporterUSDOptions::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportPreviewMesh_MetaData[];
#endif
		static void NewProp_bExportPreviewMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewMeshOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReExportIdenticalAssets_MetaData[];
#endif
		static void NewProp_bReExportIdenticalAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReExportIdenticalAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options for exporting skeletal mesh animations to USD format.\n */" },
		{ "IncludePath", "AnimSequenceExporterUSDOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Options for exporting skeletal mesh animations to USD format." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_StageOptions_MetaData[] = {
		{ "Category", "Stage options" },
		{ "Comment", "/** Export options to use for the layer where the animation is emitted */" },
		{ "ModuleRelativePath", "Public/AnimSequenceExporterUSDOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Export options to use for the layer where the animation is emitted" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_StageOptions = { "StageOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceExporterUSDOptions, StageOptions), Z_Construct_UScriptStruct_FUsdStageOptions, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_StageOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_StageOptions_MetaData)) }; // 3802012082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bExportPreviewMesh_MetaData[] = {
		{ "Category", "Mesh options" },
		{ "Comment", "/** Whether to also export the skeletal mesh data of the preview mesh */" },
		{ "ModuleRelativePath", "Public/AnimSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Whether to also export the skeletal mesh data of the preview mesh" },
	};
#endif
	void Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bExportPreviewMesh_SetBit(void* Obj)
	{
		((UAnimSequenceExporterUSDOptions*)Obj)->bExportPreviewMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bExportPreviewMesh = { "bExportPreviewMesh", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSequenceExporterUSDOptions), &Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bExportPreviewMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bExportPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bExportPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_PreviewMeshOptions_MetaData[] = {
		{ "Category", "Mesh options" },
		{ "Comment", "/** Export options to use for the preview mesh, if enabled */" },
		{ "EditCondition", "bExportPreviewMesh" },
		{ "ModuleRelativePath", "Public/AnimSequenceExporterUSDOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Export options to use for the preview mesh, if enabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_PreviewMeshOptions = { "PreviewMeshOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceExporterUSDOptions, PreviewMeshOptions), Z_Construct_UScriptStruct_FUsdMeshAssetOptions, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_PreviewMeshOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_PreviewMeshOptions_MetaData)) }; // 1571745038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\n\x09 * This is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files.\n\x09 */" },
		{ "DisplayName", "Re-export Identical Assets" },
		{ "ModuleRelativePath", "Public/AnimSequenceExporterUSDOptions.h" },
		{ "ToolTip", "Whether to export any asset (StaticMesh, Material, etc.) even if the existing file already describes the same version of a compatible asset.\nThis is only checked when bReplaceIdentical is set on the asset export task. Otherwise we'll never overwrite files." },
	};
#endif
	void Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit(void* Obj)
	{
		((UAnimSequenceExporterUSDOptions*)Obj)->bReExportIdenticalAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets = { "bReExportIdenticalAssets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSequenceExporterUSDOptions), &Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_StageOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bExportPreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_PreviewMeshOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::NewProp_bReExportIdenticalAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceExporterUSDOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::ClassParams = {
		&UAnimSequenceExporterUSDOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceExporterUSDOptions()
	{
		if (!Z_Registration_Info_UClass_UAnimSequenceExporterUSDOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequenceExporterUSDOptions.OuterSingleton, Z_Construct_UClass_UAnimSequenceExporterUSDOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSequenceExporterUSDOptions.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<UAnimSequenceExporterUSDOptions>()
	{
		return UAnimSequenceExporterUSDOptions::StaticClass();
	}
	UAnimSequenceExporterUSDOptions::UAnimSequenceExporterUSDOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceExporterUSDOptions);
	UAnimSequenceExporterUSDOptions::~UAnimSequenceExporterUSDOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequenceExporterUSDOptions, UAnimSequenceExporterUSDOptions::StaticClass, TEXT("UAnimSequenceExporterUSDOptions"), &Z_Registration_Info_UClass_UAnimSequenceExporterUSDOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequenceExporterUSDOptions), 2725302455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_540826520(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSDOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
