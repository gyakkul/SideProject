// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/Asset/FleshAssetThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFleshAssetThumbnailRenderer() {}
// Cross Module References
	CHAOSFLESHEDITOR_API UClass* Z_Construct_UClass_UFleshAssetThumbnailRenderer();
	CHAOSFLESHEDITOR_API UClass* Z_Construct_UClass_UFleshAssetThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEditor();
// End Cross Module References
	void UFleshAssetThumbnailRenderer::StaticRegisterNativesUFleshAssetThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFleshAssetThumbnailRenderer);
	UClass* Z_Construct_UClass_UFleshAssetThumbnailRenderer_NoRegister()
	{
		return UFleshAssetThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UFleshAssetThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFleshAssetThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAssetThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosFlesh/Asset/FleshAssetThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/Asset/FleshAssetThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFleshAssetThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFleshAssetThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFleshAssetThumbnailRenderer_Statics::ClassParams = {
		&UFleshAssetThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFleshAssetThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAssetThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFleshAssetThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UFleshAssetThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFleshAssetThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UFleshAssetThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFleshAssetThumbnailRenderer.OuterSingleton;
	}
	template<> CHAOSFLESHEDITOR_API UClass* StaticClass<UFleshAssetThumbnailRenderer>()
	{
		return UFleshAssetThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFleshAssetThumbnailRenderer);
	UFleshAssetThumbnailRenderer::~UFleshAssetThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFleshAssetThumbnailRenderer, UFleshAssetThumbnailRenderer::StaticClass, TEXT("UFleshAssetThumbnailRenderer"), &Z_Registration_Info_UClass_UFleshAssetThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFleshAssetThumbnailRenderer), 2883012122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetThumbnailRenderer_h_1062556615(TEXT("/Script/ChaosFleshEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEditor_Public_ChaosFlesh_Asset_FleshAssetThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
