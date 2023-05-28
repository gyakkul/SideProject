// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/PhysicalMaterialMaskThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialMaskThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPhysicalMaterialMaskThumbnailRenderer::StaticRegisterNativesUPhysicalMaterialMaskThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMaterialMaskThumbnailRenderer);
	UClass* Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_NoRegister()
	{
		return UPhysicalMaterialMaskThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/PhysicalMaterialMaskThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/PhysicalMaterialMaskThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialMaskThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_Statics::ClassParams = {
		&UPhysicalMaterialMaskThumbnailRenderer::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UPhysicalMaterialMaskThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMaterialMaskThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicalMaterialMaskThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPhysicalMaterialMaskThumbnailRenderer>()
	{
		return UPhysicalMaterialMaskThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialMaskThumbnailRenderer);
	UPhysicalMaterialMaskThumbnailRenderer::~UPhysicalMaterialMaskThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicalMaterialMaskThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicalMaterialMaskThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMaterialMaskThumbnailRenderer, UPhysicalMaterialMaskThumbnailRenderer::StaticClass, TEXT("UPhysicalMaterialMaskThumbnailRenderer"), &Z_Registration_Info_UClass_UPhysicalMaterialMaskThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMaterialMaskThumbnailRenderer), 2183580808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicalMaterialMaskThumbnailRenderer_h_1628248609(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicalMaterialMaskThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_PhysicalMaterialMaskThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
