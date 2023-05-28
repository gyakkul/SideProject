// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImgMediaSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	IMGMEDIAFACTORY_API UClass* Z_Construct_UClass_UImgMediaSettings();
	IMGMEDIAFACTORY_API UClass* Z_Construct_UClass_UImgMediaSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ImgMediaFactory();
// End Cross Module References
	void UImgMediaSettings::StaticRegisterNativesUImgMediaSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImgMediaSettings);
	UClass* Z_Construct_UClass_UImgMediaSettings_NoRegister()
	{
		return UImgMediaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UImgMediaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BandwidthThrottlingEnabled_MetaData[];
#endif
		static void NewProp_BandwidthThrottlingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BandwidthThrottlingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheBehindPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CacheBehindPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheSizeGB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CacheSizeGB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheThreads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CacheThreads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheThreadStackSizeKB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CacheThreadStackSizeKB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalCacheSizeGB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalCacheSizeGB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseGlobalCache_MetaData[];
#endif
		static void NewProp_UseGlobalCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseGlobalCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExrDecoderThreads_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExrDecoderThreads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProxy_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseDefaultProxy_MetaData[];
#endif
		static void NewProp_UseDefaultProxy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDefaultProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImgMediaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMediaFactory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the ImgMedia module.\n */" },
		{ "IncludePath", "ImgMediaSettings.h" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Settings for the ImgMedia module." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultFrameRate_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Default frame rate to use if none was specified in image sequence or media source (default = 1/24). */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Default frame rate to use if none was specified in image sequence or media source (default = 1/24)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultFrameRate = { "DefaultFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSettings, DefaultFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_BandwidthThrottlingEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If there is not enough bandwidth to play the media, then lower it (for example by skipping frames) to try and get playback. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "If there is not enough bandwidth to play the media, then lower it (for example by skipping frames) to try and get playback." },
	};
