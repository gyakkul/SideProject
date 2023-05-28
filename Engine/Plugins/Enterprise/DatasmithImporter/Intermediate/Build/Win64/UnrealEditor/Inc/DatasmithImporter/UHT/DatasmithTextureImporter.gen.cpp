// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithTextureImporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithTextureImporter() {}
// Cross Module References
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithTexturePipeline();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithTexturePipeline_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	void UDatasmithTexturePipeline::StaticRegisterNativesUDatasmithTexturePipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithTexturePipeline);
	UClass* Z_Construct_UClass_UDatasmithTexturePipeline_NoRegister()
	{
		return UDatasmithTexturePipeline::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithTexturePipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithTexturePipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithTexturePipeline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithTextureImporter.h" },
		{ "ModuleRelativePath", "Public/DatasmithTextureImporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithTexturePipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithTexturePipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithTexturePipeline_Statics::ClassParams = {
		&UDatasmithTexturePipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithTexturePipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithTexturePipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithTexturePipeline()
	{
		if (!Z_Registration_Info_UClass_UDatasmithTexturePipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithTexturePipeline.OuterSingleton, Z_Construct_UClass_UDatasmithTexturePipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithTexturePipeline.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithTexturePipeline>()
	{
		return UDatasmithTexturePipeline::StaticClass();
	}
	UDatasmithTexturePipeline::UDatasmithTexturePipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithTexturePipeline);
	UDatasmithTexturePipeline::~UDatasmithTexturePipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithTexturePipeline, UDatasmithTexturePipeline::StaticClass, TEXT("UDatasmithTexturePipeline"), &Z_Registration_Info_UClass_UDatasmithTexturePipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithTexturePipeline), 3007133113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_2383296725(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithTextureImporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
