// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/ClassThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UClassThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UClassThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UClassThumbnailRenderer::StaticRegisterNativesUClassThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassThumbnailRenderer);
	UClass* Z_Construct_UClass_UClassThumbnailRenderer_NoRegister()
	{
		return UClassThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UClassThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/ClassThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ClassThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassThumbnailRenderer_Statics::ClassParams = {
		&UClassThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClassThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClassThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UClassThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UClassThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UClassThumbnailRenderer>()
	{
		return UClassThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassThumbnailRenderer);
	UClassThumbnailRenderer::~UClassThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClassThumbnailRenderer, UClassThumbnailRenderer::StaticClass, TEXT("UClassThumbnailRenderer"), &Z_Registration_Info_UClass_UClassThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassThumbnailRenderer), 4180703761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_1298567058(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ClassThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
