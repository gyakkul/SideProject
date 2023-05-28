// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertDataStoreMessages.h"
#include "ConcertMessageData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertDataStoreMessages() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSerializedPayload();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Double();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Integer();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Request();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Response();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_StoreValue();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_String();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Text();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertDataStoreResultCode;
	static UEnum* EConcertDataStoreResultCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertDataStoreResultCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertDataStoreResultCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertDataStoreResultCode"));
		}
		return Z_Registration_Info_UEnum_EConcertDataStoreResultCode.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertDataStoreResultCode>()
	{
		return EConcertDataStoreResultCode_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode_Statics::Enumerators[] = {
		{ "EConcertDataStoreResultCode::Added", (int64)EConcertDataStoreResultCode::Added },
		{ "EConcertDataStoreResultCode::Fetched", (int64)EConcertDataStoreResultCode::Fetched },
		{ "EConcertDataStoreResultCode::Exchanged", (int64)EConcertDataStoreResultCode::Exchanged },
		{ "EConcertDataStoreResultCode::NotFound", (int64)EConcertDataStoreResultCode::NotFound },
		{ "EConcertDataStoreResultCode::TypeMismatch", (int64)EConcertDataStoreResultCode::TypeMismatch },
		{ "EConcertDataStoreResultCode::UnexpectedError", (int64)EConcertDataStoreResultCode::UnexpectedError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode_Statics::Enum_MetaDataParams[] = {
		{ "Added.Comment", "/** The key/value pair was added. */" },
		{ "Added.Name", "EConcertDataStoreResultCode::Added" },
		{ "Added.ToolTip", "The key/value pair was added." },
		{ "Comment", "/** Response codes for Concert data store operations. */" },
		{ "Exchanged.Comment", "/** The specified key value was exchanged. */" },
		{ "Exchanged.Name", "EConcertDataStoreResultCode::Exchanged" },
		{ "Exchanged.ToolTip", "The specified key value was exchanged." },
		{ "Fetched.Comment", "/** The specified key value was fetched. */" },
		{ "Fetched.Name", "EConcertDataStoreResultCode::Fetched" },
		{ "Fetched.ToolTip", "The specified key value was fetched." },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "NotFound.Comment", "/** Reading or writing a key value in the data store failed because the specified key could not be found. */" },
		{ "NotFound.Name", "EConcertDataStoreResultCode::NotFound" },
		{ "NotFound.ToolTip", "Reading or writing a key value in the data store failed because the specified key could not be found." },
		{ "ToolTip", "Response codes for Concert data store operations." },
		{ "TypeMismatch.Comment", "/** Reading or writing a key value in the data store failed because the specified value type did not match the stored value type. */" },
		{ "TypeMismatch.Name", "EConcertDataStoreResultCode::TypeMismatch" },
		{ "TypeMismatch.ToolTip", "Reading or writing a key value in the data store failed because the specified value type did not match the stored value type." },
		{ "UnexpectedError.Comment", "/** An unexpected error occurred. */" },
		{ "UnexpectedError.Name", "EConcertDataStoreResultCode::UnexpectedError" },
		{ "UnexpectedError.ToolTip", "An unexpected error occurred." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertDataStoreResultCode",
		"EConcertDataStoreResultCode",
		Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode()
	{
		if (!Z_Registration_Info_UEnum_EConcertDataStoreResultCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertDataStoreResultCode.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertDataStoreResultCode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_Integer;
class UScriptStruct* FConcertDataStore_Integer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Integer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_Integer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_Integer, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_Integer"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_Integer.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_Integer>()
{
	return FConcertDataStore_Integer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A USTRUCT() wrapper struct, used by the implementation, to serialize/deserialize integers (of any type)\n * or bool values passed to the Concert data store API.\n */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "A USTRUCT() wrapper struct, used by the implementation, to serialize/deserialize integers (of any type)\nor bool values passed to the Concert data store API." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_Integer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Concert Data Store Value" },
		{ "Comment", "/** The stored value. */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The stored value." },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_Integer, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_Integer",
		sizeof(FConcertDataStore_Integer),
		alignof(FConcertDataStore_Integer),
		Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Integer()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Integer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_Integer.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_Integer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_Double;
class UScriptStruct* FConcertDataStore_Double::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Double.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_Double.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_Double, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_Double"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_Double.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_Double>()
{
	return FConcertDataStore_Double::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A USTRUCT() wrapper struct, used by the implementation, to serialize/deserialize floating point values\n * passed to the Concert data store API.\n */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "A USTRUCT() wrapper struct, used by the implementation, to serialize/deserialize floating point values\npassed to the Concert data store API." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_Double>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Concert Data Store Value" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_Double, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_Double",
		sizeof(FConcertDataStore_Double),
		alignof(FConcertDataStore_Double),
		Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Double()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Double.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_Double.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_Double.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_String;
class UScriptStruct* FConcertDataStore_String::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_String.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_String.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_String, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_String"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_String.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_String>()
{
	return FConcertDataStore_String::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_String_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A USTRUCT() wrapper struct, used by the implementation, to serialize/deserialize FName and\n * FString passed to the Concert data store API.\n */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "A USTRUCT() wrapper struct, used by the implementation, to serialize/deserialize FName and\nFString passed to the Concert data store API." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_String>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Concert Data Store Value" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_String, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_String",
		sizeof(FConcertDataStore_String),
		alignof(FConcertDataStore_String),
		Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_String()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_String.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_String.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_String.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_Text;
class UScriptStruct* FConcertDataStore_Text::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Text.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_Text.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_Text, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_Text"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_Text.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_Text>()
{
	return FConcertDataStore_Text::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A USTRUCT() wrapper struct, used by the implementation, to serialize/deserialize FText passed to\n * the Concert data store API.\n */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "A USTRUCT() wrapper struct, used by the implementation, to serialize/deserialize FText passed to\nthe Concert data store API." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_Text>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Concert Data Store Value" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_Text, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_Text",
		sizeof(FConcertDataStore_Text),
		alignof(FConcertDataStore_Text),
		Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Text()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Text.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_Text.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_Text.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_StoreValue;
class UScriptStruct* FConcertDataStore_StoreValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_StoreValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_StoreValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_StoreValue"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_StoreValue.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_StoreValue>()
{
	return FConcertDataStore_StoreValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A value and its meta-data as stored by a Concert data store and transported between a client and a server. */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "A value and its meta-data as stored by a Concert data store and transported between a client and a server." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_StoreValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_TypeName_MetaData[] = {
		{ "Category", "Concert Data Store Value" },
		{ "Comment", "/**\n\x09 * The data type name as returned by TConcertDataStoreType::GetFName().\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The data type name as returned by TConcertDataStoreType::GetFName()." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_StoreValue, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_TypeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Concert Data Store Value" },
		{ "Comment", "/**\n\x09 * The value version number set by the server. Starting at 1 when a key/value pair\n\x09 * is inserted, incremented by one every time it is exchanged. As an optimization\n\x09 * in the implementation, the client may substitute, when possible, the expected\n\x09 * value by its expected version during a CompareExchange operation if the value\n\x09 * is large.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The value version number set by the server. Starting at 1 when a key/value pair\nis inserted, incremented by one every time it is exchanged. As an optimization\nin the implementation, the client may substitute, when possible, the expected\nvalue by its expected version during a CompareExchange operation if the value\nis large." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_StoreValue, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_SerializedValue_MetaData[] = {
		{ "Category", "Concert Data Store Value" },
		{ "Comment", "/** Contains the value in its serialized and compact form. @see DeserializeUnchecked(). */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "Contains the value in its serialized and compact form. @see DeserializeUnchecked()." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_SerializedValue = { "SerializedValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_StoreValue, SerializedValue), Z_Construct_UScriptStruct_FConcertSessionSerializedPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_SerializedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_SerializedValue_MetaData)) }; // 661764570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_TypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewProp_SerializedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_StoreValue",
		sizeof(FConcertDataStore_StoreValue),
		alignof(FConcertDataStore_StoreValue),
		Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_StoreValue()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_StoreValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_StoreValue.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_StoreValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_KeyValuePair;
class UScriptStruct* FConcertDataStore_KeyValuePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_KeyValuePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_KeyValuePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_KeyValuePair"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_KeyValuePair.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_KeyValuePair>()
{
	return FConcertDataStore_KeyValuePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains a key and its value, used by the client/server cache replication mechanism.\n * @see FConcertDataStore_ReplicateEvent\n */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "Contains a key and its value, used by the client/server cache replication mechanism.\n@see FConcertDataStore_ReplicateEvent" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_KeyValuePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/** The property name. */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The property name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_KeyValuePair, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/** The property value. */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The property value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_KeyValuePair, Value), Z_Construct_UScriptStruct_FConcertDataStore_StoreValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Value_MetaData)) }; // 542171258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_KeyValuePair",
		sizeof(FConcertDataStore_KeyValuePair),
		alignof(FConcertDataStore_KeyValuePair),
		Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_KeyValuePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_KeyValuePair.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_KeyValuePair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_ReplicateEvent;
class UScriptStruct* FConcertDataStore_ReplicateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_ReplicateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_ReplicateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_ReplicateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_ReplicateEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_ReplicateEvent>()
{
	return FConcertDataStore_ReplicateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The event message sent by the server to the client to perform the initial replication, sending\n * all currently stored key/value pairs to a new session client(s) or to notify any further changes,\n * pushing an updated key/value pair to all clients except the one who performed the change.\n */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The event message sent by the server to the client to perform the initial replication, sending\nall currently stored key/value pairs to a new session client(s) or to notify any further changes,\npushing an updated key/value pair to all clients except the one who performed the change." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_ReplicateEvent>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair, METADATA_PARAMS(nullptr, 0) }; // 4280074381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/** The initial values or the values that recently changed. */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The initial values or the values that recently changed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_ReplicateEvent, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::NewProp_Values_MetaData)) }; // 4280074381
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_ReplicateEvent",
		sizeof(FConcertDataStore_ReplicateEvent),
		alignof(FConcertDataStore_ReplicateEvent),
		Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_ReplicateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_ReplicateEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_ReplicateEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_Request;
class UScriptStruct* FConcertDataStore_Request::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Request.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_Request.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_Request, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_Request"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_Request.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_Request>()
{
	return FConcertDataStore_Request::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The request used as the base class for fetch or add and compare exchange\n * requests. The end user should not use this structure directly, but use the\n * FetchOrAdd() or CompareExchange() API instead.\n * @see IConcertClientDataStore::FetchAs() methods.\n * @see IConcertClientDataStore::FetchOrAdd() methods.\n * @see IConcertClientDataStore::CompareExchange() methods.\n */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The request used as the base class for fetch or add and compare exchange\nrequests. The end user should not use this structure directly, but use the\nFetchOrAdd() or CompareExchange() API instead.\n@see IConcertClientDataStore::FetchAs() methods.\n@see IConcertClientDataStore::FetchOrAdd() methods.\n@see IConcertClientDataStore::CompareExchange() methods." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_Request>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/** The name of the value to add/fetch/compare exchange. */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The name of the value to add/fetch/compare exchange." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_Request, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_TypeName_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/** The type name of the value USTRUCT to compare and exchange as returned by TConcertDataStoreType::GetFName(). */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The type name of the value USTRUCT to compare and exchange as returned by TConcertDataStoreType::GetFName()." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_Request, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_TypeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewProp_TypeName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_Request",
		sizeof(FConcertDataStore_Request),
		alignof(FConcertDataStore_Request),
		Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Request()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Request.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_Request.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_Request.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertDataStore_FetchOrAddRequest>() == std::is_polymorphic<FConcertDataStore_Request>(), "USTRUCT FConcertDataStore_FetchOrAddRequest cannot be polymorphic unless super FConcertDataStore_Request is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_FetchOrAddRequest;
class UScriptStruct* FConcertDataStore_FetchOrAddRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_FetchOrAddRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_FetchOrAddRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_FetchOrAddRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_FetchOrAddRequest.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_FetchOrAddRequest>()
{
	return FConcertDataStore_FetchOrAddRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The request passed from the client to the server to fetch or add a key/value pair\n * from/in the data store. The end user should not use this structure directly, but use the\n * IConcertClientDataStore::FetchOrAdd() API instead. The response type for this request is\n * FConcertDataStore_Response.\n * @see IConcertClientDataStore::FetchOrAdd() methods.\n */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The request passed from the client to the server to fetch or add a key/value pair\nfrom/in the data store. The end user should not use this structure directly, but use the\nIConcertClientDataStore::FetchOrAdd() API instead. The response type for this request is\nFConcertDataStore_Response.\n@see IConcertClientDataStore::FetchOrAdd() methods." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_FetchOrAddRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::NewProp_SerializedValue_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/**\n\x09 * The property value to add if it doesn't already exist, in its serialized form.\n\x09 * This implies the serialization is consistent across platforms and that no padding\n\x09 * is serialized. When this is true, the serialized data is compact, binary comparable\n\x09 * and the data store backend doesn't need to know the content format, it can only map\n\x09 * a name and a blob and use memcmp() to compare and exchange a value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The property value to add if it doesn't already exist, in its serialized form.\nThis implies the serialization is consistent across platforms and that no padding\nis serialized. When this is true, the serialized data is compact, binary comparable\nand the data store backend doesn't need to know the content format, it can only map\na name and a blob and use memcmp() to compare and exchange a value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::NewProp_SerializedValue = { "SerializedValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_FetchOrAddRequest, SerializedValue), Z_Construct_UScriptStruct_FConcertSessionSerializedPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::NewProp_SerializedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::NewProp_SerializedValue_MetaData)) }; // 661764570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::NewProp_SerializedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertDataStore_Request,
		&NewStructOps,
		"ConcertDataStore_FetchOrAddRequest",
		sizeof(FConcertDataStore_FetchOrAddRequest),
		alignof(FConcertDataStore_FetchOrAddRequest),
		Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_FetchOrAddRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_FetchOrAddRequest.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_FetchOrAddRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertDataStore_CompareExchangeRequest>() == std::is_polymorphic<FConcertDataStore_Request>(), "USTRUCT FConcertDataStore_CompareExchangeRequest cannot be polymorphic unless super FConcertDataStore_Request is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_CompareExchangeRequest;
class UScriptStruct* FConcertDataStore_CompareExchangeRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_CompareExchangeRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_CompareExchangeRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_CompareExchangeRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_CompareExchangeRequest.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_CompareExchangeRequest>()
{
	return FConcertDataStore_CompareExchangeRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedVersion_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExpectedVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expected_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desired_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Desired;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The request passed from the client to the server to compare and exchange a stored value.\n * The end user should not use this structure directly, but use the IConcertClientDataStore::CompareExchange()\n * API instead. The response type for this request is a FConcertDataStore_Response.\n * @see IConcertClientDataStore::CompareExchange() methods.\n */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The request passed from the client to the server to compare and exchange a stored value.\nThe end user should not use this structure directly, but use the IConcertClientDataStore::CompareExchange()\nAPI instead. The response type for this request is a FConcertDataStore_Response.\n@see IConcertClientDataStore::CompareExchange() methods." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_CompareExchangeRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_ExpectedVersion_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/**\n\x09 * The expected version of the value. If non-zero, the server uses this\n\x09 * fields to identify the expected value and ignore the 'Expected' field.\n\x09 * This is an optimization implemented in the client/server protocol. If the\n\x09 * expected payload is large and correspond to the value currently cached\n\x09 * in the client, the client will send the expected version rather than\n\x09 * the expected value to save bandwidth. The server will compare version\n\x09 * and if they match, will perform the exchange.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The expected version of the value. If non-zero, the server uses this\nfields to identify the expected value and ignore the 'Expected' field.\nThis is an optimization implemented in the client/server protocol. If the\nexpected payload is large and correspond to the value currently cached\nin the client, the client will send the expected version rather than\nthe expected value to save bandwidth. The server will compare version\nand if they match, will perform the exchange." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_ExpectedVersion = { "ExpectedVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_CompareExchangeRequest, ExpectedVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_ExpectedVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_ExpectedVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Expected_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/**\n\x09 * The expected value if 'ExpectedVersion' is zero. The field is ignored if\n\x09 * 'ExpectedVersion' is not zero and should be left empty.\n\x09 * @see FConcertDataStore_FetchOrAddRequest for more explanation about the format.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The expected value if 'ExpectedVersion' is zero. The field is ignored if\n'ExpectedVersion' is not zero and should be left empty.\n@see FConcertDataStore_FetchOrAddRequest for more explanation about the format." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_CompareExchangeRequest, Expected), Z_Construct_UScriptStruct_FConcertSessionSerializedPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Expected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Expected_MetaData)) }; // 661764570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Desired_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/** The desired value to store. @see FConcertDataStore_FetchOrAdd request for more explanation about the format. */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The desired value to store. @see FConcertDataStore_FetchOrAdd request for more explanation about the format." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Desired = { "Desired", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_CompareExchangeRequest, Desired), Z_Construct_UScriptStruct_FConcertSessionSerializedPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Desired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Desired_MetaData)) }; // 661764570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_ExpectedVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewProp_Desired,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertDataStore_Request,
		&NewStructOps,
		"ConcertDataStore_CompareExchangeRequest",
		sizeof(FConcertDataStore_CompareExchangeRequest),
		alignof(FConcertDataStore_CompareExchangeRequest),
		Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_CompareExchangeRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_CompareExchangeRequest.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_CompareExchangeRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertDataStore_Response;
class UScriptStruct* FConcertDataStore_Response::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Response.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertDataStore_Response.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertDataStore_Response, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertDataStore_Response"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertDataStore_Response.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertDataStore_Response>()
{
	return FConcertDataStore_Response::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** The response to a FConcertDataStore_FetchOrAddRequest or FConcertDataStore_CompareExchangeRequest requests, sent from the server to the client. */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The response to a FConcertDataStore_FetchOrAddRequest or FConcertDataStore_CompareExchangeRequest requests, sent from the server to the client." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertDataStore_Response>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_ResultCode_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/**\n\x09 * The result code to the request. Possible values depends on the request.\n\x09 * @see IConcertClientDataStore::FetchOrAdd()\n\x09 * @see IConcertClientDataStore::FetchAs()\n\x09 * @see IConcertClientDataStore::CompareExchange().\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "The result code to the request. Possible values depends on the request.\n@see IConcertClientDataStore::FetchOrAdd()\n@see IConcertClientDataStore::FetchAs()\n@see IConcertClientDataStore::CompareExchange()." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_Response, ResultCode), Z_Construct_UEnum_ConcertSyncCore_EConcertDataStoreResultCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_ResultCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_ResultCode_MetaData)) }; // 198673658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Concert Data Store Message" },
		{ "Comment", "/**\n\x09 * Contains the stored value if the ResponseCode == EConcertDataStoreResultCode::Fetched,\n\x09 * otherwise, it is left empty. The server doesn't sent back the stored value when the\n\x09 * client successfully stores it. The client is expected to keep the value it sent.\n\x09 * @see TConcertDataStoreResult::GetValue() to deserialize the payload.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertDataStoreMessages.h" },
		{ "ToolTip", "Contains the stored value if the ResponseCode == EConcertDataStoreResultCode::Fetched,\notherwise, it is left empty. The server doesn't sent back the stored value when the\nclient successfully stores it. The client is expected to keep the value it sent.\n@see TConcertDataStoreResult::GetValue() to deserialize the payload." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertDataStore_Response, Value), Z_Construct_UScriptStruct_FConcertDataStore_StoreValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_Value_MetaData)) }; // 542171258
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_ResultCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_ResultCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertDataStore_Response",
		sizeof(FConcertDataStore_Response),
		alignof(FConcertDataStore_Response),
		Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertDataStore_Response()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertDataStore_Response.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertDataStore_Response.InnerSingleton, Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertDataStore_Response.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_Statics::EnumInfo[] = {
		{ EConcertDataStoreResultCode_StaticEnum, TEXT("EConcertDataStoreResultCode"), &Z_Registration_Info_UEnum_EConcertDataStoreResultCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 198673658U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_Statics::ScriptStructInfo[] = {
		{ FConcertDataStore_Integer::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics::NewStructOps, TEXT("ConcertDataStore_Integer"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_Integer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_Integer), 3042817390U) },
		{ FConcertDataStore_Double::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics::NewStructOps, TEXT("ConcertDataStore_Double"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_Double, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_Double), 973924888U) },
		{ FConcertDataStore_String::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_String_Statics::NewStructOps, TEXT("ConcertDataStore_String"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_String, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_String), 2816595932U) },
		{ FConcertDataStore_Text::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics::NewStructOps, TEXT("ConcertDataStore_Text"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_Text, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_Text), 734309732U) },
		{ FConcertDataStore_StoreValue::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics::NewStructOps, TEXT("ConcertDataStore_StoreValue"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_StoreValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_StoreValue), 542171258U) },
		{ FConcertDataStore_KeyValuePair::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics::NewStructOps, TEXT("ConcertDataStore_KeyValuePair"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_KeyValuePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_KeyValuePair), 4280074381U) },
		{ FConcertDataStore_ReplicateEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics::NewStructOps, TEXT("ConcertDataStore_ReplicateEvent"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_ReplicateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_ReplicateEvent), 3092997627U) },
		{ FConcertDataStore_Request::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics::NewStructOps, TEXT("ConcertDataStore_Request"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_Request, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_Request), 3991335440U) },
		{ FConcertDataStore_FetchOrAddRequest::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics::NewStructOps, TEXT("ConcertDataStore_FetchOrAddRequest"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_FetchOrAddRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_FetchOrAddRequest), 2814560807U) },
		{ FConcertDataStore_CompareExchangeRequest::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics::NewStructOps, TEXT("ConcertDataStore_CompareExchangeRequest"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_CompareExchangeRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_CompareExchangeRequest), 2229117031U) },
		{ FConcertDataStore_Response::StaticStruct, Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics::NewStructOps, TEXT("ConcertDataStore_Response"), &Z_Registration_Info_UScriptStruct_ConcertDataStore_Response, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertDataStore_Response), 2203796533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_2200149691(TEXT("/Script/ConcertSyncCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
