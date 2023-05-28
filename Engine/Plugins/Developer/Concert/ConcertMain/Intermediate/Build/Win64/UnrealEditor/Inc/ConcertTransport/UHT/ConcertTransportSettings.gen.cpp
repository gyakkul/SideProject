// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertTransportSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertTransportSettings() {}
// Cross Module References
	CONCERTTRANSPORT_API UClass* Z_Construct_UClass_UConcertEndpointConfig();
	CONCERTTRANSPORT_API UClass* Z_Construct_UClass_UConcertEndpointConfig_NoRegister();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertEndpointSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ConcertTransport();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertEndpointSettings;
class UScriptStruct* FConcertEndpointSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertEndpointSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertEndpointSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertEndpointSettings, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertEndpointSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertEndpointSettings.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertEndpointSettings>()
{
	return FConcertEndpointSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogging_MetaData[];
#endif
		static void NewProp_bEnableLogging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PurgeProcessedMessageDelaySeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PurgeProcessedMessageDelaySeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteEndpointTimeoutSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoteEndpointTimeoutSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertEndpointSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_bEnableLogging_MetaData[] = {
		{ "Category", "Endpoint Settings" },
		{ "Comment", "/** Enable detailed message logging for Concert endpoints */" },
		{ "ModuleRelativePath", "Public/ConcertTransportSettings.h" },
		{ "ToolTip", "Enable detailed message logging for Concert endpoints" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_bEnableLogging_SetBit(void* Obj)
	{
		((FConcertEndpointSettings*)Obj)->bEnableLogging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_bEnableLogging = { "bEnableLogging", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertEndpointSettings), &Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_bEnableLogging_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_bEnableLogging_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_bEnableLogging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_PurgeProcessedMessageDelaySeconds_MetaData[] = {
		{ "Category", "Endpoint Settings" },
		{ "Comment", "/** The timespan at which retained processed messages are purged on Concert endpoints */" },
		{ "DisplayName", "Purge Processed Message Delay" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/ConcertTransportSettings.h" },
		{ "ToolTip", "The timespan at which retained processed messages are purged on Concert endpoints" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_PurgeProcessedMessageDelaySeconds = { "PurgeProcessedMessageDelaySeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertEndpointSettings, PurgeProcessedMessageDelaySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_PurgeProcessedMessageDelaySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_PurgeProcessedMessageDelaySeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_RemoteEndpointTimeoutSeconds_MetaData[] = {
		{ "Category", "Endpoint Settings" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The timespan at which remote endpoints that haven't sent a message are considered stale */" },
		{ "DisplayName", "Remote Endpoint Timeout" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/ConcertTransportSettings.h" },
		{ "ToolTip", "The timespan at which remote endpoints that haven't sent a message are considered stale" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_RemoteEndpointTimeoutSeconds = { "RemoteEndpointTimeoutSeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertEndpointSettings, RemoteEndpointTimeoutSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_RemoteEndpointTimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_RemoteEndpointTimeoutSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_bEnableLogging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_PurgeProcessedMessageDelaySeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewProp_RemoteEndpointTimeoutSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		nullptr,
		&NewStructOps,
		"ConcertEndpointSettings",
		sizeof(FConcertEndpointSettings),
		alignof(FConcertEndpointSettings),
		Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertEndpointSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertEndpointSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertEndpointSettings.InnerSingleton, Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertEndpointSettings.InnerSingleton;
	}
	void UConcertEndpointConfig::StaticRegisterNativesUConcertEndpointConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertEndpointConfig);
	UClass* Z_Construct_UClass_UConcertEndpointConfig_NoRegister()
	{
		return UConcertEndpointConfig::StaticClass();
	}
	struct Z_Construct_UClass_UConcertEndpointConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertEndpointConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertEndpointConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcertTransportSettings.h" },
		{ "ModuleRelativePath", "Public/ConcertTransportSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertEndpointConfig_Statics::NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Endpoint Settings" },
		{ "ModuleRelativePath", "Public/ConcertTransportSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertEndpointConfig_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertEndpointConfig, EndpointSettings), Z_Construct_UScriptStruct_FConcertEndpointSettings, METADATA_PARAMS(Z_Construct_UClass_UConcertEndpointConfig_Statics::NewProp_EndpointSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertEndpointConfig_Statics::NewProp_EndpointSettings_MetaData)) }; // 1377010211
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertEndpointConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertEndpointConfig_Statics::NewProp_EndpointSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertEndpointConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertEndpointConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertEndpointConfig_Statics::ClassParams = {
		&UConcertEndpointConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertEndpointConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertEndpointConfig_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertEndpointConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertEndpointConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertEndpointConfig()
	{
		if (!Z_Registration_Info_UClass_UConcertEndpointConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertEndpointConfig.OuterSingleton, Z_Construct_UClass_UConcertEndpointConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertEndpointConfig.OuterSingleton;
	}
	template<> CONCERTTRANSPORT_API UClass* StaticClass<UConcertEndpointConfig>()
	{
		return UConcertEndpointConfig::StaticClass();
	}
	UConcertEndpointConfig::UConcertEndpointConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertEndpointConfig);
	UConcertEndpointConfig::~UConcertEndpointConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_Statics::ScriptStructInfo[] = {
		{ FConcertEndpointSettings::StaticStruct, Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics::NewStructOps, TEXT("ConcertEndpointSettings"), &Z_Registration_Info_UScriptStruct_ConcertEndpointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertEndpointSettings), 1377010211U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConcertEndpointConfig, UConcertEndpointConfig::StaticClass, TEXT("UConcertEndpointConfig"), &Z_Registration_Info_UClass_UConcertEndpointConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertEndpointConfig), 2592795188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_797150097(TEXT("/Script/ConcertTransport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
