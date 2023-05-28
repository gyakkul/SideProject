// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/USDStageAssetImportFactory.h"
#include "USDStageImportContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDStageAssetImportFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_USDStageImporter();
	USDSTAGEIMPORTER_API UClass* Z_Construct_UClass_UUsdStageAssetImportFactory();
	USDSTAGEIMPORTER_API UClass* Z_Construct_UClass_UUsdStageAssetImportFactory_NoRegister();
	USDSTAGEIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageImportContext();
// End Cross Module References
	void UUsdStageAssetImportFactory::StaticRegisterNativesUUsdStageAssetImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdStageAssetImportFactory);
	UClass* Z_Construct_UClass_UUsdStageAssetImportFactory_NoRegister()
	{
		return UUsdStageAssetImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UUsdStageAssetImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_USDStageImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory to import USD files that gets called when we hit Import in the Content Browser, as well as during reimport */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "USDStageAssetImportFactory.h" },
		{ "ModuleRelativePath", "Private/USDStageAssetImportFactory.h" },
		{ "ToolTip", "Factory to import USD files that gets called when we hit Import in the Content Browser, as well as during reimport" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::NewProp_ImportContext_MetaData[] = {
		{ "ModuleRelativePath", "Private/USDStageAssetImportFactory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::NewProp_ImportContext = { "ImportContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageAssetImportFactory, ImportContext), Z_Construct_UScriptStruct_FUsdStageImportContext, METADATA_PARAMS(Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::NewProp_ImportContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::NewProp_ImportContext_MetaData)) }; // 3124301057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::NewProp_ImportContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdStageAssetImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::ClassParams = {
		&UUsdStageAssetImportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdStageAssetImportFactory()
	{
		if (!Z_Registration_Info_UClass_UUsdStageAssetImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdStageAssetImportFactory.OuterSingleton, Z_Construct_UClass_UUsdStageAssetImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdStageAssetImportFactory.OuterSingleton;
	}
	template<> USDSTAGEIMPORTER_API UClass* StaticClass<UUsdStageAssetImportFactory>()
	{
		return UUsdStageAssetImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdStageAssetImportFactory);
	UUsdStageAssetImportFactory::~UUsdStageAssetImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdStageAssetImportFactory, UUsdStageAssetImportFactory::StaticClass, TEXT("UUsdStageAssetImportFactory"), &Z_Registration_Info_UClass_UUsdStageAssetImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdStageAssetImportFactory), 2594917609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_253441811(TEXT("/Script/USDStageImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Private_USDStageAssetImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
