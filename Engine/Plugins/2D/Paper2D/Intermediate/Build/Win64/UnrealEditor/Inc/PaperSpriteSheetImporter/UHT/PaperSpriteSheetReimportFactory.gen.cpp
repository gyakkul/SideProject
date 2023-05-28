// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperSpriteSheetReimportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteSheetReimportFactory() {}
// Cross Module References
	PAPERSPRITESHEETIMPORTER_API UClass* Z_Construct_UClass_UPaperSpriteSheetImportFactory();
	PAPERSPRITESHEETIMPORTER_API UClass* Z_Construct_UClass_UPaperSpriteSheetReimportFactory();
	PAPERSPRITESHEETIMPORTER_API UClass* Z_Construct_UClass_UPaperSpriteSheetReimportFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PaperSpriteSheetImporter();
// End Cross Module References
	void UPaperSpriteSheetReimportFactory::StaticRegisterNativesUPaperSpriteSheetReimportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteSheetReimportFactory);
	UClass* Z_Construct_UClass_UPaperSpriteSheetReimportFactory_NoRegister()
	{
		return UPaperSpriteSheetReimportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteSheetReimportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteSheetReimportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperSpriteSheetImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperSpriteSheetImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteSheetReimportFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Reimports a UPaperSpriteSheet asset\n" },
		{ "IncludePath", "PaperSpriteSheetReimportFactory.h" },
		{ "ModuleRelativePath", "Private/PaperSpriteSheetReimportFactory.h" },
		{ "ToolTip", "Reimports a UPaperSpriteSheet asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteSheetReimportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteSheetReimportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteSheetReimportFactory_Statics::ClassParams = {
		&UPaperSpriteSheetReimportFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteSheetReimportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteSheetReimportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteSheetReimportFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperSpriteSheetReimportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteSheetReimportFactory.OuterSingleton, Z_Construct_UClass_UPaperSpriteSheetReimportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperSpriteSheetReimportFactory.OuterSingleton;
	}
	template<> PAPERSPRITESHEETIMPORTER_API UClass* StaticClass<UPaperSpriteSheetReimportFactory>()
	{
		return UPaperSpriteSheetReimportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteSheetReimportFactory);
	UPaperSpriteSheetReimportFactory::~UPaperSpriteSheetReimportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetReimportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetReimportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteSheetReimportFactory, UPaperSpriteSheetReimportFactory::StaticClass, TEXT("UPaperSpriteSheetReimportFactory"), &Z_Registration_Info_UClass_UPaperSpriteSheetReimportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteSheetReimportFactory), 1963672299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetReimportFactory_h_2838585443(TEXT("/Script/PaperSpriteSheetImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetReimportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheetReimportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
