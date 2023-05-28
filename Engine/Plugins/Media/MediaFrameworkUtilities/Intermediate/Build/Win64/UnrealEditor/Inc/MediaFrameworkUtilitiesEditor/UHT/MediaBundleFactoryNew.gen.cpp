// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaBundleFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaBundleFactoryNew() {}
// Cross Module References
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UActorFactoryMediaBundle();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UActorFactoryMediaBundle_NoRegister();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaBundleFactoryNew();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaBundleFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor();
// End Cross Module References
	void UMediaBundleFactoryNew::StaticRegisterNativesUMediaBundleFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaBundleFactoryNew);
	UClass* Z_Construct_UClass_UMediaBundleFactoryNew_NoRegister()
	{
		return UMediaBundleFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMediaBundleFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaBundleFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundleFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UMediaPlayer objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaBundleFactoryNew.h" },
		{ "ModuleRelativePath", "Private/MediaBundleFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UMediaPlayer objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaBundleFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaBundleFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaBundleFactoryNew_Statics::ClassParams = {
		&UMediaBundleFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMediaBundleFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundleFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaBundleFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UMediaBundleFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaBundleFactoryNew.OuterSingleton, Z_Construct_UClass_UMediaBundleFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaBundleFactoryNew.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UMediaBundleFactoryNew>()
	{
		return UMediaBundleFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaBundleFactoryNew);
	UMediaBundleFactoryNew::~UMediaBundleFactoryNew() {}
	void UActorFactoryMediaBundle::StaticRegisterNativesUActorFactoryMediaBundle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryMediaBundle);
	UClass* Z_Construct_UClass_UActorFactoryMediaBundle_NoRegister()
	{
		return UActorFactoryMediaBundle::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryMediaBundle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryMediaBundle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryMediaBundle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MediaBundleFactoryNew.h" },
		{ "ModuleRelativePath", "Private/MediaBundleFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryMediaBundle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryMediaBundle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryMediaBundle_Statics::ClassParams = {
		&UActorFactoryMediaBundle::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryMediaBundle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryMediaBundle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryMediaBundle()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryMediaBundle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryMediaBundle.OuterSingleton, Z_Construct_UClass_UActorFactoryMediaBundle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryMediaBundle.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UActorFactoryMediaBundle>()
	{
		return UActorFactoryMediaBundle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryMediaBundle);
	UActorFactoryMediaBundle::~UActorFactoryMediaBundle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaBundleFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaBundleFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaBundleFactoryNew, UMediaBundleFactoryNew::StaticClass, TEXT("UMediaBundleFactoryNew"), &Z_Registration_Info_UClass_UMediaBundleFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaBundleFactoryNew), 511543559U) },
		{ Z_Construct_UClass_UActorFactoryMediaBundle, UActorFactoryMediaBundle::StaticClass, TEXT("UActorFactoryMediaBundle"), &Z_Registration_Info_UClass_UActorFactoryMediaBundle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryMediaBundle), 3568297768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaBundleFactoryNew_h_3770592126(TEXT("/Script/MediaFrameworkUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaBundleFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaBundleFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
