// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VCamPixelStreamingLiveLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamPixelStreamingLiveLink() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingVCam();
// End Cross Module References
	void UPixelStreamingLiveLinkSourceSettings::StaticRegisterNativesUPixelStreamingLiveLinkSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingLiveLinkSourceSettings);
	UClass* Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_NoRegister()
	{
		return UPixelStreamingLiveLinkSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingVCam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VCamPixelStreamingLiveLink.h" },
		{ "ModuleRelativePath", "Private/VCamPixelStreamingLiveLink.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingLiveLinkSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_Statics::ClassParams = {
		&UPixelStreamingLiveLinkSourceSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingLiveLinkSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingLiveLinkSourceSettings.OuterSingleton, Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingLiveLinkSourceSettings.OuterSingleton;
	}
	template<> PIXELSTREAMINGVCAM_API UClass* StaticClass<UPixelStreamingLiveLinkSourceSettings>()
	{
		return UPixelStreamingLiveLinkSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingLiveLinkSourceSettings);
	UPixelStreamingLiveLinkSourceSettings::~UPixelStreamingLiveLinkSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingLiveLink_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingLiveLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingLiveLinkSourceSettings, UPixelStreamingLiveLinkSourceSettings::StaticClass, TEXT("UPixelStreamingLiveLinkSourceSettings"), &Z_Registration_Info_UClass_UPixelStreamingLiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingLiveLinkSourceSettings), 3692299793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingLiveLink_h_3498673872(TEXT("/Script/PixelStreamingVCam"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingLiveLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_VCamPixelStreamingLiveLink_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
