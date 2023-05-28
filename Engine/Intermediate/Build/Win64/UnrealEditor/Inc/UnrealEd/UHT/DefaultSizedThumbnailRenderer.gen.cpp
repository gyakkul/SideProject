// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/DefaultSizedThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultSizedThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDefaultSizedThumbnailRenderer::StaticRegisterNativesUDefaultSizedThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultSizedThumbnailRenderer);
	UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer_NoRegister()
	{
		return UDefaultSizedThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultSizeY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/DefaultSizedThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/DefaultSizedThumbnailRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX_MetaData[] = {
		{ "Comment", "/**\n\x09 * The default width of this thumbnail\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/DefaultSizedThumbnailRenderer.h" },
		{ "ToolTip", "The default width of this thumbnail" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX = { "DefaultSizeX", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDefaultSizedThumbnailRenderer, DefaultSizeX), METADATA_PARAMS(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY_MetaData[] = {
		{ "Comment", "/**\n\x09 * The default height of this thumbnail\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/DefaultSizedThumbnailRenderer.h" },
		{ "ToolTip", "The default height of this thumbnail" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY = { "DefaultSizeY", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDefaultSizedThumbnailRenderer, DefaultSizeY), METADATA_PARAMS(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultSizedThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::ClassParams = {
		&UDefaultSizedThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::PropPointers),
		0,
		0x000800A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UDefaultSizedThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultSizedThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultSizedThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDefaultSizedThumbnailRenderer>()
	{
		return UDefaultSizedThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultSizedThumbnailRenderer);
	UDefaultSizedThumbnailRenderer::~UDefaultSizedThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultSizedThumbnailRenderer, UDefaultSizedThumbnailRenderer::StaticClass, TEXT("UDefaultSizedThumbnailRenderer"), &Z_Registration_Info_UClass_UDefaultSizedThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultSizedThumbnailRenderer), 3881144417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_3787227865(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_DefaultSizedThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
