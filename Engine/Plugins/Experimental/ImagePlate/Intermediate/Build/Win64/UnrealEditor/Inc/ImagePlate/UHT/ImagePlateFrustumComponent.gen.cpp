// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ImagePlateFrustumComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImagePlateFrustumComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateFrustumComponent();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateFrustumComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ImagePlate();
// End Cross Module References
	void UImagePlateFrustumComponent::StaticRegisterNativesUImagePlateFrustumComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImagePlateFrustumComponent);
	UClass* Z_Construct_UClass_UImagePlateFrustumComponent_NoRegister()
	{
		return UImagePlateFrustumComponent::StaticClass();
	}
	struct Z_Construct_UClass_UImagePlateFrustumComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImagePlateFrustumComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ImagePlate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateFrustumComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A 2d material that will be rendered always facing the camera.\n */" },
		{ "HideCategories", "Object Activation Collision Components|Activation Physics Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ImagePlateFrustumComponent.h" },
		{ "ModuleRelativePath", "Private/ImagePlateFrustumComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A 2d material that will be rendered always facing the camera." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImagePlateFrustumComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImagePlateFrustumComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImagePlateFrustumComponent_Statics::ClassParams = {
		&UImagePlateFrustumComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImagePlateFrustumComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateFrustumComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImagePlateFrustumComponent()
	{
		if (!Z_Registration_Info_UClass_UImagePlateFrustumComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImagePlateFrustumComponent.OuterSingleton, Z_Construct_UClass_UImagePlateFrustumComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImagePlateFrustumComponent.OuterSingleton;
	}
	template<> IMAGEPLATE_API UClass* StaticClass<UImagePlateFrustumComponent>()
	{
		return UImagePlateFrustumComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImagePlateFrustumComponent);
	UImagePlateFrustumComponent::~UImagePlateFrustumComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImagePlateFrustumComponent, UImagePlateFrustumComponent::StaticClass, TEXT("UImagePlateFrustumComponent"), &Z_Registration_Info_UClass_UImagePlateFrustumComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImagePlateFrustumComponent), 3914169500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_210776904(TEXT("/Script/ImagePlate"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
