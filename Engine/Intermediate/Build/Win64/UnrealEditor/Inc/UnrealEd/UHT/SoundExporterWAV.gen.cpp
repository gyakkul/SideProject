// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/SoundExporterWAV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundExporterWAV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_USoundExporterWAV();
	UNREALED_API UClass* Z_Construct_UClass_USoundExporterWAV_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USoundExporterWAV::StaticRegisterNativesUSoundExporterWAV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundExporterWAV);
	UClass* Z_Construct_UClass_USoundExporterWAV_NoRegister()
	{
		return USoundExporterWAV::StaticClass();
	}
	struct Z_Construct_UClass_USoundExporterWAV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundExporterWAV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundExporterWAV_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/SoundExporterWAV.h" },
		{ "ModuleRelativePath", "Classes/Exporters/SoundExporterWAV.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundExporterWAV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundExporterWAV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundExporterWAV_Statics::ClassParams = {
		&USoundExporterWAV::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundExporterWAV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundExporterWAV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundExporterWAV()
	{
		if (!Z_Registration_Info_UClass_USoundExporterWAV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundExporterWAV.OuterSingleton, Z_Construct_UClass_USoundExporterWAV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundExporterWAV.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USoundExporterWAV>()
	{
		return USoundExporterWAV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundExporterWAV);
	USoundExporterWAV::~USoundExporterWAV() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundExporterWAV, USoundExporterWAV::StaticClass, TEXT("USoundExporterWAV"), &Z_Registration_Info_UClass_USoundExporterWAV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundExporterWAV), 2064624653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_3183529463(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
