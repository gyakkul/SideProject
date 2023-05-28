// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalUserMessages.h"
#include "Account/IPortalUser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalUserMessages() {}
// Cross Module References
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse();
	PORTALSERVICES_API UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest();
	PORTALSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserDetails();
	PORTALSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult();
	UPackage* Z_Construct_UPackage__Script_PortalMessages();
// End Cross Module References

static_assert(std::is_polymorphic<FPortalUserGetUserDetailsRequest>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalUserGetUserDetailsRequest cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsRequest;
class UScriptStruct* FPortalUserGetUserDetailsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserGetUserDetailsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsRequest.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserGetUserDetailsRequest>()
{
	return FPortalUserGetUserDetailsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserGetUserDetailsRequest>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserGetUserDetailsRequest",
		sizeof(FPortalUserGetUserDetailsRequest),
		alignof(FPortalUserGetUserDetailsRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsRequest.InnerSingleton, Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPortalUserGetUserDetailsResponse>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalUserGetUserDetailsResponse cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsResponse;
class UScriptStruct* FPortalUserGetUserDetailsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserGetUserDetailsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsResponse.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserGetUserDetailsResponse>()
{
	return FPortalUserGetUserDetailsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserGetUserDetailsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalUserGetUserDetailsResponse, Result), Z_Construct_UScriptStruct_FPortalUserDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result_MetaData)) }; // 2397253698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserGetUserDetailsResponse",
		sizeof(FPortalUserGetUserDetailsResponse),
		alignof(FPortalUserGetUserDetailsResponse),
		Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsResponse.InnerSingleton, Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPortalUserIsEntitledToItemRequest>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalUserIsEntitledToItemRequest cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemRequest;
class UScriptStruct* FPortalUserIsEntitledToItemRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserIsEntitledToItemRequest"));
	}
	return Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemRequest.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserIsEntitledToItemRequest>()
{
	return FPortalUserIsEntitledToItemRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CacheLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserIsEntitledToItemRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalUserIsEntitledToItemRequest, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel = { "CacheLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalUserIsEntitledToItemRequest, CacheLevel), Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_MetaData)) }; // 1307875131
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewProp_CacheLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserIsEntitledToItemRequest",
		sizeof(FPortalUserIsEntitledToItemRequest),
		alignof(FPortalUserIsEntitledToItemRequest),
		Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemRequest.InnerSingleton, Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPortalUserIsEntitledToItemResponse>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalUserIsEntitledToItemResponse cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResponse;
class UScriptStruct* FPortalUserIsEntitledToItemResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserIsEntitledToItemResponse"));
	}
	return Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResponse.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserIsEntitledToItemResponse>()
{
	return FPortalUserIsEntitledToItemResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserIsEntitledToItemResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalUserIsEntitledToItemResponse, Result), Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result_MetaData)) }; // 3934900834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserIsEntitledToItemResponse",
		sizeof(FPortalUserIsEntitledToItemResponse),
		alignof(FPortalUserIsEntitledToItemResponse),
		Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResponse.InnerSingleton, Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserMessages_h_Statics::ScriptStructInfo[] = {
		{ FPortalUserGetUserDetailsRequest::StaticStruct, Z_Construct_UScriptStruct_FPortalUserGetUserDetailsRequest_Statics::NewStructOps, TEXT("PortalUserGetUserDetailsRequest"), &Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalUserGetUserDetailsRequest), 2935663095U) },
		{ FPortalUserGetUserDetailsResponse::StaticStruct, Z_Construct_UScriptStruct_FPortalUserGetUserDetailsResponse_Statics::NewStructOps, TEXT("PortalUserGetUserDetailsResponse"), &Z_Registration_Info_UScriptStruct_PortalUserGetUserDetailsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalUserGetUserDetailsResponse), 3651174810U) },
		{ FPortalUserIsEntitledToItemRequest::StaticStruct, Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemRequest_Statics::NewStructOps, TEXT("PortalUserIsEntitledToItemRequest"), &Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalUserIsEntitledToItemRequest), 3250128938U) },
		{ FPortalUserIsEntitledToItemResponse::StaticStruct, Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResponse_Statics::NewStructOps, TEXT("PortalUserIsEntitledToItemResponse"), &Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalUserIsEntitledToItemResponse), 2787429013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserMessages_h_3246291324(TEXT("/Script/PortalMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
