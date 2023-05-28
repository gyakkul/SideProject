// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperSpriteThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteThumbnailRenderer() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperSpriteThumbnailRenderer();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperSpriteThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperSpriteThumbnailRenderer::StaticRegisterNativesUPaperSpriteThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteThumbnailRenderer);
	UClass* Z_Construct_UClass_UPaperSpriteThumbnailRenderer_NoRegister()
	{
		return UPaperSpriteThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaperSpriteThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteThumbnailRenderer_Statics::ClassParams = {
		&UPaperSpriteThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UPaperSpriteThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UPaperSpriteThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperSpriteThumbnailRenderer.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperSpriteThumbnailRenderer>()
	{
		return UPaperSpriteThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteThumbnailRenderer);
	UPaperSpriteThumbnailRenderer::~UPaperSpriteThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteThumbnailRenderer, UPaperSpriteThumbnailRenderer::StaticClass, TEXT("UPaperSpriteThumbnailRenderer"), &Z_Registration_Info_UClass_UPaperSpriteThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteThumbnailRenderer), 1346429997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteThumbnailRenderer_h_3724153999(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
