// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/TextureCubeThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCubeThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTextureCubeThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UTextureCubeThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureCubeThumbnailRenderer::StaticRegisterNativesUTextureCubeThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureCubeThumbnailRenderer);
	UClass* Z_Construct_UClass_UTextureCubeThumbnailRenderer_NoRegister()
	{
		return UTextureCubeThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UTextureCubeThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureCubeThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureCubeThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/TextureCubeThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/Factories/TextureCubeThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureCubeThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCubeThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureCubeThumbnailRenderer_Statics::ClassParams = {
		&UTextureCubeThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureCubeThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureCubeThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UTextureCubeThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureCubeThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UTextureCubeThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureCubeThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureCubeThumbnailRenderer>()
	{
		return UTextureCubeThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCubeThumbnailRenderer);
	UTextureCubeThumbnailRenderer::~UTextureCubeThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureCubeThumbnailRenderer, UTextureCubeThumbnailRenderer::StaticClass, TEXT("UTextureCubeThumbnailRenderer"), &Z_Registration_Info_UClass_UTextureCubeThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureCubeThumbnailRenderer), 4206782769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeThumbnailRenderer_h_1267379680(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
