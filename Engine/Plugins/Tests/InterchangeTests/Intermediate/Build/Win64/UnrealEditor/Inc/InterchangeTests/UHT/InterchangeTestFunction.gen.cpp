// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTestFunction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunction();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeTestFunctionResult;
class UScriptStruct* FInterchangeTestFunctionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeTestFunctionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeTestFunctionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, (UObject*)Z_Construct_UPackage__Script_InterchangeTests(), TEXT("InterchangeTestFunctionResult"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeTestFunctionResult.OuterSingleton;
}
template<> INTERCHANGETESTS_API UScriptStruct* StaticStruct<FInterchangeTestFunctionResult>()
{
	return FInterchangeTestFunctionResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Infos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Infos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Infos;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Warnings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warnings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Warnings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Errors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Errors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeTestFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeTestFunctionResult>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Infos_Inner = { "Infos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Infos_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeTestFunction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Infos = { "Infos", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeTestFunctionResult, Infos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Infos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Infos_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Warnings_Inner = { "Warnings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Warnings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeTestFunction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Warnings = { "Warnings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeTestFunctionResult, Warnings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Warnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Warnings_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Errors_Inner = { "Errors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Errors_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeTestFunction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeTestFunctionResult, Errors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Errors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Errors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Infos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Infos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Warnings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Warnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Errors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewProp_Errors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
		nullptr,
		&NewStructOps,
		"InterchangeTestFunctionResult",
		sizeof(FInterchangeTestFunctionResult),
		alignof(FInterchangeTestFunctionResult),
		Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeTestFunctionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeTestFunctionResult.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeTestFunctionResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeTestFunction;
class UScriptStruct* FInterchangeTestFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeTestFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeTestFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeTestFunction, (UObject*)Z_Construct_UPackage__Script_InterchangeTests(), TEXT("InterchangeTestFunction"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeTestFunction.OuterSingleton;
}
template<> INTERCHANGETESTS_API UScriptStruct* StaticStruct<FInterchangeTestFunction>()
{
	return FInterchangeTestFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckFunction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CheckFunction;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeTestFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeTestFunction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_AssetClass_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** Type of the asset being tested */" },
		{ "ModuleRelativePath", "Public/InterchangeTestFunction.h" },
		{ "ToolTip", "Type of the asset being tested" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeTestFunction, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_AssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_AssetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_OptionalAssetName_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** Optional name of the asset to test, if there are various contenders */" },
		{ "ModuleRelativePath", "Public/InterchangeTestFunction.h" },
		{ "ToolTip", "Optional name of the asset to test, if there are various contenders" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_OptionalAssetName = { "OptionalAssetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeTestFunction, OptionalAssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_OptionalAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_OptionalAssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_CheckFunction_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** A function to be called to determine whether the result is correct */" },
		{ "ModuleRelativePath", "Public/InterchangeTestFunction.h" },
		{ "ToolTip", "A function to be called to determine whether the result is correct" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_CheckFunction = { "CheckFunction", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeTestFunction, CheckFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_CheckFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_CheckFunction_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** Parameters and their bound values as text */" },
		{ "ModuleRelativePath", "Public/InterchangeTestFunction.h" },
		{ "ToolTip", "Parameters and their bound values as text" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeTestFunction, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_Parameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_AssetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_OptionalAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_CheckFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
		nullptr,
		&NewStructOps,
		"InterchangeTestFunction",
		sizeof(FInterchangeTestFunction),
		alignof(FInterchangeTestFunction),
		Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeTestFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeTestFunction.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeTestFunction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestFunction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestFunction_h_Statics::ScriptStructInfo[] = {
		{ FInterchangeTestFunctionResult::StaticStruct, Z_Construct_UScriptStruct_FInterchangeTestFunctionResult_Statics::NewStructOps, TEXT("InterchangeTestFunctionResult"), &Z_Registration_Info_UScriptStruct_InterchangeTestFunctionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeTestFunctionResult), 1077685810U) },
		{ FInterchangeTestFunction::StaticStruct, Z_Construct_UScriptStruct_FInterchangeTestFunction_Statics::NewStructOps, TEXT("InterchangeTestFunction"), &Z_Registration_Info_UScriptStruct_InterchangeTestFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeTestFunction), 2897743584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestFunction_h_536147909(TEXT("/Script/InterchangeTests"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeTestFunction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
