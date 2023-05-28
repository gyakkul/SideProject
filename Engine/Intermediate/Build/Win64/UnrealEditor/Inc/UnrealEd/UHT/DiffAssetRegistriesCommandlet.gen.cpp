// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/DiffAssetRegistriesCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiffAssetRegistriesCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDiffAssetRegistriesCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDiffAssetRegistriesCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDiffAssetRegistriesCommandlet::StaticRegisterNativesUDiffAssetRegistriesCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDiffAssetRegistriesCommandlet);
	UClass* Z_Construct_UClass_UDiffAssetRegistriesCommandlet_NoRegister()
	{
		return UDiffAssetRegistriesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetRegistrySearchPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetRegistrySearchPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetRegistrySearchPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P4Repository_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_P4Repository;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P4EngineBasePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_P4EngineBasePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P4EngineAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_P4EngineAssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P4GameBasePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_P4GameBasePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P4GameAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_P4GameAssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegexBranchCL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegexBranchCL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DiffAssetRegistriesCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_Inner = { "AssetRegistrySearchPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath = { "AssetRegistrySearchPath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDiffAssetRegistriesCommandlet, AssetRegistrySearchPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4Repository_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4Repository = { "P4Repository", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDiffAssetRegistriesCommandlet, P4Repository), METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4Repository_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4Repository_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineBasePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineBasePath = { "P4EngineBasePath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDiffAssetRegistriesCommandlet, P4EngineBasePath), METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineBasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineBasePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineAssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineAssetPath = { "P4EngineAssetPath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDiffAssetRegistriesCommandlet, P4EngineAssetPath), METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineAssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameBasePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameBasePath = { "P4GameBasePath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDiffAssetRegistriesCommandlet, P4GameBasePath), METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameBasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameBasePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameAssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameAssetPath = { "P4GameAssetPath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDiffAssetRegistriesCommandlet, P4GameAssetPath), METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameAssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_RegexBranchCL_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetRegistriesCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_RegexBranchCL = { "RegexBranchCL", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDiffAssetRegistriesCommandlet, RegexBranchCL), METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_RegexBranchCL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_RegexBranchCL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_AssetRegistrySearchPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4Repository,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineBasePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4EngineAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameBasePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_P4GameAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::NewProp_RegexBranchCL,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiffAssetRegistriesCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::ClassParams = {
		&UDiffAssetRegistriesCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiffAssetRegistriesCommandlet()
	{
		if (!Z_Registration_Info_UClass_UDiffAssetRegistriesCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDiffAssetRegistriesCommandlet.OuterSingleton, Z_Construct_UClass_UDiffAssetRegistriesCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDiffAssetRegistriesCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDiffAssetRegistriesCommandlet>()
	{
		return UDiffAssetRegistriesCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiffAssetRegistriesCommandlet);
	UDiffAssetRegistriesCommandlet::~UDiffAssetRegistriesCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDiffAssetRegistriesCommandlet, UDiffAssetRegistriesCommandlet::StaticClass, TEXT("UDiffAssetRegistriesCommandlet"), &Z_Registration_Info_UClass_UDiffAssetRegistriesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDiffAssetRegistriesCommandlet), 3794725284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_1802693986(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetRegistriesCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
