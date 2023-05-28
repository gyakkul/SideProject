// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PixelStreamingMediaOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingMediaOutput() {}
// Cross Module References
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UPixelStreamingMediaOutput();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UPixelStreamingMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingVCam();
// End Cross Module References
	void UPixelStreamingMediaOutput::StaticRegisterNativesUPixelStreamingMediaOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingMediaOutput);
	UClass* Z_Construct_UClass_UPixelStreamingMediaOutput_NoRegister()
	{
		return UPixelStreamingMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingVCam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PixelStreamingMediaOutput.h" },
		{ "ModuleRelativePath", "Private/PixelStreamingMediaOutput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingMediaOutput_Statics::ClassParams = {
		&UPixelStreamingMediaOutput::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingMediaOutput()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingMediaOutput.OuterSingleton, Z_Construct_UClass_UPixelStreamingMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingMediaOutput.OuterSingleton;
	}
	template<> PIXELSTREAMINGVCAM_API UClass* StaticClass<UPixelStreamingMediaOutput>()
	{
		return UPixelStreamingMediaOutput::StaticClass();
	}
	UPixelStreamingMediaOutput::UPixelStreamingMediaOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingMediaOutput);
	UPixelStreamingMediaOutput::~UPixelStreamingMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingMediaOutput, UPixelStreamingMediaOutput::StaticClass, TEXT("UPixelStreamingMediaOutput"), &Z_Registration_Info_UClass_UPixelStreamingMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingMediaOutput), 3769080457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaOutput_h_4243497908(TEXT("/Script/PixelStreamingVCam"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Private_PixelStreamingMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
