// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperSpriteSheetImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteSheetImportFactory() {}
// Cross Module References
	PAPERSPRITESHEETIMPORTER_API UClass* Z_Construct_UClass_UPaperSpriteSheetImportFactory();
	PAPERSPRITESHEETIMPORTER_API UClass* Z_Construct_UClass_UPaperSpriteSheetImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PaperSpriteSheetImporter();
// End Cross Module References
	void UPaperSpriteSheetImportFactory::StaticRegisterNativesUPaperSpriteSheetImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteSheetImportFactory);
	UClass* Z_Construct_UClass_UPaperSpriteSheetImportFactory_NoRegister()
	{
		return UPaperSpriteSheetImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteSheetImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteSheetImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperSpriteSheetImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheetImportFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Imports a sprite sheet (and associated paper sprites and textures) from a JSON file exported from Adobe Flash CS6, Texture Packer, or other compatible tool\n" },
		{ "IncludePath", "PaperSpriteSheetImportFactory.h" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheetImportFactory.h" },
		{ "ToolTip", "Imports a sprite sheet (and associated paper sprites and textures) from a JSON file exported from Adobe Flash CS6, Texture Packer, or other compatible tool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteSheetImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteSheetImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteSheetImportFactory_Statics::ClassParams = {
		&UPaperSpriteSheetImportFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheetImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheetImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteSheetImportFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperSpriteSheetImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteSheetImportFactory.OuterSingleton, Z_Construct_UClass_UPaperSpriteSheetImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperSpriteSheetImportFactory.OuterSingleton;
	}
	template<> PAPERSPRITESHEETIMPORTER_API UClass* StaticClass<UPaperSpriteSheetImportFactory>()
	{
		return UPaperSpriteSheetImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteSheetImportFactory);
	UPaperSpriteSheetImportFactory::~UPaperSpriteSheetImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteSheetImportFactory, UPaperSpriteSheetImportFactory::StaticClass, TEXT("UPaperSpriteSheetImportFactory"), &Z_Registration_Info_UClass_UPaperSpriteSheetImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteSheetImportFactory), 1549735288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetImportFactory_h_2872805424(TEXT("/Script/PaperSpriteSheetImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
