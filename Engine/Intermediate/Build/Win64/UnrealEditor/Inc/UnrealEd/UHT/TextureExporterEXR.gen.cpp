// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/TextureExporterEXR.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureExporterEXR() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterEXR();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterEXR_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterGeneric();
	UNREALED_API UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterEXR();
	UNREALED_API UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureExporterEXR::StaticRegisterNativesUTextureExporterEXR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureExporterEXR);
	UClass* Z_Construct_UClass_UTextureExporterEXR_NoRegister()
	{
		return UTextureExporterEXR::StaticClass();
	}
	struct Z_Construct_UClass_UTextureExporterEXR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureExporterEXR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureExporterGeneric,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureExporterEXR_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterEXR.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterEXR.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureExporterEXR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureExporterEXR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureExporterEXR_Statics::ClassParams = {
		&UTextureExporterEXR::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureExporterEXR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureExporterEXR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureExporterEXR()
	{
		if (!Z_Registration_Info_UClass_UTextureExporterEXR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureExporterEXR.OuterSingleton, Z_Construct_UClass_UTextureExporterEXR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureExporterEXR.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureExporterEXR>()
	{
		return UTextureExporterEXR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureExporterEXR);
	UTextureExporterEXR::~UTextureExporterEXR() {}
	void UVirtualTextureBuilderExporterEXR::StaticRegisterNativesUVirtualTextureBuilderExporterEXR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureBuilderExporterEXR);
	UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_NoRegister()
	{
		return UVirtualTextureBuilderExporterEXR::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureExporterEXR,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterEXR.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterEXR.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilderExporterEXR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_Statics::ClassParams = {
		&UVirtualTextureBuilderExporterEXR::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTextureBuilderExporterEXR()
	{
		if (!Z_Registration_Info_UClass_UVirtualTextureBuilderExporterEXR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureBuilderExporterEXR.OuterSingleton, Z_Construct_UClass_UVirtualTextureBuilderExporterEXR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualTextureBuilderExporterEXR.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UVirtualTextureBuilderExporterEXR>()
	{
		return UVirtualTextureBuilderExporterEXR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilderExporterEXR);
	UVirtualTextureBuilderExporterEXR::~UVirtualTextureBuilderExporterEXR() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterEXR_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterEXR_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureExporterEXR, UTextureExporterEXR::StaticClass, TEXT("UTextureExporterEXR"), &Z_Registration_Info_UClass_UTextureExporterEXR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureExporterEXR), 3349221654U) },
		{ Z_Construct_UClass_UVirtualTextureBuilderExporterEXR, UVirtualTextureBuilderExporterEXR::StaticClass, TEXT("UVirtualTextureBuilderExporterEXR"), &Z_Registration_Info_UClass_UVirtualTextureBuilderExporterEXR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureBuilderExporterEXR), 3563773631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterEXR_h_1654044349(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterEXR_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterEXR_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
