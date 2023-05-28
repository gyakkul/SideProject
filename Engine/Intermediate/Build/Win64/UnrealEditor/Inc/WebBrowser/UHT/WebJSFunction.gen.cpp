// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebJSFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebJSFunction() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebBrowser();
	WEBBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FWebJSCallbackBase();
	WEBBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FWebJSFunction();
	WEBBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FWebJSResponse();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebJSCallbackBase;
class UScriptStruct* FWebJSCallbackBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebJSCallbackBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebJSCallbackBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebJSCallbackBase, (UObject*)Z_Construct_UPackage__Script_WebBrowser(), TEXT("WebJSCallbackBase"));
	}
	return Z_Registration_Info_UScriptStruct_WebJSCallbackBase.OuterSingleton;
}
template<> WEBBROWSER_API UScriptStruct* StaticStruct<FWebJSCallbackBase>()
{
	return FWebJSCallbackBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebJSCallbackBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebJSCallbackBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for JS callback objects. */" },
		{ "ModuleRelativePath", "Public/WebJSFunction.h" },
		{ "ToolTip", "Base class for JS callback objects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebJSCallbackBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebJSCallbackBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebJSCallbackBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebBrowser,
		nullptr,
		&NewStructOps,
		"WebJSCallbackBase",
		sizeof(FWebJSCallbackBase),
		alignof(FWebJSCallbackBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebJSCallbackBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebJSCallbackBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebJSCallbackBase()
	{
		if (!Z_Registration_Info_UScriptStruct_WebJSCallbackBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebJSCallbackBase.InnerSingleton, Z_Construct_UScriptStruct_FWebJSCallbackBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebJSCallbackBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWebJSFunction>() == std::is_polymorphic<FWebJSCallbackBase>(), "USTRUCT FWebJSFunction cannot be polymorphic unless super FWebJSCallbackBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebJSFunction;
class UScriptStruct* FWebJSFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebJSFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebJSFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebJSFunction, (UObject*)Z_Construct_UPackage__Script_WebBrowser(), TEXT("WebJSFunction"));
	}
	return Z_Registration_Info_UScriptStruct_WebJSFunction.OuterSingleton;
}
template<> WEBBROWSER_API UScriptStruct* StaticStruct<FWebJSFunction>()
{
	return FWebJSFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebJSFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebJSFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Representation of a remote JS function.\n * FWebJSFunction objects represent a JS function and allow calling them from native code.\n * FWebJSFunction objects can also be added to delegates and events using the Bind/AddLambda method.\n */" },
		{ "ModuleRelativePath", "Public/WebJSFunction.h" },
		{ "ToolTip", "Representation of a remote JS function.\nFWebJSFunction objects represent a JS function and allow calling them from native code.\nFWebJSFunction objects can also be added to delegates and events using the Bind/AddLambda method." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebJSFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebJSFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebJSFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebBrowser,
		Z_Construct_UScriptStruct_FWebJSCallbackBase,
		&NewStructOps,
		"WebJSFunction",
		sizeof(FWebJSFunction),
		alignof(FWebJSFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebJSFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebJSFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebJSFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_WebJSFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebJSFunction.InnerSingleton, Z_Construct_UScriptStruct_FWebJSFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebJSFunction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWebJSResponse>() == std::is_polymorphic<FWebJSCallbackBase>(), "USTRUCT FWebJSResponse cannot be polymorphic unless super FWebJSCallbackBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebJSResponse;
class UScriptStruct* FWebJSResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebJSResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebJSResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebJSResponse, (UObject*)Z_Construct_UPackage__Script_WebBrowser(), TEXT("WebJSResponse"));
	}
	return Z_Registration_Info_UScriptStruct_WebJSResponse.OuterSingleton;
}
template<> WEBBROWSER_API UScriptStruct* StaticStruct<FWebJSResponse>()
{
	return FWebJSResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebJSResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebJSResponse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *  Representation of a remote JS async response object.\n *  UFUNCTIONs taking a FWebJSResponse will get it passed in automatically when called from a web browser.\n *  Pass a result or error back by invoking Success or Failure on the object.\n *  UFunctions accepting a FWebJSResponse should have a void return type, as any value returned from the function will be ignored.\n *  Calling the response methods does not have to happen before returning from the function, which means you can use this to implement asynchronous functionality.\n *\n *  Note that the remote object will become invalid as soon as a result has been delivered, so you can only call either Success or Failure once.\n */" },
		{ "ModuleRelativePath", "Public/WebJSFunction.h" },
		{ "ToolTip", "Representation of a remote JS async response object.\nUFUNCTIONs taking a FWebJSResponse will get it passed in automatically when called from a web browser.\nPass a result or error back by invoking Success or Failure on the object.\nUFunctions accepting a FWebJSResponse should have a void return type, as any value returned from the function will be ignored.\nCalling the response methods does not have to happen before returning from the function, which means you can use this to implement asynchronous functionality.\n\nNote that the remote object will become invalid as soon as a result has been delivered, so you can only call either Success or Failure once." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebJSResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebJSResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebJSResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebBrowser,
		Z_Construct_UScriptStruct_FWebJSCallbackBase,
		&NewStructOps,
		"WebJSResponse",
		sizeof(FWebJSResponse),
		alignof(FWebJSResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebJSResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebJSResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebJSResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_WebJSResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebJSResponse.InnerSingleton, Z_Construct_UScriptStruct_FWebJSResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebJSResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowser_Public_WebJSFunction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowser_Public_WebJSFunction_h_Statics::ScriptStructInfo[] = {
		{ FWebJSCallbackBase::StaticStruct, Z_Construct_UScriptStruct_FWebJSCallbackBase_Statics::NewStructOps, TEXT("WebJSCallbackBase"), &Z_Registration_Info_UScriptStruct_WebJSCallbackBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebJSCallbackBase), 3843658404U) },
		{ FWebJSFunction::StaticStruct, Z_Construct_UScriptStruct_FWebJSFunction_Statics::NewStructOps, TEXT("WebJSFunction"), &Z_Registration_Info_UScriptStruct_WebJSFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebJSFunction), 2445467039U) },
		{ FWebJSResponse::StaticStruct, Z_Construct_UScriptStruct_FWebJSResponse_Statics::NewStructOps, TEXT("WebJSResponse"), &Z_Registration_Info_UScriptStruct_WebJSResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebJSResponse), 475799260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowser_Public_WebJSFunction_h_324425842(TEXT("/Script/WebBrowser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowser_Public_WebJSFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowser_Public_WebJSFunction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
