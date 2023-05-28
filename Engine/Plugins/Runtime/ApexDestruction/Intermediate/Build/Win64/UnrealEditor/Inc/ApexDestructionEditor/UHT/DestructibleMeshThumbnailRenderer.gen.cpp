// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DestructibleMeshThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleMeshThumbnailRenderer() {}
// Cross Module References
	APEXDESTRUCTIONEDITOR_API UClass* Z_Construct_UClass_UDestructibleMeshThumbnailRenderer();
	APEXDESTRUCTIONEDITOR_API UClass* Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_ApexDestructionEditor();
// End Cross Module References
	void UDestructibleMeshThumbnailRenderer::StaticRegisterNativesUDestructibleMeshThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestructibleMeshThumbnailRenderer);
	UClass* Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_NoRegister()
	{
		return UDestructibleMeshThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestructionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DestructibleMeshThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/DestructibleMeshThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestructibleMeshThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_Statics::ClassParams = {
		&UDestructibleMeshThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestructibleMeshThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UDestructibleMeshThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestructibleMeshThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UDestructibleMeshThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDestructibleMeshThumbnailRenderer.OuterSingleton;
	}
	template<> APEXDESTRUCTIONEDITOR_API UClass* StaticClass<UDestructibleMeshThumbnailRenderer>()
	{
		return UDestructibleMeshThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestructibleMeshThumbnailRenderer);
	UDestructibleMeshThumbnailRenderer::~UDestructibleMeshThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_DestructibleMeshThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_DestructibleMeshThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDestructibleMeshThumbnailRenderer, UDestructibleMeshThumbnailRenderer::StaticClass, TEXT("UDestructibleMeshThumbnailRenderer"), &Z_Registration_Info_UClass_UDestructibleMeshThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestructibleMeshThumbnailRenderer), 1938128190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_DestructibleMeshThumbnailRenderer_h_1601190604(TEXT("/Script/ApexDestructionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_DestructibleMeshThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_DestructibleMeshThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
