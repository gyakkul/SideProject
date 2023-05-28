// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamPixelStreamingSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamPixelStreamingSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UVCamPixelStreamingSubsystem();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UVCamPixelStreamingSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingVCam();
// End Cross Module References
	void UVCamPixelStreamingSubsystem::StaticRegisterNativesUVCamPixelStreamingSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamPixelStreamingSubsystem);
	UClass* Z_Construct_UClass_UVCamPixelStreamingSubsystem_NoRegister()
	{
		return UVCamPixelStreamingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingVCam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VCamPixelStreamingSubsystem.h" },
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamPixelStreamingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics::ClassParams = {
		&UVCamPixelStreamingSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamPixelStreamingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVCamPixelStreamingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamPixelStreamingSubsystem.OuterSingleton, Z_Construct_UClass_UVCamPixelStreamingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamPixelStreamingSubsystem.OuterSingleton;
	}
	template<> PIXELSTREAMINGVCAM_API UClass* StaticClass<UVCamPixelStreamingSubsystem>()
	{
		return UVCamPixelStreamingSubsystem::StaticClass();
	}
	UVCamPixelStreamingSubsystem::UVCamPixelStreamingSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamPixelStreamingSubsystem);
	UVCamPixelStreamingSubsystem::~UVCamPixelStreamingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamPixelStreamingSubsystem, UVCamPixelStreamingSubsystem::StaticClass, TEXT("UVCamPixelStreamingSubsystem"), &Z_Registration_Info_UClass_UVCamPixelStreamingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamPixelStreamingSubsystem), 1498615679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSubsystem_h_2809903811(TEXT("/Script/PixelStreamingVCam"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
