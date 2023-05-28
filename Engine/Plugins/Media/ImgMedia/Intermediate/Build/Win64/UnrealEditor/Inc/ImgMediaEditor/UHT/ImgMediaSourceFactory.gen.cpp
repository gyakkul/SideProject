// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../ImgMediaEditor/Private/Factories/ImgMediaSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaSourceFactory() {}
// Cross Module References
	IMGMEDIAEDITOR_API UClass* Z_Construct_UClass_UImgMediaSourceFactory();
	IMGMEDIAEDITOR_API UClass* Z_Construct_UClass_UImgMediaSourceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ImgMediaEditor();
// End Cross Module References
	void UImgMediaSourceFactory::StaticRegisterNativesUImgMediaSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImgMediaSourceFactory);
	UClass* Z_Construct_UClass_UImgMediaSourceFactory_NoRegister()
	{
		return UImgMediaSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UImgMediaSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImgMediaSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UImgMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ImgMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/ImgMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UImgMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImgMediaSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImgMediaSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImgMediaSourceFactory_Statics::ClassParams = {
		&UImgMediaSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UImgMediaSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImgMediaSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UImgMediaSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImgMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UImgMediaSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImgMediaSourceFactory.OuterSingleton;
	}
	template<> IMGMEDIAEDITOR_API UClass* StaticClass<UImgMediaSourceFactory>()
	{
		return UImgMediaSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImgMediaSourceFactory);
	UImgMediaSourceFactory::~UImgMediaSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImgMediaSourceFactory, UImgMediaSourceFactory::StaticClass, TEXT("UImgMediaSourceFactory"), &Z_Registration_Info_UClass_UImgMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImgMediaSourceFactory), 3283004118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_108920611(TEXT("/Script/ImgMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Factories_ImgMediaSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
