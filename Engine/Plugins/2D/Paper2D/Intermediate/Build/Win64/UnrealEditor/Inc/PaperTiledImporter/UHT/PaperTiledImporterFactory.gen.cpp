// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperTiledImporterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTiledImporterFactory() {}
// Cross Module References
	PAPERTILEDIMPORTER_API UClass* Z_Construct_UClass_UPaperTiledImporterFactory();
	PAPERTILEDIMPORTER_API UClass* Z_Construct_UClass_UPaperTiledImporterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PaperTiledImporter();
// End Cross Module References
	void UPaperTiledImporterFactory::StaticRegisterNativesUPaperTiledImporterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTiledImporterFactory);
	UClass* Z_Construct_UClass_UPaperTiledImporterFactory_NoRegister()
	{
		return UPaperTiledImporterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTiledImporterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTiledImporterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperTiledImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTiledImporterFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Imports a tile map (and associated textures & tile sets) exported from Tiled (http://www.mapeditor.org/)\n" },
		{ "IncludePath", "PaperTiledImporterFactory.h" },
		{ "ModuleRelativePath", "Classes/PaperTiledImporterFactory.h" },
		{ "ToolTip", "Imports a tile map (and associated textures & tile sets) exported from Tiled (http:www.mapeditor.org/)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTiledImporterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTiledImporterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTiledImporterFactory_Statics::ClassParams = {
		&UPaperTiledImporterFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTiledImporterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTiledImporterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTiledImporterFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperTiledImporterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTiledImporterFactory.OuterSingleton, Z_Construct_UClass_UPaperTiledImporterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperTiledImporterFactory.OuterSingleton;
	}
	template<> PAPERTILEDIMPORTER_API UClass* StaticClass<UPaperTiledImporterFactory>()
	{
		return UPaperTiledImporterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTiledImporterFactory);
	UPaperTiledImporterFactory::~UPaperTiledImporterFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTiledImporterFactory, UPaperTiledImporterFactory::StaticClass, TEXT("UPaperTiledImporterFactory"), &Z_Registration_Info_UClass_UPaperTiledImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTiledImporterFactory), 3661990342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_3568755222(TEXT("/Script/PaperTiledImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperTiledImporter_Classes_PaperTiledImporterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
