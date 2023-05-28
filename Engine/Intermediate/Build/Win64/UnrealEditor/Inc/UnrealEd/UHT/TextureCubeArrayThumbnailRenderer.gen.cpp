// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/TextureCubeArrayThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCubeArrayThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureCubeArrayThumbnailRenderer::StaticRegisterNativesUTextureCubeArrayThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureCubeArrayThumbnailRenderer);
	UClass* Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_NoRegister()
	{
		return UTextureCubeArrayThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/TextureCubeArrayThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/Factories/TextureCubeArrayThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCubeArrayThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_Statics::ClassParams = {
		&UTextureCubeArrayThumbnailRenderer::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UTextureCubeArrayThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureCubeArrayThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureCubeArrayThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureCubeArrayThumbnailRenderer>()
	{
		return UTextureCubeArrayThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCubeArrayThumbnailRenderer);
	UTextureCubeArrayThumbnailRenderer::~UTextureCubeArrayThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureCubeArrayThumbnailRenderer, UTextureCubeArrayThumbnailRenderer::StaticClass, TEXT("UTextureCubeArrayThumbnailRenderer"), &Z_Registration_Info_UClass_UTextureCubeArrayThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureCubeArrayThumbnailRenderer), 3629259787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayThumbnailRenderer_h_3511703301(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
