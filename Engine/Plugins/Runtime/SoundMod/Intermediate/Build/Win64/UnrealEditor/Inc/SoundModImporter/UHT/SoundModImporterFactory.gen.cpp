// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundModImporterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModImporterFactory() {}
// Cross Module References
	SOUNDMODIMPORTER_API UClass* Z_Construct_UClass_USoundModImporterFactory();
	SOUNDMODIMPORTER_API UClass* Z_Construct_UClass_USoundModImporterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SoundModImporter();
// End Cross Module References
	void USoundModImporterFactory::StaticRegisterNativesUSoundModImporterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModImporterFactory);
	UClass* Z_Construct_UClass_USoundModImporterFactory_NoRegister()
	{
		return USoundModImporterFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundModImporterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModImporterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundModImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModImporterFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Imports a sound module file\n" },
		{ "IncludePath", "SoundModImporterFactory.h" },
		{ "ModuleRelativePath", "Classes/SoundModImporterFactory.h" },
		{ "ToolTip", "Imports a sound module file" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModImporterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModImporterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModImporterFactory_Statics::ClassParams = {
		&USoundModImporterFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundModImporterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModImporterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModImporterFactory()
	{
		if (!Z_Registration_Info_UClass_USoundModImporterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModImporterFactory.OuterSingleton, Z_Construct_UClass_USoundModImporterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModImporterFactory.OuterSingleton;
	}
	template<> SOUNDMODIMPORTER_API UClass* StaticClass<USoundModImporterFactory>()
	{
		return USoundModImporterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModImporterFactory);
	USoundModImporterFactory::~USoundModImporterFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModImporterFactory, USoundModImporterFactory::StaticClass, TEXT("USoundModImporterFactory"), &Z_Registration_Info_UClass_USoundModImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModImporterFactory), 3248695957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_1662659933(TEXT("/Script/SoundModImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundModImporter_Classes_SoundModImporterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
