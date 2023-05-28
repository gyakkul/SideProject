// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/WidgetBlueprintThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintThumbnailRenderer() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetBlueprintThumbnailRenderer::StaticRegisterNativesUWidgetBlueprintThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprintThumbnailRenderer);
	UClass* Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_NoRegister()
	{
		return UWidgetBlueprintThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetBlueprintThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/WidgetBlueprintThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::ClassParams = {
		&UWidgetBlueprintThumbnailRenderer::StaticClass,
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
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UWidgetBlueprintThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprintThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetBlueprintThumbnailRenderer.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetBlueprintThumbnailRenderer>()
	{
		return UWidgetBlueprintThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintThumbnailRenderer);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprintThumbnailRenderer, UWidgetBlueprintThumbnailRenderer::StaticClass, TEXT("UWidgetBlueprintThumbnailRenderer"), &Z_Registration_Info_UClass_UWidgetBlueprintThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprintThumbnailRenderer), 2148885029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintThumbnailRenderer_h_1934080566(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
