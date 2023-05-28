// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjaMediaSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaMediaSettings() {}
// Cross Module References
	AJAMEDIA_API UClass* Z_Construct_UClass_UAjaMediaSettings();
	AJAMEDIA_API UClass* Z_Construct_UClass_UAjaMediaSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AjaMedia();
// End Cross Module References
	void UAjaMediaSettings::StaticRegisterNativesUAjaMediaSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAjaMediaSettings);
	UClass* Z_Construct_UClass_UAjaMediaSettings_NoRegister()
	{
		return UAjaMediaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAjaMediaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAjaMediaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the AjaMedia plug-in.\n */" },
		{ "IncludePath", "AjaMediaSettings.h" },
		{ "ModuleRelativePath", "Public/AjaMediaSettings.h" },
		{ "ToolTip", "Settings for the AjaMedia plug-in." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAjaMediaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAjaMediaSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAjaMediaSettings_Statics::ClassParams = {
		&UAjaMediaSettings::StaticClass,
		"AjaMedia",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAjaMediaSettings()
	{
		if (!Z_Registration_Info_UClass_UAjaMediaSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAjaMediaSettings.OuterSingleton, Z_Construct_UClass_UAjaMediaSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAjaMediaSettings.OuterSingleton;
	}
	template<> AJAMEDIA_API UClass* StaticClass<UAjaMediaSettings>()
	{
		return UAjaMediaSettings::StaticClass();
	}
	UAjaMediaSettings::UAjaMediaSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAjaMediaSettings);
	UAjaMediaSettings::~UAjaMediaSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAjaMediaSettings, UAjaMediaSettings::StaticClass, TEXT("UAjaMediaSettings"), &Z_Registration_Info_UClass_UAjaMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAjaMediaSettings), 2998612468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSettings_h_1455832320(TEXT("/Script/AjaMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
