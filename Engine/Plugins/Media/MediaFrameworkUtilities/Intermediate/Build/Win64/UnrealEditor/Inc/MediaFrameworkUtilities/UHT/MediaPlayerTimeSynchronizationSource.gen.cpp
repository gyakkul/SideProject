// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlayerTimeSynchronizationSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerTimeSynchronizationSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilities();
// End Cross Module References
	void UMediaPlayerTimeSynchronizationSource::StaticRegisterNativesUMediaPlayerTimeSynchronizationSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlayerTimeSynchronizationSource);
	UClass* Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_NoRegister()
	{
		return UMediaPlayerTimeSynchronizationSource::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeSynchronizationSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Synchronization Source using the Media Player framework\n */" },
		{ "IncludePath", "MediaPlayerTimeSynchronizationSource.h" },
		{ "ModuleRelativePath", "Public/MediaPlayerTimeSynchronizationSource.h" },
		{ "ToolTip", "Synchronization Source using the Media Player framework" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/* Media source asset of this input*/" },
		{ "ModuleRelativePath", "Public/MediaPlayerTimeSynchronizationSource.h" },
		{ "ToolTip", "Media source asset of this input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlayerTimeSynchronizationSource, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/* Texture linked to the media player*/" },
		{ "ModuleRelativePath", "Public/MediaPlayerTimeSynchronizationSource.h" },
		{ "ToolTip", "Texture linked to the media player" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlayerTimeSynchronizationSource, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::NewProp_MediaTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlayerTimeSynchronizationSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::ClassParams = {
		&UMediaPlayerTimeSynchronizationSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource()
	{
		if (!Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.OuterSingleton, Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<UMediaPlayerTimeSynchronizationSource>()
	{
		return UMediaPlayerTimeSynchronizationSource::StaticClass();
	}
	UMediaPlayerTimeSynchronizationSource::UMediaPlayerTimeSynchronizationSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlayerTimeSynchronizationSource);
	UMediaPlayerTimeSynchronizationSource::~UMediaPlayerTimeSynchronizationSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlayerTimeSynchronizationSource, UMediaPlayerTimeSynchronizationSource::StaticClass, TEXT("UMediaPlayerTimeSynchronizationSource"), &Z_Registration_Info_UClass_UMediaPlayerTimeSynchronizationSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlayerTimeSynchronizationSource), 34780245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_788198318(TEXT("/Script/MediaFrameworkUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaPlayerTimeSynchronizationSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
