// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalUserLoginMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalUserLoginMessages() {}
// Cross Module References
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse();
	UPackage* Z_Construct_UPackage__Script_PortalMessages();
// End Cross Module References

static_assert(std::is_polymorphic<FPortalUserLoginPromptUserForSignInRequest>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalUserLoginPromptUserForSignInRequest cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInRequest;
class UScriptStruct* FPortalUserLoginPromptUserForSignInRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserLoginPromptUserForSignInRequest"));
	}
	return Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInRequest.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserLoginPromptUserForSignInRequest>()
{
	return FPortalUserLoginPromptUserForSignInRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserLoginMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserLoginPromptUserForSignInRequest>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserLoginPromptUserForSignInRequest",
		sizeof(FPortalUserLoginPromptUserForSignInRequest),
		alignof(FPortalUserLoginPromptUserForSignInRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInRequest.InnerSingleton, Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPortalUserLoginPromptUserForSignInResponse>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalUserLoginPromptUserForSignInResponse cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInResponse;
class UScriptStruct* FPortalUserLoginPromptUserForSignInResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalUserLoginPromptUserForSignInResponse"));
	}
	return Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInResponse.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalUserLoginPromptUserForSignInResponse>()
{
	return FPortalUserLoginPromptUserForSignInResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalUserLoginMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserLoginPromptUserForSignInResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalUserLoginMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FPortalUserLoginPromptUserForSignInResponse*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPortalUserLoginPromptUserForSignInResponse), &Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalUserLoginPromptUserForSignInResponse",
		sizeof(FPortalUserLoginPromptUserForSignInResponse),
		alignof(FPortalUserLoginPromptUserForSignInResponse),
		Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInResponse.InnerSingleton, Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserLoginMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserLoginMessages_h_Statics::ScriptStructInfo[] = {
		{ FPortalUserLoginPromptUserForSignInRequest::StaticStruct, Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInRequest_Statics::NewStructOps, TEXT("PortalUserLoginPromptUserForSignInRequest"), &Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalUserLoginPromptUserForSignInRequest), 690534687U) },
		{ FPortalUserLoginPromptUserForSignInResponse::StaticStruct, Z_Construct_UScriptStruct_FPortalUserLoginPromptUserForSignInResponse_Statics::NewStructOps, TEXT("PortalUserLoginPromptUserForSignInResponse"), &Z_Registration_Info_UScriptStruct_PortalUserLoginPromptUserForSignInResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalUserLoginPromptUserForSignInResponse), 1228845747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserLoginMessages_h_1485671767(TEXT("/Script/PortalMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserLoginMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalUserLoginMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
