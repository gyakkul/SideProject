// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaBundleTimeSynchronizationSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaBundleTimeSynchronizationSource() {}
// Cross Module References
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaBundle_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaBundleTimeSynchronizationSource();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilities();
// End Cross Module References
	void UMediaBundleTimeSynchronizationSource::StaticRegisterNativesUMediaBundleTimeSynchronizationSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaBundleTimeSynchronizationSource);
	UClass* Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_NoRegister()
	{
		return UMediaBundleTimeSynchronizationSource::StaticClass();
	}
	struct Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaBundle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaBundle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeSynchronizationSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Synchronization Source using the Media Bundle\n */" },
		{ "IncludePath", "MediaBundleTimeSynchronizationSource.h" },
		{ "ModuleRelativePath", "Public/MediaBundleTimeSynchronizationSource.h" },
		{ "ToolTip", "Synchronization Source using the Media Bundle" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::NewProp_MediaBundle_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/* Media bundle asset of this input*/" },
		{ "ModuleRelativePath", "Public/MediaBundleTimeSynchronizationSource.h" },
		{ "ToolTip", "Media bundle asset of this input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::NewProp_MediaBundle = { "MediaBundle", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundleTimeSynchronizationSource, MediaBundle), Z_Construct_UClass_UMediaBundle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::NewProp_MediaBundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::NewProp_MediaBundle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::NewProp_MediaBundle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaBundleTimeSynchronizationSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::ClassParams = {
		&UMediaBundleTimeSynchronizationSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaBundleTimeSynchronizationSource()
	{
		if (!Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.OuterSingleton, Z_Construct_UClass_UMediaBundleTimeSynchronizationSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<UMediaBundleTimeSynchronizationSource>()
	{
		return UMediaBundleTimeSynchronizationSource::StaticClass();
	}
	UMediaBundleTimeSynchronizationSource::UMediaBundleTimeSynchronizationSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaBundleTimeSynchronizationSource);
	UMediaBundleTimeSynchronizationSource::~UMediaBundleTimeSynchronizationSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleTimeSynchronizationSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleTimeSynchronizationSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaBundleTimeSynchronizationSource, UMediaBundleTimeSynchronizationSource::StaticClass, TEXT("UMediaBundleTimeSynchronizationSource"), &Z_Registration_Info_UClass_UMediaBundleTimeSynchronizationSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaBundleTimeSynchronizationSource), 1669954054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleTimeSynchronizationSource_h_498577479(TEXT("/Script/MediaFrameworkUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleTimeSynchronizationSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleTimeSynchronizationSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
