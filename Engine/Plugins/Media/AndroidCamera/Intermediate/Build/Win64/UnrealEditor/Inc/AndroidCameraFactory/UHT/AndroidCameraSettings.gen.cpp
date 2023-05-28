// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidCameraSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidCameraSettings() {}
// Cross Module References
	ANDROIDCAMERAFACTORY_API UClass* Z_Construct_UClass_UAndroidCameraSettings();
	ANDROIDCAMERAFACTORY_API UClass* Z_Construct_UClass_UAndroidCameraSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AndroidCameraFactory();
// End Cross Module References
	void UAndroidCameraSettings::StaticRegisterNativesUAndroidCameraSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidCameraSettings);
	UClass* Z_Construct_UClass_UAndroidCameraSettings_NoRegister()
	{
		return UAndroidCameraSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidCameraSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheableVideoSampleBuffers_MetaData[];
#endif
		static void NewProp_CacheableVideoSampleBuffers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CacheableVideoSampleBuffers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidCameraSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidCameraFactory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidCameraSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the ImgMedia module.\n */" },
		{ "IncludePath", "AndroidCameraSettings.h" },
		{ "ModuleRelativePath", "Public/AndroidCameraSettings.h" },
		{ "ToolTip", "Settings for the ImgMedia module." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidCameraSettings_Statics::NewProp_CacheableVideoSampleBuffers_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** \n\x09 * Whether video samples should be cacheable (default = off).\n\x09 *\n\x09 * This setting only affects applications that are not compiled against the\n\x09 * Engine. In such applications, the video samples transfer their contents\n\x09 * via a frame buffer. By default, the same frame buffer is reused for every\n\x09 * sample to avoid buffer copies. Every time a new sample is generated, the\n\x09 * previously generated samples are invalidated.\n\x09 *\n\x09 * When enabling this option, video frame buffers are copied into instead of\n\x09 * referenced in video samples. This may be useful for applications that require\n\x09 * access to individual frames, but it may dramatically decrease performance.\n\x09 *\n\x09 * When compiling against the Engine, this setting has no effect as the frame\n\x09 * data is transferred via separate texture resource objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AndroidCameraSettings.h" },
		{ "ToolTip", "Whether video samples should be cacheable (default = off).\n\nThis setting only affects applications that are not compiled against the\nEngine. In such applications, the video samples transfer their contents\nvia a frame buffer. By default, the same frame buffer is reused for every\nsample to avoid buffer copies. Every time a new sample is generated, the\npreviously generated samples are invalidated.\n\nWhen enabling this option, video frame buffers are copied into instead of\nreferenced in video samples. This may be useful for applications that require\naccess to individual frames, but it may dramatically decrease performance.\n\nWhen compiling against the Engine, this setting has no effect as the frame\ndata is transferred via separate texture resource objects." },
	};
#endif
	void Z_Construct_UClass_UAndroidCameraSettings_Statics::NewProp_CacheableVideoSampleBuffers_SetBit(void* Obj)
	{
		((UAndroidCameraSettings*)Obj)->CacheableVideoSampleBuffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidCameraSettings_Statics::NewProp_CacheableVideoSampleBuffers = { "CacheableVideoSampleBuffers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidCameraSettings), &Z_Construct_UClass_UAndroidCameraSettings_Statics::NewProp_CacheableVideoSampleBuffers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidCameraSettings_Statics::NewProp_CacheableVideoSampleBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidCameraSettings_Statics::NewProp_CacheableVideoSampleBuffers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidCameraSettings_Statics::NewProp_CacheableVideoSampleBuffers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidCameraSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidCameraSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidCameraSettings_Statics::ClassParams = {
		&UAndroidCameraSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidCameraSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidCameraSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidCameraSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidCameraSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidCameraSettings()
	{
		if (!Z_Registration_Info_UClass_UAndroidCameraSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidCameraSettings.OuterSingleton, Z_Construct_UClass_UAndroidCameraSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidCameraSettings.OuterSingleton;
	}
	template<> ANDROIDCAMERAFACTORY_API UClass* StaticClass<UAndroidCameraSettings>()
	{
		return UAndroidCameraSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidCameraSettings);
	UAndroidCameraSettings::~UAndroidCameraSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidCameraSettings, UAndroidCameraSettings::StaticClass, TEXT("UAndroidCameraSettings"), &Z_Registration_Info_UClass_UAndroidCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidCameraSettings), 3814002513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_3697467920(TEXT("/Script/AndroidCameraFactory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
