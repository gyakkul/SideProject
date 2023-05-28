// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/MaterialFunctionThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialFunctionThumbnailRenderer::StaticRegisterNativesUMaterialFunctionThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionThumbnailRenderer);
	UClass* Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_NoRegister()
	{
		return UMaterialFunctionThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/MaterialFunctionThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/MaterialFunctionThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics::ClassParams = {
		&UMaterialFunctionThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UMaterialFunctionThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionThumbnailRenderer>()
	{
		return UMaterialFunctionThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionThumbnailRenderer);
	UMaterialFunctionThumbnailRenderer::~UMaterialFunctionThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionThumbnailRenderer, UMaterialFunctionThumbnailRenderer::StaticClass, TEXT("UMaterialFunctionThumbnailRenderer"), &Z_Registration_Info_UClass_UMaterialFunctionThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionThumbnailRenderer), 1061584408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_3231873887(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_MaterialFunctionThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
