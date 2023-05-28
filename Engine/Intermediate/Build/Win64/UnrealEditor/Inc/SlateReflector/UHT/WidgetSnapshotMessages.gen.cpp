// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WidgetSnapshotMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSnapshotMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SLATEREFLECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest();
	SLATEREFLECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse();
	UPackage* Z_Construct_UPackage__Script_SlateReflector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest;
class UScriptStruct* FWidgetSnapshotRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest, (UObject*)Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotRequest"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.OuterSingleton;
}
template<> SLATEREFLECTOR_API UScriptStruct* StaticStruct<FWidgetSnapshotRequest>()
{
	return FWidgetSnapshotRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotRequestId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotRequestId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is used to request a widget snapshot from a remote target.\n */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "Implements a message that is used to request a widget snapshot from a remote target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSnapshotRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The instance ID of the remote target we want to receive a snapshot from */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The instance ID of the remote target we want to receive a snapshot from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId = { "TargetInstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetSnapshotRequest, TargetInstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The request ID of this snapshot (used to identify the correct response from the target) */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The request ID of this snapshot (used to identify the correct response from the target)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId = { "SnapshotRequestId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetSnapshotRequest, SnapshotRequestId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_TargetInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewProp_SnapshotRequestId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateReflector,
		nullptr,
		&NewStructOps,
		"WidgetSnapshotRequest",
		sizeof(FWidgetSnapshotRequest),
		alignof(FWidgetSnapshotRequest),
		Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.InnerSingleton, Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse;
class UScriptStruct* FWidgetSnapshotResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotResponse, (UObject*)Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotResponse"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.OuterSingleton;
}
template<> SLATEREFLECTOR_API UScriptStruct* StaticStruct<FWidgetSnapshotResponse>()
{
	return FWidgetSnapshotResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotRequestId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotRequestId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SnapshotData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SnapshotData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is used to receive a widget snapshot from a remote target.\n */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "Implements a message that is used to receive a widget snapshot from a remote target." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSnapshotResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The request ID of this snapshot (used to identify the correct response from the target) */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The request ID of this snapshot (used to identify the correct response from the target)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId = { "SnapshotRequestId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetSnapshotResponse, SnapshotRequestId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_Inner = { "SnapshotData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The snapshot data, to be used by FWidgetSnapshotData::LoadSnapshotFromBuffer */" },
		{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
		{ "ToolTip", "The snapshot data, to be used by FWidgetSnapshotData::LoadSnapshotFromBuffer" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData = { "SnapshotData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetSnapshotResponse, SnapshotData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotRequestId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewProp_SnapshotData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateReflector,
		nullptr,
		&NewStructOps,
		"WidgetSnapshotResponse",
		sizeof(FWidgetSnapshotResponse),
		alignof(FWidgetSnapshotResponse),
		Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.InnerSingleton, Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h_Statics::ScriptStructInfo[] = {
		{ FWidgetSnapshotRequest::StaticStruct, Z_Construct_UScriptStruct_FWidgetSnapshotRequest_Statics::NewStructOps, TEXT("WidgetSnapshotRequest"), &Z_Registration_Info_UScriptStruct_WidgetSnapshotRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetSnapshotRequest), 80996084U) },
		{ FWidgetSnapshotResponse::StaticStruct, Z_Construct_UScriptStruct_FWidgetSnapshotResponse_Statics::NewStructOps, TEXT("WidgetSnapshotResponse"), &Z_Registration_Info_UScriptStruct_WidgetSnapshotResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetSnapshotResponse), 1400666726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h_2580862700(TEXT("/Script/SlateReflector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_SlateReflector_Private_WidgetSnapshotMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
