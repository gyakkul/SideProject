// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/MaterialFunctionMaterialLayerBlendFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionMaterialLayerBlendFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialFunctionMaterialLayerBlendFactory::StaticRegisterNativesUMaterialFunctionMaterialLayerBlendFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayerBlendFactory);
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_NoRegister()
	{
		return UMaterialFunctionMaterialLayerBlendFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialFunctionMaterialLayerBlendFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionMaterialLayerBlendFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlendFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerBlendFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendFactory.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlendFactory>()
	{
		return UMaterialFunctionMaterialLayerBlendFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlendFactory);
	UMaterialFunctionMaterialLayerBlendFactory::~UMaterialFunctionMaterialLayerBlendFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerBlendFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerBlendFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendFactory, UMaterialFunctionMaterialLayerBlendFactory::StaticClass, TEXT("UMaterialFunctionMaterialLayerBlendFactory"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayerBlendFactory), 928548312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerBlendFactory_h_3946617215(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerBlendFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionMaterialLayerBlendFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
