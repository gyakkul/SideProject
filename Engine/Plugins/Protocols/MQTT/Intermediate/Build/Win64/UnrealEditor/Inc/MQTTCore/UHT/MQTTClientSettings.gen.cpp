// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MQTTClientSettings.h"
#include "MQTTShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMQTTClientSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MQTTCORE_API UClass* Z_Construct_UClass_UMQTTClientSettings();
	MQTTCORE_API UClass* Z_Construct_UClass_UMQTTClientSettings_NoRegister();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTURL();
	UPackage* Z_Construct_UPackage__Script_MQTTCore();
// End Cross Module References
	void UMQTTClientSettings::StaticRegisterNativesUMQTTClientSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMQTTClientSettings);
	UClass* Z_Construct_UClass_UMQTTClientSettings_NoRegister()
	{
		return UMQTTClientSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMQTTClientSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultURL_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublishRate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PublishRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMQTTClientSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MQTTCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTClientSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* MQTT Client Settings\n*/" },
		{ "IncludePath", "MQTTClientSettings.h" },
		{ "ModuleRelativePath", "Public/MQTTClientSettings.h" },
		{ "ToolTip", "MQTT Client Settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_DefaultURL_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/MQTTClientSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_DefaultURL = { "DefaultURL", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMQTTClientSettings, DefaultURL), Z_Construct_UScriptStruct_FMQTTURL, METADATA_PARAMS(Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_DefaultURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_DefaultURL_MetaData)) }; // 2069467068
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_PublishRate_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "Comment", "/** Maximum messages to publish per second. */" },
		{ "ModuleRelativePath", "Public/MQTTClientSettings.h" },
		{ "ToolTip", "Maximum messages to publish per second." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_PublishRate = { "PublishRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMQTTClientSettings, PublishRate), METADATA_PARAMS(Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_PublishRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_PublishRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMQTTClientSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_DefaultURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTClientSettings_Statics::NewProp_PublishRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMQTTClientSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMQTTClientSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMQTTClientSettings_Statics::ClassParams = {
		&UMQTTClientSettings::StaticClass,
		"MQTT",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMQTTClientSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMQTTClientSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMQTTClientSettings()
	{
		if (!Z_Registration_Info_UClass_UMQTTClientSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMQTTClientSettings.OuterSingleton, Z_Construct_UClass_UMQTTClientSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMQTTClientSettings.OuterSingleton;
	}
	template<> MQTTCORE_API UClass* StaticClass<UMQTTClientSettings>()
	{
		return UMQTTClientSettings::StaticClass();
	}
	UMQTTClientSettings::UMQTTClientSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMQTTClientSettings);
	UMQTTClientSettings::~UMQTTClientSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMQTTClientSettings, UMQTTClientSettings::StaticClass, TEXT("UMQTTClientSettings"), &Z_Registration_Info_UClass_UMQTTClientSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMQTTClientSettings), 2620026126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_1069799772(TEXT("/Script/MQTTCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
