// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamMediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UStreamMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UStreamMediaSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	void UStreamMediaSource::StaticRegisterNativesUStreamMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamMediaSource);
	UClass* Z_Construct_UClass_UStreamMediaSource_NoRegister()
	{
		return UStreamMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UStreamMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "StreamMediaSource.h" },
		{ "ModuleRelativePath", "Public/StreamMediaSource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl_MetaData[] = {
		{ "Category", "Stream" },
		{ "Comment", "/** The URL to the media stream to be played. */" },
		{ "ModuleRelativePath", "Public/StreamMediaSource.h" },
		{ "ToolTip", "The URL to the media stream to be played." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl = { "StreamUrl", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamMediaSource, StreamUrl), METADATA_PARAMS(Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamMediaSource_Statics::ClassParams = {
		&UStreamMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamMediaSource()
	{
		if (!Z_Registration_Info_UClass_UStreamMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamMediaSource.OuterSingleton, Z_Construct_UClass_UStreamMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStreamMediaSource.OuterSingleton;
	}
	template<> MEDIAASSETS_API UClass* StaticClass<UStreamMediaSource>()
	{
		return UStreamMediaSource::StaticClass();
	}
	UStreamMediaSource::UStreamMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamMediaSource);
	UStreamMediaSource::~UStreamMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStreamMediaSource, UStreamMediaSource::StaticClass, TEXT("UStreamMediaSource"), &Z_Registration_Info_UClass_UStreamMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamMediaSource), 1569497508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_3125438037(TEXT("/Script/MediaAssets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
