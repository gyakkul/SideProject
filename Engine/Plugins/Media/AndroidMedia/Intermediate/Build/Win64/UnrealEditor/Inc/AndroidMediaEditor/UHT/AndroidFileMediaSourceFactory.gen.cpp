// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidFileMediaSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidFileMediaSourceFactory() {}
// Cross Module References
	ANDROIDMEDIAEDITOR_API UClass* Z_Construct_UClass_UAndroidFileMediaSourceFactory();
	ANDROIDMEDIAEDITOR_API UClass* Z_Construct_UClass_UAndroidFileMediaSourceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AndroidMediaEditor();
// End Cross Module References
	void UAndroidFileMediaSourceFactory::StaticRegisterNativesUAndroidFileMediaSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidFileMediaSourceFactory);
	UClass* Z_Construct_UClass_UAndroidFileMediaSourceFactory_NoRegister()
	{
		return UAndroidFileMediaSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UFileMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AndroidFileMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/AndroidFileMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UFileMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidFileMediaSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics::ClassParams = {
		&UAndroidFileMediaSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidFileMediaSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UAndroidFileMediaSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidFileMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UAndroidFileMediaSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidFileMediaSourceFactory.OuterSingleton;
	}
	template<> ANDROIDMEDIAEDITOR_API UClass* StaticClass<UAndroidFileMediaSourceFactory>()
	{
		return UAndroidFileMediaSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidFileMediaSourceFactory);
	UAndroidFileMediaSourceFactory::~UAndroidFileMediaSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidFileMediaSourceFactory, UAndroidFileMediaSourceFactory::StaticClass, TEXT("UAndroidFileMediaSourceFactory"), &Z_Registration_Info_UClass_UAndroidFileMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidFileMediaSourceFactory), 3270823123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_13581310(TEXT("/Script/AndroidMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaEditor_Private_AndroidFileMediaSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
