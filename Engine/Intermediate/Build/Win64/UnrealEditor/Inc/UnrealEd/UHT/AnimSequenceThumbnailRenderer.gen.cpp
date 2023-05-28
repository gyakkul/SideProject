// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/AnimSequenceThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAnimSequenceThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UAnimSequenceThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimSequenceThumbnailRenderer::StaticRegisterNativesUAnimSequenceThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequenceThumbnailRenderer);
	UClass* Z_Construct_UClass_UAnimSequenceThumbnailRenderer_NoRegister()
	{
		return UAnimSequenceThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/AnimSequenceThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/AnimSequenceThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics::ClassParams = {
		&UAnimSequenceThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UAnimSequenceThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequenceThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UAnimSequenceThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSequenceThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimSequenceThumbnailRenderer>()
	{
		return UAnimSequenceThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceThumbnailRenderer);
	UAnimSequenceThumbnailRenderer::~UAnimSequenceThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequenceThumbnailRenderer, UAnimSequenceThumbnailRenderer::StaticClass, TEXT("UAnimSequenceThumbnailRenderer"), &Z_Registration_Info_UClass_UAnimSequenceThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequenceThumbnailRenderer), 2039671000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_2379148335(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimSequenceThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
