// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpBlueprintFunctionLibrary.h"
#include "HttpHeader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpBlueprintFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HTTPBLUEPRINT_API UClass* Z_Construct_UClass_UHttpBlueprintFunctionLibrary();
	HTTPBLUEPRINT_API UClass* Z_Construct_UClass_UHttpBlueprintFunctionLibrary_NoRegister();
	HTTPBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FHttpHeader();
	UPackage* Z_Construct_UPackage__Script_HttpBlueprint();
// End Cross Module References
	DEFINE_FUNCTION(UHttpBlueprintFunctionLibrary::execRemoveHeader)
	{
		P_GET_STRUCT_REF(FHttpHeader,Z_Param_Out_HeaderObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHttpBlueprintFunctionLibrary::RemoveHeader(Z_Param_Out_HeaderObject,Z_Param_HeaderToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpBlueprintFunctionLibrary::execAddHeader)
	{
		P_GET_STRUCT_REF(FHttpHeader,Z_Param_Out_HeaderObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewHeader);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewHeaderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHttpBlueprintFunctionLibrary::AddHeader(Z_Param_Out_HeaderObject,Z_Param_NewHeader,Z_Param_NewHeaderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpBlueprintFunctionLibrary::execGetAllHeaders_Map)
	{
		P_GET_STRUCT_REF(FHttpHeader,Z_Param_Out_HeaderObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=UHttpBlueprintFunctionLibrary::GetAllHeaders_Map(Z_Param_Out_HeaderObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpBlueprintFunctionLibrary::execGetAllHeaders)
	{
		P_GET_STRUCT_REF(FHttpHeader,Z_Param_Out_HeaderObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UHttpBlueprintFunctionLibrary::GetAllHeaders(Z_Param_Out_HeaderObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpBlueprintFunctionLibrary::execGetHeaderValue)
	{
		P_GET_STRUCT_REF(FHttpHeader,Z_Param_Out_HeaderObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutHeaderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHttpBlueprintFunctionLibrary::GetHeaderValue(Z_Param_Out_HeaderObject,Z_Param_HeaderName,Z_Param_Out_OutHeaderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpBlueprintFunctionLibrary::execMakeRequestHeader)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Headers);
		P_GET_STRUCT_REF(FHttpHeader,Z_Param_Out_OutHeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHttpBlueprintFunctionLibrary::MakeRequestHeader(Z_Param_Out_Headers,Z_Param_Out_OutHeader);
		P_NATIVE_END;
	}
	void UHttpBlueprintFunctionLibrary::StaticRegisterNativesUHttpBlueprintFunctionLibrary()
	{
		UClass* Class = UHttpBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHeader", &UHttpBlueprintFunctionLibrary::execAddHeader },
			{ "GetAllHeaders", &UHttpBlueprintFunctionLibrary::execGetAllHeaders },
			{ "GetAllHeaders_Map", &UHttpBlueprintFunctionLibrary::execGetAllHeaders_Map },
			{ "GetHeaderValue", &UHttpBlueprintFunctionLibrary::execGetHeaderValue },
			{ "MakeRequestHeader", &UHttpBlueprintFunctionLibrary::execMakeRequestHeader },
			{ "RemoveHeader", &UHttpBlueprintFunctionLibrary::execRemoveHeader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics
	{
		struct HttpBlueprintFunctionLibrary_eventAddHeader_Parms
		{
			FHttpHeader HeaderObject;
			FString NewHeader;
			FString NewHeaderValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewHeader;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewHeaderValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::NewProp_HeaderObject = { "HeaderObject", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventAddHeader_Parms, HeaderObject), Z_Construct_UScriptStruct_FHttpHeader, METADATA_PARAMS(nullptr, 0) }; // 671006153
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::NewProp_NewHeader = { "NewHeader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventAddHeader_Parms, NewHeader), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::NewProp_NewHeaderValue = { "NewHeaderValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventAddHeader_Parms, NewHeaderValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::NewProp_HeaderObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::NewProp_NewHeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::NewProp_NewHeaderValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Http" },
		{ "Comment", "/**\n\x09 *\x09""Adds a new Header\n\x09 *\n\x09 *\x09@Param HeaderObject: The structure that contains all of the headers\n\x09 *\x09@Param NewHeader: The name of the header\n\x09 *\x09@Param NewHeaderValue: The value of the new header\n\x09 */" },
		{ "ModuleRelativePath", "Public/HttpBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Adds a new Header\n\n@Param HeaderObject: The structure that contains all of the headers\n@Param NewHeader: The name of the header\n@Param NewHeaderValue: The value of the new header" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpBlueprintFunctionLibrary, nullptr, "AddHeader", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::HttpBlueprintFunctionLibrary_eventAddHeader_Parms), Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics
	{
		struct HttpBlueprintFunctionLibrary_eventGetAllHeaders_Parms
		{
			FHttpHeader HeaderObject;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_HeaderObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_HeaderObject = { "HeaderObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventGetAllHeaders_Parms, HeaderObject), Z_Construct_UScriptStruct_FHttpHeader, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_HeaderObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_HeaderObject_MetaData)) }; // 671006153
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Headers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventGetAllHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_HeaderObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Http" },
		{ "Comment", "/** Returns all of the headers and their values by value */" },
		{ "ModuleRelativePath", "Public/HttpBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns all of the headers and their values by value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpBlueprintFunctionLibrary, nullptr, "GetAllHeaders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::HttpBlueprintFunctionLibrary_eventGetAllHeaders_Parms), Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics
	{
		struct HttpBlueprintFunctionLibrary_eventGetAllHeaders_Map_Parms
		{
			FHttpHeader HeaderObject;
			TMap<FString,FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_HeaderObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_HeaderObject = { "HeaderObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventGetAllHeaders_Map_Parms, HeaderObject), Z_Construct_UScriptStruct_FHttpHeader, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_HeaderObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_HeaderObject_MetaData)) }; // 671006153
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Headers" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventGetAllHeaders_Map_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_HeaderObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::Function_MetaDataParams[] = {
		{ "Category", "Http" },
		{ "Comment", "/** Returns all of the headers and their values as a map by value */" },
		{ "DisplayName", "GetAllHeadersAsMap" },
		{ "ModuleRelativePath", "Public/HttpBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns all of the headers and their values as a map by value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpBlueprintFunctionLibrary, nullptr, "GetAllHeaders_Map", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::HttpBlueprintFunctionLibrary_eventGetAllHeaders_Map_Parms), Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics
	{
		struct HttpBlueprintFunctionLibrary_eventGetHeaderValue_Parms
		{
			FHttpHeader HeaderObject;
			FString HeaderName;
			FString OutHeaderValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutHeaderValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_HeaderObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_HeaderObject = { "HeaderObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventGetHeaderValue_Parms, HeaderObject), Z_Construct_UScriptStruct_FHttpHeader, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_HeaderObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_HeaderObject_MetaData)) }; // 671006153
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventGetHeaderValue_Parms, HeaderName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_OutHeaderValue = { "OutHeaderValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventGetHeaderValue_Parms, OutHeaderValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpBlueprintFunctionLibrary_eventGetHeaderValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpBlueprintFunctionLibrary_eventGetHeaderValue_Parms), &Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_HeaderObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_HeaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_OutHeaderValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Http" },
		{ "Comment", "/**\n\x09 *\x09Get the value associated with a Header name\n\x09 *\n\x09 *\x09@Param HeaderObject: The structure that contains all of the headers\n\x09 *\x09@Param HeaderName: The name of the Header\n\x09 *\x09@Param OutHeaderValue: The value of the Header. Empty if the Header could not be found\n\x09 *\x09@Return Whether the operation was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/HttpBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Get the value associated with a Header name\n\n@Param HeaderObject: The structure that contains all of the headers\n@Param HeaderName: The name of the Header\n@Param OutHeaderValue: The value of the Header. Empty if the Header could not be found\n@Return Whether the operation was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpBlueprintFunctionLibrary, nullptr, "GetHeaderValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::HttpBlueprintFunctionLibrary_eventGetHeaderValue_Parms), Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics
	{
		struct HttpBlueprintFunctionLibrary_eventMakeRequestHeader_Parms
		{
			TMap<FString,FString> Headers;
			FHttpHeader OutHeader;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutHeader_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHeader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventMakeRequestHeader_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_Headers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_OutHeader_MetaData[] = {
		{ "DisplayName", "Header" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_OutHeader = { "OutHeader", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventMakeRequestHeader_Parms, OutHeader), Z_Construct_UScriptStruct_FHttpHeader, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_OutHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_OutHeader_MetaData)) }; // 671006153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::NewProp_OutHeader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Http" },
		{ "ModuleRelativePath", "Public/HttpBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpBlueprintFunctionLibrary, nullptr, "MakeRequestHeader", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::HttpBlueprintFunctionLibrary_eventMakeRequestHeader_Parms), Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics
	{
		struct HttpBlueprintFunctionLibrary_eventRemoveHeader_Parms
		{
			FHttpHeader HeaderObject;
			FString HeaderToRemove;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::NewProp_HeaderObject = { "HeaderObject", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventRemoveHeader_Parms, HeaderObject), Z_Construct_UScriptStruct_FHttpHeader, METADATA_PARAMS(nullptr, 0) }; // 671006153
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::NewProp_HeaderToRemove = { "HeaderToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpBlueprintFunctionLibrary_eventRemoveHeader_Parms, HeaderToRemove), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpBlueprintFunctionLibrary_eventRemoveHeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpBlueprintFunctionLibrary_eventRemoveHeader_Parms), &Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::NewProp_HeaderObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::NewProp_HeaderToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Http" },
		{ "Comment", "/**\n\x09 *\x09Removes a header from the HeaderObject\n\x09 *\n\x09 *\x09@Param HeaderObject: The structure that contains all of the headers\n\x09 *\x09@Param HeaderToRemove: The Key of the header to remove\n\x09 *\x09@Return Whether or not the operation was successful. A value of false most likely means the Key did not exist on the HeaderObject\n\x09 */" },
		{ "ModuleRelativePath", "Public/HttpBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Removes a header from the HeaderObject\n\n@Param HeaderObject: The structure that contains all of the headers\n@Param HeaderToRemove: The Key of the header to remove\n@Return Whether or not the operation was successful. A value of false most likely means the Key did not exist on the HeaderObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpBlueprintFunctionLibrary, nullptr, "RemoveHeader", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::HttpBlueprintFunctionLibrary_eventRemoveHeader_Parms), Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UHttpBlueprintFunctionLibrary_NoRegister()
	{
		return UHttpBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpBlueprint,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_AddHeader, "AddHeader" }, // 2238487816
		{ &Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders, "GetAllHeaders" }, // 2632624129
		{ &Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetAllHeaders_Map, "GetAllHeaders_Map" }, // 729969272
		{ &Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_GetHeaderValue, "GetHeaderValue" }, // 2650053127
		{ &Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_MakeRequestHeader, "MakeRequestHeader" }, // 3263542490
		{ &Z_Construct_UFunction_UHttpBlueprintFunctionLibrary_RemoveHeader, "RemoveHeader" }, // 3238231303
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HttpBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics::ClassParams = {
		&UHttpBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UHttpBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UHttpBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> HTTPBLUEPRINT_API UClass* StaticClass<UHttpBlueprintFunctionLibrary>()
	{
		return UHttpBlueprintFunctionLibrary::StaticClass();
	}
	UHttpBlueprintFunctionLibrary::UHttpBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpBlueprintFunctionLibrary);
	UHttpBlueprintFunctionLibrary::~UHttpBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpBlueprintFunctionLibrary, UHttpBlueprintFunctionLibrary::StaticClass, TEXT("UHttpBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UHttpBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpBlueprintFunctionLibrary), 151491216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_3574171207(TEXT("/Script/HttpBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
