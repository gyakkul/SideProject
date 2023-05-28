// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIDeveloperSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_WebAPI();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIAuthenticationSettings_NoRegister();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIDeveloperSettings();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIDeveloperSettings_NoRegister();
// End Cross Module References
	void UWebAPIDeveloperSettings::StaticRegisterNativesUWebAPIDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIDeveloperSettings);
	UClass* Z_Construct_UClass_UWebAPIDeveloperSettings_NoRegister()
	{
		return UWebAPIDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserAgent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserAgent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTimeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DateTimeFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideScheme_MetaData[];
#endif
		static void NewProp_bOverrideScheme_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideScheme;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URISchemeOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URISchemeOverride;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URISchemes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URISchemes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_URISchemes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogRequests_MetaData[];
#endif
		static void NewProp_bLogRequests_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogRequests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthenticationSettings_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AuthenticationSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthenticationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AuthenticationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of any auto generated WebAPI settings object.\n */" },
		{ "IncludePath", "WebAPIDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "ToolTip", "The base class of any auto generated WebAPI settings object." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_Host_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The default host address to access this API. */" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "ToolTip", "The default host address to access this API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDeveloperSettings, Host), METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_BaseUrl_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The Url path relative to the host address, ie. \"/V1\". */" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "ToolTip", "The Url path relative to the host address, ie. \"/V1\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_BaseUrl = { "BaseUrl", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDeveloperSettings, BaseUrl), METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_BaseUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_BaseUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_UserAgent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The UserAgent to encode in Http request headers. */" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "ToolTip", "The UserAgent to encode in Http request headers." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_UserAgent = { "UserAgent", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDeveloperSettings, UserAgent), METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_UserAgent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_UserAgent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_DateTimeFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The date-time format this API uses to encode/decode from string. */" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "ToolTip", "The date-time format this API uses to encode/decode from string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_DateTimeFormat = { "DateTimeFormat", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDeveloperSettings, DateTimeFormat), METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_DateTimeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_DateTimeFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bOverrideScheme_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to override the URI scheme. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "ToolTip", "Whether to override the URI scheme." },
	};
#endif
	void Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bOverrideScheme_SetBit(void* Obj)
	{
		((UWebAPIDeveloperSettings*)Obj)->bOverrideScheme = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bOverrideScheme = { "bOverrideScheme", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIDeveloperSettings), &Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bOverrideScheme_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bOverrideScheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bOverrideScheme_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemeOverride_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** User specified Uniform Resource Identifier scheme. */" },
		{ "EditCondition", "bOverrideScheme" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "ToolTip", "User specified Uniform Resource Identifier scheme." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemeOverride = { "URISchemeOverride", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDeveloperSettings, URISchemeOverride), METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemeOverride_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemes_Inner = { "URISchemes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Uniform Resource Identifier schemes (ie. https, http). */" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "ToolTip", "Uniform Resource Identifier schemes (ie. https, http)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemes = { "URISchemes", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDeveloperSettings, URISchemes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bLogRequests_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** Whether to print requests to the output log, useful for debugging. */" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "ToolTip", "Whether to print requests to the output log, useful for debugging." },
	};
#endif
	void Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bLogRequests_SetBit(void* Obj)
	{
		((UWebAPIDeveloperSettings*)Obj)->bLogRequests = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bLogRequests = { "bLogRequests", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIDeveloperSettings), &Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bLogRequests_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bLogRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bLogRequests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings_Inner_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Authentication settings per security scheme. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "TitleProperty", "SchemeName" },
		{ "ToolTip", "Authentication settings per security scheme." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings_Inner = { "AuthenticationSettings", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIAuthenticationSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Authentication settings per security scheme. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebAPIDeveloperSettings.h" },
		{ "TitleProperty", "SchemeName" },
		{ "ToolTip", "Authentication settings per security scheme." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings = { "AuthenticationSettings", nullptr, (EPropertyFlags)0x001400800200004d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIDeveloperSettings, AuthenticationSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_BaseUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_UserAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_DateTimeFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bOverrideScheme,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemeOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_URISchemes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_bLogRequests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::NewProp_AuthenticationSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::ClassParams = {
		&UWebAPIDeveloperSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::PropPointers),
		0,
		0x009000A7u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UWebAPIDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIDeveloperSettings.OuterSingleton, Z_Construct_UClass_UWebAPIDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIDeveloperSettings.OuterSingleton;
	}
	template<> WEBAPI_API UClass* StaticClass<UWebAPIDeveloperSettings>()
	{
		return UWebAPIDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIDeveloperSettings);
	UWebAPIDeveloperSettings::~UWebAPIDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIDeveloperSettings, UWebAPIDeveloperSettings::StaticClass, TEXT("UWebAPIDeveloperSettings"), &Z_Registration_Info_UClass_UWebAPIDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIDeveloperSettings), 2802404447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_982235110(TEXT("/Script/WebAPI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIDeveloperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
