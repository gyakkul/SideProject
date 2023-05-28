// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StageAppBeaconReceiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageAppBeaconReceiver() {}
// Cross Module References
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage();
	UPackage* Z_Construct_UPackage__Script_EpicStageApp();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControl_StageAppBeaconMessage;
class UScriptStruct* FRemoteControl_StageAppBeaconMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControl_StageAppBeaconMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControl_StageAppBeaconMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RemoteControl_StageAppBeaconMessage"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControl_StageAppBeaconMessage.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRemoteControl_StageAppBeaconMessage>()
{
	return FRemoteControl_StageAppBeaconMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StageAppBeaconReceiver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControl_StageAppBeaconMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		&NewStructOps,
		"RemoteControl_StageAppBeaconMessage",
		sizeof(FRemoteControl_StageAppBeaconMessage),
		alignof(FRemoteControl_StageAppBeaconMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControl_StageAppBeaconMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControl_StageAppBeaconMessage.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControl_StageAppBeaconMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControl_StageAppConnectionInfoMessage;
class UScriptStruct* FRemoteControl_StageAppConnectionInfoMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControl_StageAppConnectionInfoMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControl_StageAppConnectionInfoMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RemoteControl_StageAppConnectionInfoMessage"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControl_StageAppConnectionInfoMessage.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRemoteControl_StageAppConnectionInfoMessage>()
{
	return FRemoteControl_StageAppConnectionInfoMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StageAppBeaconReceiver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControl_StageAppConnectionInfoMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		&NewStructOps,
		"RemoteControl_StageAppConnectionInfoMessage",
		sizeof(FRemoteControl_StageAppConnectionInfoMessage),
		alignof(FRemoteControl_StageAppConnectionInfoMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControl_StageAppConnectionInfoMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControl_StageAppConnectionInfoMessage.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControl_StageAppConnectionInfoMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppBeaconReceiver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppBeaconReceiver_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControl_StageAppBeaconMessage::StaticStruct, Z_Construct_UScriptStruct_FRemoteControl_StageAppBeaconMessage_Statics::NewStructOps, TEXT("RemoteControl_StageAppBeaconMessage"), &Z_Registration_Info_UScriptStruct_RemoteControl_StageAppBeaconMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControl_StageAppBeaconMessage), 2186243462U) },
		{ FRemoteControl_StageAppConnectionInfoMessage::StaticStruct, Z_Construct_UScriptStruct_FRemoteControl_StageAppConnectionInfoMessage_Statics::NewStructOps, TEXT("RemoteControl_StageAppConnectionInfoMessage"), &Z_Registration_Info_UScriptStruct_RemoteControl_StageAppConnectionInfoMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControl_StageAppConnectionInfoMessage), 668480046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppBeaconReceiver_h_875205003(TEXT("/Script/EpicStageApp"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppBeaconReceiver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppBeaconReceiver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
