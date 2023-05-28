// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpHeader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpHeader() {}
// Cross Module References
	HTTPBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FHttpHeader();
	UPackage* Z_Construct_UPackage__Script_HttpBlueprint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpHeader;
class UScriptStruct* FHttpHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpHeader, (UObject*)Z_Construct_UPackage__Script_HttpBlueprint(), TEXT("HttpHeader"));
	}
	return Z_Registration_Info_UScriptStruct_HttpHeader.OuterSingleton;
}
template<> HTTPBLUEPRINT_API UScriptStruct* StaticStruct<FHttpHeader>()
{
	return FHttpHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides a way for blueprint to create and store a map of HTTP headers\n */" },
		{ "ModuleRelativePath", "Public/HttpHeader.h" },
		{ "ToolTip", "Provides a way for blueprint to create and store a map of HTTP headers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpHeader>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpHeader_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpHeader_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpHeader_Statics::NewProp_Headers_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpHeader.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHttpHeader_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpHeader, Headers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpHeader_Statics::NewProp_Headers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpHeader_Statics::NewProp_Headers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpHeader_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpHeader_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpHeader_Statics::NewProp_Headers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpBlueprint,
		nullptr,
		&NewStructOps,
		"HttpHeader",
		sizeof(FHttpHeader),
		alignof(FHttpHeader),
		Z_Construct_UScriptStruct_FHttpHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpHeader.InnerSingleton, Z_Construct_UScriptStruct_FHttpHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpHeader.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpHeader_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpHeader_h_Statics::ScriptStructInfo[] = {
		{ FHttpHeader::StaticStruct, Z_Construct_UScriptStruct_FHttpHeader_Statics::NewStructOps, TEXT("HttpHeader"), &Z_Registration_Info_UScriptStruct_HttpHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpHeader), 671006153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpHeader_h_1748808668(TEXT("/Script/HttpBlueprint"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpHeader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpHeader_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
