// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/PlatformInterfaceWebResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformInterfaceWebResponse() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceWebResponse();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceWebResponse_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UPlatformInterfaceWebResponse::execGetHeaderValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHeaderValue(Z_Param_HeaderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInterfaceWebResponse::execGetHeader)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HeaderIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Header);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHeader(Z_Param_HeaderIndex,Z_Param_Out_Header,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInterfaceWebResponse::execGetNumHeaders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumHeaders();
		P_NATIVE_END;
	}
	void UPlatformInterfaceWebResponse::StaticRegisterNativesUPlatformInterfaceWebResponse()
	{
		UClass* Class = UPlatformInterfaceWebResponse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeader", &UPlatformInterfaceWebResponse::execGetHeader },
			{ "GetHeaderValue", &UPlatformInterfaceWebResponse::execGetHeaderValue },
			{ "GetNumHeaders", &UPlatformInterfaceWebResponse::execGetNumHeaders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics
	{
		struct PlatformInterfaceWebResponse_eventGetHeader_Parms
		{
			int32 HeaderIndex;
			FString Header;
			FString Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeaderIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Header;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::NewProp_HeaderIndex = { "HeaderIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeader_Parms, HeaderIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeader_Parms, Header), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeader_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::NewProp_HeaderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Retrieve the header and value for the given index of header/value pair */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
		{ "ToolTip", "Retrieve the header and value for the given index of header/value pair" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInterfaceWebResponse, nullptr, "GetHeader", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::PlatformInterfaceWebResponse_eventGetHeader_Parms), Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics
	{
		struct PlatformInterfaceWebResponse_eventGetHeaderValue_Parms
		{
			FString HeaderName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeaderValue_Parms, HeaderName), METADATA_PARAMS(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::NewProp_HeaderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::NewProp_HeaderName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetHeaderValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::NewProp_HeaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return the value for the given header (or \"\" if no matching header) */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
		{ "ToolTip", "@return the value for the given header (or \"\" if no matching header)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInterfaceWebResponse, nullptr, "GetHeaderValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::PlatformInterfaceWebResponse_eventGetHeaderValue_Parms), Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics
	{
		struct PlatformInterfaceWebResponse_eventGetNumHeaders_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInterfaceWebResponse_eventGetNumHeaders_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return the number of header/value pairs */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
		{ "ToolTip", "@return the number of header/value pairs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInterfaceWebResponse, nullptr, "GetNumHeaders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::PlatformInterfaceWebResponse_eventGetNumHeaders_Parms), Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformInterfaceWebResponse);
	UClass* Z_Construct_UClass_UPlatformInterfaceWebResponse_NoRegister()
	{
		return UPlatformInterfaceWebResponse::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringResponse_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringResponse;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BinaryResponse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinaryResponse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BinaryResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeader, "GetHeader" }, // 1889170678
		{ &Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetHeaderValue, "GetHeaderValue" }, // 199622522
		{ &Z_Construct_UFunction_UPlatformInterfaceWebResponse_GetNumHeaders, "GetNumHeaders" }, // 959931331
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PlatformInterfaceWebResponse.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_OriginalURL_MetaData[] = {
		{ "Comment", "/** This holds the original requested URL */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
		{ "ToolTip", "This holds the original requested URL" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_OriginalURL = { "OriginalURL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, OriginalURL), METADATA_PARAMS(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_OriginalURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_OriginalURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_ResponseCode_MetaData[] = {
		{ "Comment", "/** Result code from the response (200=OK, 404=Not Found, etc) */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
		{ "ToolTip", "Result code from the response (200=OK, 404=Not Found, etc)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, ResponseCode), METADATA_PARAMS(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_ResponseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_ResponseCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_Tag_MetaData[] = {
		{ "Comment", "/** A user-specified tag specified with the request */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
		{ "ToolTip", "A user-specified tag specified with the request" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, Tag), METADATA_PARAMS(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_StringResponse_MetaData[] = {
		{ "Comment", "/** For string results, this is the response */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
		{ "ToolTip", "For string results, this is the response" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_StringResponse = { "StringResponse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, StringResponse), METADATA_PARAMS(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_StringResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_StringResponse_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_BinaryResponse_Inner = { "BinaryResponse", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_BinaryResponse_MetaData[] = {
		{ "Comment", "/** For non-string results, this is the response */" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceWebResponse.h" },
		{ "ToolTip", "For non-string results, this is the response" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_BinaryResponse = { "BinaryResponse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformInterfaceWebResponse, BinaryResponse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_BinaryResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_BinaryResponse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_OriginalURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_ResponseCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_StringResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_BinaryResponse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::NewProp_BinaryResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformInterfaceWebResponse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::ClassParams = {
		&UPlatformInterfaceWebResponse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformInterfaceWebResponse()
	{
		if (!Z_Registration_Info_UClass_UPlatformInterfaceWebResponse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformInterfaceWebResponse.OuterSingleton, Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformInterfaceWebResponse.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPlatformInterfaceWebResponse>()
	{
		return UPlatformInterfaceWebResponse::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformInterfaceWebResponse);
	UPlatformInterfaceWebResponse::~UPlatformInterfaceWebResponse() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformInterfaceWebResponse, UPlatformInterfaceWebResponse::StaticClass, TEXT("UPlatformInterfaceWebResponse"), &Z_Registration_Info_UClass_UPlatformInterfaceWebResponse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformInterfaceWebResponse), 4135521304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_2238097868(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
