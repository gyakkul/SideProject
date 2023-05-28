// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GoogleARCoreServicesEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreServicesEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GOOGLEARCORESERVICES_API UClass* Z_Construct_UClass_UGoogleARCoreServicesEditorSettings();
	GOOGLEARCORESERVICES_API UClass* Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreServices();
// End Cross Module References
	void UGoogleARCoreServicesEditorSettings::StaticRegisterNativesUGoogleARCoreServicesEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreServicesEditorSettings);
	UClass* Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_NoRegister()
	{
		return UGoogleARCoreServicesEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidAPIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidAPIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IOSAPIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IOSAPIKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreServices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Helper class used to expose GoogleARCoreServices setting in the Editor plugin settings.\n*/" },
		{ "IncludePath", "GoogleARCoreServicesEditorSettings.h" },
		{ "ModuleRelativePath", "Private/GoogleARCoreServicesEditorSettings.h" },
		{ "ToolTip", "Helper class used to expose GoogleARCoreServices setting in the Editor plugin settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_AndroidAPIKey_MetaData[] = {
		{ "Category", "ARCore Services Plugin Settings" },
		{ "Comment", "/** The API key for GoogleARCoreServices on Android platform. */" },
		{ "ModuleRelativePath", "Private/GoogleARCoreServicesEditorSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The API key for GoogleARCoreServices on Android platform." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_AndroidAPIKey = { "AndroidAPIKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreServicesEditorSettings, AndroidAPIKey), METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_AndroidAPIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_AndroidAPIKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_IOSAPIKey_MetaData[] = {
		{ "Category", "ARCore Services Plugin Settings" },
		{ "Comment", "/** The API key for GoogleARCoreServices on iOS platform. */" },
		{ "ModuleRelativePath", "Private/GoogleARCoreServicesEditorSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The API key for GoogleARCoreServices on iOS platform." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_IOSAPIKey = { "IOSAPIKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreServicesEditorSettings, IOSAPIKey), METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_IOSAPIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_IOSAPIKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_AndroidAPIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::NewProp_IOSAPIKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreServicesEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::ClassParams = {
		&UGoogleARCoreServicesEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreServicesEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreServicesEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreServicesEditorSettings.OuterSingleton, Z_Construct_UClass_UGoogleARCoreServicesEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreServicesEditorSettings.OuterSingleton;
	}
	template<> GOOGLEARCORESERVICES_API UClass* StaticClass<UGoogleARCoreServicesEditorSettings>()
	{
		return UGoogleARCoreServicesEditorSettings::StaticClass();
	}
	UGoogleARCoreServicesEditorSettings::UGoogleARCoreServicesEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreServicesEditorSettings);
	UGoogleARCoreServicesEditorSettings::~UGoogleARCoreServicesEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Private_GoogleARCoreServicesEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Private_GoogleARCoreServicesEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreServicesEditorSettings, UGoogleARCoreServicesEditorSettings::StaticClass, TEXT("UGoogleARCoreServicesEditorSettings"), &Z_Registration_Info_UClass_UGoogleARCoreServicesEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreServicesEditorSettings), 2008063220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Private_GoogleARCoreServicesEditorSettings_h_3323156237(TEXT("/Script/GoogleARCoreServices"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Private_GoogleARCoreServicesEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Private_GoogleARCoreServicesEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
