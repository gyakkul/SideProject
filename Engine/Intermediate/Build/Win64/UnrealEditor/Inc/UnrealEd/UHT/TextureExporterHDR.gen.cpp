// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/TextureExporterHDR.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureExporterHDR() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterGeneric();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterHDR();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterHDR_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterHDR();
	UNREALED_API UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureExporterHDR::StaticRegisterNativesUTextureExporterHDR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureExporterHDR);
	UClass* Z_Construct_UClass_UTextureExporterHDR_NoRegister()
	{
		return UTextureExporterHDR::StaticClass();
	}
	struct Z_Construct_UClass_UTextureExporterHDR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureExporterHDR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureExporterGeneric,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureExporterHDR_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterHDR.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterHDR.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureExporterHDR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureExporterHDR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureExporterHDR_Statics::ClassParams = {
		&UTextureExporterHDR::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureExporterHDR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureExporterHDR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureExporterHDR()
	{
		if (!Z_Registration_Info_UClass_UTextureExporterHDR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureExporterHDR.OuterSingleton, Z_Construct_UClass_UTextureExporterHDR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureExporterHDR.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureExporterHDR>()
	{
		return UTextureExporterHDR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureExporterHDR);
	UTextureExporterHDR::~UTextureExporterHDR() {}
	void UVirtualTextureBuilderExporterHDR::StaticRegisterNativesUVirtualTextureBuilderExporterHDR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureBuilderExporterHDR);
	UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_NoRegister()
	{
		return UVirtualTextureBuilderExporterHDR::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureExporterHDR,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterHDR.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterHDR.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilderExporterHDR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_Statics::ClassParams = {
		&UVirtualTextureBuilderExporterHDR::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterHDR()
	{
		if (!Z_Registration_Info_UClass_UVirtualTextureBuilderExporterHDR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureBuilderExporterHDR.OuterSingleton, Z_Construct_UClass_UVirtualTextureBuilderExporterHDR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualTextureBuilderExporterHDR.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UVirtualTextureBuilderExporterHDR>()
	{
		return UVirtualTextureBuilderExporterHDR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilderExporterHDR);
	UVirtualTextureBuilderExporterHDR::~UVirtualTextureBuilderExporterHDR() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterHDR_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterHDR_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureExporterHDR, UTextureExporterHDR::StaticClass, TEXT("UTextureExporterHDR"), &Z_Registration_Info_UClass_UTextureExporterHDR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureExporterHDR), 3912421084U) },
		{ Z_Construct_UClass_UVirtualTextureBuilderExporterHDR, UVirtualTextureBuilderExporterHDR::StaticClass, TEXT("UVirtualTextureBuilderExporterHDR"), &Z_Registration_Info_UClass_UVirtualTextureBuilderExporterHDR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureBuilderExporterHDR), 3997400169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterHDR_h_2358078067(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterHDR_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterHDR_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
