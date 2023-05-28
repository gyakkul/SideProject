// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/MaterialInstanceThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialInstanceThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialInstanceThumbnailRenderer::StaticRegisterNativesUMaterialInstanceThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInstanceThumbnailRenderer);
	UClass* Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_NoRegister()
	{
		return UMaterialInstanceThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/MaterialInstanceThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/MaterialInstanceThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_Statics::ClassParams = {
		&UMaterialInstanceThumbnailRenderer::StaticClass,
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
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstanceThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UMaterialInstanceThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInstanceThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UMaterialInstanceThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialInstanceThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialInstanceThumbnailRenderer>()
	{
		return UMaterialInstanceThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceThumbnailRenderer);
	UMaterialInstanceThumbnailRenderer::~UMaterialInstanceThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialInstanceThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialInstanceThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialInstanceThumbnailRenderer, UMaterialInstanceThumbnailRenderer::StaticClass, TEXT("UMaterialInstanceThumbnailRenderer"), &Z_Registration_Info_UClass_UMaterialInstanceThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInstanceThumbnailRenderer), 4161460810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialInstanceThumbnailRenderer_h_3076199985(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialInstanceThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialInstanceThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
