// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Security/WebAPIAuthentication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIAuthentication() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_WebAPI();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIAuthenticationSettings();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIAuthenticationSettings_NoRegister();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIOAuthSettings();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIOAuthSettings_NoRegister();
// End Cross Module References
	void UWebAPIAuthenticationSettings::StaticRegisterNativesUWebAPIAuthenticationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIAuthenticationSettings);
	UClass* Z_Construct_UClass_UWebAPIAuthenticationSettings_NoRegister()
	{
		return UWebAPIAuthenticationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SchemeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Security/WebAPIAuthentication.h" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::NewProp_SchemeName_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Public client identifier. */" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
		{ "ToolTip", "Public client identifier." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::NewProp_SchemeName = { "SchemeName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIAuthenticationSettings, SchemeName), METADATA_PARAMS(Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::NewProp_SchemeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::NewProp_SchemeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::NewProp_SchemeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIAuthenticationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::ClassParams = {
		&UWebAPIAuthenticationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIAuthenticationSettings()
	{
		if (!Z_Registration_Info_UClass_UWebAPIAuthenticationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIAuthenticationSettings.OuterSingleton, Z_Construct_UClass_UWebAPIAuthenticationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIAuthenticationSettings.OuterSingleton;
	}
	template<> WEBAPI_API UClass* StaticClass<UWebAPIAuthenticationSettings>()
	{
		return UWebAPIAuthenticationSettings::StaticClass();
	}
	UWebAPIAuthenticationSettings::UWebAPIAuthenticationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIAuthenticationSettings);
	UWebAPIAuthenticationSettings::~UWebAPIAuthenticationSettings() {}
	void UWebAPIOAuthSettings::StaticRegisterNativesUWebAPIOAuthSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOAuthSettings);
	UClass* Z_Construct_UClass_UWebAPIOAuthSettings_NoRegister()
	{
		return UWebAPIOAuthSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOAuthSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TokenType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TokenType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccessToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpiresOn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpiresOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthenticationServer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuthenticationServer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalRequestQueryParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalRequestQueryParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRequestQueryParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AdditionalRequestQueryParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalRequestBodyParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalRequestBodyParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRequestBodyParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AdditionalRequestBodyParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIOAuthSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIAuthenticationSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOAuthSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Security/WebAPIAuthentication.h" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Public client identifier. */" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
		{ "ToolTip", "Public client identifier." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOAuthSettings, ClientId), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientSecret_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Private client secret.  */" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
		{ "ToolTip", "Private client secret." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOAuthSettings, ClientSecret), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientSecret_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_TokenType_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Token type, ie. Bearer  */" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
		{ "ToolTip", "Token type, ie. Bearer" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_TokenType = { "TokenType", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOAuthSettings, TokenType), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_TokenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_TokenType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AccessToken_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Private token returned by the server.  */" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
		{ "ToolTip", "Private token returned by the server." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOAuthSettings, AccessToken), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ExpiresOn_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Private token expiration returned by the server.  */" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
		{ "ToolTip", "Private token expiration returned by the server." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ExpiresOn = { "ExpiresOn", nullptr, (EPropertyFlags)0x0010000000024015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOAuthSettings, ExpiresOn), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ExpiresOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ExpiresOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AuthenticationServer_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Authentication endpoint. */" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
		{ "ToolTip", "Authentication endpoint." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AuthenticationServer = { "AuthenticationServer", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOAuthSettings, AuthenticationServer), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AuthenticationServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AuthenticationServer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestQueryParameters_ValueProp = { "AdditionalRequestQueryParameters", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestQueryParameters_Key_KeyProp = { "AdditionalRequestQueryParameters_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestQueryParameters_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Additional query parameters to add to auth request. Each key should be present in the Url. */" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
		{ "ToolTip", "Additional query parameters to add to auth request. Each key should be present in the Url." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestQueryParameters = { "AdditionalRequestQueryParameters", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOAuthSettings, AdditionalRequestQueryParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestQueryParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestQueryParameters_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestBodyParameters_ValueProp = { "AdditionalRequestBodyParameters", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestBodyParameters_Key_KeyProp = { "AdditionalRequestBodyParameters_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestBodyParameters_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Additional content key/value pairs to add to auth request. */" },
		{ "ModuleRelativePath", "Public/Security/WebAPIAuthentication.h" },
		{ "ToolTip", "Additional content key/value pairs to add to auth request." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestBodyParameters = { "AdditionalRequestBodyParameters", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOAuthSettings, AdditionalRequestBodyParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestBodyParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestBodyParameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIOAuthSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ClientSecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_TokenType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AccessToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_ExpiresOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AuthenticationServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestQueryParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestQueryParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestQueryParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestBodyParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestBodyParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOAuthSettings_Statics::NewProp_AdditionalRequestBodyParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOAuthSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOAuthSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOAuthSettings_Statics::ClassParams = {
		&UWebAPIOAuthSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIOAuthSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOAuthSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOAuthSettings()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOAuthSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOAuthSettings.OuterSingleton, Z_Construct_UClass_UWebAPIOAuthSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOAuthSettings.OuterSingleton;
	}
	template<> WEBAPI_API UClass* StaticClass<UWebAPIOAuthSettings>()
	{
		return UWebAPIOAuthSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOAuthSettings);
	UWebAPIOAuthSettings::~UWebAPIOAuthSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIAuthenticationSettings, UWebAPIAuthenticationSettings::StaticClass, TEXT("UWebAPIAuthenticationSettings"), &Z_Registration_Info_UClass_UWebAPIAuthenticationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIAuthenticationSettings), 4061002502U) },
		{ Z_Construct_UClass_UWebAPIOAuthSettings, UWebAPIOAuthSettings::StaticClass, TEXT("UWebAPIOAuthSettings"), &Z_Registration_Info_UClass_UWebAPIOAuthSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOAuthSettings), 3595304419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_1938230366(TEXT("/Script/WebAPI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_Security_WebAPIAuthentication_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
