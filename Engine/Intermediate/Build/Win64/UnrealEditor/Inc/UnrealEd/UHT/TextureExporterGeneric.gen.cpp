// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/TextureExporterGeneric.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureExporterGeneric() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterGeneric();
	UNREALED_API UClass* Z_Construct_UClass_UTextureExporterGeneric_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureExporterGeneric::StaticRegisterNativesUTextureExporterGeneric()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureExporterGeneric);
	UClass* Z_Construct_UClass_UTextureExporterGeneric_NoRegister()
	{
		return UTextureExporterGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UTextureExporterGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureExporterGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureExporterGeneric_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextureExporterGeneric.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextureExporterGeneric.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureExporterGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureExporterGeneric>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureExporterGeneric_Statics::ClassParams = {
		&UTextureExporterGeneric::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureExporterGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureExporterGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureExporterGeneric()
	{
		if (!Z_Registration_Info_UClass_UTextureExporterGeneric.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureExporterGeneric.OuterSingleton, Z_Construct_UClass_UTextureExporterGeneric_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureExporterGeneric.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureExporterGeneric>()
	{
		return UTextureExporterGeneric::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureExporterGeneric);
	UTextureExporterGeneric::~UTextureExporterGeneric() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureExporterGeneric, UTextureExporterGeneric::StaticClass, TEXT("UTextureExporterGeneric"), &Z_Registration_Info_UClass_UTextureExporterGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureExporterGeneric), 1364677522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_3356053107(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
