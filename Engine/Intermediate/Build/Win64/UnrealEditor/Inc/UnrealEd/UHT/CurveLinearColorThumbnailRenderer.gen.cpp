// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/CurveLinearColorThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColorThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCurveLinearColorThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCurveLinearColorThumbnailRenderer::StaticRegisterNativesUCurveLinearColorThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveLinearColorThumbnailRenderer);
	UClass* Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_NoRegister()
	{
		return UCurveLinearColorThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/CurveLinearColorThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/CurveLinearColorThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColorThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_Statics::ClassParams = {
		&UCurveLinearColorThumbnailRenderer::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColorThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UCurveLinearColorThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveLinearColorThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UCurveLinearColorThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveLinearColorThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurveLinearColorThumbnailRenderer>()
	{
		return UCurveLinearColorThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColorThumbnailRenderer);
	UCurveLinearColorThumbnailRenderer::~UCurveLinearColorThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_CurveLinearColorThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_CurveLinearColorThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveLinearColorThumbnailRenderer, UCurveLinearColorThumbnailRenderer::StaticClass, TEXT("UCurveLinearColorThumbnailRenderer"), &Z_Registration_Info_UClass_UCurveLinearColorThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveLinearColorThumbnailRenderer), 1696975649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_CurveLinearColorThumbnailRenderer_h_3204963627(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_CurveLinearColorThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_CurveLinearColorThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
