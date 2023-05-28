// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/TextureExporterDDS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureExporterDDS() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterDDS();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterDDS_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterGeneric();
	UNREALED_API UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterDDS();
	UNREALED_API UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureExporterDDS::StaticRegisterNativesUTextureExporterDDS()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureExporterDDS);
	UClass* Z_Construct_UClass_UTextureExporterDDS_NoRegister()
	{
		return UTextureExporterDDS::StaticClass();
	}
	struct Z_Construct_UClass_UTextureExporterDDS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureExporterDDS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureExporterGeneric,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureExporterDDS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterDDS.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterDDS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureExporterDDS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureExporterDDS>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureExporterDDS_Statics::ClassParams = {
		&UTextureExporterDDS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureExporterDDS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureExporterDDS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureExporterDDS()
	{
		if (!Z_Registration_Info_UClass_UTextureExporterDDS.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureExporterDDS.OuterSingleton, Z_Construct_UClass_UTextureExporterDDS_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureExporterDDS.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureExporterDDS>()
	{
		return UTextureExporterDDS::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureExporterDDS);
	UTextureExporterDDS::~UTextureExporterDDS() {}
	void UVirtualTextureBuilderExporterDDS::StaticRegisterNativesUVirtualTextureBuilderExporterDDS()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureBuilderExporterDDS);
	UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_NoRegister()
	{
		return UVirtualTextureBuilderExporterDDS::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureExporterDDS,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterDDS.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterDDS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilderExporterDDS>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_Statics::ClassParams = {
		&UVirtualTextureBuilderExporterDDS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterDDS()
	{
		if (!Z_Registration_Info_UClass_UVirtualTextureBuilderExporterDDS.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureBuilderExporterDDS.OuterSingleton, Z_Construct_UClass_UVirtualTextureBuilderExporterDDS_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualTextureBuilderExporterDDS.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UVirtualTextureBuilderExporterDDS>()
	{
		return UVirtualTextureBuilderExporterDDS::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilderExporterDDS);
	UVirtualTextureBuilderExporterDDS::~UVirtualTextureBuilderExporterDDS() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterDDS_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterDDS_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureExporterDDS, UTextureExporterDDS::StaticClass, TEXT("UTextureExporterDDS"), &Z_Registration_Info_UClass_UTextureExporterDDS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureExporterDDS), 3755073378U) },
		{ Z_Construct_UClass_UVirtualTextureBuilderExporterDDS, UVirtualTextureBuilderExporterDDS::StaticClass, TEXT("UVirtualTextureBuilderExporterDDS"), &Z_Registration_Info_UClass_UVirtualTextureBuilderExporterDDS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureBuilderExporterDDS), 3127296143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterDDS_h_2341930033(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterDDS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterDDS_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
