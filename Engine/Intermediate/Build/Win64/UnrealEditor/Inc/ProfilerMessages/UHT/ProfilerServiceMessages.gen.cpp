// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProfilerServiceMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilerServiceMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe();
	UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize;
class UScriptStruct* FProfilerServiceAuthorize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceAuthorize, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceAuthorize"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceAuthorize>()
{
	return FProfilerServiceAuthorize::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Profiler Service authorization message. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Profiler Service authorization message." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceAuthorize>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Session ID. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Session ID." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceAuthorize, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Instance ID. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Instance ID." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceAuthorize, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewProp_InstanceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceAuthorize",
		sizeof(FProfilerServiceAuthorize),
		alignof(FProfilerServiceAuthorize),
		Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceData2;
class UScriptStruct* FProfilerServiceData2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceData2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceData2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceData2, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceData2"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceData2.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceData2>()
{
	return FProfilerServiceData2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServiceData2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompressedSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HexData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HexData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Profiler Service data. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Profiler Service data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceData2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Instance ID. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Instance ID." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceData2, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Stats frame. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Stats frame." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceData2, Frame), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Size of the compressed data. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Size of the compressed data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize = { "CompressedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceData2, CompressedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Size of the uncompressed data. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Size of the uncompressed data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize = { "UncompressedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceData2, UncompressedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Profiler data encoded as string of hexes, cannot use TArray<uint8> because of the Message Bus limitation. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Profiler data encoded as string of hexes, cannot use TArray<uint8> because of the Message Bus limitation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData = { "HexData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceData2, HexData), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_InstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_CompressedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_UncompressedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewProp_HexData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceData2",
		sizeof(FProfilerServiceData2),
		alignof(FProfilerServiceData2),
		Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServiceData2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceData2.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServiceData2.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck;
class UScriptStruct* FProfilerServicePreviewAck::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreviewAck, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreviewAck"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServicePreviewAck>()
{
	return FProfilerServicePreviewAck::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePreviewAck>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServicePreviewAck, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewProp_InstanceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServicePreviewAck",
		sizeof(FProfilerServicePreviewAck),
		alignof(FProfilerServicePreviewAck),
		Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk;
class UScriptStruct* FProfilerServiceFileChunk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceFileChunk, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceFileChunk"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceFileChunk>()
{
	return FProfilerServiceFileChunk::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HexData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HexData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Header_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Header;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChunkHash_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkHash_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for copying a file through the network, as well as for synchronization.\n * Unfortunately assumes that InstanceId and Filename are transfered without errors.\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Implements a message for copying a file through the network, as well as for synchronization.\nUnfortunately assumes that InstanceId and Filename are transfered without errors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceFileChunk>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The ID of the instance where this message should be sent. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The ID of the instance where this message should be sent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The file containing this file chunk. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The file containing this file chunk." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Data to be sent through message bus. Message bug doesn't support TArray<>, so we encode the data as HexString. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Data to be sent through message bus. Message bug doesn't support TArray<>, so we encode the data as HexString." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData = { "HexData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, HexData), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_Inner = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** FProfilerFileChunkHeader stored in the array. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "FProfilerFileChunkHeader stored in the array." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, Header), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_Inner = { "ChunkHash", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Hash of this data and header. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Hash of this data and header." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash = { "ChunkHash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, ChunkHash), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_InstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_HexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewProp_ChunkHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceFileChunk",
		sizeof(FProfilerServiceFileChunk),
		alignof(FProfilerServiceFileChunk),
		Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServicePing;
class UScriptStruct* FProfilerServicePing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServicePing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePing, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePing"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePing.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServicePing>()
{
	return FProfilerServicePing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServicePing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePing_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServicePing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePing>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServicePing",
		sizeof(FProfilerServicePing),
		alignof(FProfilerServicePing),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServicePing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServicePing.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServicePing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServicePing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServicePong;
class UScriptStruct* FProfilerServicePong::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePong.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServicePong.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePong, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePong"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePong.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServicePong>()
{
	return FProfilerServicePong::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServicePong_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePong_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServicePong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePong>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServicePong",
		sizeof(FProfilerServicePong),
		alignof(FProfilerServicePong),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePong_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServicePong.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServicePong.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServicePong_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServicePong.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe;
class UScriptStruct* FProfilerServiceSubscribe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceSubscribe, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceSubscribe"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceSubscribe>()
{
	return FProfilerServiceSubscribe::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceSubscribe>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceSubscribe, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceSubscribe, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewProp_InstanceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceSubscribe",
		sizeof(FProfilerServiceSubscribe),
		alignof(FProfilerServiceSubscribe),
		Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe;
class UScriptStruct* FProfilerServiceUnsubscribe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceUnsubscribe"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceUnsubscribe>()
{
	return FProfilerServiceUnsubscribe::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceUnsubscribe>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceUnsubscribe, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceUnsubscribe, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewProp_InstanceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceUnsubscribe",
		sizeof(FProfilerServiceUnsubscribe),
		alignof(FProfilerServiceUnsubscribe),
		Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceCapture;
class UScriptStruct* FProfilerServiceCapture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceCapture, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceCapture"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceCapture>()
{
	return FProfilerServiceCapture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequestedCaptureState_MetaData[];
#endif
		static void NewProp_bRequestedCaptureState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestedCaptureState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceCapture>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The data capture state that should be set. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The data capture state that should be set." },
	};
#endif
	void Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_SetBit(void* Obj)
	{
		((FProfilerServiceCapture*)Obj)->bRequestedCaptureState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState = { "bRequestedCaptureState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FProfilerServiceCapture), &Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewProp_bRequestedCaptureState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceCapture",
		sizeof(FProfilerServiceCapture),
		alignof(FProfilerServiceCapture),
		Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServiceCapture.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServicePreview;
class UScriptStruct* FProfilerServicePreview::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServicePreview.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServicePreview.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreview, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreview"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServicePreview.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServicePreview>()
{
	return FProfilerServicePreview::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServicePreview_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequestedPreviewState_MetaData[];
#endif
		static void NewProp_bRequestedPreviewState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestedPreviewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePreview>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**\n\x09 * The data preview state that should be set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "The data preview state that should be set." },
	};
#endif
	void Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_SetBit(void* Obj)
	{
		((FProfilerServicePreview*)Obj)->bRequestedPreviewState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState = { "bRequestedPreviewState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FProfilerServicePreview), &Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewProp_bRequestedPreviewState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServicePreview",
		sizeof(FProfilerServicePreview),
		alignof(FProfilerServicePreview),
		Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServicePreview.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServicePreview.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServicePreview.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilerServiceRequest;
class UScriptStruct* FProfilerServiceRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceRequest, (UObject*)Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.OuterSingleton;
}
template<> PROFILERMESSAGES_API UScriptStruct* StaticStruct<FProfilerServiceRequest>()
{
	return FProfilerServiceRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Request @see EProfilerRequestType. */" },
		{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
		{ "ToolTip", "Request @see EProfilerRequestType." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilerServiceRequest, Request), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewProp_Request,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
		nullptr,
		&NewStructOps,
		"ProfilerServiceRequest",
		sizeof(FProfilerServiceRequest),
		alignof(FProfilerServiceRequest),
		Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilerServiceRequest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ProfilerMessages_Public_ProfilerServiceMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ProfilerMessages_Public_ProfilerServiceMessages_h_Statics::ScriptStructInfo[] = {
		{ FProfilerServiceAuthorize::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceAuthorize_Statics::NewStructOps, TEXT("ProfilerServiceAuthorize"), &Z_Registration_Info_UScriptStruct_ProfilerServiceAuthorize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceAuthorize), 419252299U) },
		{ FProfilerServiceData2::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceData2_Statics::NewStructOps, TEXT("ProfilerServiceData2"), &Z_Registration_Info_UScriptStruct_ProfilerServiceData2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceData2), 3108950998U) },
		{ FProfilerServicePreviewAck::StaticStruct, Z_Construct_UScriptStruct_FProfilerServicePreviewAck_Statics::NewStructOps, TEXT("ProfilerServicePreviewAck"), &Z_Registration_Info_UScriptStruct_ProfilerServicePreviewAck, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServicePreviewAck), 1637259161U) },
		{ FProfilerServiceFileChunk::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceFileChunk_Statics::NewStructOps, TEXT("ProfilerServiceFileChunk"), &Z_Registration_Info_UScriptStruct_ProfilerServiceFileChunk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceFileChunk), 1552015053U) },
		{ FProfilerServicePing::StaticStruct, Z_Construct_UScriptStruct_FProfilerServicePing_Statics::NewStructOps, TEXT("ProfilerServicePing"), &Z_Registration_Info_UScriptStruct_ProfilerServicePing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServicePing), 1784935650U) },
		{ FProfilerServicePong::StaticStruct, Z_Construct_UScriptStruct_FProfilerServicePong_Statics::NewStructOps, TEXT("ProfilerServicePong"), &Z_Registration_Info_UScriptStruct_ProfilerServicePong, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServicePong), 2779099687U) },
		{ FProfilerServiceSubscribe::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceSubscribe_Statics::NewStructOps, TEXT("ProfilerServiceSubscribe"), &Z_Registration_Info_UScriptStruct_ProfilerServiceSubscribe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceSubscribe), 1725285314U) },
		{ FProfilerServiceUnsubscribe::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_Statics::NewStructOps, TEXT("ProfilerServiceUnsubscribe"), &Z_Registration_Info_UScriptStruct_ProfilerServiceUnsubscribe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceUnsubscribe), 3169029892U) },
		{ FProfilerServiceCapture::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceCapture_Statics::NewStructOps, TEXT("ProfilerServiceCapture"), &Z_Registration_Info_UScriptStruct_ProfilerServiceCapture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceCapture), 773251228U) },
		{ FProfilerServicePreview::StaticStruct, Z_Construct_UScriptStruct_FProfilerServicePreview_Statics::NewStructOps, TEXT("ProfilerServicePreview"), &Z_Registration_Info_UScriptStruct_ProfilerServicePreview, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServicePreview), 463051012U) },
		{ FProfilerServiceRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilerServiceRequest_Statics::NewStructOps, TEXT("ProfilerServiceRequest"), &Z_Registration_Info_UScriptStruct_ProfilerServiceRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilerServiceRequest), 514798895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ProfilerMessages_Public_ProfilerServiceMessages_h_2017868463(TEXT("/Script/ProfilerMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ProfilerMessages_Public_ProfilerServiceMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ProfilerMessages_Public_ProfilerServiceMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
