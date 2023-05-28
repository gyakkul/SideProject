// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RpcMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRpcMessage() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	UPackage* Z_Construct_UPackage__Script_MessagingRpc();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RpcMessage;
class UScriptStruct* FRpcMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RpcMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RpcMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRpcMessage, (UObject*)Z_Construct_UPackage__Script_MessagingRpc(), TEXT("RpcMessage"));
	}
	return Z_Registration_Info_UScriptStruct_RpcMessage.OuterSingleton;
}
template<> MESSAGINGRPC_API UScriptStruct* StaticStruct<FRpcMessage>()
{
	return FRpcMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRpcMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CallId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpcMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base type for RPC messages.\n */" },
		{ "ModuleRelativePath", "Public/RpcMessage.h" },
		{ "ToolTip", "Base type for RPC messages." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRpcMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRpcMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId_MetaData[] = {
		{ "Comment", "/** Correlation identifier for the RPC call that this message refers to. */" },
		{ "ModuleRelativePath", "Public/RpcMessage.h" },
		{ "ToolTip", "Correlation identifier for the RPC call that this message refers to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId = { "CallId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRpcMessage, CallId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRpcMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRpcMessage_Statics::NewProp_CallId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRpcMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MessagingRpc,
		nullptr,
		&NewStructOps,
		"RpcMessage",
		sizeof(FRpcMessage),
		alignof(FRpcMessage),
		Z_Construct_UScriptStruct_FRpcMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpcMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRpcMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRpcMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_RpcMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RpcMessage.InnerSingleton, Z_Construct_UScriptStruct_FRpcMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RpcMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_RpcMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_RpcMessage_h_Statics::ScriptStructInfo[] = {
		{ FRpcMessage::StaticStruct, Z_Construct_UScriptStruct_FRpcMessage_Statics::NewStructOps, TEXT("RpcMessage"), &Z_Registration_Info_UScriptStruct_RpcMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRpcMessage), 980059012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_RpcMessage_h_2164375378(TEXT("/Script/MessagingRpc"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_RpcMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_RpcMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
