// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/SoundSurroundExporterWAV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSurroundExporterWAV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_USoundSurroundExporterWAV();
	UNREALED_API UClass* Z_Construct_UClass_USoundSurroundExporterWAV_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USoundSurroundExporterWAV::StaticRegisterNativesUSoundSurroundExporterWAV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSurroundExporterWAV);
	UClass* Z_Construct_UClass_USoundSurroundExporterWAV_NoRegister()
	{
		return USoundSurroundExporterWAV::StaticClass();
	}
	struct Z_Construct_UClass_USoundSurroundExporterWAV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSurroundExporterWAV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSurroundExporterWAV_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/SoundSurroundExporterWAV.h" },
		{ "ModuleRelativePath", "Classes/Exporters/SoundSurroundExporterWAV.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSurroundExporterWAV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSurroundExporterWAV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSurroundExporterWAV_Statics::ClassParams = {
		&USoundSurroundExporterWAV::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundSurroundExporterWAV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSurroundExporterWAV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSurroundExporterWAV()
	{
		if (!Z_Registration_Info_UClass_USoundSurroundExporterWAV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSurroundExporterWAV.OuterSingleton, Z_Construct_UClass_USoundSurroundExporterWAV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSurroundExporterWAV.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USoundSurroundExporterWAV>()
	{
		return USoundSurroundExporterWAV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSurroundExporterWAV);
	USoundSurroundExporterWAV::~USoundSurroundExporterWAV() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundSurroundExporterWAV_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundSurroundExporterWAV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSurroundExporterWAV, USoundSurroundExporterWAV::StaticClass, TEXT("USoundSurroundExporterWAV"), &Z_Registration_Info_UClass_USoundSurroundExporterWAV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSurroundExporterWAV), 1140497032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundSurroundExporterWAV_h_1261734652(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundSurroundExporterWAV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundSurroundExporterWAV_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
