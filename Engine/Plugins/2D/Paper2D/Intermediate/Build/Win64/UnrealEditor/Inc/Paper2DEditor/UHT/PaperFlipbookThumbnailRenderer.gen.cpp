// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperFlipbookThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperFlipbookThumbnailRenderer() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperFlipbookThumbnailRenderer();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_NoRegister();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperSpriteThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperFlipbookThumbnailRenderer::StaticRegisterNativesUPaperFlipbookThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperFlipbookThumbnailRenderer);
	UClass* Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_NoRegister()
	{
		return UPaperFlipbookThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPaperSpriteThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaperFlipbookThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperFlipbookThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_Statics::ClassParams = {
		&UPaperFlipbookThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperFlipbookThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UPaperFlipbookThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperFlipbookThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UPaperFlipbookThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperFlipbookThumbnailRenderer.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperFlipbookThumbnailRenderer>()
	{
		return UPaperFlipbookThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperFlipbookThumbnailRenderer);
	UPaperFlipbookThumbnailRenderer::~UPaperFlipbookThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperFlipbookThumbnailRenderer, UPaperFlipbookThumbnailRenderer::StaticClass, TEXT("UPaperFlipbookThumbnailRenderer"), &Z_Registration_Info_UClass_UPaperFlipbookThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperFlipbookThumbnailRenderer), 1606943957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookThumbnailRenderer_h_653312522(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
