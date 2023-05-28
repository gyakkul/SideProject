// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AppleARKitVideoOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitVideoOverlay() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UARKitCameraOverlayMaterialLoader();
	APPLEARKIT_API UClass* Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
	void UARKitCameraOverlayMaterialLoader::StaticRegisterNativesUARKitCameraOverlayMaterialLoader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARKitCameraOverlayMaterialLoader);
	UClass* Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_NoRegister()
	{
		return UARKitCameraOverlayMaterialLoader::StaticClass();
	}
	struct Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraOverlayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultCameraOverlayMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOcclusionOverlayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DepthOcclusionOverlayMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatteOcclusionOverlayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MatteOcclusionOverlayMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneDepthOcclusionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneDepthOcclusionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneDepthColorationMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneDepthColorationMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Helper class to ensure the ARKit camera material is cooked. */" },
		{ "IncludePath", "AppleARKitVideoOverlay.h" },
		{ "ModuleRelativePath", "Private/AppleARKitVideoOverlay.h" },
		{ "ToolTip", "Helper class to ensure the ARKit camera material is cooked." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DefaultCameraOverlayMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/AppleARKitVideoOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DefaultCameraOverlayMaterial = { "DefaultCameraOverlayMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARKitCameraOverlayMaterialLoader, DefaultCameraOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DefaultCameraOverlayMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DefaultCameraOverlayMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionOverlayMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/AppleARKitVideoOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionOverlayMaterial = { "DepthOcclusionOverlayMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARKitCameraOverlayMaterialLoader, DepthOcclusionOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionOverlayMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionOverlayMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_MatteOcclusionOverlayMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/AppleARKitVideoOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_MatteOcclusionOverlayMaterial = { "MatteOcclusionOverlayMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARKitCameraOverlayMaterialLoader, MatteOcclusionOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_MatteOcclusionOverlayMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_MatteOcclusionOverlayMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthOcclusionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/AppleARKitVideoOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthOcclusionMaterial = { "SceneDepthOcclusionMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARKitCameraOverlayMaterialLoader, SceneDepthOcclusionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthOcclusionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthOcclusionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthColorationMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/AppleARKitVideoOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthColorationMaterial = { "SceneDepthColorationMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARKitCameraOverlayMaterialLoader, SceneDepthColorationMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthColorationMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthColorationMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DefaultCameraOverlayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_DepthOcclusionOverlayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_MatteOcclusionOverlayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthOcclusionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::NewProp_SceneDepthColorationMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARKitCameraOverlayMaterialLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::ClassParams = {
		&UARKitCameraOverlayMaterialLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARKitCameraOverlayMaterialLoader()
	{
		if (!Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.OuterSingleton, Z_Construct_UClass_UARKitCameraOverlayMaterialLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.OuterSingleton;
	}
	template<> APPLEARKIT_API UClass* StaticClass<UARKitCameraOverlayMaterialLoader>()
	{
		return UARKitCameraOverlayMaterialLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARKitCameraOverlayMaterialLoader);
	UARKitCameraOverlayMaterialLoader::~UARKitCameraOverlayMaterialLoader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitVideoOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitVideoOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARKitCameraOverlayMaterialLoader, UARKitCameraOverlayMaterialLoader::StaticClass, TEXT("UARKitCameraOverlayMaterialLoader"), &Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARKitCameraOverlayMaterialLoader), 2271858935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitVideoOverlay_h_3592111429(TEXT("/Script/AppleARKit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitVideoOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitVideoOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
