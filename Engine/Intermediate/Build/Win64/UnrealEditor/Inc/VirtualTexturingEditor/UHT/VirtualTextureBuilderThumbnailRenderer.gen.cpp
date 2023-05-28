// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VirtualTextureBuilderThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureBuilderThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_VirtualTexturingEditor();
	VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer();
	VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_NoRegister();
// End Cross Module References
	void UVirtualTextureBuilderThumbnailRenderer::StaticRegisterNativesUVirtualTextureBuilderThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureBuilderThumbnailRenderer);
	UClass* Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_NoRegister()
	{
		return UVirtualTextureBuilderThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualTexturingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualTextureBuilderThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/VirtualTextureBuilderThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilderThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_Statics::ClassParams = {
		&UVirtualTextureBuilderThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UVirtualTextureBuilderThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureBuilderThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualTextureBuilderThumbnailRenderer.OuterSingleton;
	}
	template<> VIRTUALTEXTURINGEDITOR_API UClass* StaticClass<UVirtualTextureBuilderThumbnailRenderer>()
	{
		return UVirtualTextureBuilderThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilderThumbnailRenderer);
	UVirtualTextureBuilderThumbnailRenderer::~UVirtualTextureBuilderThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_VirtualTextureBuilderThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_VirtualTextureBuilderThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualTextureBuilderThumbnailRenderer, UVirtualTextureBuilderThumbnailRenderer::StaticClass, TEXT("UVirtualTextureBuilderThumbnailRenderer"), &Z_Registration_Info_UClass_UVirtualTextureBuilderThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureBuilderThumbnailRenderer), 3838574109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_VirtualTextureBuilderThumbnailRenderer_h_94170101(TEXT("/Script/VirtualTexturingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_VirtualTextureBuilderThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_VirtualTextureBuilderThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
