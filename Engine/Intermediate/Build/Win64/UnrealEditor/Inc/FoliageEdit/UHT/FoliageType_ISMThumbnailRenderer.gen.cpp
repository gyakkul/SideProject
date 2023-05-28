// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageType_ISMThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_ISMThumbnailRenderer() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void UFoliageType_ISMThumbnailRenderer::StaticRegisterNativesUFoliageType_ISMThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageType_ISMThumbnailRenderer);
	UClass* Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_NoRegister()
	{
		return UFoliageType_ISMThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoliageType_ISMThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/FoliageType_ISMThumbnailRenderer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType_ISMThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::ClassParams = {
		&UFoliageType_ISMThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UFoliageType_ISMThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageType_ISMThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoliageType_ISMThumbnailRenderer.OuterSingleton;
	}
	template<> FOLIAGEEDIT_API UClass* StaticClass<UFoliageType_ISMThumbnailRenderer>()
	{
		return UFoliageType_ISMThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_ISMThumbnailRenderer);
	UFoliageType_ISMThumbnailRenderer::~UFoliageType_ISMThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ISMThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ISMThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer, UFoliageType_ISMThumbnailRenderer::StaticClass, TEXT("UFoliageType_ISMThumbnailRenderer"), &Z_Registration_Info_UClass_UFoliageType_ISMThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageType_ISMThumbnailRenderer), 3546959995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ISMThumbnailRenderer_h_2545824470(TEXT("/Script/FoliageEdit"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ISMThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ISMThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
