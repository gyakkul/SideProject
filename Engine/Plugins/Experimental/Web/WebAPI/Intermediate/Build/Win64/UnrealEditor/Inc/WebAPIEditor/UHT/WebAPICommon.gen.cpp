// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPICommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPICommon() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPITemplateString();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebAPITemplateString;
class UScriptStruct* FWebAPITemplateString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebAPITemplateString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebAPITemplateString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAPITemplateString, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("WebAPITemplateString"));
	}
	return Z_Registration_Info_UScriptStruct_WebAPITemplateString.OuterSingleton;
}
template<> WEBAPIEDITOR_API UScriptStruct* StaticStruct<FWebAPITemplateString>()
{
	return FWebAPITemplateString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebAPITemplateString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WebAPICommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAPITemplateString>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::NewProp_String_MetaData[] = {
		{ "Category", "String" },
		{ "ModuleRelativePath", "Public/WebAPICommon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPITemplateString, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::NewProp_String,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		&NewStructOps,
		"WebAPITemplateString",
		sizeof(FWebAPITemplateString),
		alignof(FWebAPITemplateString),
		Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAPITemplateString()
	{
		if (!Z_Registration_Info_UScriptStruct_WebAPITemplateString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebAPITemplateString.InnerSingleton, Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebAPITemplateString.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPICommon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPICommon_h_Statics::ScriptStructInfo[] = {
		{ FWebAPITemplateString::StaticStruct, Z_Construct_UScriptStruct_FWebAPITemplateString_Statics::NewStructOps, TEXT("WebAPITemplateString"), &Z_Registration_Info_UScriptStruct_WebAPITemplateString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAPITemplateString), 2220680005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPICommon_h_3371124094(TEXT("/Script/WebAPIEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPICommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPICommon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