#endif
	void Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_BandwidthThrottlingEnabled_SetBit(void* Obj)
	{
		((UImgMediaSettings*)Obj)->BandwidthThrottlingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_BandwidthThrottlingEnabled = { "BandwidthThrottlingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImgMediaSettings), &Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_BandwidthThrottlingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_BandwidthThrottlingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_BandwidthThrottlingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheBehindPercentage_MetaData[] = {
		{ "Category", "Caching" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Percentage of cache to use for frames behind the play head (default = 25%). */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Percentage of cache to use for frames behind the play head (default = 25%)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheBehindPercentage = { "CacheBehindPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSettings, CacheBehindPercentage), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheBehindPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheBehindPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheSizeGB_MetaData[] = {
		{ "Category", "Caching" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum size of the look-ahead cache (in GB; default = 1 GB). */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Maximum size of the look-ahead cache (in GB; default = 1 GB)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheSizeGB = { "CacheSizeGB", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSettings, CacheSizeGB), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheSizeGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheSizeGB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreads_MetaData[] = {
		{ "Category", "Caching" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum number of image caching threads to use (0 = number of cores, default = 2). */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Maximum number of image caching threads to use (0 = number of cores, default = 2)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreads = { "CacheThreads", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSettings, CacheThreads), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreadStackSizeKB_MetaData[] = {
		{ "Category", "Caching" },
		{ "ClampMin", "128" },
		{ "Comment", "/** Size of the stack for each caching thread (in kB; default = 128). */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Size of the stack for each caching thread (in kB; default = 128)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreadStackSizeKB = { "CacheThreadStackSizeKB", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSettings, CacheThreadStackSizeKB), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreadStackSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreadStackSizeKB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_GlobalCacheSizeGB_MetaData[] = {
		{ "Category", "Caching" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum size of the global look-ahead cache (in GB; default = 1 GB). Must be greater or equal to CacheSizeGB. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Maximum size of the global look-ahead cache (in GB; default = 1 GB). Must be greater or equal to CacheSizeGB." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_GlobalCacheSizeGB = { "GlobalCacheSizeGB", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSettings, GlobalCacheSizeGB), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_GlobalCacheSizeGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_GlobalCacheSizeGB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseGlobalCache_MetaData[] = {
		{ "Category", "Caching" },
		{ "Comment", "/** Whether to use the global cache or not. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Whether to use the global cache or not." },
	};
#endif
	void Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseGlobalCache_SetBit(void* Obj)
	{
		((UImgMediaSettings*)Obj)->UseGlobalCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseGlobalCache = { "UseGlobalCache", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImgMediaSettings), &Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseGlobalCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseGlobalCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseGlobalCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_ExrDecoderThreads_MetaData[] = {
		{ "Category", "EXR" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of worker threads to use when decoding EXR images (0 = auto). */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Number of worker threads to use when decoding EXR images (0 = auto)." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_ExrDecoderThreads = { "ExrDecoderThreads", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSettings, ExrDecoderThreads), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_ExrDecoderThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_ExrDecoderThreads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultProxy_MetaData[] = {
		{ "Category", "Proxies" },
		{ "Comment", "/**\n\x09 * Name of default media source proxy URLs (default = 'proxy').\n\x09 *\n\x09 * Image sequence media sources may contain more than one media source URL. Additional\n\x09 * URLs are called media source proxies, and they are generally used for switching to\n\x09 * lower resolution media content for improved performance during development and testing.\n\x09 *\n\x09 * Each proxy URL has a name associated with it, such as 'proxy', 'lowres', or any\n\x09 * other user defined tag. It is up to the media source to interpret this value and\n\x09 * map it to a media source URL. For example, a media source consisting of a sequence\n\x09 * of uncompressed images may use a proxy name as the name of the sub-directory that\n\x09 * contains proxy content, such as a low-res version of the image sequence.\n\x09 *\n\x09 * When default proxies are enabled via the UseDefaultProxy setting, media players\n\x09 * will first try to locate the proxy content identified by the DefaultProxy tag.\n\x09 * If no such proxy content is available, they will fall back to the media source's\n\x09 * default URL.\n\x09 *\n\x09 * @see UseDefaultProxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Name of default media source proxy URLs (default = 'proxy').\n\nImage sequence media sources may contain more than one media source URL. Additional\nURLs are called media source proxies, and they are generally used for switching to\nlower resolution media content for improved performance during development and testing.\n\nEach proxy URL has a name associated with it, such as 'proxy', 'lowres', or any\nother user defined tag. It is up to the media source to interpret this value and\nmap it to a media source URL. For example, a media source consisting of a sequence\nof uncompressed images may use a proxy name as the name of the sub-directory that\ncontains proxy content, such as a low-res version of the image sequence.\n\nWhen default proxies are enabled via the UseDefaultProxy setting, media players\nwill first try to locate the proxy content identified by the DefaultProxy tag.\nIf no such proxy content is available, they will fall back to the media source's\ndefault URL.\n\n@see UseDefaultProxy" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultProxy = { "DefaultProxy", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSettings, DefaultProxy), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseDefaultProxy_MetaData[] = {
		{ "Category", "Proxies" },
		{ "Comment", "/**\n\x09 * Whether to enable image sequence proxies (default = false).\n\x09 *\n\x09 * Image sequence media sources may contain more than one media source URL. Additional\n\x09 * URLs are called media source proxies, and they are generally used for switching to\n\x09 * lower resolution media content for improved performance during development and testing.\n\x09 *\n\x09 * Each proxy URL has a name associated with it, such as 'proxy', 'lowres', or any\n\x09 * other user defined tag. It is up to the media source to interpret this value and\n\x09 * map it to a media source URL. For example, a media source consisting of a sequence\n\x09 * of uncompressed images may use a proxy name as the name of the sub-directory that\n\x09 * contains proxy content, such as a low-res version of the image sequence.\n\x09 *\n\x09 * When default proxies are enabled via the UseDefaultProxy setting, media players\n\x09 * will first try to locate the proxy content identified by the DefaultProxy tag.\n\x09 * If no such proxy content is available, they will fall back to the media source's\n\x09 * default URL.\n\x09 *\n\x09 * @see DefaultProxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSettings.h" },
		{ "ToolTip", "Whether to enable image sequence proxies (default = false).\n\nImage sequence media sources may contain more than one media source URL. Additional\nURLs are called media source proxies, and they are generally used for switching to\nlower resolution media content for improved performance during development and testing.\n\nEach proxy URL has a name associated with it, such as 'proxy', 'lowres', or any\nother user defined tag. It is up to the media source to interpret this value and\nmap it to a media source URL. For example, a media source consisting of a sequence\nof uncompressed images may use a proxy name as the name of the sub-directory that\ncontains proxy content, such as a low-res version of the image sequence.\n\nWhen default proxies are enabled via the UseDefaultProxy setting, media players\nwill first try to locate the proxy content identified by the DefaultProxy tag.\nIf no such proxy content is available, they will fall back to the media source's\ndefault URL.\n\n@see DefaultProxy" },
	};
#endif
	void Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseDefaultProxy_SetBit(void* Obj)
	{
		((UImgMediaSettings*)Obj)->UseDefaultProxy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseDefaultProxy = { "UseDefaultProxy", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImgMediaSettings), &Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseDefaultProxy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseDefaultProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseDefaultProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImgMediaSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_BandwidthThrottlingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheBehindPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheSizeGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_CacheThreadStackSizeKB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_GlobalCacheSizeGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseGlobalCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_ExrDecoderThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_DefaultProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSettings_Statics::NewProp_UseDefaultProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImgMediaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImgMediaSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImgMediaSettings_Statics::ClassParams = {
		&UImgMediaSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImgMediaSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImgMediaSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImgMediaSettings()
	{
		if (!Z_Registration_Info_UClass_UImgMediaSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImgMediaSettings.OuterSingleton, Z_Construct_UClass_UImgMediaSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImgMediaSettings.OuterSingleton;
	}
	template<> IMGMEDIAFACTORY_API UClass* StaticClass<UImgMediaSettings>()
	{
		return UImgMediaSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImgMediaSettings);
	UImgMediaSettings::~UImgMediaSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImgMediaSettings, UImgMediaSettings::StaticClass, TEXT("UImgMediaSettings"), &Z_Registration_Info_UClass_UImgMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImgMediaSettings), 3959575131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_4267015526(TEXT("/Script/ImgMediaFactory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
