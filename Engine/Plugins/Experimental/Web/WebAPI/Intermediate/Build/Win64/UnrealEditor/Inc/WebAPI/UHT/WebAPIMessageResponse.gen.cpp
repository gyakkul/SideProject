// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIMessageResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIMessageResponse() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPI();
	WEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPIMessageResponse();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebAPIMessageResponse;
class UScriptStruct* FWebAPIMessageResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebAPIMessageResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebAPIMessageResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAPIMessageResponse, (UObject*)Z_Construct_UPackage__Script_WebAPI(), TEXT("WebAPIMessageResponse"));
	}
	return Z_Registration_Info_UScriptStruct_WebAPIMessageResponse.OuterSingleton;
}
template<> WEBAPI_API UScriptStruct* StaticStruct<FWebAPIMessageResponse>()
{
	return FWebAPIMessageResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebAPIMessageResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIMessageResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/WebAPIMessageResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAPIMessageResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAPIMessageResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAPIMessageResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPI,
		nullptr,
		&NewStructOps,
		"WebAPIMessageResponse",
		sizeof(FWebAPIMessageResponse),
		alignof(FWebAPIMessageResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIMessageResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIMessageResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAPIMessageResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_WebAPIMessageResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebAPIMessageResponse.InnerSingleton, Z_Construct_UScriptStruct_FWebAPIMessageResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebAPIMessageResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIMessageResponse_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIMessageResponse_h_Statics::ScriptStructInfo[] = {
		{ FWebAPIMessageResponse::StaticStruct, Z_Construct_UScriptStruct_FWebAPIMessageResponse_Statics::NewStructOps, TEXT("WebAPIMessageResponse"), &Z_Registration_Info_UScriptStruct_WebAPIMessageResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAPIMessageResponse), 2764388573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIMessageResponse_h_1975879506(TEXT("/Script/WebAPI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIMessageResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIMessageResponse_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
