// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/SoundExporterOGG.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundExporterOGG() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_USoundExporterOGG();
	UNREALED_API UClass* Z_Construct_UClass_USoundExporterOGG_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USoundExporterOGG::StaticRegisterNativesUSoundExporterOGG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundExporterOGG);
	UClass* Z_Construct_UClass_USoundExporterOGG_NoRegister()
	{
		return USoundExporterOGG::StaticClass();
	}
	struct Z_Construct_UClass_USoundExporterOGG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundExporterOGG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundExporterOGG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/SoundExporterOGG.h" },
		{ "ModuleRelativePath", "Classes/Exporters/SoundExporterOGG.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundExporterOGG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundExporterOGG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundExporterOGG_Statics::ClassParams = {
		&USoundExporterOGG::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USoundExporterOGG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundExporterOGG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundExporterOGG()
	{
		if (!Z_Registration_Info_UClass_USoundExporterOGG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundExporterOGG.OuterSingleton, Z_Construct_UClass_USoundExporterOGG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundExporterOGG.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USoundExporterOGG>()
	{
		return USoundExporterOGG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundExporterOGG);
	USoundExporterOGG::~USoundExporterOGG() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterOGG_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterOGG_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundExporterOGG, USoundExporterOGG::StaticClass, TEXT("USoundExporterOGG"), &Z_Registration_Info_UClass_USoundExporterOGG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundExporterOGG), 2316990520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterOGG_h_285733130(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterOGG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterOGG_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
