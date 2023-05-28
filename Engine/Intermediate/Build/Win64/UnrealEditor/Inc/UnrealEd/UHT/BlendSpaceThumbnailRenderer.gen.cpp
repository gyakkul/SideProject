// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/BlendSpaceThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpaceThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBlendSpaceThumbnailRenderer::StaticRegisterNativesUBlendSpaceThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendSpaceThumbnailRenderer);
	UClass* Z_Construct_UClass_UBlendSpaceThumbnailRenderer_NoRegister()
	{
		return UBlendSpaceThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/BlendSpaceThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/BlendSpaceThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpaceThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics::ClassParams = {
		&UBlendSpaceThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpaceThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UBlendSpaceThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendSpaceThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UBlendSpaceThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlendSpaceThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBlendSpaceThumbnailRenderer>()
	{
		return UBlendSpaceThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpaceThumbnailRenderer);
	UBlendSpaceThumbnailRenderer::~UBlendSpaceThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlendSpaceThumbnailRenderer, UBlendSpaceThumbnailRenderer::StaticClass, TEXT("UBlendSpaceThumbnailRenderer"), &Z_Registration_Info_UClass_UBlendSpaceThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendSpaceThumbnailRenderer), 3214920656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_377715924(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_BlendSpaceThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
