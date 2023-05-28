// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlWebsocketRoute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlWebsocketRoute() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebRemoteControl();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCRequest();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCRequest;
class UScriptStruct* FRCRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCRequest>()
{
	return FRCRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Passphrase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Passphrase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made to the remote control server.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlWebsocketRoute.h" },
		{ "ToolTip", "Holds a request made to the remote control server." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequest_Statics::NewProp_Passphrase_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteControlWebsocketRoute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCRequest_Statics::NewProp_Passphrase = { "Passphrase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCRequest, Passphrase), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequest_Statics::NewProp_Passphrase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequest_Statics::NewProp_Passphrase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRequest_Statics::NewProp_Passphrase,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCRequest",
		sizeof(FRCRequest),
		alignof(FRCRequest),
		Z_Construct_UScriptStruct_FRCRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCRequest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Public_RemoteControlWebsocketRoute_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Public_RemoteControlWebsocketRoute_h_Statics::ScriptStructInfo[] = {
		{ FRCRequest::StaticStruct, Z_Construct_UScriptStruct_FRCRequest_Statics::NewStructOps, TEXT("RCRequest"), &Z_Registration_Info_UScriptStruct_RCRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCRequest), 1586668478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Public_RemoteControlWebsocketRoute_h_412384977(TEXT("/Script/WebRemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Public_RemoteControlWebsocketRoute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Public_RemoteControlWebsocketRoute_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
