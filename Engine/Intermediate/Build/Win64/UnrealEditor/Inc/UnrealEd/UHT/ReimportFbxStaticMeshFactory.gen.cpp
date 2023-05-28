// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/ReimportFbxStaticMeshFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportFbxStaticMeshFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxStaticMeshFactory();
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxStaticMeshFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReimportFbxStaticMeshFactory::StaticRegisterNativesUReimportFbxStaticMeshFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportFbxStaticMeshFactory);
	UClass* Z_Construct_UClass_UReimportFbxStaticMeshFactory_NoRegister()
	{
		return UReimportFbxStaticMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ReimportFbxStaticMeshFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportFbxStaticMeshFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportFbxStaticMeshFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::ClassParams = {
		&UReimportFbxStaticMeshFactory::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportFbxStaticMeshFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportFbxStaticMeshFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportFbxStaticMeshFactory.OuterSingleton, Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportFbxStaticMeshFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UReimportFbxStaticMeshFactory>()
	{
		return UReimportFbxStaticMeshFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportFbxStaticMeshFactory);
	UReimportFbxStaticMeshFactory::~UReimportFbxStaticMeshFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportFbxStaticMeshFactory, UReimportFbxStaticMeshFactory::StaticClass, TEXT("UReimportFbxStaticMeshFactory"), &Z_Registration_Info_UClass_UReimportFbxStaticMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportFbxStaticMeshFactory), 3470805769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_1725318645(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxStaticMeshFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
