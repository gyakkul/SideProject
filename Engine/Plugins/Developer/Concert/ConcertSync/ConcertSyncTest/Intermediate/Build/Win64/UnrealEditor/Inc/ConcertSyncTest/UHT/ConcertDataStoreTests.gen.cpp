// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Developer/Concert/ConcertSync/ConcertSyncTest/Source/ConcertSyncTest/Private/ConcertDataStoreTests.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertDataStoreTests() {}
// Cross Module References
	CONCERTSYNCTEST_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncTest();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_CustomTypeTest;
class UScriptStruct* FConcertDataStore_CustomTypeTest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_CustomTypeTest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_CustomTypeTest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest, (UObject*)Z_Construct_UPackage__Script_ConcertSyncTest(), TEXT("ConcertDataStore_CustomTypeTest"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_CustomTypeTest.OuterSingleton;
}
template<> CONCERTSYNCTEST_API UScriptStruct* StaticStruct<FConcertDataStore_CustomTypeTest>()
{
	return FConcertDataStore_CustomTypeTest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int8Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Int8Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64Value_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A custom type for ConcertDatastore testing purpose. */" },
		{ "ModuleRelativePath", "Private/ConcertDataStoreTests.h" },
		{ "ToolTip", "A custom type for ConcertDatastore testing purpose." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_CustomTypeTest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int8Value_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "ModuleRelativePath", "Private/ConcertDataStoreTests.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int8Value = { "Int8Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_CustomTypeTest, Int8Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int8Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int8Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int64Value_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "ModuleRelativePath", "Private/ConcertDataStoreTests.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int64Value = { "Int64Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_CustomTypeTest, Int64Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int64Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int64Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "ModuleRelativePath", "Private/ConcertDataStoreTests.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_CustomTypeTest, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_FloatValue_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_IntArray_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "ModuleRelativePath", "Private/ConcertDataStoreTests.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_CustomTypeTest, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_IntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_IntArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int8Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_Int64Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewProp_IntArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncTest,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_CustomTypeTest",
		sizeof(FConcertDataStore_CustomTypeTest),
		alignof(FConcertDataStore_CustomTypeTest),
		Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_CustomTypeTest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_CustomTypeTest.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_CustomTypeTest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_ConcertDataStoreTests_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_ConcertDataStoreTests_h_Statics::ScriptStructInfo[] = {
		{ FConcertDataStore_CustomTypeTest::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_CustomTypeTest_Statics::NewStructOps, TEXT("ConcertDataStore_CustomTypeTest"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_CustomTypeTest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_CustomTypeTest), 4084990635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_ConcertDataStoreTests_h_3658595002(TEXT("/Script/ConcertSyncTest"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_ConcertDataStoreTests_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncTest_Source_ConcertSyncTest_Private_ConcertDataStoreTests_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
