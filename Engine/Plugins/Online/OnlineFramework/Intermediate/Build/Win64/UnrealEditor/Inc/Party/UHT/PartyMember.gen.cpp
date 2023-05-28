// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/PartyMember.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Party/SocialParty.h"
#include "SocialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyMember() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	PARTY_API UClass* Z_Construct_UClass_UPartyMember();
	PARTY_API UClass* Z_Construct_UClass_UPartyMember_NoRegister();
	PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
	PARTY_API UEnum* Z_Construct_UEnum_Party_ECrossplayPreference();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FOnlinePartyRepDataBase();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberPlatformData();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberRepData();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FUserPlatform();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberPlatformData;
class UScriptStruct* FPartyMemberPlatformData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberPlatformData, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberPlatformData"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberPlatformData>()
{
	return FPartyMemberPlatformData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Platform data fields for party replication */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Platform data fields for party replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberPlatformData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_Platform_MetaData[] = {
		{ "Comment", "/** Native platform on which this party member is playing. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Native platform on which this party member is playing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberPlatformData, Platform), Z_Construct_UScriptStruct_FUserPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_Platform_MetaData)) }; // 324753829
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Comment", "/** Net ID for this party member on their native platform. Blank if this member has no Platform SocialSubsystem. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Net ID for this party member on their native platform. Blank if this member has no Platform SocialSubsystem." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberPlatformData, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_UniqueId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_SessionId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The platform session this member is in. Can be blank for a bit while creating/joining.\n\x09 * Only relevant when this member is on a platform that requires a session backing the party.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "The platform session this member is in. Can be blank for a bit while creating/joining.\nOnly relevant when this member is on a platform that requires a session backing the party." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberPlatformData, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_SessionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		&NewStructOps,
		"PartyMemberPlatformData",
		sizeof(FPartyMemberPlatformData),
		alignof(FPartyMemberPlatformData),
		Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberPlatformData()
	{
		if (!Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest;
class UScriptStruct* FPartyMemberJoinInProgressRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberJoinInProgressRequest"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberJoinInProgressRequest>()
{
	return FPartyMemberJoinInProgressRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Join in progress request. Represents a request from a local party member to a remote party member to acquire a reservation for the session the remote party member is in. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Join in progress request. Represents a request from a local party member to a remote party member to acquire a reservation for the session the remote party member is in." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberJoinInProgressRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Target_MetaData[] = {
		{ "Comment", "/** Remote member we want to join. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Remote member we want to join." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberJoinInProgressRequest, Target), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Target_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** Time the request was made. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Time the request was made." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberJoinInProgressRequest, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		&NewStructOps,
		"PartyMemberJoinInProgressRequest",
		sizeof(FPartyMemberJoinInProgressRequest),
		alignof(FPartyMemberJoinInProgressRequest),
		Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse;
class UScriptStruct* FPartyMemberJoinInProgressResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberJoinInProgressResponse"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberJoinInProgressResponse>()
{
	return FPartyMemberJoinInProgressResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Requester;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_RequestTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ResponseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DenialReason_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DenialReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Join in progress response. Represents a response from a local party member to a remote party member that requested to join in progress. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Join in progress response. Represents a response from a local party member to a remote party member that requested to join in progress." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberJoinInProgressResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_Requester_MetaData[] = {
		{ "Comment", "/** Remote member that this response is for. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Remote member that this response is for." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberJoinInProgressResponse, Requester), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_Requester_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_Requester_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_RequestTime_MetaData[] = {
		{ "Comment", "/** Time the request was made. Matches FPartyMemberJoinInProgressRequest::Time */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Time the request was made. Matches FPartyMemberJoinInProgressRequest::Time" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_RequestTime = { "RequestTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberJoinInProgressResponse, RequestTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_RequestTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_RequestTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_ResponseTime_MetaData[] = {
		{ "Comment", "/** Time the response was made. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Time the response was made." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_ResponseTime = { "ResponseTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberJoinInProgressResponse, ResponseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_ResponseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_ResponseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_DenialReason_MetaData[] = {
		{ "Comment", "/**\n\x09 * Result of session reservation attempt.\n\x09 * @see EPartyJoinDenialReason\n\x09 */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Result of session reservation attempt.\n@see EPartyJoinDenialReason" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_DenialReason = { "DenialReason", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberJoinInProgressResponse, DenialReason), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_DenialReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_DenialReason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_Requester,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_RequestTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_ResponseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_DenialReason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		&NewStructOps,
		"PartyMemberJoinInProgressResponse",
		sizeof(FPartyMemberJoinInProgressResponse),
		alignof(FPartyMemberJoinInProgressResponse),
		Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData;
class UScriptStruct* FPartyMemberJoinInProgressData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberJoinInProgressData"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberJoinInProgressData>()
{
	return FPartyMemberJoinInProgressData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Responses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Responses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Responses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Join in progress data. Holds the current request and any responses. Requests and responses are expected to be cleared in a short amount of time. Combined into one field to reduce field count. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Join in progress data. Holds the current request and any responses. Requests and responses are expected to be cleared in a short amount of time. Combined into one field to reduce field count." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberJoinInProgressData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Request_MetaData[] = {
		{ "Comment", "/** Current request for the local member. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Current request for the local member." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberJoinInProgressData, Request), Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Request_MetaData)) }; // 714835399
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses_Inner = { "Responses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse, METADATA_PARAMS(nullptr, 0) }; // 397792278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses_MetaData[] = {
		{ "Comment", "/** List of responses for other members who requested a reservation. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "List of responses for other members who requested a reservation." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses = { "Responses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberJoinInProgressData, Responses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses_MetaData)) }; // 397792278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		&NewStructOps,
		"PartyMemberJoinInProgressData",
		sizeof(FPartyMemberJoinInProgressData),
		alignof(FPartyMemberJoinInProgressData),
		Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData()
	{
		if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPartyMemberRepData>() == std::is_polymorphic<FOnlinePartyRepDataBase>(), "USTRUCT FPartyMemberRepData cannot be polymorphic unless super FOnlinePartyRepDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberRepData;
class UScriptStruct* FPartyMemberRepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberRepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberRepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberRepData, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberRepData"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberRepData.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberRepData>()
{
	return FPartyMemberRepData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPartyMemberRepData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CrossplayPreference_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossplayPreference_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CrossplayPreference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinMethod_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JoinMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JoinInProgressData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct used to replicate data about the state of a single party member to all members. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Base struct used to replicate data about the state of a single party member to all members." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberRepData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_PlatformData_MetaData[] = {
		{ "Comment", "/** Platform data fields for party replication */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Platform data fields for party replication" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_PlatformData = { "PlatformData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberRepData, PlatformData), Z_Construct_UScriptStruct_FPartyMemberPlatformData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_PlatformData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_PlatformData_MetaData)) }; // 1751399517
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference_MetaData[] = {
		{ "Comment", "/** The crossplay preference of this user. Only relevant to crossplay party scenarios. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "The crossplay preference of this user. Only relevant to crossplay party scenarios." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference = { "CrossplayPreference", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberRepData, CrossplayPreference), Z_Construct_UEnum_Party_ECrossplayPreference, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference_MetaData)) }; // 2805070967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinMethod_MetaData[] = {
		{ "Comment", "/** Method used to join the party */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Method used to join the party" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinMethod = { "JoinMethod", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberRepData, JoinMethod), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinInProgressData_MetaData[] = {
		{ "Comment", "/** Data used for join in progress flow. */" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
		{ "ToolTip", "Data used for join in progress flow." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinInProgressData = { "JoinInProgressData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyMemberRepData, JoinInProgressData), Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinInProgressData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinInProgressData_MetaData)) }; // 1951062439
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_PlatformData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinInProgressData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		Z_Construct_UScriptStruct_FOnlinePartyRepDataBase,
		&NewStructOps,
		"PartyMemberRepData",
		sizeof(FPartyMemberRepData),
		alignof(FPartyMemberRepData),
		Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberRepData()
	{
		if (!Z_Registration_Info_UScriptStruct_PartyMemberRepData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberRepData.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PartyMemberRepData.InnerSingleton;
	}
	void UPartyMember::StaticRegisterNativesUPartyMember()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyMember);
	UClass* Z_Construct_UClass_UPartyMember_NoRegister()
	{
		return UPartyMember::StaticClass();
	}
	struct Z_Construct_UClass_UPartyMember_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocialUser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SocialUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyMember_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyMember_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Party/PartyMember.h" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyMember_Statics::NewProp_SocialUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPartyMember_Statics::NewProp_SocialUser = { "SocialUser", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPartyMember, SocialUser), Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPartyMember_Statics::NewProp_SocialUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyMember_Statics::NewProp_SocialUser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartyMember_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyMember_Statics::NewProp_SocialUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyMember_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyMember>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyMember_Statics::ClassParams = {
		&UPartyMember::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPartyMember_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPartyMember_Statics::PropPointers),
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UPartyMember_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyMember_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyMember()
	{
		if (!Z_Registration_Info_UClass_UPartyMember.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyMember.OuterSingleton, Z_Construct_UClass_UPartyMember_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPartyMember.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<UPartyMember>()
	{
		return UPartyMember::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyMember);
	UPartyMember::~UPartyMember() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ScriptStructInfo[] = {
		{ FPartyMemberPlatformData::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewStructOps, TEXT("PartyMemberPlatformData"), &Z_Registration_Info_UScriptStruct_PartyMemberPlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberPlatformData), 1751399517U) },
		{ FPartyMemberJoinInProgressRequest::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewStructOps, TEXT("PartyMemberJoinInProgressRequest"), &Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberJoinInProgressRequest), 714835399U) },
		{ FPartyMemberJoinInProgressResponse::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewStructOps, TEXT("PartyMemberJoinInProgressResponse"), &Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberJoinInProgressResponse), 397792278U) },
		{ FPartyMemberJoinInProgressData::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewStructOps, TEXT("PartyMemberJoinInProgressData"), &Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberJoinInProgressData), 1951062439U) },
		{ FPartyMemberRepData::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewStructOps, TEXT("PartyMemberRepData"), &Z_Registration_Info_UScriptStruct_PartyMemberRepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberRepData), 1391268455U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPartyMember, UPartyMember::StaticClass, TEXT("UPartyMember"), &Z_Registration_Info_UClass_UPartyMember, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyMember), 925985196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_1336120344(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
