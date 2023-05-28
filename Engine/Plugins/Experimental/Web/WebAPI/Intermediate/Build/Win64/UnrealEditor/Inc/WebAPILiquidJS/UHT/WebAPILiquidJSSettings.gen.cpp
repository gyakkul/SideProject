// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WebAPILiquidJSSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPILiquidJSSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_WebAPILiquidJS();
	WEBAPILIQUIDJS_API UClass* Z_Construct_UClass_UWebAPILiquidJSSettings();
	WEBAPILIQUIDJS_API UClass* Z_Construct_UClass_UWebAPILiquidJSSettings_NoRegister();
// End Cross Module References
	void UWebAPILiquidJSSettings::StaticRegisterNativesUWebAPILiquidJSSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPILiquidJSSettings);
	UClass* Z_Construct_UClass_UWebAPILiquidJSSettings_NoRegister()
	{
		return UWebAPILiquidJSSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPILiquidJSSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceWebAppBuildAtStartup_MetaData[];
#endif
		static void NewProp_bForceWebAppBuildAtStartup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceWebAppBuildAtStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWebAppLogRequestDuration_MetaData[];
#endif
		static void NewProp_bWebAppLogRequestDuration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWebAppLogRequestDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartWebServer_MetaData[];
#endif
		static void NewProp_bAutoStartWebServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartWebServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartWebSocketServer_MetaData[];
#endif
		static void NewProp_bAutoStartWebSocketServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartWebSocketServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HttpServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HttpServerPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WebSocketServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_WebSocketServerPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServiceUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormattedServiceUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormattedServiceUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormattedWithPort_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FormattedWithPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPILiquidJS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** */" },
		{ "DisplayName", "WebAPI LiquidJS" },
		{ "IncludePath", "WebAPILiquidJSSettings.h" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** The web app http port. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "The web app http port." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPILiquidJSSettings, Port), METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bForceWebAppBuildAtStartup_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** Should force a build of the WebApp at startup. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "Should force a build of the WebApp at startup." },
	};
#endif
	void Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bForceWebAppBuildAtStartup_SetBit(void* Obj)
	{
		((UWebAPILiquidJSSettings*)Obj)->bForceWebAppBuildAtStartup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bForceWebAppBuildAtStartup = { "bForceWebAppBuildAtStartup", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPILiquidJSSettings), &Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bForceWebAppBuildAtStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bForceWebAppBuildAtStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bForceWebAppBuildAtStartup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bWebAppLogRequestDuration_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** Should WebApp log timing. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "Should WebApp log timing." },
	};
#endif
	void Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bWebAppLogRequestDuration_SetBit(void* Obj)
	{
		((UWebAPILiquidJSSettings*)Obj)->bWebAppLogRequestDuration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bWebAppLogRequestDuration = { "bWebAppLogRequestDuration", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPILiquidJSSettings), &Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bWebAppLogRequestDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bWebAppLogRequestDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bWebAppLogRequestDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebServer_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** Whether web server is started automatically. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "Whether web server is started automatically." },
	};
#endif
	void Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebServer_SetBit(void* Obj)
	{
		((UWebAPILiquidJSSettings*)Obj)->bAutoStartWebServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebServer = { "bAutoStartWebServer", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPILiquidJSSettings), &Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebSocketServer_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** Whether web socket server is started automatically. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "Whether web socket server is started automatically." },
	};
#endif
	void Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebSocketServer_SetBit(void* Obj)
	{
		((UWebAPILiquidJSSettings*)Obj)->bAutoStartWebSocketServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebSocketServer = { "bAutoStartWebSocketServer", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPILiquidJSSettings), &Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebSocketServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebSocketServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebSocketServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_HttpServerPort_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** The HTTP server's port. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "The HTTP server's port." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_HttpServerPort = { "HttpServerPort", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPILiquidJSSettings, HttpServerPort), METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_HttpServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_HttpServerPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_WebSocketServerPort_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** The WebSocket server's port. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "The WebSocket server's port." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_WebSocketServerPort = { "WebSocketServerPort", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPILiquidJSSettings, WebSocketServerPort), METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_WebSocketServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_WebSocketServerPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_ServiceUrl_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Service" },
		{ "Comment", "/** The web app url. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "The web app url." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_ServiceUrl = { "ServiceUrl", nullptr, (EPropertyFlags)0x0040000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPILiquidJSSettings, ServiceUrl), METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_ServiceUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_ServiceUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedServiceUrl_MetaData[] = {
		{ "Comment", "/** Cached formatted Url. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "Cached formatted Url." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedServiceUrl = { "FormattedServiceUrl", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPILiquidJSSettings, FormattedServiceUrl), METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedServiceUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedServiceUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedWithPort_MetaData[] = {
		{ "Comment", "/** What port the formatted Url was created with, used to re-cache on port change. */" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSSettings.h" },
		{ "ToolTip", "What port the formatted Url was created with, used to re-cache on port change." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedWithPort = { "FormattedWithPort", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPILiquidJSSettings, FormattedWithPort), METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedWithPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedWithPort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bForceWebAppBuildAtStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bWebAppLogRequestDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_bAutoStartWebSocketServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_HttpServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_WebSocketServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_ServiceUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedServiceUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::NewProp_FormattedWithPort,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPILiquidJSSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::ClassParams = {
		&UWebAPILiquidJSSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPILiquidJSSettings()
	{
		if (!Z_Registration_Info_UClass_UWebAPILiquidJSSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPILiquidJSSettings.OuterSingleton, Z_Construct_UClass_UWebAPILiquidJSSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPILiquidJSSettings.OuterSingleton;
	}
	template<> WEBAPILIQUIDJS_API UClass* StaticClass<UWebAPILiquidJSSettings>()
	{
		return UWebAPILiquidJSSettings::StaticClass();
	}
	UWebAPILiquidJSSettings::UWebAPILiquidJSSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPILiquidJSSettings);
	UWebAPILiquidJSSettings::~UWebAPILiquidJSSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPILiquidJSSettings, UWebAPILiquidJSSettings::StaticClass, TEXT("UWebAPILiquidJSSettings"), &Z_Registration_Info_UClass_UWebAPILiquidJSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPILiquidJSSettings), 3125956938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_4047974471(TEXT("/Script/WebAPILiquidJS"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
