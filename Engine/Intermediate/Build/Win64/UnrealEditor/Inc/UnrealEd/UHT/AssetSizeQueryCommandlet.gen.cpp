// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/AssetSizeQueryCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetSizeQueryCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UAssetSizeQueryCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UAssetSizeQueryCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAssetSizeQueryCommandlet::StaticRegisterNativesUAssetSizeQueryCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetSizeQueryCommandlet);
	UClass* Z_Construct_UClass_UAssetSizeQueryCommandlet_NoRegister()
	{
		return UAssetSizeQueryCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UAssetSizeQueryCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetSizeQueryCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetSizeQueryCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/AssetSizeQueryCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/AssetSizeQueryCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetSizeQueryCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetSizeQueryCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetSizeQueryCommandlet_Statics::ClassParams = {
		&UAssetSizeQueryCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetSizeQueryCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetSizeQueryCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetSizeQueryCommandlet()
	{
		if (!Z_Registration_Info_UClass_UAssetSizeQueryCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetSizeQueryCommandlet.OuterSingleton, Z_Construct_UClass_UAssetSizeQueryCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetSizeQueryCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAssetSizeQueryCommandlet>()
	{
		return UAssetSizeQueryCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetSizeQueryCommandlet);
	UAssetSizeQueryCommandlet::~UAssetSizeQueryCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetSizeQueryCommandlet, UAssetSizeQueryCommandlet::StaticClass, TEXT("UAssetSizeQueryCommandlet"), &Z_Registration_Info_UClass_UAssetSizeQueryCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetSizeQueryCommandlet), 3531613987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_3255572408(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_AssetSizeQueryCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
