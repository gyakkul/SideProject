// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MQTTClientMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMQTTClientMessage() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MQTTCORE_API UEnum* Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTClientMessage();
	UPackage* Z_Construct_UPackage__Script_MQTTCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MQTTClientMessage;
class UScriptStruct* FMQTTClientMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MQTTClientMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MQTTClientMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMQTTClientMessage, (UObject*)Z_Construct_UPackage__Script_MQTTCore(), TEXT("MQTTClientMessage"));
	}
	return Z_Registration_Info_UScriptStruct_MQTTClientMessage.OuterSingleton;
}
template<> MQTTCORE_API UScriptStruct* StaticStruct<FMQTTClientMessage>()
{
	return FMQTTClientMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMQTTClientMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Topic;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Payload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetain_MetaData[];
#endif
		static void NewProp_bRetain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetain;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QoS_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QoS_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QoS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MQTTClientMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMQTTClientMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** TimeStamp as UTC. */" },
		{ "ModuleRelativePath", "Public/MQTTClientMessage.h" },
		{ "ToolTip", "TimeStamp as UTC." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTClientMessage, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Topic_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Packet topic. */" },
		{ "ModuleRelativePath", "Public/MQTTClientMessage.h" },
		{ "ToolTip", "Packet topic." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTClientMessage, Topic), METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Topic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Topic_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Payload_Inner = { "Payload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Packet content. */" },
		{ "ModuleRelativePath", "Public/MQTTClientMessage.h" },
		{ "ToolTip", "Packet content." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTClientMessage, Payload), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Payload_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_bRetain_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Retain flag. */" },
		{ "ModuleRelativePath", "Public/MQTTClientMessage.h" },
		{ "ToolTip", "Retain flag." },
	};
#endif
	void Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_bRetain_SetBit(void* Obj)
	{
		((FMQTTClientMessage*)Obj)->bRetain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_bRetain = { "bRetain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMQTTClientMessage), &Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_bRetain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_bRetain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_bRetain_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_QoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_QoS_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Quality of Service. */" },
		{ "DisplayName", "Quality of Service" },
		{ "ModuleRelativePath", "Public/MQTTClientMessage.h" },
		{ "ToolTip", "Quality of Service." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_QoS = { "QoS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTClientMessage, QoS), Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService, METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_QoS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_QoS_MetaData)) }; // 1181216296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_PayloadString_MetaData[] = {
		{ "Comment", "/** Cached payload-as-string, ie. Json. */" },
		{ "ModuleRelativePath", "Public/MQTTClientMessage.h" },
		{ "ToolTip", "Cached payload-as-string, ie. Json." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_PayloadString = { "PayloadString", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMQTTClientMessage, PayloadString), METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_PayloadString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_PayloadString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Payload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_bRetain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_QoS_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_QoS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewProp_PayloadString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MQTTCore,
		nullptr,
		&NewStructOps,
		"MQTTClientMessage",
		sizeof(FMQTTClientMessage),
		alignof(FMQTTClientMessage),
		Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMQTTClientMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_MQTTClientMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MQTTClientMessage.InnerSingleton, Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MQTTClientMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientMessage_h_Statics::ScriptStructInfo[] = {
		{ FMQTTClientMessage::StaticStruct, Z_Construct_UScriptStruct_FMQTTClientMessage_Statics::NewStructOps, TEXT("MQTTClientMessage"), &Z_Registration_Info_UScriptStruct_MQTTClientMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMQTTClientMessage), 3631163495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientMessage_h_1071561780(TEXT("/Script/MQTTCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
