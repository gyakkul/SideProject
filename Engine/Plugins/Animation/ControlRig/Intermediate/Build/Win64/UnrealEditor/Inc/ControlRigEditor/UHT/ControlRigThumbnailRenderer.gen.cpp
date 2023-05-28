// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigThumbnailRenderer() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigThumbnailRenderer();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigThumbnailRenderer::StaticRegisterNativesUControlRigThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigThumbnailRenderer);
	UClass* Z_Construct_UClass_UControlRigThumbnailRenderer_NoRegister()
	{
		return UControlRigThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ControlRigThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/ControlRigThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigThumbnailRenderer_Statics::ClassParams = {
		&UControlRigThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UControlRigThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UControlRigThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UControlRigThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigThumbnailRenderer.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigThumbnailRenderer>()
	{
		return UControlRigThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigThumbnailRenderer);
	UControlRigThumbnailRenderer::~UControlRigThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigThumbnailRenderer, UControlRigThumbnailRenderer::StaticClass, TEXT("UControlRigThumbnailRenderer"), &Z_Registration_Info_UClass_UControlRigThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigThumbnailRenderer), 1058849122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_382406722(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
