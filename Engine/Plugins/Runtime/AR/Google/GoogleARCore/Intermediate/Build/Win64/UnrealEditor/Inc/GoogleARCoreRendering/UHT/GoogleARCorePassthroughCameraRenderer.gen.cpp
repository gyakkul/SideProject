// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCorePassthroughCameraRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCorePassthroughCameraRenderer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GOOGLEARCORERENDERING_API UClass* Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader();
	GOOGLEARCORERENDERING_API UClass* Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreRendering();
// End Cross Module References
	void UGoogleARCoreCameraOverlayMaterialLoader::StaticRegisterNativesUGoogleARCoreCameraOverlayMaterialLoader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreCameraOverlayMaterialLoader);
	UClass* Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_NoRegister()
	{
		return UGoogleARCoreCameraOverlayMaterialLoader::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularOverlayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegularOverlayMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugOverlayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugOverlayMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOcclusionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DepthOcclusionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthColorationMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DepthColorationMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreRendering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A helper class that is used to load the GoogleARCorePassthroughCameraMaterial from its default object. */" },
		{ "IncludePath", "GoogleARCorePassthroughCameraRenderer.h" },
		{ "ModuleRelativePath", "Public/GoogleARCorePassthroughCameraRenderer.h" },
		{ "ToolTip", "A helper class that is used to load the GoogleARCorePassthroughCameraMaterial from its default object." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_RegularOverlayMaterial_MetaData[] = {
		{ "Comment", "/** A pointer to the camera overlay material that will be used to render the passthrough camera texture as background. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePassthroughCameraRenderer.h" },
		{ "ToolTip", "A pointer to the camera overlay material that will be used to render the passthrough camera texture as background." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_RegularOverlayMaterial = { "RegularOverlayMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreCameraOverlayMaterialLoader, RegularOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_RegularOverlayMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_RegularOverlayMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DebugOverlayMaterial_MetaData[] = {
		{ "Comment", "/** A pointer to the camera overlay material that will be used to render the passthrough camera texture as background. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePassthroughCameraRenderer.h" },
		{ "ToolTip", "A pointer to the camera overlay material that will be used to render the passthrough camera texture as background." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DebugOverlayMaterial = { "DebugOverlayMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreCameraOverlayMaterialLoader, DebugOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DebugOverlayMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DebugOverlayMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GoogleARCorePassthroughCameraRenderer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionMaterial = { "DepthOcclusionMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreCameraOverlayMaterialLoader, DepthOcclusionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthColorationMaterial_MetaData[] = {
		{ "Comment", "/** Material used for rendering the coloration of the depth map. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePassthroughCameraRenderer.h" },
		{ "ToolTip", "Material used for rendering the coloration of the depth map." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthColorationMaterial = { "DepthColorationMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreCameraOverlayMaterialLoader, DepthColorationMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthColorationMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthColorationMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_RegularOverlayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DebugOverlayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::NewProp_DepthColorationMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreCameraOverlayMaterialLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::ClassParams = {
		&UGoogleARCoreCameraOverlayMaterialLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreCameraOverlayMaterialLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreCameraOverlayMaterialLoader.OuterSingleton, Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreCameraOverlayMaterialLoader.OuterSingleton;
	}
	template<> GOOGLEARCORERENDERING_API UClass* StaticClass<UGoogleARCoreCameraOverlayMaterialLoader>()
	{
		return UGoogleARCoreCameraOverlayMaterialLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreCameraOverlayMaterialLoader);
	UGoogleARCoreCameraOverlayMaterialLoader::~UGoogleARCoreCameraOverlayMaterialLoader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Public_GoogleARCorePassthroughCameraRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Public_GoogleARCorePassthroughCameraRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreCameraOverlayMaterialLoader, UGoogleARCoreCameraOverlayMaterialLoader::StaticClass, TEXT("UGoogleARCoreCameraOverlayMaterialLoader"), &Z_Registration_Info_UClass_UGoogleARCoreCameraOverlayMaterialLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreCameraOverlayMaterialLoader), 563093322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Public_GoogleARCorePassthroughCameraRenderer_h_3948935967(TEXT("/Script/GoogleARCoreRendering"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Public_GoogleARCorePassthroughCameraRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreRendering_Public_GoogleARCorePassthroughCameraRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
