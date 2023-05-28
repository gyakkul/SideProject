// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformMediaSource.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UPlatformMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UPlatformMediaSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	void UPlatformMediaSource::StaticRegisterNativesUPlatformMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformMediaSource);
	UClass* Z_Construct_UClass_UPlatformMediaSource_NoRegister()
	{
		return UPlatformMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlatformMediaSources_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformMediaSources_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMediaSources_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformMediaSources;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A media source that selects other media sources based on target platform.\n *\n * Use this asset to override media sources on a per-platform basis.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PlatformMediaSource.h" },
		{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
		{ "ToolTip", "A media source that selects other media sources based on target platform.\n\nUse this asset to override media sources on a per-platform basis." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_ValueProp = { "PlatformMediaSources", nullptr, (EPropertyFlags)0x0004000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_Key_KeyProp = { "PlatformMediaSources_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_MetaData[] = {
		{ "Category", "Sources" },
		{ "Comment", "/** Media sources per platform. */" },
		{ "DisplayName", "Media Sources" },
		{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
		{ "ToolTip", "Media sources per platform." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources = { "PlatformMediaSources", nullptr, (EPropertyFlags)0x0014000800002001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformMediaSource, PlatformMediaSources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Comment", "/**\n\x09 * Default media source.\n\x09 *\n\x09 * This media source will be used if no source was specified for a target platform.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
		{ "ToolTip", "Default media source.\n\nThis media source will be used if no source was specified for a target platform." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformMediaSource, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformMediaSource_Statics::ClassParams = {
		&UPlatformMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformMediaSource()
	{
		if (!Z_Registration_Info_UClass_UPlatformMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformMediaSource.OuterSingleton, Z_Construct_UClass_UPlatformMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformMediaSource.OuterSingleton;
	}
	template<> MEDIAASSETS_API UClass* StaticClass<UPlatformMediaSource>()
	{
		return UPlatformMediaSource::StaticClass();
	}
	UPlatformMediaSource::UPlatformMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformMediaSource);
	UPlatformMediaSource::~UPlatformMediaSource() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPlatformMediaSource)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformMediaSource, UPlatformMediaSource::StaticClass, TEXT("UPlatformMediaSource"), &Z_Registration_Info_UClass_UPlatformMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformMediaSource), 2899192758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_2420987540(TEXT("/Script/MediaAssets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
