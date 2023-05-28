// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/AnimBlueprintThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAnimBlueprintThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimBlueprintThumbnailRenderer::StaticRegisterNativesUAnimBlueprintThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintThumbnailRenderer);
	UClass* Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_NoRegister()
	{
		return UAnimBlueprintThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/AnimBlueprintThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/AnimBlueprintThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_Statics::ClassParams = {
		&UAnimBlueprintThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UAnimBlueprintThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimBlueprintThumbnailRenderer>()
	{
		return UAnimBlueprintThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintThumbnailRenderer);
	UAnimBlueprintThumbnailRenderer::~UAnimBlueprintThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimBlueprintThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimBlueprintThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintThumbnailRenderer, UAnimBlueprintThumbnailRenderer::StaticClass, TEXT("UAnimBlueprintThumbnailRenderer"), &Z_Registration_Info_UClass_UAnimBlueprintThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintThumbnailRenderer), 2384630301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimBlueprintThumbnailRenderer_h_2210191368(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimBlueprintThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_AnimBlueprintThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
