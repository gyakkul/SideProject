// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/Texture2dArrayThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2dArrayThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTexture2DArrayThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexture2DArrayThumbnailRenderer::StaticRegisterNativesUTexture2DArrayThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture2DArrayThumbnailRenderer);
	UClass* Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_NoRegister()
	{
		return UTexture2DArrayThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/Texture2dArrayThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/Factories/Texture2dArrayThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DArrayThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_Statics::ClassParams = {
		&UTexture2DArrayThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DArrayThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UTexture2DArrayThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture2DArrayThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UTexture2DArrayThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexture2DArrayThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTexture2DArrayThumbnailRenderer>()
	{
		return UTexture2DArrayThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DArrayThumbnailRenderer);
	UTexture2DArrayThumbnailRenderer::~UTexture2DArrayThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dArrayThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dArrayThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2DArrayThumbnailRenderer, UTexture2DArrayThumbnailRenderer::StaticClass, TEXT("UTexture2DArrayThumbnailRenderer"), &Z_Registration_Info_UClass_UTexture2DArrayThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2DArrayThumbnailRenderer), 1016014970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dArrayThumbnailRenderer_h_2719889963(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dArrayThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2dArrayThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
