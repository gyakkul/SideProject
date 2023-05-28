// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/SkeletalMeshThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USkeletalMeshThumbnailRenderer::StaticRegisterNativesUSkeletalMeshThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshThumbnailRenderer);
	UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister()
	{
		return USkeletalMeshThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/SkeletalMeshThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SkeletalMeshThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::ClassParams = {
		&USkeletalMeshThumbnailRenderer::StaticClass,
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
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshThumbnailRenderer.OuterSingleton, Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USkeletalMeshThumbnailRenderer>()
	{
		return USkeletalMeshThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshThumbnailRenderer);
	USkeletalMeshThumbnailRenderer::~USkeletalMeshThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshThumbnailRenderer, USkeletalMeshThumbnailRenderer::StaticClass, TEXT("USkeletalMeshThumbnailRenderer"), &Z_Registration_Info_UClass_USkeletalMeshThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshThumbnailRenderer), 3669846891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_1243356573(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_SkeletalMeshThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
