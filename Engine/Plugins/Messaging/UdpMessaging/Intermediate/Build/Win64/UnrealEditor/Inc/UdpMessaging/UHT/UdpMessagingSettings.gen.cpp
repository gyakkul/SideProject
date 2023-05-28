// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shared/UdpMessagingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdpMessagingSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UDPMESSAGING_API UClass* Z_Construct_UClass_UUdpMessagingSettings();
	UDPMESSAGING_API UClass* Z_Construct_UClass_UUdpMessagingSettings_NoRegister();
	UDPMESSAGING_API UEnum* Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat();
	UPackage* Z_Construct_UPackage__Script_UdpMessaging();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUdpMessageFormat;
	static UEnum* EUdpMessageFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUdpMessageFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUdpMessageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat, (UObject*)Z_Construct_UPackage__Script_UdpMessaging(), TEXT("EUdpMessageFormat"));
		}
		return Z_Registration_Info_UEnum_EUdpMessageFormat.OuterSingleton;
	}
	template<> UDPMESSAGING_API UEnum* StaticEnum<EUdpMessageFormat>()
	{
		return EUdpMessageFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enumerators[] = {
		{ "EUdpMessageFormat::None", (int64)EUdpMessageFormat::None },
		{ "EUdpMessageFormat::Json", (int64)EUdpMessageFormat::Json },
		{ "EUdpMessageFormat::TaggedProperty", (int64)EUdpMessageFormat::TaggedProperty },
		{ "EUdpMessageFormat::CborPlatformEndianness", (int64)EUdpMessageFormat::CborPlatformEndianness },
		{ "EUdpMessageFormat::CborStandardEndianness", (int64)EUdpMessageFormat::CborStandardEndianness },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enum_MetaDataParams[] = {
		{ "CborPlatformEndianness.Comment", "/**\n\x09 * UDP messages are encoded in CBOR, using the platform endianness. This is the fastest and preferred option, but the CBOR data will not be readable by an external standard-compliant CBOR parser\n\x09 * if generated from a little endian platform. If the data needs to be consumed outside the Unreal Engine, consider using CborStandardEndianness format instead.\n\x09 */" },
		{ "CborPlatformEndianness.DisplayName", "CBOR (Platform Endianness)" },
		{ "CborPlatformEndianness.Name", "EUdpMessageFormat::CborPlatformEndianness" },
		{ "CborPlatformEndianness.ToolTip", "UDP messages are encoded in CBOR, using the platform endianness. This is the fastest and preferred option, but the CBOR data will not be readable by an external standard-compliant CBOR parser\nif generated from a little endian platform. If the data needs to be consumed outside the Unreal Engine, consider using CborStandardEndianness format instead." },
		{ "CborStandardEndianness.Comment", "/**\n\x09 * UDP messages are encoded in CBOR, using the CBOR standard-complinant endianness (big endian). It will perform slower on a little-endian platform, but the data will be readable by standard CBOR parsers.\n\x09 * Useful if the UDP messages needs to be analyzed/consumed outside the Unreal Engine.\n\x09 */" },
		{ "CborStandardEndianness.DisplayName", "CBOR (Standard Endianness)" },
		{ "CborStandardEndianness.Name", "EUdpMessageFormat::CborStandardEndianness" },
		{ "CborStandardEndianness.ToolTip", "UDP messages are encoded in CBOR, using the CBOR standard-complinant endianness (big endian). It will perform slower on a little-endian platform, but the data will be readable by standard CBOR parsers.\nUseful if the UDP messages needs to be analyzed/consumed outside the Unreal Engine." },
		{ "Comment", "/** Defines the UDP message format available (how the message data is encoded). */" },
		{ "Json.Comment", "/** JSON format specified. Legacy - Not exposed to user.*/" },
		{ "Json.Hidden", "" },
		{ "Json.Name", "EUdpMessageFormat::Json" },
		{ "Json.ToolTip", "JSON format specified. Legacy - Not exposed to user." },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "None.Comment", "/** No format specified. Legacy - Not exposed to user.*/" },
		{ "None.Hidden", "" },
		{ "None.Name", "EUdpMessageFormat::None" },
		{ "None.ToolTip", "No format specified. Legacy - Not exposed to user." },
		{ "TaggedProperty.Comment", "/** Tagged property format specified. Legacy - Not exposed to user.*/" },
		{ "TaggedProperty.Hidden", "" },
		{ "TaggedProperty.Name", "EUdpMessageFormat::TaggedProperty" },
		{ "TaggedProperty.ToolTip", "Tagged property format specified. Legacy - Not exposed to user." },
		{ "ToolTip", "Defines the UDP message format available (how the message data is encoded)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UdpMessaging,
		nullptr,
		"EUdpMessageFormat",
		"EUdpMessageFormat",
		Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat()
	{
		if (!Z_Registration_Info_UEnum_EUdpMessageFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUdpMessageFormat.InnerSingleton, Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUdpMessageFormat.InnerSingleton;
	}
	void UUdpMessagingSettings::StaticRegisterNativesUUdpMessagingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUdpMessagingSettings);
	UClass* Z_Construct_UClass_UUdpMessagingSettings_NoRegister()
	{
		return UUdpMessagingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUdpMessagingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledByDefault_MetaData[];
#endif
		static void NewProp_EnabledByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnabledByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableTransport_MetaData[];
#endif
		static void NewProp_EnableTransport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableTransport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRepair_MetaData[];
#endif
		static void NewProp_bAutoRepair_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRepair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoRepairAttemptLimit_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AutoRepairAttemptLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkQueueSize_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_WorkQueueSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopServiceWhenAppDeactivates_MetaData[];
#endif
		static void NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopServiceWhenAppDeactivates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnicastEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnicastEndpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MulticastEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MulticastEndpoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MulticastTimeToLive_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MulticastTimeToLive;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StaticEndpoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticEndpoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticEndpoints;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedEndpoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedEndpoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedEndpoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableTunnel_MetaData[];
#endif
		static void NewProp_EnableTunnel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableTunnel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TunnelUnicastEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TunnelUnicastEndpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TunnelMulticastEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TunnelMulticastEndpoint;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteTunnelEndpoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteTunnelEndpoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoteTunnelEndpoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUdpMessagingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UdpMessaging,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shared/UdpMessagingSettings.h" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault_MetaData[] = {
		{ "Category", "Availability" },
		{ "Comment", "/**\n\x09 * Whether UDP messaging is enabled by default. If false -messaging will need to be added\n\x09 * to the commandline when running non-editor builds.\n\x09 *\n\x09 * (Note - in Shipping builds ALLOW_UDP_MESSAGING_SHIPPING=1 must also be defined in TargetRules\n\x09 * for messaging to be available with or without this setting)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether UDP messaging is enabled by default. If false -messaging will need to be added\nto the commandline when running non-editor builds.\n\n(Note - in Shipping builds ALLOW_UDP_MESSAGING_SHIPPING=1 must also be defined in TargetRules\nfor messaging to be available with or without this setting)" },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->EnabledByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault = { "EnabledByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether the UDP transport channel is enabled.\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_ENABLE=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP transport channel is enabled.\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_ENABLE=`" },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->EnableTransport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport = { "EnableTransport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** Whether the UDP transport channel should try to auto repair when in error. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP transport channel should try to auto repair when in error." },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->bAutoRepair = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair = { "bAutoRepair", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MaxSendRate_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** \n\x09 * Maximum sustained transmission rate in Gbit / s. \n\x09 *\n\x09 * The default value is 1 Gbit/s.\n\x09 *\n\x09 * This is to control transmission of larger packages over the network. Without a limit, it is\n\x09 * possible for packet data loss to occur because more data may be sent then may be supported\n\x09 * by your network card.\n\x09 *\n\x09 * Adjust this value higher or lower depending on your network capacity.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Maximum sustained transmission rate in Gbit / s.\n\nThe default value is 1 Gbit/s.\n\nThis is to control transmission of larger packages over the network. Without a limit, it is\npossible for packet data loss to occur because more data may be sent then may be supported\nby your network card.\n\nAdjust this value higher or lower depending on your network capacity." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MaxSendRate = { "MaxSendRate", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, MaxSendRate), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MaxSendRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MaxSendRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The number of consecutive attempt the auto repair routine will try to repair. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The number of consecutive attempt the auto repair routine will try to repair." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit = { "AutoRepairAttemptLimit", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, AutoRepairAttemptLimit), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_WorkQueueSize_MetaData[] = {
		{ "Category", "Transport" },
		{ "ClampMin", "1024" },
		{ "Comment", "/**\n\x09 * The buffer size for the working send queues. Each node connections\n\x09 * gets a send queue and new messages to send are put on that queue.  The send\n\x09 * scheduler will fairly send data on this queue and re-queue when partial data is\n\x09 * sent or waiting for a reliable message. Can be specified on the command line with\n\x09 * `-UDPMESSAGING_WORK_QUEUE_SIZE=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The buffer size for the working send queues. Each node connections\ngets a send queue and new messages to send are put on that queue.  The send\nscheduler will fairly send data on this queue and re-queue when partial data is\nsent or waiting for a reliable message. Can be specified on the command line with\n`-UDPMESSAGING_WORK_QUEUE_SIZE=`" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_WorkQueueSize = { "WorkQueueSize", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, WorkQueueSize), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_WorkQueueSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_WorkQueueSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData[] = {
		{ "Comment", "/** Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated" },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->bStopServiceWhenAppDeactivates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates = { "bStopServiceWhenAppDeactivates", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to listen to and send packets from.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * 0.0.0.0:0 will bind to the default network adapter on Windows,\n\x09 * and all available network adapters on other operating systems.\n\x09 * Specifying an interface IP here, will use that interface for multicasting and static endpoint *might* also reach this client through <unicast ip:multicast port>\n\x09 * Specifying both the IP and Port will allow usage of static endpoint to reach this client\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_UNICAST=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to listen to and send packets from.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\n0.0.0.0:0 will bind to the default network adapter on Windows,\nand all available network adapters on other operating systems.\nSpecifying an interface IP here, will use that interface for multicasting and static endpoint *might* also reach this client through <unicast ip:multicast port>\nSpecifying both the IP and Port will allow usage of static endpoint to reach this client\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_UNICAST=`" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint = { "UnicastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, UnicastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to send multicast packets to.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * The multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_MULTICAST=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to send multicast packets to.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\nThe multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_MULTICAST=`" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint = { "MulticastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, MulticastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The format used to serialize the UDP message payload. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The format used to serialize the UDP message payload." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat = { "MessageFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, MessageFormat), Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_MetaData)) }; // 1977808897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The time-to-live (TTL) for sent multicast packets. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The time-to-live (TTL) for sent multicast packets." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive = { "MulticastTimeToLive", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, MulticastTimeToLive), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_Inner = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoints of static devices.\n\x09 *\n\x09 * Use this setting to reach devices on other subnets, such as mobile phones on a WiFi network.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints of static devices.\n\nUse this setting to reach devices on other subnets, such as mobile phones on a WiFi network.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, StaticEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints_Inner = { "ExcludedEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * List of IP addresses that are banned from communicating with this client.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.  If port number is 0 then all ports are blocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "List of IP addresses that are banned from communicating with this client.\n\nThe format is IP_ADDRESS:PORT_NUMBER.  If port number is 0 then all ports are blocked." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints = { "ExcludedEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, ExcludedEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/** Whether the UDP tunnel is enabled. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP tunnel is enabled." },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->EnableTunnel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel = { "EnableTunnel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The local IP endpoint to listen to and send packets from.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The local IP endpoint to listen to and send packets from.\n\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint = { "TunnelUnicastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, TunnelUnicastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The IP endpoint to send multicast packets to.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * The multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to send multicast packets to.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\nThe multicast IP address must be in the range 224.0.0.0 to 239.255.255.255." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint = { "TunnelMulticastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, TunnelMulticastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_Inner = { "RemoteTunnelEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The IP endpoints of remote tunnel nodes.\n\x09 *\n\x09 * Use this setting to connect to remote tunnel services.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints of remote tunnel nodes.\n\nUse this setting to connect to remote tunnel services.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints = { "RemoteTunnelEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUdpMessagingSettings, RemoteTunnelEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MaxSendRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_WorkQueueSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUdpMessagingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUdpMessagingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUdpMessagingSettings_Statics::ClassParams = {
		&UUdpMessagingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUdpMessagingSettings()
	{
		if (!Z_Registration_Info_UClass_UUdpMessagingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUdpMessagingSettings.OuterSingleton, Z_Construct_UClass_UUdpMessagingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUdpMessagingSettings.OuterSingleton;
	}
	template<> UDPMESSAGING_API UClass* StaticClass<UUdpMessagingSettings>()
	{
		return UUdpMessagingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUdpMessagingSettings);
	UUdpMessagingSettings::~UUdpMessagingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::EnumInfo[] = {
		{ EUdpMessageFormat_StaticEnum, TEXT("EUdpMessageFormat"), &Z_Registration_Info_UEnum_EUdpMessageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1977808897U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUdpMessagingSettings, UUdpMessagingSettings::StaticClass, TEXT("UUdpMessagingSettings"), &Z_Registration_Info_UClass_UUdpMessagingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUdpMessagingSettings), 648772250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_1629265315(TEXT("/Script/UdpMessaging"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
