// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalApplicationWindowMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalApplicationWindowMessages() {}
// Cross Module References
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse();
	UPackage* Z_Construct_UPackage__Script_PortalMessages();
// End Cross Module References

static_assert(std::is_polymorphic<FPortalApplicationWindowNavigateToRequest>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalApplicationWindowNavigateToRequest cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToRequest;
class UScriptStruct* FPortalApplicationWindowNavigateToRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalApplicationWindowNavigateToRequest"));
	}
	return Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToRequest.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalApplicationWindowNavigateToRequest>()
{
	return FPortalApplicationWindowNavigateToRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalApplicationWindowMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalApplicationWindowNavigateToRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalApplicationWindowMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalApplicationWindowNavigateToRequest, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewProp_Url,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalApplicationWindowNavigateToRequest",
		sizeof(FPortalApplicationWindowNavigateToRequest),
		alignof(FPortalApplicationWindowNavigateToRequest),
		Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToRequest.InnerSingleton, Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPortalApplicationWindowNavigateToResponse>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalApplicationWindowNavigateToResponse cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToResponse;
class UScriptStruct* FPortalApplicationWindowNavigateToResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalApplicationWindowNavigateToResponse"));
	}
	return Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToResponse.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalApplicationWindowNavigateToResponse>()
{
	return FPortalApplicationWindowNavigateToResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalApplicationWindowMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalApplicationWindowNavigateToResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalApplicationWindowMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FPortalApplicationWindowNavigateToResponse*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPortalApplicationWindowNavigateToResponse), &Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalApplicationWindowNavigateToResponse",
		sizeof(FPortalApplicationWindowNavigateToResponse),
		alignof(FPortalApplicationWindowNavigateToResponse),
		Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToResponse.InnerSingleton, Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalApplicationWindowMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalApplicationWindowMessages_h_Statics::ScriptStructInfo[] = {
		{ FPortalApplicationWindowNavigateToRequest::StaticStruct, Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToRequest_Statics::NewStructOps, TEXT("PortalApplicationWindowNavigateToRequest"), &Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalApplicationWindowNavigateToRequest), 1956486338U) },
		{ FPortalApplicationWindowNavigateToResponse::StaticStruct, Z_Construct_UScriptStruct_FPortalApplicationWindowNavigateToResponse_Statics::NewStructOps, TEXT("PortalApplicationWindowNavigateToResponse"), &Z_Registration_Info_UScriptStruct_PortalApplicationWindowNavigateToResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalApplicationWindowNavigateToResponse), 791533603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalApplicationWindowMessages_h_132679940(TEXT("/Script/PortalMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalApplicationWindowMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalApplicationWindowMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
