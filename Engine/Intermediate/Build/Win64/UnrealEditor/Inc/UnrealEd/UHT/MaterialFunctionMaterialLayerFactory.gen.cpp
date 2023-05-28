// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/MaterialFunctionMaterialLayerFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionMaterialLayerFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialFunctionMaterialLayerFactory::StaticRegisterNativesUMaterialFunctionMaterialLayerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayerFactory);
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_NoRegister()
	{
		return UMaterialFunctionMaterialLayerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialFunctionMaterialLayerFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionMaterialLayerFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerFactory.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionMaterialLayerFactory>()
	{
		return UMaterialFunctionMaterialLayerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerFactory);
	UMaterialFunctionMaterialLayerFactory::~UMaterialFunctionMaterialLayerFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayerFactory, UMaterialFunctionMaterialLayerFactory::StaticClass, TEXT("UMaterialFunctionMaterialLayerFactory"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayerFactory), 1819132483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerFactory_h_3200038968(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
