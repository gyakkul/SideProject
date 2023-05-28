// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SparseVolumeTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSparseVolumeTextureFactory() {}
// Cross Module References
	SPARSEVOLUMETEXTURE_API UClass* Z_Construct_UClass_USparseVolumeTextureFactory();
	SPARSEVOLUMETEXTURE_API UClass* Z_Construct_UClass_USparseVolumeTextureFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SparseVolumeTexture();
// End Cross Module References
	void USparseVolumeTextureFactory::StaticRegisterNativesUSparseVolumeTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USparseVolumeTextureFactory);
	UClass* Z_Construct_UClass_USparseVolumeTextureFactory_NoRegister()
	{
		return USparseVolumeTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_USparseVolumeTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USparseVolumeTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SparseVolumeTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USparseVolumeTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Responsible for creating and importing Sparse Volume Texture objects\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SparseVolumeTextureFactory.h" },
		{ "ModuleRelativePath", "Private/SparseVolumeTextureFactory.h" },
		{ "ToolTip", "Responsible for creating and importing Sparse Volume Texture objects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USparseVolumeTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USparseVolumeTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USparseVolumeTextureFactory_Statics::ClassParams = {
		&USparseVolumeTextureFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USparseVolumeTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USparseVolumeTextureFactory()
	{
		if (!Z_Registration_Info_UClass_USparseVolumeTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USparseVolumeTextureFactory.OuterSingleton, Z_Construct_UClass_USparseVolumeTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USparseVolumeTextureFactory.OuterSingleton;
	}
	template<> SPARSEVOLUMETEXTURE_API UClass* StaticClass<USparseVolumeTextureFactory>()
	{
		return USparseVolumeTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USparseVolumeTextureFactory);
	USparseVolumeTextureFactory::~USparseVolumeTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SparseVolumeTexture_Private_SparseVolumeTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SparseVolumeTexture_Private_SparseVolumeTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USparseVolumeTextureFactory, USparseVolumeTextureFactory::StaticClass, TEXT("USparseVolumeTextureFactory"), &Z_Registration_Info_UClass_USparseVolumeTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USparseVolumeTextureFactory), 2178872297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SparseVolumeTexture_Private_SparseVolumeTextureFactory_h_680071913(TEXT("/Script/SparseVolumeTexture"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SparseVolumeTexture_Private_SparseVolumeTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SparseVolumeTexture_Private_SparseVolumeTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
