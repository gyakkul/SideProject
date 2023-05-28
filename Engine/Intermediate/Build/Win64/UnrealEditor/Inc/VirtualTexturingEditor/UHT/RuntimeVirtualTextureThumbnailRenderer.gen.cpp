// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RuntimeVirtualTextureThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_VirtualTexturingEditor();
	VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer();
	VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_NoRegister();
// End Cross Module References
	void URuntimeVirtualTextureThumbnailRenderer::StaticRegisterNativesURuntimeVirtualTextureThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeVirtualTextureThumbnailRenderer);
	UClass* Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_NoRegister()
	{
		return URuntimeVirtualTextureThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualTexturingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RuntimeVirtualTextureThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/RuntimeVirtualTextureThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics::ClassParams = {
		&URuntimeVirtualTextureThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_URuntimeVirtualTextureThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeVirtualTextureThumbnailRenderer.OuterSingleton, Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeVirtualTextureThumbnailRenderer.OuterSingleton;
	}
	template<> VIRTUALTEXTURINGEDITOR_API UClass* StaticClass<URuntimeVirtualTextureThumbnailRenderer>()
	{
		return URuntimeVirtualTextureThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureThumbnailRenderer);
	URuntimeVirtualTextureThumbnailRenderer::~URuntimeVirtualTextureThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeVirtualTextureThumbnailRenderer, URuntimeVirtualTextureThumbnailRenderer::StaticClass, TEXT("URuntimeVirtualTextureThumbnailRenderer"), &Z_Registration_Info_UClass_URuntimeVirtualTextureThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeVirtualTextureThumbnailRenderer), 138748853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_3218550042(TEXT("/Script/VirtualTexturingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Private_RuntimeVirtualTextureThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
