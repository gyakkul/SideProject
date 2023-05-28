// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraThumbnailRenderer() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemThumbnailRenderer();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraThumbnailRendererBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraThumbnailRendererBase_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraThumbnailRendererBase::StaticRegisterNativesUNiagaraThumbnailRendererBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraThumbnailRendererBase);
	UClass* Z_Construct_UClass_UNiagaraThumbnailRendererBase_NoRegister()
	{
		return UNiagaraThumbnailRendererBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraThumbnailRendererBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraThumbnailRendererBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraThumbnailRendererBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/NiagaraThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraThumbnailRendererBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraThumbnailRendererBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraThumbnailRendererBase_Statics::ClassParams = {
		&UNiagaraThumbnailRendererBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraThumbnailRendererBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraThumbnailRendererBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraThumbnailRendererBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraThumbnailRendererBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraThumbnailRendererBase.OuterSingleton, Z_Construct_UClass_UNiagaraThumbnailRendererBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraThumbnailRendererBase.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraThumbnailRendererBase>()
	{
		return UNiagaraThumbnailRendererBase::StaticClass();
	}
	UNiagaraThumbnailRendererBase::UNiagaraThumbnailRendererBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraThumbnailRendererBase);
	UNiagaraThumbnailRendererBase::~UNiagaraThumbnailRendererBase() {}
	void UNiagaraEmitterThumbnailRenderer::StaticRegisterNativesUNiagaraEmitterThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEmitterThumbnailRenderer);
	UClass* Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_NoRegister()
	{
		return UNiagaraEmitterThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraThumbnailRendererBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/NiagaraThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEmitterThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_Statics::ClassParams = {
		&UNiagaraEmitterThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEmitterThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEmitterThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEmitterThumbnailRenderer.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraEmitterThumbnailRenderer>()
	{
		return UNiagaraEmitterThumbnailRenderer::StaticClass();
	}
	UNiagaraEmitterThumbnailRenderer::UNiagaraEmitterThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEmitterThumbnailRenderer);
	UNiagaraEmitterThumbnailRenderer::~UNiagaraEmitterThumbnailRenderer() {}
	void UNiagaraSystemThumbnailRenderer::StaticRegisterNativesUNiagaraSystemThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystemThumbnailRenderer);
	UClass* Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_NoRegister()
	{
		return UNiagaraSystemThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraThumbnailRendererBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/NiagaraThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystemThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_Statics::ClassParams = {
		&UNiagaraSystemThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystemThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSystemThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystemThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UNiagaraSystemThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSystemThumbnailRenderer.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSystemThumbnailRenderer>()
	{
		return UNiagaraSystemThumbnailRenderer::StaticClass();
	}
	UNiagaraSystemThumbnailRenderer::UNiagaraSystemThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSystemThumbnailRenderer);
	UNiagaraSystemThumbnailRenderer::~UNiagaraSystemThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraThumbnailRendererBase, UNiagaraThumbnailRendererBase::StaticClass, TEXT("UNiagaraThumbnailRendererBase"), &Z_Registration_Info_UClass_UNiagaraThumbnailRendererBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraThumbnailRendererBase), 113316313U) },
		{ Z_Construct_UClass_UNiagaraEmitterThumbnailRenderer, UNiagaraEmitterThumbnailRenderer::StaticClass, TEXT("UNiagaraEmitterThumbnailRenderer"), &Z_Registration_Info_UClass_UNiagaraEmitterThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEmitterThumbnailRenderer), 3134907197U) },
		{ Z_Construct_UClass_UNiagaraSystemThumbnailRenderer, UNiagaraSystemThumbnailRenderer::StaticClass, TEXT("UNiagaraSystemThumbnailRenderer"), &Z_Registration_Info_UClass_UNiagaraSystemThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystemThumbnailRenderer), 3222297538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraThumbnailRenderer_h_1945677514(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
