// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/TextureExporterPNG.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureExporterPNG() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterGeneric();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterJPEG();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterJPEG_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterPNG();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterPNG_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterPNG();
	UNREALED_API UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureExporterPNG::StaticRegisterNativesUTextureExporterPNG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureExporterPNG);
	UClass* Z_Construct_UClass_UTextureExporterPNG_NoRegister()
	{
		return UTextureExporterPNG::StaticClass();
	}
	struct Z_Construct_UClass_UTextureExporterPNG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureExporterPNG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureExporterGeneric,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureExporterPNG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterPNG.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterPNG.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureExporterPNG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureExporterPNG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureExporterPNG_Statics::ClassParams = {
		&UTextureExporterPNG::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureExporterPNG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureExporterPNG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureExporterPNG()
	{
		if (!Z_Registration_Info_UClass_UTextureExporterPNG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureExporterPNG.OuterSingleton, Z_Construct_UClass_UTextureExporterPNG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureExporterPNG.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureExporterPNG>()
	{
		return UTextureExporterPNG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureExporterPNG);
	UTextureExporterPNG::~UTextureExporterPNG() {}
	void UVirtualTextureBuilderExporterPNG::StaticRegisterNativesUVirtualTextureBuilderExporterPNG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureBuilderExporterPNG);
	UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_NoRegister()
	{
		return UVirtualTextureBuilderExporterPNG::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureExporterPNG,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterPNG.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterPNG.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilderExporterPNG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_Statics::ClassParams = {
		&UVirtualTextureBuilderExporterPNG::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterPNG()
	{
		if (!Z_Registration_Info_UClass_UVirtualTextureBuilderExporterPNG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureBuilderExporterPNG.OuterSingleton, Z_Construct_UClass_UVirtualTextureBuilderExporterPNG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualTextureBuilderExporterPNG.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UVirtualTextureBuilderExporterPNG>()
	{
		return UVirtualTextureBuilderExporterPNG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilderExporterPNG);
	UVirtualTextureBuilderExporterPNG::~UVirtualTextureBuilderExporterPNG() {}
	void UTextureExporterJPEG::StaticRegisterNativesUTextureExporterJPEG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureExporterJPEG);
	UClass* Z_Construct_UClass_UTextureExporterJPEG_NoRegister()
	{
		return UTextureExporterJPEG::StaticClass();
	}
	struct Z_Construct_UClass_UTextureExporterJPEG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureExporterJPEG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureExporterJPEG_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// JPEG is not UTextureExporterGeneric\n// JPEG exporter writes stored JPEG bits in TextureSource compressed payloads\n" },
		{ "IncludePath", "Exporters/TextureExporterPNG.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterPNG.h" },
		{ "ToolTip", "JPEG is not UTextureExporterGeneric\nJPEG exporter writes stored JPEG bits in TextureSource compressed payloads" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureExporterJPEG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureExporterJPEG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureExporterJPEG_Statics::ClassParams = {
		&UTextureExporterJPEG::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureExporterJPEG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureExporterJPEG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureExporterJPEG()
	{
		if (!Z_Registration_Info_UClass_UTextureExporterJPEG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureExporterJPEG.OuterSingleton, Z_Construct_UClass_UTextureExporterJPEG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureExporterJPEG.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureExporterJPEG>()
	{
		return UTextureExporterJPEG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureExporterJPEG);
	UTextureExporterJPEG::~UTextureExporterJPEG() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterPNG_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterPNG_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureExporterPNG, UTextureExporterPNG::StaticClass, TEXT("UTextureExporterPNG"), &Z_Registration_Info_UClass_UTextureExporterPNG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureExporterPNG), 3930751060U) },
		{ Z_Construct_UClass_UVirtualTextureBuilderExporterPNG, UVirtualTextureBuilderExporterPNG::StaticClass, TEXT("UVirtualTextureBuilderExporterPNG"), &Z_Registration_Info_UClass_UVirtualTextureBuilderExporterPNG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureBuilderExporterPNG), 2314772263U) },
		{ Z_Construct_UClass_UTextureExporterJPEG, UTextureExporterJPEG::StaticClass, TEXT("UTextureExporterJPEG"), &Z_Registration_Info_UClass_UTextureExporterJPEG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureExporterJPEG), 1733517383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterPNG_h_3775452055(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterPNG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterPNG_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
