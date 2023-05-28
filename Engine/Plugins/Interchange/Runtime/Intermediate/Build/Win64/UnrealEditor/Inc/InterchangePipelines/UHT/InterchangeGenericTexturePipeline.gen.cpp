// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeGenericTexturePipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericTexturePipeline() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	void UInterchangeGenericTexturePipeline::StaticRegisterNativesUInterchangeGenericTexturePipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericTexturePipeline);
	UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister()
	{
		return UInterchangeGenericTexturePipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportTextures_MetaData[];
#endif
		static void NewProp_bImportTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportTextures;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectNormalMapTexture_MetaData[];
#endif
		static void NewProp_bDetectNormalMapTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectNormalMapTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipNormalMapGreenChannel_MetaData[];
#endif
		static void NewProp_bFlipNormalMapGreenChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipNormalMapGreenChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportUDIMs_MetaData[];
#endif
		static void NewProp_bImportUDIMs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportUDIMs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileExtensionsToImportAsLongLatCubemap_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileExtensionsToImportAsLongLatCubemap_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_FileExtensionsToImportAsLongLatCubemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferCompressedSourceData_MetaData[];
#endif
		static void NewProp_bPreferCompressedSourceData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferCompressedSourceData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNonPowerOfTwo_MetaData[];
#endif
		static void NewProp_bAllowNonPowerOfTwo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNonPowerOfTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseNodeContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericTexturePipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** If enabled, imports the texture assets found in the sources. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enabled, imports the texture assets found in the sources." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures_SetBit(void* Obj)
	{
		((UInterchangeGenericTexturePipeline*)Obj)->bImportTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures = { "bImportTextures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** \n\x09 * If enable, after a new import a test will be run to see if the texture is a normal map.\n\x09 * If the texture is a normal map the SRG, CompressionSettings and LODGroup settings will be adjusted.\n\x09 */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enable, after a new import a test will be run to see if the texture is a normal map.\nIf the texture is a normal map the SRG, CompressionSettings and LODGroup settings will be adjusted." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture_SetBit(void* Obj)
	{
		((UInterchangeGenericTexturePipeline*)Obj)->bDetectNormalMapTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture = { "bDetectNormalMapTexture", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** If enabled, the texture's green channel will be inverted for normal maps. */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enabled, the texture's green channel will be inverted for normal maps." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel_SetBit(void* Obj)
	{
		((UInterchangeGenericTexturePipeline*)Obj)->bFlipNormalMapGreenChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel = { "bFlipNormalMapGreenChannel", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** If enabled detect if a texture use a UDIM pattern and if so import it as UIDMs. */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If enabled detect if a texture use a UDIM pattern and if so import it as UIDMs." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs_SetBit(void* Obj)
	{
		((UInterchangeGenericTexturePipeline*)Obj)->bImportUDIMs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs = { "bImportUDIMs", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap_ElementProp = { "FileExtensionsToImportAsLongLatCubemap", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Specify the files type that should be imported as long/lat cubemap */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "Specify the files type that should be imported as long/lat cubemap" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap = { "FileExtensionsToImportAsLongLatCubemap", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericTexturePipeline, FileExtensionsToImportAsLongLatCubemap), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** \n\x09 * If true, tell the translator to provide a compressed source data payload when available.\n\x09 * This will generally result in smaller assets, but some operations like the texture build might be slower because the source data will need to be uncompressed.\n\x09 * If false, it will let the factory or another step in the pipeline decide what to do.\n\x09 * \n\x09 * Compressed source source data is generally store the data as it is in the source file.\n\x09 */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "If true, tell the translator to provide a compressed source data payload when available.\nThis will generally result in smaller assets, but some operations like the texture build might be slower because the source data will need to be uncompressed.\nIf false, it will let the factory or another step in the pipeline decide what to do.\n\nCompressed source source data is generally store the data as it is in the source file." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData_SetBit(void* Obj)
	{
		((UInterchangeGenericTexturePipeline*)Obj)->bPreferCompressedSourceData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData = { "bPreferCompressedSourceData", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Should the textures that have a non-power of two resolution be imported */" },
		{ "EditCondition", "bImportTextures" },
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
		{ "ToolTip", "Should the textures that have a non-power of two resolution be imported" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo_SetBit(void* Obj)
	{
		((UInterchangeGenericTexturePipeline*)Obj)->bAllowNonPowerOfTwo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo = { "bAllowNonPowerOfTwo", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericTexturePipeline), &Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeGenericTexturePipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericTexturePipeline, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_BaseNodeContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportTextures,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bDetectNormalMapTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bFlipNormalMapGreenChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bImportUDIMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_FileExtensionsToImportAsLongLatCubemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bPreferCompressedSourceData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_bAllowNonPowerOfTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::NewProp_BaseNodeContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericTexturePipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::ClassParams = {
		&UInterchangeGenericTexturePipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericTexturePipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericTexturePipeline>()
	{
		return UInterchangeGenericTexturePipeline::StaticClass();
	}
	UInterchangeGenericTexturePipeline::UInterchangeGenericTexturePipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericTexturePipeline);
	UInterchangeGenericTexturePipeline::~UInterchangeGenericTexturePipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericTexturePipeline, UInterchangeGenericTexturePipeline::StaticClass, TEXT("UInterchangeGenericTexturePipeline"), &Z_Registration_Info_UClass_UInterchangeGenericTexturePipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericTexturePipeline), 3259474010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_2188944839(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericTexturePipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
