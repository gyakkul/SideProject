// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/StaticMeshThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UStaticMeshThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UStaticMeshThumbnailRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UStaticMeshThumbnailRenderer::StaticRegisterNativesUStaticMeshThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshThumbnailRenderer);
	UClass* Z_Construct_UClass_UStaticMeshThumbnailRenderer_NoRegister()
	{
		return UStaticMeshThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/StaticMeshThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/StaticMeshThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics::ClassParams = {
		&UStaticMeshThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UStaticMeshThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UStaticMeshThumbnailRenderer>()
	{
		return UStaticMeshThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshThumbnailRenderer);
	UStaticMeshThumbnailRenderer::~UStaticMeshThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshThumbnailRenderer, UStaticMeshThumbnailRenderer::StaticClass, TEXT("UStaticMeshThumbnailRenderer"), &Z_Registration_Info_UClass_UStaticMeshThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshThumbnailRenderer), 308361236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_438118724(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_StaticMeshThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
