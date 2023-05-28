// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../HLMediaEditor/Private/HLMediaSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLMediaSourceFactory() {}
// Cross Module References
	HLMEDIAEDITOR_API UClass* Z_Construct_UClass_UHLMediaSourceFactory();
	HLMEDIAEDITOR_API UClass* Z_Construct_UClass_UHLMediaSourceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_HLMediaEditor();
// End Cross Module References
	void UHLMediaSourceFactory::StaticRegisterNativesUHLMediaSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLMediaSourceFactory);
	UClass* Z_Construct_UClass_UHLMediaSourceFactory_NoRegister()
	{
		return UHLMediaSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHLMediaSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLMediaSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HLMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLMediaSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UHLMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "HLMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/HLMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UHLMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLMediaSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLMediaSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLMediaSourceFactory_Statics::ClassParams = {
		&UHLMediaSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHLMediaSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLMediaSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLMediaSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UHLMediaSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UHLMediaSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLMediaSourceFactory.OuterSingleton;
	}
	template<> HLMEDIAEDITOR_API UClass* StaticClass<UHLMediaSourceFactory>()
	{
		return UHLMediaSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLMediaSourceFactory);
	UHLMediaSourceFactory::~UHLMediaSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMediaEditor_Private_HLMediaSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMediaEditor_Private_HLMediaSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLMediaSourceFactory, UHLMediaSourceFactory::StaticClass, TEXT("UHLMediaSourceFactory"), &Z_Registration_Info_UClass_UHLMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLMediaSourceFactory), 3447605343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMediaEditor_Private_HLMediaSourceFactory_h_2854116293(TEXT("/Script/HLMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMediaEditor_Private_HLMediaSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_HLMedia_Source_HLMediaEditor_Private_HLMediaSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
