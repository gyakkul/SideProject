// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MQTTShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMQTTShared() {}
// Cross Module References
	MQTTCORE_API UEnum* Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService();
	MQTTCORE_API UEnum* Z_Construct_UEnum_MQTTCore_EMQTTScheme();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTTopic();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTTopicFilter();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTTopicTemplate();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTURL();
	UPackage* Z_Construct_UPackage__Script_MQTTCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMQTTScheme;
	static UEnum* EMQTTScheme_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMQTTScheme.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMQTTScheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MQTTCore_EMQTTScheme, (UObject*)Z_Construct_UPackage__Script_MQTTCore(), TEXT("EMQTTScheme"));
		}
		return Z_Registration_Info_UEnum_EMQTTScheme.OuterSingleton;
	}
	template<> MQTTCORE_API UEnum* StaticEnum<EMQTTScheme>()
	{
		return EMQTTScheme_StaticEnum();
	}
	struct Z_Construct_UEnum_MQTTCore_EMQTTScheme_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MQTTCore_EMQTTScheme_Statics::Enumerators[] = {
		{ "EMQTTScheme::MQTT", (int64)EMQTTScheme::MQTT },
		{ "EMQTTScheme::MQTTS", (int64)EMQTTScheme::MQTTS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MQTTCore_EMQTTScheme_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
		{ "MQTT.Name", "EMQTTScheme::MQTT" },
		{ "MQTTS.Name", "EMQTTScheme::MQTTS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MQTTCore_EMQTTScheme_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MQTTCore,
		nullptr,
		"EMQTTScheme",
		"EMQTTScheme",
		Z_Construct_UEnum_MQTTCore_EMQTTScheme_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MQTTCore_EMQTTScheme_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MQTTCore_EMQTTScheme_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MQTTCore_EMQTTScheme_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MQTTCore_EMQTTScheme()
	{
		if (!Z_Registration_Info_UEnum_EMQTTScheme.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMQTTScheme.InnerSingleton, Z_Construct_UEnum_MQTTCore_EMQTTScheme_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMQTTScheme.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMQTTQualityOfService;
	static UEnum* EMQTTQualityOfService_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMQTTQualityOfService.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMQTTQualityOfService.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService, (UObject*)Z_Construct_UPackage__Script_MQTTCore(), TEXT("EMQTTQualityOfService"));
		}
		return Z_Registration_Info_UEnum_EMQTTQualityOfService.OuterSingleton;
	}
	template<> MQTTCORE_API UEnum* StaticEnum<EMQTTQualityOfService>()
	{
		return EMQTTQualityOfService_StaticEnum();
	}
	struct Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService_Statics::Enumerators[] = {
		{ "EMQTTQualityOfService::Once", (int64)EMQTTQualityOfService::Once },
		{ "EMQTTQualityOfService::AtLeastOnce", (int64)EMQTTQualityOfService::AtLeastOnce },
		{ "EMQTTQualityOfService::ExactlyOnce", (int64)EMQTTQualityOfService::ExactlyOnce },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService_Statics::Enum_MetaDataParams[] = {
		{ "AtLeastOnce.Description", "At Least Once (guaranteed)" },
		{ "AtLeastOnce.DisplayName", "QoS 1" },
		{ "AtLeastOnce.Name", "EMQTTQualityOfService::AtLeastOnce" },
		{ "BlueprintType", "true" },
		{ "ExactlyOnce.Description", "Exactly Once (guaranteed)" },
		{ "ExactlyOnce.DisplayName", "QoS 2" },
		{ "ExactlyOnce.Name", "EMQTTQualityOfService::ExactlyOnce" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
		{ "Once.Description", "Once (not guaranteed)" },
		{ "Once.DisplayName", "QoS 0" },
		{ "Once.Name", "EMQTTQualityOfService::Once" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MQTTCore,
		nullptr,
		"EMQTTQualityOfService",
		"EMQTTQualityOfService",
		Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService()
	{
		if (!Z_Registration_Info_UEnum_EMQTTQualityOfService.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMQTTQualityOfService.InnerSingleton, Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMQTTQualityOfService.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MQTTURL;
class UScriptStruct* FMQTTURL::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MQTTURL.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MQTTURL.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMQTTURL, (UObject*)Z_Construct_UPackage__Script_MQTTCore(), TEXT("MQTTURL"));
	}
	return Z_Registration_Info_UScriptStruct_MQTTURL.OuterSingleton;
}
template<> MQTTCORE_API UScriptStruct* StaticStruct<FMQTTURL>()
{
	return FMQTTURL::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMQTTURL_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Scheme_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scheme_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Scheme;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTURL_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// mqtt[s]://[username][:password]@host.domain[:port]\n" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
		{ "ToolTip", "mqtt[s]:[username][:password]@host.domain[:port]" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMQTTURL_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMQTTURL>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Host_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTURL, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "URL" },
		{ "Comment", "/** Default port is 1883 for MQTT scheme, 8883 for MQTTS. */" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
		{ "ToolTip", "Default port is 1883 for MQTT scheme, 8883 for MQTTS." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTURL, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTURL, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "URL" },
		{ "EditCondition", "Username" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTURL, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Password_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Scheme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Scheme_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Scheme = { "Scheme", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTURL, Scheme), Z_Construct_UEnum_MQTTCore_EMQTTScheme, METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Scheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Scheme_MetaData)) }; // 2156732712
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMQTTURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Scheme_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTURL_Statics::NewProp_Scheme,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMQTTURL_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MQTTCore,
		nullptr,
		&NewStructOps,
		"MQTTURL",
		sizeof(FMQTTURL),
		alignof(FMQTTURL),
		Z_Construct_UScriptStruct_FMQTTURL_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTURL_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTURL_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTURL_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMQTTURL()
	{
		if (!Z_Registration_Info_UScriptStruct_MQTTURL.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MQTTURL.InnerSingleton, Z_Construct_UScriptStruct_FMQTTURL_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MQTTURL.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MQTTTopic;
class UScriptStruct* FMQTTTopic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MQTTTopic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MQTTTopic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMQTTTopic, (UObject*)Z_Construct_UPackage__Script_MQTTCore(), TEXT("MQTTTopic"));
	}
	return Z_Registration_Info_UScriptStruct_MQTTTopic.OuterSingleton;
}
template<> MQTTCORE_API UScriptStruct* StaticStruct<FMQTTTopic>()
{
	return FMQTTTopic::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMQTTTopic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTTopic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMQTTTopic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMQTTTopic>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTTopic_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Topic" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMQTTTopic_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTTopic, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTTopic_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTTopic_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMQTTTopic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTTopic_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMQTTTopic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MQTTCore,
		nullptr,
		&NewStructOps,
		"MQTTTopic",
		sizeof(FMQTTTopic),
		alignof(FMQTTTopic),
		Z_Construct_UScriptStruct_FMQTTTopic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTTopic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTTopic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTTopic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMQTTTopic()
	{
		if (!Z_Registration_Info_UScriptStruct_MQTTTopic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MQTTTopic.InnerSingleton, Z_Construct_UScriptStruct_FMQTTTopic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MQTTTopic.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMQTTTopicFilter>() == std::is_polymorphic<FMQTTTopic>(), "USTRUCT FMQTTTopicFilter cannot be polymorphic unless super FMQTTTopic is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MQTTTopicFilter;
class UScriptStruct* FMQTTTopicFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MQTTTopicFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MQTTTopicFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMQTTTopicFilter, (UObject*)Z_Construct_UPackage__Script_MQTTCore(), TEXT("MQTTTopicFilter"));
	}
	return Z_Registration_Info_UScriptStruct_MQTTTopicFilter.OuterSingleton;
}
template<> MQTTCORE_API UScriptStruct* StaticStruct<FMQTTTopicFilter>()
{
	return FMQTTTopicFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMQTTTopicFilter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MQTTCore,
		Z_Construct_UScriptStruct_FMQTTTopic,
		&NewStructOps,
		"MQTTTopicFilter",
		sizeof(FMQTTTopicFilter),
		alignof(FMQTTTopicFilter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMQTTTopicFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_MQTTTopicFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MQTTTopicFilter.InnerSingleton, Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MQTTTopicFilter.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMQTTTopicTemplate>() == std::is_polymorphic<FMQTTTopic>(), "USTRUCT FMQTTTopicTemplate cannot be polymorphic unless super FMQTTTopic is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MQTTTopicTemplate;
class UScriptStruct* FMQTTTopicTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MQTTTopicTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MQTTTopicTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMQTTTopicTemplate, (UObject*)Z_Construct_UPackage__Script_MQTTCore(), TEXT("MQTTTopicTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MQTTTopicTemplate.OuterSingleton;
}
template<> MQTTCORE_API UScriptStruct* StaticStruct<FMQTTTopicTemplate>()
{
	return FMQTTTopicTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An MQTT Topic tokenized template */" },
		{ "ModuleRelativePath", "Public/MQTTShared.h" },
		{ "ToolTip", "An MQTT Topic tokenized template" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMQTTTopicTemplate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MQTTCore,
		Z_Construct_UScriptStruct_FMQTTTopic,
		&NewStructOps,
		"MQTTTopicTemplate",
		sizeof(FMQTTTopicTemplate),
		alignof(FMQTTTopicTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMQTTTopicTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MQTTTopicTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MQTTTopicTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MQTTTopicTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_Statics::EnumInfo[] = {
		{ EMQTTScheme_StaticEnum, TEXT("EMQTTScheme"), &Z_Registration_Info_UEnum_EMQTTScheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2156732712U) },
		{ EMQTTQualityOfService_StaticEnum, TEXT("EMQTTQualityOfService"), &Z_Registration_Info_UEnum_EMQTTQualityOfService, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1181216296U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_Statics::ScriptStructInfo[] = {
		{ FMQTTURL::StaticStruct, Z_Construct_UScriptStruct_FMQTTURL_Statics::NewStructOps, TEXT("MQTTURL"), &Z_Registration_Info_UScriptStruct_MQTTURL, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMQTTURL), 2069467068U) },
		{ FMQTTTopic::StaticStruct, Z_Construct_UScriptStruct_FMQTTTopic_Statics::NewStructOps, TEXT("MQTTTopic"), &Z_Registration_Info_UScriptStruct_MQTTTopic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMQTTTopic), 2079646079U) },
		{ FMQTTTopicFilter::StaticStruct, Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics::NewStructOps, TEXT("MQTTTopicFilter"), &Z_Registration_Info_UScriptStruct_MQTTTopicFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMQTTTopicFilter), 3785125129U) },
		{ FMQTTTopicTemplate::StaticStruct, Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics::NewStructOps, TEXT("MQTTTopicTemplate"), &Z_Registration_Info_UScriptStruct_MQTTTopicTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMQTTTopicTemplate), 3428428206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_2319375545(TEXT("/Script/MQTTCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
