// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkFaceImporterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkFaceImporterFactory() {}
// Cross Module References
	LIVELINKFACEIMPORTER_API UClass* Z_Construct_UClass_ULiveLinkFaceImporterFactory();
	LIVELINKFACEIMPORTER_API UClass* Z_Construct_UClass_ULiveLinkFaceImporterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_LiveLinkFaceImporter();
// End Cross Module References
	void ULiveLinkFaceImporterFactory::StaticRegisterNativesULiveLinkFaceImporterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkFaceImporterFactory);
	UClass* Z_Construct_UClass_ULiveLinkFaceImporterFactory_NoRegister()
	{
		return ULiveLinkFaceImporterFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkFaceImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Imports a CSV file created by the Live Link Face iOS app when recordin facial animation.\n" },
		{ "IncludePath", "LiveLinkFaceImporterFactory.h" },
		{ "ModuleRelativePath", "Private/LiveLinkFaceImporterFactory.h" },
		{ "ToolTip", "Imports a CSV file created by the Live Link Face iOS app when recordin facial animation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkFaceImporterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics::ClassParams = {
		&ULiveLinkFaceImporterFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkFaceImporterFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkFaceImporterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkFaceImporterFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkFaceImporterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkFaceImporterFactory.OuterSingleton;
	}
	template<> LIVELINKFACEIMPORTER_API UClass* StaticClass<ULiveLinkFaceImporterFactory>()
	{
		return ULiveLinkFaceImporterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkFaceImporterFactory);
	ULiveLinkFaceImporterFactory::~ULiveLinkFaceImporterFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkFaceImporterFactory, ULiveLinkFaceImporterFactory::StaticClass, TEXT("ULiveLinkFaceImporterFactory"), &Z_Registration_Info_UClass_ULiveLinkFaceImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkFaceImporterFactory), 539125468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_2572007089(TEXT("/Script/LiveLinkFaceImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkFaceImporter_Source_LiveLinkFaceImporter_Private_LiveLinkFaceImporterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
