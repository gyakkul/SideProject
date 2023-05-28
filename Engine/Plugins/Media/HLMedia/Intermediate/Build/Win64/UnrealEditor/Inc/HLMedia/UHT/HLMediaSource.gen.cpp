// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/HLMediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLMediaSource() {}
// Cross Module References
	HLMEDIA_API UClass* Z_Construct_UClass_UHLMediaSource();
	HLMEDIA_API UClass* Z_Construct_UClass_UHLMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	UPackage* Z_Construct_UPackage__Script_HLMedia();
// End Cross Module References
	void UHLMediaSource::StaticRegisterNativesUHLMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLMediaSource);
	UClass* Z_Construct_UClass_UHLMediaSource_NoRegister()
	{
		return UHLMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UHLMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAdaptiveSource_MetaData[];
#endif
		static void NewProp_IsAdaptiveSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAdaptiveSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_HLMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "HLMediaSource.h" },
		{ "ModuleRelativePath", "Private/HLMediaSource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLMediaSource_Statics::NewProp_IsAdaptiveSource_MetaData[] = {
		{ "Category", "Stream" },
		{ "Comment", "/** The URL property is an Adaptive Streaming playlist. */" },
		{ "ModuleRelativePath", "Private/HLMediaSource.h" },
		{ "ToolTip", "The URL property is an Adaptive Streaming playlist." },
	};
#endif
	void Z_Construct_UClass_UHLMediaSource_Statics::NewProp_IsAdaptiveSource_SetBit(void* Obj)
	{
		((UHLMediaSource*)Obj)->IsAdaptiveSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLMediaSource_Statics::NewProp_IsAdaptiveSource = { "IsAdaptiveSource", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHLMediaSource), &Z_Construct_UClass_UHLMediaSource_Statics::NewProp_IsAdaptiveSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLMediaSource_Statics::NewProp_IsAdaptiveSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLMediaSource_Statics::NewProp_IsAdaptiveSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLMediaSource_Statics::NewProp_StreamUrl_MetaData[] = {
		{ "Category", "Stream" },
		{ "Comment", "/** The URL to the media stream to be played. */" },
		{ "ModuleRelativePath", "Private/HLMediaSource.h" },
		{ "ToolTip", "The URL to the media stream to be played." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHLMediaSource_Statics::NewProp_StreamUrl = { "StreamUrl", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHLMediaSource, StreamUrl), METADATA_PARAMS(Z_Construct_UClass_UHLMediaSource_Statics::NewProp_StreamUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLMediaSource_Statics::NewProp_StreamUrl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLMediaSource_Statics::NewProp_IsAdaptiveSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLMediaSource_Statics::NewProp_StreamUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLMediaSource_Statics::ClassParams = {
		&UHLMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHLMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHLMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLMediaSource()
	{
		if (!Z_Registration_Info_UClass_UHLMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLMediaSource.OuterSingleton, Z_Construct_UClass_UHLMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLMediaSource.OuterSingleton;
	}
	template<> HLMEDIA_API UClass* StaticClass<UHLMediaSource>()
	{
		return UHLMediaSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLMediaSource);
	UHLMediaSource::~UHLMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMedia_Private_HLMediaSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMedia_Private_HLMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLMediaSource, UHLMediaSource::StaticClass, TEXT("UHLMediaSource"), &Z_Registration_Info_UClass_UHLMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLMediaSource), 2595989380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMedia_Private_HLMediaSource_h_557340007(TEXT("/Script/HLMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMedia_Private_HLMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMedia_Private_HLMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
