// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperTileSetThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileSetThumbnailRenderer() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperTileSetThumbnailRenderer();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperTileSetThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperTileSetThumbnailRenderer::StaticRegisterNativesUPaperTileSetThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTileSetThumbnailRenderer);
	UClass* Z_Construct_UClass_UPaperTileSetThumbnailRenderer_NoRegister()
	{
		return UPaperTileSetThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTileSetThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTileSetThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileSetThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaperTileSetThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/PaperTileSetThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTileSetThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileSetThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileSetThumbnailRenderer_Statics::ClassParams = {
		&UPaperTileSetThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperTileSetThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileSetThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTileSetThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UPaperTileSetThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTileSetThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UPaperTileSetThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperTileSetThumbnailRenderer.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperTileSetThumbnailRenderer>()
	{
		return UPaperTileSetThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileSetThumbnailRenderer);
	UPaperTileSetThumbnailRenderer::~UPaperTileSetThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileSetThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileSetThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTileSetThumbnailRenderer, UPaperTileSetThumbnailRenderer::StaticClass, TEXT("UPaperTileSetThumbnailRenderer"), &Z_Registration_Info_UClass_UPaperTileSetThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTileSetThumbnailRenderer), 3409867216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileSetThumbnailRenderer_h_3308089063(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileSetThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileSetThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
