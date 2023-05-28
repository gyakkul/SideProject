// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PixelStreamingMediaCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingMediaCapture() {}
// Cross Module References
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UPixelStreamingMediaCapture();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UPixelStreamingMediaCapture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingVCam();
// End Cross Module References
	void UPixelStreamingMediaCapture::StaticRegisterNativesUPixelStreamingMediaCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingMediaCapture);
	UClass* Z_Construct_UClass_UPixelStreamingMediaCapture_NoRegister()
	{
		return UPixelStreamingMediaCapture::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingMediaCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingMediaCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingVCam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingMediaCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PixelStreamingMediaCapture.h" },
		{ "ModuleRelativePath", "Private/PixelStreamingMediaCapture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingMediaCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingMediaCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingMediaCapture_Statics::ClassParams = {
		&UPixelStreamingMediaCapture::StaticClass,
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
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingMediaCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingMediaCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingMediaCapture()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingMediaCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingMediaCapture.OuterSingleton, Z_Construct_UClass_UPixelStreamingMediaCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingMediaCapture.OuterSingleton;
	}
	template<> PIXELSTREAMINGVCAM_API UClass* StaticClass<UPixelStreamingMediaCapture>()
	{
		return UPixelStreamingMediaCapture::StaticClass();
	}
	UPixelStreamingMediaCapture::UPixelStreamingMediaCapture() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingMediaCapture);
	UPixelStreamingMediaCapture::~UPixelStreamingMediaCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingMediaCapture, UPixelStreamingMediaCapture::StaticClass, TEXT("UPixelStreamingMediaCapture"), &Z_Registration_Info_UClass_UPixelStreamingMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingMediaCapture), 449795347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaCapture_h_4290055564(TEXT("/Script/PixelStreamingVCam"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
