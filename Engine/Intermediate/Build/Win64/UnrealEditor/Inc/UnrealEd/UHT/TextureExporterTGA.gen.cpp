// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/TextureExporterTGA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureExporterTGA() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterTGA();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterTGA_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureExporterTGA::StaticRegisterNativesUTextureExporterTGA()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureExporterTGA);
	UClass* Z_Construct_UClass_UTextureExporterTGA_NoRegister()
	{
		return UTextureExporterTGA::StaticClass();
	}
	struct Z_Construct_UClass_UTextureExporterTGA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureExporterTGA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureExporterTGA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterTGA.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterTGA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureExporterTGA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureExporterTGA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureExporterTGA_Statics::ClassParams = {
		&UTextureExporterTGA::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureExporterTGA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureExporterTGA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureExporterTGA()
	{
		if (!Z_Registration_Info_UClass_UTextureExporterTGA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureExporterTGA.OuterSingleton, Z_Construct_UClass_UTextureExporterTGA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureExporterTGA.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureExporterTGA>()
	{
		return UTextureExporterTGA::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureExporterTGA);
	UTextureExporterTGA::~UTextureExporterTGA() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureExporterTGA, UTextureExporterTGA::StaticClass, TEXT("UTextureExporterTGA"), &Z_Registration_Info_UClass_UTextureExporterTGA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureExporterTGA), 2994781719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_2302048786(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
