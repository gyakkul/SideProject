// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MessageRpcMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageRpcMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcCancel();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcProgress();
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcUnhandled();
	UPackage* Z_Construct_UPackage__Script_MessagingRpc();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MessageRpcCancel;
class UScriptStruct* FMessageRpcCancel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MessageRpcCancel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MessageRpcCancel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageRpcCancel, (UObject*)Z_Construct_UPackage__Script_MessagingRpc(), TEXT("MessageRpcCancel"));
	}
	return Z_Registration_Info_UScriptStruct_MessageRpcCancel.OuterSingleton;
}
template<> MESSAGINGRPC_API UScriptStruct* StaticStruct<FMessageRpcCancel>()
{
	return FMessageRpcCancel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMessageRpcCancel_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message for canceling an RPC call. */" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Message for canceling an RPC call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageRpcCancel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Correlation identifier for the RPC call that this message refers to. */" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Correlation identifier for the RPC call that this message refers to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId = { "CallId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMessageRpcCancel, CallId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewProp_CallId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MessagingRpc,
		nullptr,
		&NewStructOps,
		"MessageRpcCancel",
		sizeof(FMessageRpcCancel),
		alignof(FMessageRpcCancel),
		Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcCancel()
	{
		if (!Z_Registration_Info_UScriptStruct_MessageRpcCancel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MessageRpcCancel.InnerSingleton, Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MessageRpcCancel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MessageRpcProgress;
class UScriptStruct* FMessageRpcProgress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MessageRpcProgress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MessageRpcProgress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageRpcProgress, (UObject*)Z_Construct_UPackage__Script_MessagingRpc(), TEXT("MessageRpcProgress"));
	}
	return Z_Registration_Info_UScriptStruct_MessageRpcProgress.OuterSingleton;
}
template<> MESSAGINGRPC_API UScriptStruct* StaticStruct<FMessageRpcProgress>()
{
	return FMessageRpcProgress::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMessageRpcProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Completion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CallId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatusText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message for updating the progress of an RPC call. */" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Message for updating the progress of an RPC call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageRpcProgress>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Completion percentage (0.0 to 1.0). */" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Completion percentage (0.0 to 1.0)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion = { "Completion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMessageRpcProgress, Completion), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Correlation identifier for the RPC call that this message refers to. */" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Correlation identifier for the RPC call that this message refers to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId = { "CallId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMessageRpcProgress, CallId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Status text. */" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Status text." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText = { "StatusText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMessageRpcProgress, StatusText), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_Completion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_CallId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewProp_StatusText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MessagingRpc,
		nullptr,
		&NewStructOps,
		"MessageRpcProgress",
		sizeof(FMessageRpcProgress),
		alignof(FMessageRpcProgress),
		Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcProgress()
	{
		if (!Z_Registration_Info_UScriptStruct_MessageRpcProgress.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MessageRpcProgress.InnerSingleton, Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MessageRpcProgress.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MessageRpcUnhandled;
class UScriptStruct* FMessageRpcUnhandled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MessageRpcUnhandled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MessageRpcUnhandled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageRpcUnhandled, (UObject*)Z_Construct_UPackage__Script_MessagingRpc(), TEXT("MessageRpcUnhandled"));
	}
	return Z_Registration_Info_UScriptStruct_MessageRpcUnhandled.OuterSingleton;
}
template<> MESSAGINGRPC_API UScriptStruct* StaticStruct<FMessageRpcUnhandled>()
{
	return FMessageRpcUnhandled::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message for notifying RPC clients that a call was not handled by the server. */" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Message for notifying RPC clients that a call was not handled by the server." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageRpcUnhandled>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Correlation identifier for the RPC call that this message refers to. */" },
		{ "ModuleRelativePath", "Public/MessageRpcMessages.h" },
		{ "ToolTip", "Correlation identifier for the RPC call that this message refers to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId = { "CallId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMessageRpcUnhandled, CallId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewProp_CallId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MessagingRpc,
		nullptr,
		&NewStructOps,
		"MessageRpcUnhandled",
		sizeof(FMessageRpcUnhandled),
		alignof(FMessageRpcUnhandled),
		Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageRpcUnhandled()
	{
		if (!Z_Registration_Info_UScriptStruct_MessageRpcUnhandled.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MessageRpcUnhandled.InnerSingleton, Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MessageRpcUnhandled.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_MessageRpcMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_MessageRpcMessages_h_Statics::ScriptStructInfo[] = {
		{ FMessageRpcCancel::StaticStruct, Z_Construct_UScriptStruct_FMessageRpcCancel_Statics::NewStructOps, TEXT("MessageRpcCancel"), &Z_Registration_Info_UScriptStruct_MessageRpcCancel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMessageRpcCancel), 185043420U) },
		{ FMessageRpcProgress::StaticStruct, Z_Construct_UScriptStruct_FMessageRpcProgress_Statics::NewStructOps, TEXT("MessageRpcProgress"), &Z_Registration_Info_UScriptStruct_MessageRpcProgress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMessageRpcProgress), 1964754281U) },
		{ FMessageRpcUnhandled::StaticStruct, Z_Construct_UScriptStruct_FMessageRpcUnhandled_Statics::NewStructOps, TEXT("MessageRpcUnhandled"), &Z_Registration_Info_UScriptStruct_MessageRpcUnhandled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMessageRpcUnhandled), 3996071690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_MessageRpcMessages_h_3152162668(TEXT("/Script/MessagingRpc"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_MessageRpcMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MessagingRpc_Public_MessageRpcMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
