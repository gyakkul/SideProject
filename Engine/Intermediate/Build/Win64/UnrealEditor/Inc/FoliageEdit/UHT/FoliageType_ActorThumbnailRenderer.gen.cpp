// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageType_ActorThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_ActorThumbnailRenderer() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void UFoliageType_ActorThumbnailRenderer::StaticRegisterNativesUFoliageType_ActorThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageType_ActorThumbnailRenderer);
	UClass* Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_NoRegister()
	{
		return UFoliageType_ActorThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoliageType_ActorThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/FoliageType_ActorThumbnailRenderer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType_ActorThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_Statics::ClassParams = {
		&UFoliageType_ActorThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UFoliageType_ActorThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageType_ActorThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoliageType_ActorThumbnailRenderer.OuterSingleton;
	}
	template<> FOLIAGEEDIT_API UClass* StaticClass<UFoliageType_ActorThumbnailRenderer>()
	{
		return UFoliageType_ActorThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_ActorThumbnailRenderer);
	UFoliageType_ActorThumbnailRenderer::~UFoliageType_ActorThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ActorThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ActorThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageType_ActorThumbnailRenderer, UFoliageType_ActorThumbnailRenderer::StaticClass, TEXT("UFoliageType_ActorThumbnailRenderer"), &Z_Registration_Info_UClass_UFoliageType_ActorThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageType_ActorThumbnailRenderer), 1068863150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ActorThumbnailRenderer_h_4026529654(TEXT("/Script/FoliageEdit"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ActorThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_FoliageType_ActorThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
