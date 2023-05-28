// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Shared/MediaSourceThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSourceThumbnailRenderer() {}
// Cross Module References
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaSourceThumbnailRenderer();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaSourceThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor();
// End Cross Module References
	void UMediaSourceThumbnailRenderer::StaticRegisterNativesUMediaSourceThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaSourceThumbnailRenderer);
	UClass* Z_Construct_UClass_UMediaSourceThumbnailRenderer_NoRegister()
	{
		return UMediaSourceThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Renders thumbnails for media sources.\n */" },
		{ "IncludePath", "Shared/MediaSourceThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Shared/MediaSourceThumbnailRenderer.h" },
		{ "ToolTip", "Renders thumbnails for media sources." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSourceThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics::ClassParams = {
		&UMediaSourceThumbnailRenderer::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaSourceThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UMediaSourceThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaSourceThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UMediaSourceThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaSourceThumbnailRenderer.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<UMediaSourceThumbnailRenderer>()
	{
		return UMediaSourceThumbnailRenderer::StaticClass();
	}
	UMediaSourceThumbnailRenderer::UMediaSourceThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSourceThumbnailRenderer);
	UMediaSourceThumbnailRenderer::~UMediaSourceThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaSourceThumbnailRenderer, UMediaSourceThumbnailRenderer::StaticClass, TEXT("UMediaSourceThumbnailRenderer"), &Z_Registration_Info_UClass_UMediaSourceThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaSourceThumbnailRenderer), 3204669211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_2479448540(TEXT("/Script/MediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
