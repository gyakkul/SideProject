// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIUtilities.h"
#include "WebAPIMessageResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIUtilities() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WebAPI();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIUtilities();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIUtilities_NoRegister();
	WEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPIMessageResponse();
// End Cross Module References
	DEFINE_FUNCTION(UWebAPIUtilities::execGetHostFromUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWebAPIUtilities::GetHostFromUrl(Z_Param_InUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebAPIUtilities::execGetResponseMessage)
	{
		P_GET_STRUCT_REF(FWebAPIMessageResponse,Z_Param_Out_MessageResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UWebAPIUtilities::GetResponseMessage(Z_Param_Out_MessageResponse);
		P_NATIVE_END;
	}
	void UWebAPIUtilities::StaticRegisterNativesUWebAPIUtilities()
	{
		UClass* Class = UWebAPIUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHostFromUrl", &UWebAPIUtilities::execGetHostFromUrl },
			{ "GetResponseMessage", &UWebAPIUtilities::execGetResponseMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics
	{
		struct WebAPIUtilities_eventGetHostFromUrl_Parms
		{
			FString InUrl;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InUrl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::NewProp_InUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::NewProp_InUrl = { "InUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebAPIUtilities_eventGetHostFromUrl_Parms, InUrl), METADATA_PARAMS(Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::NewProp_InUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::NewProp_InUrl_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebAPIUtilities_eventGetHostFromUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::NewProp_InUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebAPI" },
		{ "Comment", "/** Return the host (only) from the provided Url. */" },
		{ "ModuleRelativePath", "Public/WebAPIUtilities.h" },
		{ "ToolTip", "Return the host (only) from the provided Url." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebAPIUtilities, nullptr, "GetHostFromUrl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::WebAPIUtilities_eventGetHostFromUrl_Parms), Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics
	{
		struct WebAPIUtilities_eventGetResponseMessage_Parms
		{
			FWebAPIMessageResponse MessageResponse;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageResponse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_MessageResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_MessageResponse = { "MessageResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebAPIUtilities_eventGetResponseMessage_Parms, MessageResponse), Z_Construct_UScriptStruct_FWebAPIMessageResponse, METADATA_PARAMS(Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_MessageResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_MessageResponse_MetaData)) }; // 2764388573
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebAPIUtilities_eventGetResponseMessage_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_MessageResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebAPI" },
		{ "Comment", "/** Return the message from the provided response. */" },
		{ "ModuleRelativePath", "Public/WebAPIUtilities.h" },
		{ "ToolTip", "Return the message from the provided response." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebAPIUtilities, nullptr, "GetResponseMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::WebAPIUtilities_eventGetResponseMessage_Parms), Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIUtilities);
	UClass* Z_Construct_UClass_UWebAPIUtilities_NoRegister()
	{
		return UWebAPIUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebAPIUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebAPIUtilities_GetHostFromUrl, "GetHostFromUrl" }, // 1095824379
		{ &Z_Construct_UFunction_UWebAPIUtilities_GetResponseMessage, "GetResponseMessage" }, // 1977893281
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebAPIUtilities.h" },
		{ "ModuleRelativePath", "Public/WebAPIUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIUtilities_Statics::ClassParams = {
		&UWebAPIUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIUtilities()
	{
		if (!Z_Registration_Info_UClass_UWebAPIUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIUtilities.OuterSingleton, Z_Construct_UClass_UWebAPIUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIUtilities.OuterSingleton;
	}
	template<> WEBAPI_API UClass* StaticClass<UWebAPIUtilities>()
	{
		return UWebAPIUtilities::StaticClass();
	}
	UWebAPIUtilities::UWebAPIUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIUtilities);
	UWebAPIUtilities::~UWebAPIUtilities() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIUtilities, UWebAPIUtilities::StaticClass, TEXT("UWebAPIUtilities"), &Z_Registration_Info_UClass_UWebAPIUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIUtilities), 3245950270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_2871714231(TEXT("/Script/WebAPI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
