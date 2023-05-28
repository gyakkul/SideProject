// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/GenerateAssetManifestCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateAssetManifestCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateAssetManifestCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateAssetManifestCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGenerateAssetManifestCommandlet::StaticRegisterNativesUGenerateAssetManifestCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateAssetManifestCommandlet);
	UClass* Z_Construct_UClass_UGenerateAssetManifestCommandlet_NoRegister()
	{
		return UGenerateAssetManifestCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Commandlet for generating a filtered list of assets from the asset registry (intended use is for replacing assets with cooked version) */" },
		{ "IncludePath", "Commandlets/GenerateAssetManifestCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GenerateAssetManifestCommandlet.h" },
		{ "ToolTip", "Commandlet for generating a filtered list of assets from the asset registry (intended use is for replacing assets with cooked version)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateAssetManifestCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::ClassParams = {
		&UGenerateAssetManifestCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateAssetManifestCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGenerateAssetManifestCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateAssetManifestCommandlet.OuterSingleton, Z_Construct_UClass_UGenerateAssetManifestCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateAssetManifestCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UGenerateAssetManifestCommandlet>()
	{
		return UGenerateAssetManifestCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateAssetManifestCommandlet);
	UGenerateAssetManifestCommandlet::~UGenerateAssetManifestCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateAssetManifestCommandlet, UGenerateAssetManifestCommandlet::StaticClass, TEXT("UGenerateAssetManifestCommandlet"), &Z_Registration_Info_UClass_UGenerateAssetManifestCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateAssetManifestCommandlet), 1757627677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_681561131(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateAssetManifestCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
