// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PortalRpcMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalRpcMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PORTALRPC_API UScriptStruct* Z_Construct_UScriptStruct_FPortalRpcLocateServer();
	PORTALRPC_API UScriptStruct* Z_Construct_UScriptStruct_FPortalRpcServer();
	UPackage* Z_Construct_UPackage__Script_PortalRpc();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalRpcLocateServer;
class UScriptStruct* FPortalRpcLocateServer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalRpcLocateServer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalRpcLocateServer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalRpcLocateServer, (UObject*)Z_Construct_UPackage__Script_PortalRpc(), TEXT("PortalRpcLocateServer"));
	}
	return Z_Registration_Info_UScriptStruct_PortalRpcLocateServer.OuterSingleton;
}
template<> PORTALRPC_API UScriptStruct* StaticStruct<FPortalRpcLocateServer>()
{
	return FPortalRpcLocateServer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProductId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostMacAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostMacAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostUserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PortalRpcMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalRpcLocateServer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The product's unique identifier. */" },
		{ "ModuleRelativePath", "Private/PortalRpcMessages.h" },
		{ "ToolTip", "The product's unique identifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalRpcLocateServer, ProductId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The product's version string. */" },
		{ "ModuleRelativePath", "Private/PortalRpcMessages.h" },
		{ "ToolTip", "The product's version string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductVersion = { "ProductVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalRpcLocateServer, ProductVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostMacAddress_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The mac address of the host. */" },
		{ "ModuleRelativePath", "Private/PortalRpcMessages.h" },
		{ "ToolTip", "The mac address of the host." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostMacAddress = { "HostMacAddress", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalRpcLocateServer, HostMacAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostMacAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostMacAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostUserId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The user identification for the host. */" },
		{ "ModuleRelativePath", "Private/PortalRpcMessages.h" },
		{ "ToolTip", "The user identification for the host." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostUserId = { "HostUserId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalRpcLocateServer, HostUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostUserId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_ProductVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostMacAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewProp_HostUserId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalRpc,
		nullptr,
		&NewStructOps,
		"PortalRpcLocateServer",
		sizeof(FPortalRpcLocateServer),
		alignof(FPortalRpcLocateServer),
		Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalRpcLocateServer()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalRpcLocateServer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalRpcLocateServer.InnerSingleton, Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalRpcLocateServer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalRpcServer;
class UScriptStruct* FPortalRpcServer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalRpcServer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalRpcServer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalRpcServer, (UObject*)Z_Construct_UPackage__Script_PortalRpc(), TEXT("PortalRpcServer"));
	}
	return Z_Registration_Info_UScriptStruct_PortalRpcServer.OuterSingleton;
}
template<> PORTALRPC_API UScriptStruct* StaticStruct<FPortalRpcServer>()
{
	return FPortalRpcServer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalRpcServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRpcServer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PortalRpcMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalRpcServer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalRpcServer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalRpcServer_Statics::NewProp_ServerAddress_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The RPC server's message address as a string. */" },
		{ "ModuleRelativePath", "Private/PortalRpcMessages.h" },
		{ "ToolTip", "The RPC server's message address as a string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalRpcServer_Statics::NewProp_ServerAddress = { "ServerAddress", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalRpcServer, ServerAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRpcServer_Statics::NewProp_ServerAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRpcServer_Statics::NewProp_ServerAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalRpcServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalRpcServer_Statics::NewProp_ServerAddress,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalRpcServer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalRpc,
		nullptr,
		&NewStructOps,
		"PortalRpcServer",
		sizeof(FPortalRpcServer),
		alignof(FPortalRpcServer),
		Z_Construct_UScriptStruct_FPortalRpcServer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRpcServer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalRpcServer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalRpcServer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalRpcServer()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalRpcServer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalRpcServer.InnerSingleton, Z_Construct_UScriptStruct_FPortalRpcServer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalRpcServer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Rpc_Private_PortalRpcMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Rpc_Private_PortalRpcMessages_h_Statics::ScriptStructInfo[] = {
		{ FPortalRpcLocateServer::StaticStruct, Z_Construct_UScriptStruct_FPortalRpcLocateServer_Statics::NewStructOps, TEXT("PortalRpcLocateServer"), &Z_Registration_Info_UScriptStruct_PortalRpcLocateServer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalRpcLocateServer), 2709928759U) },
		{ FPortalRpcServer::StaticStruct, Z_Construct_UScriptStruct_FPortalRpcServer_Statics::NewStructOps, TEXT("PortalRpcServer"), &Z_Registration_Info_UScriptStruct_PortalRpcServer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalRpcServer), 2524806073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Rpc_Private_PortalRpcMessages_h_1020572569(TEXT("/Script/PortalRpc"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Rpc_Private_PortalRpcMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Rpc_Private_PortalRpcMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
