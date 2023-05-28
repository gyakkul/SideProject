// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/ThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailRenderer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UThumbnailRenderer::StaticRegisterNativesUThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThumbnailRenderer);
	UClass* Z_Construct_UClass_UThumbnailRenderer_NoRegister()
	{
		return UThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is an abstract base class that is used to define the interface that\n * UnrealEd will use when rendering a given object's thumbnail. The editor\n * only calls the virtual rendering function.\n */" },
		{ "IncludePath", "ThumbnailRendering/ThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/ThumbnailRenderer.h" },
		{ "ToolTip", "This is an abstract base class that is used to define the interface that\nUnrealEd will use when rendering a given object's thumbnail. The editor\nonly calls the virtual rendering function." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThumbnailRenderer_Statics::ClassParams = {
		&UThumbnailRenderer::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UThumbnailRenderer>()
	{
		return UThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThumbnailRenderer);
	UThumbnailRenderer::~UThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThumbnailRenderer, UThumbnailRenderer::StaticClass, TEXT("UThumbnailRenderer"), &Z_Registration_Info_UClass_UThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThumbnailRenderer), 2223138593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_4111686553(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
