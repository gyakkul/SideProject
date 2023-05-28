// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Settings/TcpMessagingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTcpMessagingSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TCPMESSAGING_API UClass* Z_Construct_UClass_UTcpMessagingSettings();
	TCPMESSAGING_API UClass* Z_Construct_UClass_UTcpMessagingSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TcpMessaging();
// End Cross Module References
	void UTcpMessagingSettings::StaticRegisterNativesUTcpMessagingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTcpMessagingSettings);
	UClass* Z_Construct_UClass_UTcpMessagingSettings_NoRegister()
	{
		return UTcpMessagingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTcpMessagingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableTransport_MetaData[];
#endif
		static void NewProp_EnableTransport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableTransport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ListenEndpoint;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectToEndpoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectToEndpoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectToEndpoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionRetryDelay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionRetryDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionRetryPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionRetryPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopServiceWhenAppDeactivates_MetaData[];
#endif
		static void NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopServiceWhenAppDeactivates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTcpMessagingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TcpMessaging,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/TcpMessagingSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** Whether the TCP transport channel is enabled */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "Whether the TCP transport channel is enabled" },
	};
#endif
	void Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_SetBit(void* Obj)
	{
		((UTcpMessagingSettings*)Obj)->EnableTransport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport = { "EnableTransport", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTcpMessagingSettings), &Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to listen for incoming connections.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER or blank to disable listening.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to listen for incoming connections.\n\nThe format is IP_ADDRESS:PORT_NUMBER or blank to disable listening." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint = { "ListenEndpoint", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTcpMessagingSettings, ListenEndpoint), METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_Inner = { "ConnectToEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoints to try to establish outgoing connection to.\n\x09 *\n\x09 * Use this setting to connect to a remote peer.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints to try to establish outgoing connection to.\n\nUse this setting to connect to a remote peer.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints = { "ConnectToEndpoints", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTcpMessagingSettings, ConnectToEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Delay time between attempts to re-establish outgoing connections that become disconnected or fail to connect\n\x09 * 0 disables reconnection\n\x09 */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "Delay time between attempts to re-establish outgoing connections that become disconnected or fail to connect\n0 disables reconnection" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay = { "ConnectionRetryDelay", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTcpMessagingSettings, ConnectionRetryDelay), METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryPeriod_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Period time during which attempts to re-establish outgoing connections that become disconnected or fail to connect\n\x09 * 0 means it will be retried only once\n\x09 */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "Period time during which attempts to re-establish outgoing connections that become disconnected or fail to connect\n0 means it will be retried only once" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryPeriod = { "ConnectionRetryPeriod", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTcpMessagingSettings, ConnectionRetryPeriod), METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData[] = {
		{ "Comment", "/** Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated" },
	};
#endif
	void Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj)
	{
		((UTcpMessagingSettings*)Obj)->bStopServiceWhenAppDeactivates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates = { "bStopServiceWhenAppDeactivates", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTcpMessagingSettings), &Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTcpMessagingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTcpMessagingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTcpMessagingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTcpMessagingSettings_Statics::ClassParams = {
		&UTcpMessagingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTcpMessagingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTcpMessagingSettings()
	{
		if (!Z_Registration_Info_UClass_UTcpMessagingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTcpMessagingSettings.OuterSingleton, Z_Construct_UClass_UTcpMessagingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTcpMessagingSettings.OuterSingleton;
	}
	template<> TCPMESSAGING_API UClass* StaticClass<UTcpMessagingSettings>()
	{
		return UTcpMessagingSettings::StaticClass();
	}
	UTcpMessagingSettings::UTcpMessagingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTcpMessagingSettings);
	UTcpMessagingSettings::~UTcpMessagingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTcpMessagingSettings, UTcpMessagingSettings::StaticClass, TEXT("UTcpMessagingSettings"), &Z_Registration_Info_UClass_UTcpMessagingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTcpMessagingSettings), 3713334006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_747114969(TEXT("/Script/TcpMessaging"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_TcpMessaging_Source_TcpMessaging_Private_Settings_TcpMessagingSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
