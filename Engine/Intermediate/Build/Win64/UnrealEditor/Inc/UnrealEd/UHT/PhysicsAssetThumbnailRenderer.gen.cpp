// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/PhysicsAssetThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPhysicsAssetThumbnailRenderer::StaticRegisterNativesUPhysicsAssetThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetThumbnailRenderer);
	UClass* Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_NoRegister()
	{
		return UPhysicsAssetThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/PhysicsAssetThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/PhysicsAssetThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_Statics::ClassParams = {
		&UPhysicsAssetThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UPhysicsAssetThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPhysicsAssetThumbnailRenderer>()
	{
		return UPhysicsAssetThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetThumbnailRenderer);
	UPhysicsAssetThumbnailRenderer::~UPhysicsAssetThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicsAssetThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicsAssetThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetThumbnailRenderer, UPhysicsAssetThumbnailRenderer::StaticClass, TEXT("UPhysicsAssetThumbnailRenderer"), &Z_Registration_Info_UClass_UPhysicsAssetThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetThumbnailRenderer), 2769984033U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicsAssetThumbnailRenderer_h_3182803924(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicsAssetThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicsAssetThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
