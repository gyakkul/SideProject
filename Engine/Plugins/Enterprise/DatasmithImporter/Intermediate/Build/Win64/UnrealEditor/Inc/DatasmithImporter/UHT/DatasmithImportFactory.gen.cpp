// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithImportFactory() {}
// Cross Module References
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithImportFactory();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USceneImportFactory();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	void UDatasmithImportFactory::StaticRegisterNativesUDatasmithImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithImportFactory);
	UClass* Z_Construct_UClass_UDatasmithImportFactory_NoRegister()
	{
		return UDatasmithImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithImportFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ns DatasmithImportFactoryImpl\n" },
		{ "IncludePath", "DatasmithImportFactory.h" },
		{ "ModuleRelativePath", "Public/DatasmithImportFactory.h" },
		{ "ToolTip", "ns DatasmithImportFactoryImpl" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithImportFactory_Statics::ClassParams = {
		&UDatasmithImportFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithImportFactory()
	{
		if (!Z_Registration_Info_UClass_UDatasmithImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithImportFactory.OuterSingleton, Z_Construct_UClass_UDatasmithImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithImportFactory.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithImportFactory>()
	{
		return UDatasmithImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithImportFactory);
	UDatasmithImportFactory::~UDatasmithImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithImportFactory, UDatasmithImportFactory::StaticClass, TEXT("UDatasmithImportFactory"), &Z_Registration_Info_UClass_UDatasmithImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithImportFactory), 3094834569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_153377268(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
