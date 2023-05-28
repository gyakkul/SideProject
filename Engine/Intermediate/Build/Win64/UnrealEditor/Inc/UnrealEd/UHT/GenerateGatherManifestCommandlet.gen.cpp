// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/GenerateGatherManifestCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateGatherManifestCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateGatherManifestCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateGatherManifestCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGenerateGatherManifestCommandlet::StaticRegisterNativesUGenerateGatherManifestCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateGatherManifestCommandlet);
	UClass* Z_Construct_UClass_UGenerateGatherManifestCommandlet_NoRegister()
	{
		return UGenerateGatherManifestCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UGenerateGatherManifestCommandlet: Generates a localisation manifest; generally used as a gather step.\n */" },
		{ "IncludePath", "Commandlets/GenerateGatherManifestCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GenerateGatherManifestCommandlet.h" },
		{ "ToolTip", "UGenerateGatherManifestCommandlet: Generates a localisation manifest; generally used as a gather step." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateGatherManifestCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::ClassParams = {
		&UGenerateGatherManifestCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateGatherManifestCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGenerateGatherManifestCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateGatherManifestCommandlet.OuterSingleton, Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateGatherManifestCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UGenerateGatherManifestCommandlet>()
	{
		return UGenerateGatherManifestCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateGatherManifestCommandlet);
	UGenerateGatherManifestCommandlet::~UGenerateGatherManifestCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateGatherManifestCommandlet, UGenerateGatherManifestCommandlet::StaticClass, TEXT("UGenerateGatherManifestCommandlet"), &Z_Registration_Info_UClass_UGenerateGatherManifestCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateGatherManifestCommandlet), 2309561279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_1910959091(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
