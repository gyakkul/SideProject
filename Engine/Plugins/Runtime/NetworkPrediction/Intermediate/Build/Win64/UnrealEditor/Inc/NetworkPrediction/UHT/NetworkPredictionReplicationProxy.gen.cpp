// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionReplicationProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionReplicationProxy() {}
// Cross Module References
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicationProxy();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FServerReplicationRPCParameter();
	UPackage* Z_Construct_UPackage__Script_NetworkPrediction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicationProxy;
class UScriptStruct* FReplicationProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicationProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicationProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicationProxy, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("ReplicationProxy"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicationProxy.OuterSingleton;
}
template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<FReplicationProxy>()
{
	return FReplicationProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicationProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Redirects NetSerialize to a dynamically set NetSerializeFunc.\n// This is how we hook into the replication systems role-based serialization\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionReplicationProxy.h" },
		{ "ToolTip", "Redirects NetSerialize to a dynamically set NetSerializeFunc.\nThis is how we hook into the replication systems role-based serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicationProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicationProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicationProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		&NewStructOps,
		"ReplicationProxy",
		sizeof(FReplicationProxy),
		alignof(FReplicationProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicationProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicationProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicationProxy.InnerSingleton, Z_Construct_UScriptStruct_FReplicationProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicationProxy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerReplicationRPCParameter;
class UScriptStruct* FServerReplicationRPCParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerReplicationRPCParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerReplicationRPCParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerReplicationRPCParameter, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("ServerReplicationRPCParameter"));
	}
	return Z_Registration_Info_UScriptStruct_ServerReplicationRPCParameter.OuterSingleton;
}
template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<FServerReplicationRPCParameter>()
{
	return FServerReplicationRPCParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerReplicationRPCParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerReplicationRPCParameter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n//\x09""FServerRPCProxyParameter\n//\x09Used for the client->Server RPC. Since this is instantiated on the stack by the replication system prior to net serializing,\n//\x09we have no opportunity to point the RPC parameter to the member variables we want. So we serialize into a generic temp byte buffer\n//\x09""and move them into the real buffers on the component in the RPC body (via ::NetSerialzeToProxy).\n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionReplicationProxy.h" },
		{ "ToolTip", "FServerRPCProxyParameter\nUsed for the client->Server RPC. Since this is instantiated on the stack by the replication system prior to net serializing,\nwe have no opportunity to point the RPC parameter to the member variables we want. So we serialize into a generic temp byte buffer\nand move them into the real buffers on the component in the RPC body (via ::NetSerialzeToProxy)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerReplicationRPCParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerReplicationRPCParameter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerReplicationRPCParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		&NewStructOps,
		"ServerReplicationRPCParameter",
		sizeof(FServerReplicationRPCParameter),
		alignof(FServerReplicationRPCParameter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerReplicationRPCParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerReplicationRPCParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerReplicationRPCParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerReplicationRPCParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerReplicationRPCParameter.InnerSingleton, Z_Construct_UScriptStruct_FServerReplicationRPCParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerReplicationRPCParameter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicationProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicationProxy_h_Statics::ScriptStructInfo[] = {
		{ FReplicationProxy::StaticStruct, Z_Construct_UScriptStruct_FReplicationProxy_Statics::NewStructOps, TEXT("ReplicationProxy"), &Z_Registration_Info_UScriptStruct_ReplicationProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicationProxy), 3003924311U) },
		{ FServerReplicationRPCParameter::StaticStruct, Z_Construct_UScriptStruct_FServerReplicationRPCParameter_Statics::NewStructOps, TEXT("ServerReplicationRPCParameter"), &Z_Registration_Info_UScriptStruct_ServerReplicationRPCParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerReplicationRPCParameter), 92129886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicationProxy_h_206795091(TEXT("/Script/NetworkPrediction"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicationProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicationProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
