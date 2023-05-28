// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/SlateBrushThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBrushThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_USlateBrushThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_USlateBrushThumbnailRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USlateBrushThumbnailRenderer::StaticRegisterNativesUSlateBrushThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateBrushThumbnailRenderer);
	UClass* Z_Construct_UClass_USlateBrushThumbnailRenderer_NoRegister()
	{
		return USlateBrushThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/SlateBrushThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SlateBrushThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateBrushThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics::ClassParams = {
		&USlateBrushThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateBrushThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_USlateBrushThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateBrushThumbnailRenderer.OuterSingleton, Z_Construct_UClass_USlateBrushThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateBrushThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USlateBrushThumbnailRenderer>()
	{
		return USlateBrushThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateBrushThumbnailRenderer);
	USlateBrushThumbnailRenderer::~USlateBrushThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateBrushThumbnailRenderer, USlateBrushThumbnailRenderer::StaticClass, TEXT("USlateBrushThumbnailRenderer"), &Z_Registration_Info_UClass_USlateBrushThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateBrushThumbnailRenderer), 257231518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_2561549075(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SlateBrushThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
