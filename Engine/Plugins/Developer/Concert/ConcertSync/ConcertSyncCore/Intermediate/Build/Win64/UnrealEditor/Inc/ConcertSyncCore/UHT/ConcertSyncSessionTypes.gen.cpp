// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertSyncSessionTypes.h"
#include "ConcertMessageData.h"
#include "ConcertTransactionEvents.h"
#include "ConcertWorkspaceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertSyncSessionTypes() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientInfo();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSerializedPayload();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPackage();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageInfo();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncActivity();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncActivitySummary();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncConnectionActivity();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncConnectionEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncEndpointData();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncLockActivity();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncLockEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncPackageActivity();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncPackageEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncTransactionActivity();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncTransactionEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertSyncConnectionEventType;
	static UEnum* EConcertSyncConnectionEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncConnectionEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertSyncConnectionEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertSyncConnectionEventType"));
		}
		return Z_Registration_Info_UEnum_EConcertSyncConnectionEventType.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertSyncConnectionEventType>()
	{
		return EConcertSyncConnectionEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType_Statics::Enumerators[] = {
		{ "EConcertSyncConnectionEventType::Connected", (int64)EConcertSyncConnectionEventType::Connected },
		{ "EConcertSyncConnectionEventType::Disconnected", (int64)EConcertSyncConnectionEventType::Disconnected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Types of connection events */" },
		{ "Connected.Name", "EConcertSyncConnectionEventType::Connected" },
		{ "Disconnected.Name", "EConcertSyncConnectionEventType::Disconnected" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Types of connection events" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertSyncConnectionEventType",
		"EConcertSyncConnectionEventType",
		Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncConnectionEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertSyncConnectionEventType.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertSyncConnectionEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertSyncLockEventType;
	static UEnum* EConcertSyncLockEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncLockEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertSyncLockEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertSyncLockEventType"));
		}
		return Z_Registration_Info_UEnum_EConcertSyncLockEventType.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertSyncLockEventType>()
	{
		return EConcertSyncLockEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType_Statics::Enumerators[] = {
		{ "EConcertSyncLockEventType::Locked", (int64)EConcertSyncLockEventType::Locked },
		{ "EConcertSyncLockEventType::Unlocked", (int64)EConcertSyncLockEventType::Unlocked },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Types of lock events */" },
		{ "Locked.Name", "EConcertSyncLockEventType::Locked" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Types of lock events" },
		{ "Unlocked.Name", "EConcertSyncLockEventType::Unlocked" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertSyncLockEventType",
		"EConcertSyncLockEventType",
		Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncLockEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertSyncLockEventType.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertSyncLockEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertSyncActivityEventType;
	static UEnum* EConcertSyncActivityEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncActivityEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertSyncActivityEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertSyncActivityEventType"));
		}
		return Z_Registration_Info_UEnum_EConcertSyncActivityEventType.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertSyncActivityEventType>()
	{
		return EConcertSyncActivityEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType_Statics::Enumerators[] = {
		{ "EConcertSyncActivityEventType::None", (int64)EConcertSyncActivityEventType::None },
		{ "EConcertSyncActivityEventType::Connection", (int64)EConcertSyncActivityEventType::Connection },
		{ "EConcertSyncActivityEventType::Lock", (int64)EConcertSyncActivityEventType::Lock },
		{ "EConcertSyncActivityEventType::Transaction", (int64)EConcertSyncActivityEventType::Transaction },
		{ "EConcertSyncActivityEventType::Package", (int64)EConcertSyncActivityEventType::Package },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Types of activity events */" },
		{ "Connection.Name", "EConcertSyncActivityEventType::Connection" },
		{ "Lock.Name", "EConcertSyncActivityEventType::Lock" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "None.Name", "EConcertSyncActivityEventType::None" },
		{ "Package.Name", "EConcertSyncActivityEventType::Package" },
		{ "ToolTip", "Types of activity events" },
		{ "Transaction.Name", "EConcertSyncActivityEventType::Transaction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertSyncActivityEventType",
		"EConcertSyncActivityEventType",
		Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncActivityEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertSyncActivityEventType.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertSyncActivityEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertSyncTransactionActivitySummaryType;
	static UEnum* EConcertSyncTransactionActivitySummaryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncTransactionActivitySummaryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertSyncTransactionActivitySummaryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertSyncTransactionActivitySummaryType"));
		}
		return Z_Registration_Info_UEnum_EConcertSyncTransactionActivitySummaryType.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertSyncTransactionActivitySummaryType>()
	{
		return EConcertSyncTransactionActivitySummaryType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType_Statics::Enumerators[] = {
		{ "EConcertSyncTransactionActivitySummaryType::Added", (int64)EConcertSyncTransactionActivitySummaryType::Added },
		{ "EConcertSyncTransactionActivitySummaryType::Updated", (int64)EConcertSyncTransactionActivitySummaryType::Updated },
		{ "EConcertSyncTransactionActivitySummaryType::Renamed", (int64)EConcertSyncTransactionActivitySummaryType::Renamed },
		{ "EConcertSyncTransactionActivitySummaryType::Deleted", (int64)EConcertSyncTransactionActivitySummaryType::Deleted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType_Statics::Enum_MetaDataParams[] = {
		{ "Added.Name", "EConcertSyncTransactionActivitySummaryType::Added" },
		{ "Comment", "/** Type of transaction summaries */" },
		{ "Deleted.Name", "EConcertSyncTransactionActivitySummaryType::Deleted" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "Renamed.Name", "EConcertSyncTransactionActivitySummaryType::Renamed" },
		{ "ToolTip", "Type of transaction summaries" },
		{ "Updated.Name", "EConcertSyncTransactionActivitySummaryType::Updated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertSyncTransactionActivitySummaryType",
		"EConcertSyncTransactionActivitySummaryType",
		Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncTransactionActivitySummaryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertSyncTransactionActivitySummaryType.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertSyncTransactionActivitySummaryType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncEndpointData;
class UScriptStruct* FConcertSyncEndpointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncEndpointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncEndpointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncEndpointData, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncEndpointData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncEndpointData.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncEndpointData>()
{
	return FConcertSyncEndpointData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for an endpoint in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for an endpoint in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncEndpointData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::NewProp_ClientInfo_MetaData[] = {
		{ "Comment", "/** The information about the Concert client connected through this endpoint */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The information about the Concert client connected through this endpoint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::NewProp_ClientInfo = { "ClientInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncEndpointData, ClientInfo), Z_Construct_UScriptStruct_FConcertClientInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::NewProp_ClientInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::NewProp_ClientInfo_MetaData)) }; // 3625590877
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::NewProp_ClientInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncEndpointData",
		sizeof(FConcertSyncEndpointData),
		alignof(FConcertSyncEndpointData),
		Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncEndpointData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncEndpointData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncEndpointData.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncEndpointData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncEndpointIdAndData;
class UScriptStruct* FConcertSyncEndpointIdAndData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncEndpointIdAndData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncEndpointIdAndData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncEndpointIdAndData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncEndpointIdAndData.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncEndpointIdAndData>()
{
	return FConcertSyncEndpointIdAndData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** ID and data pair for an endpoint in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "ID and data pair for an endpoint in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncEndpointIdAndData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointId_MetaData[] = {
		{ "Comment", "/** The ID of the endpoint */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The ID of the endpoint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncEndpointIdAndData, EndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointData_MetaData[] = {
		{ "Comment", "/** The data for the endpoint */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The data for the endpoint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointData = { "EndpointData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncEndpointIdAndData, EndpointData), Z_Construct_UScriptStruct_FConcertSyncEndpointData, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointData_MetaData)) }; // 670628056
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewProp_EndpointData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncEndpointIdAndData",
		sizeof(FConcertSyncEndpointIdAndData),
		alignof(FConcertSyncEndpointIdAndData),
		Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncEndpointIdAndData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncEndpointIdAndData.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncEndpointIdAndData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncConnectionEvent;
class UScriptStruct* FConcertSyncConnectionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncConnectionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncConnectionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncConnectionEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncConnectionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncConnectionEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncConnectionEvent>()
{
	return FConcertSyncConnectionEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionEventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionEventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionEventType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a connection event in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for a connection event in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncConnectionEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::NewProp_ConnectionEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::NewProp_ConnectionEventType_MetaData[] = {
		{ "Comment", "/** The type of this connection event */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The type of this connection event" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::NewProp_ConnectionEventType = { "ConnectionEventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncConnectionEvent, ConnectionEventType), Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::NewProp_ConnectionEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::NewProp_ConnectionEventType_MetaData)) }; // 4061586501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::NewProp_ConnectionEventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::NewProp_ConnectionEventType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncConnectionEvent",
		sizeof(FConcertSyncConnectionEvent),
		alignof(FConcertSyncConnectionEvent),
		Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncConnectionEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncConnectionEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncConnectionEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncConnectionEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncLockEvent;
class UScriptStruct* FConcertSyncLockEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncLockEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncLockEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncLockEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncLockEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncLockEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncLockEvent>()
{
	return FConcertSyncLockEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockEventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockEventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LockEventType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourceNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a lock event in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for a lock event in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncLockEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_LockEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_LockEventType_MetaData[] = {
		{ "Comment", "/** The type of this lock event */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The type of this lock event" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_LockEventType = { "LockEventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncLockEvent, LockEventType), Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_LockEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_LockEventType_MetaData)) }; // 2045352257
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_ResourceNames_Inner = { "ResourceNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_ResourceNames_MetaData[] = {
		{ "Comment", "/** The resources affected by this lock event */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The resources affected by this lock event" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_ResourceNames = { "ResourceNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncLockEvent, ResourceNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_ResourceNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_ResourceNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_LockEventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_LockEventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_ResourceNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewProp_ResourceNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncLockEvent",
		sizeof(FConcertSyncLockEvent),
		alignof(FConcertSyncLockEvent),
		Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncLockEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncLockEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncLockEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncLockEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncTransactionEvent;
class UScriptStruct* FConcertSyncTransactionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncTransactionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncTransactionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncTransactionEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncTransactionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncTransactionEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncTransactionEvent>()
{
	return FConcertSyncTransactionEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transaction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transaction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a transaction event in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for a transaction event in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncTransactionEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::NewProp_Transaction_MetaData[] = {
		{ "Comment", "/** The transaction data for this event */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The transaction data for this event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncTransactionEvent, Transaction), Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::NewProp_Transaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::NewProp_Transaction_MetaData)) }; // 2912014171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::NewProp_Transaction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncTransactionEvent",
		sizeof(FConcertSyncTransactionEvent),
		alignof(FConcertSyncTransactionEvent),
		Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncTransactionEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncTransactionEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncTransactionEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncTransactionEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncPackageEvent;
class UScriptStruct* FConcertSyncPackageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncPackageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncPackageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncPackageEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncPackageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncPackageEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncPackageEvent>()
{
	return FConcertSyncPackageEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageRevision_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_PackageRevision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Package_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a package event in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for a package event in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncPackageEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_PackageRevision_MetaData[] = {
		{ "Comment", "/** The revision of this package within the session? */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The revision of this package within the session?" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_PackageRevision = { "PackageRevision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncPackageEvent, PackageRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_PackageRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_PackageRevision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_Package_MetaData[] = {
		{ "Comment", "/** The package data for this event */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The package data for this event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncPackageEvent, Package), Z_Construct_UScriptStruct_FConcertPackage, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_Package_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_Package_MetaData)) }; // 287183038
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_PackageRevision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewProp_Package,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncPackageEvent",
		sizeof(FConcertSyncPackageEvent),
		alignof(FConcertSyncPackageEvent),
		Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncPackageEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncPackageEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncPackageEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncPackageEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncPackageEventMetaData;
class UScriptStruct* FConcertSyncPackageEventMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncPackageEventMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncPackageEventMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncPackageEventMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncPackageEventMetaData.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncPackageEventMetaData>()
{
	return FConcertSyncPackageEventMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageRevision_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_PackageRevision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackageInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Meta data for a package event in a Concert Sync Session. */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Meta data for a package event in a Concert Sync Session." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncPackageEventMetaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageRevision_MetaData[] = {
		{ "Comment", "/** The revision of this package within the session. */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The revision of this package within the session." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageRevision = { "PackageRevision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncPackageEventMetaData, PackageRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageRevision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageInfo_MetaData[] = {
		{ "Comment", "/** Contains information about the package event such as the package name, the event type, if this was triggered by an auto-save, etc. */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Contains information about the package event such as the package name, the event type, if this was triggered by an auto-save, etc." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageInfo = { "PackageInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncPackageEventMetaData, PackageInfo), Z_Construct_UScriptStruct_FConcertPackageInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageInfo_MetaData)) }; // 1261909146
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageRevision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewProp_PackageInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncPackageEventMetaData",
		sizeof(FConcertSyncPackageEventMetaData),
		alignof(FConcertSyncPackageEventMetaData),
		Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncPackageEventMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncPackageEventMetaData.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncPackageEventMetaData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertSyncActivityFlags;
	static UEnum* EConcertSyncActivityFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncActivityFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertSyncActivityFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertSyncActivityFlags"));
		}
		return Z_Registration_Info_UEnum_EConcertSyncActivityFlags.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertSyncActivityFlags>()
	{
		return EConcertSyncActivityFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags_Statics::Enumerators[] = {
		{ "EConcertSyncActivityFlags::None", (int64)EConcertSyncActivityFlags::None },
		{ "EConcertSyncActivityFlags::Muted", (int64)EConcertSyncActivityFlags::Muted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "Muted.Comment", "/**\n\x09 * This activity will never be sent to clients by the server.\n\x09 * For all activities a client receives (Flags & EConcertSyncActivityFlags::Muted) == EConcertSyncActivityFlags::None holds. \n\x09 */" },
		{ "Muted.Name", "EConcertSyncActivityFlags::Muted" },
		{ "Muted.ToolTip", "This activity will never be sent to clients by the server.\nFor all activities a client receives (Flags & EConcertSyncActivityFlags::Muted) == EConcertSyncActivityFlags::None holds." },
		{ "None.Name", "EConcertSyncActivityFlags::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertSyncActivityFlags",
		"EConcertSyncActivityFlags",
		Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags()
	{
		if (!Z_Registration_Info_UEnum_EConcertSyncActivityFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertSyncActivityFlags.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertSyncActivityFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncActivity;
class UScriptStruct* FConcertSyncActivity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncActivity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncActivity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncActivity, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncActivity"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncActivity.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncActivity>()
{
	return FConcertSyncActivity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncActivity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ActivityId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnored_MetaData[];
#endif
		static void NewProp_bIgnored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnored;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_EventId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventSummary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventSummary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for an activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for an activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncActivity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_ActivityId_MetaData[] = {
		{ "Comment", "/** The ID of the activity */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The ID of the activity" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncActivity, ActivityId), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_ActivityId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_bIgnored_MetaData[] = {
		{ "Comment", "/** True if this activity is included for tracking purposes only, and can be ignored when migrating a database */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "True if this activity is included for tracking purposes only, and can be ignored when migrating a database" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_bIgnored_SetBit(void* Obj)
	{
		((FConcertSyncActivity*)Obj)->bIgnored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_bIgnored = { "bIgnored", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertSyncActivity), &Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_bIgnored_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_bIgnored_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_bIgnored_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_Flags_MetaData[] = {
		{ "Comment", "/** Additional information about this activity */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Additional information about this activity" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncActivity, Flags), Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_Flags_MetaData)) }; // 433794849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EndpointId_MetaData[] = {
		{ "Comment", "/** The ID of the endpoint that produced the activity */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The ID of the endpoint that produced the activity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncActivity, EndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventTime_MetaData[] = {
		{ "Comment", "/** The time at which the activity was produced (UTC) */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The time at which the activity was produced (UTC)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncActivity, EventTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventType_MetaData[] = {
		{ "Comment", "/** The type of this activity */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The type of this activity" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncActivity, EventType), Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventType_MetaData)) }; // 1719255986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventId_MetaData[] = {
		{ "Comment", "/** The ID of the event associated with this activity (@see EventType to work out how to resolve this) */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The ID of the event associated with this activity (@see EventType to work out how to resolve this)" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncActivity, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventSummary_MetaData[] = {
		{ "Comment", "/** The minimal summary of the event associated with this activity (@see FConcertSyncActivitySummary) */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The minimal summary of the event associated with this activity (@see FConcertSyncActivitySummary)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventSummary = { "EventSummary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncActivity, EventSummary), Z_Construct_UScriptStruct_FConcertSessionSerializedPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventSummary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventSummary_MetaData)) }; // 661764570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_ActivityId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_bIgnored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_Flags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewProp_EventSummary,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncActivity",
		sizeof(FConcertSyncActivity),
		alignof(FConcertSyncActivity),
		Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncActivity()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncActivity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncActivity.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncActivity.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertSyncConnectionActivity>() == std::is_polymorphic<FConcertSyncActivity>(), "USTRUCT FConcertSyncConnectionActivity cannot be polymorphic unless super FConcertSyncActivity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivity;
class UScriptStruct* FConcertSyncConnectionActivity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncConnectionActivity, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncConnectionActivity"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivity.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncConnectionActivity>()
{
	return FConcertSyncConnectionActivity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a connection activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for a connection activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncConnectionActivity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::NewProp_EventData_MetaData[] = {
		{ "Comment", "/** The connection event data associated with this activity */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The connection event data associated with this activity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncConnectionActivity, EventData), Z_Construct_UScriptStruct_FConcertSyncConnectionEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::NewProp_EventData_MetaData)) }; // 923913252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::NewProp_EventData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertSyncActivity,
		&NewStructOps,
		"ConcertSyncConnectionActivity",
		sizeof(FConcertSyncConnectionActivity),
		alignof(FConcertSyncConnectionActivity),
		Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncConnectionActivity()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivity.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivity.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertSyncLockActivity>() == std::is_polymorphic<FConcertSyncActivity>(), "USTRUCT FConcertSyncLockActivity cannot be polymorphic unless super FConcertSyncActivity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncLockActivity;
class UScriptStruct* FConcertSyncLockActivity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncLockActivity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncLockActivity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncLockActivity, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncLockActivity"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncLockActivity.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncLockActivity>()
{
	return FConcertSyncLockActivity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a lock activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for a lock activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncLockActivity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::NewProp_EventData_MetaData[] = {
		{ "Comment", "/** The lock event data associated with this activity */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The lock event data associated with this activity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncLockActivity, EventData), Z_Construct_UScriptStruct_FConcertSyncLockEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::NewProp_EventData_MetaData)) }; // 68977336
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::NewProp_EventData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertSyncActivity,
		&NewStructOps,
		"ConcertSyncLockActivity",
		sizeof(FConcertSyncLockActivity),
		alignof(FConcertSyncLockActivity),
		Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncLockActivity()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncLockActivity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncLockActivity.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncLockActivity.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertSyncTransactionActivity>() == std::is_polymorphic<FConcertSyncActivity>(), "USTRUCT FConcertSyncTransactionActivity cannot be polymorphic unless super FConcertSyncActivity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivity;
class UScriptStruct* FConcertSyncTransactionActivity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncTransactionActivity, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncTransactionActivity"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivity.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncTransactionActivity>()
{
	return FConcertSyncTransactionActivity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a transaction activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for a transaction activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncTransactionActivity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::NewProp_EventData_MetaData[] = {
		{ "Comment", "/** The transaction event data associated with this activity */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The transaction event data associated with this activity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncTransactionActivity, EventData), Z_Construct_UScriptStruct_FConcertSyncTransactionEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::NewProp_EventData_MetaData)) }; // 2874573932
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::NewProp_EventData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertSyncActivity,
		&NewStructOps,
		"ConcertSyncTransactionActivity",
		sizeof(FConcertSyncTransactionActivity),
		alignof(FConcertSyncTransactionActivity),
		Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncTransactionActivity()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivity.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivity.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertSyncPackageActivity>() == std::is_polymorphic<FConcertSyncActivity>(), "USTRUCT FConcertSyncPackageActivity cannot be polymorphic unless super FConcertSyncActivity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivity;
class UScriptStruct* FConcertSyncPackageActivity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncPackageActivity, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncPackageActivity"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivity.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncPackageActivity>()
{
	return FConcertSyncPackageActivity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a package activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Data for a package activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncPackageActivity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::NewProp_EventData_MetaData[] = {
		{ "Comment", "/** The package event data associated with this activity */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The package event data associated with this activity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncPackageActivity, EventData), Z_Construct_UScriptStruct_FConcertSyncPackageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::NewProp_EventData_MetaData)) }; // 3625516117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::NewProp_EventData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertSyncActivity,
		&NewStructOps,
		"ConcertSyncPackageActivity",
		sizeof(FConcertSyncPackageActivity),
		alignof(FConcertSyncPackageActivity),
		Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncPackageActivity()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivity.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncActivitySummary;
class UScriptStruct* FConcertSyncActivitySummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncActivitySummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncActivitySummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncActivitySummary, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncActivitySummary"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncActivitySummary.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncActivitySummary>()
{
	return FConcertSyncActivitySummary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncActivitySummary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncActivitySummary_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base summary for an activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Base summary for an activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncActivitySummary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncActivitySummary>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncActivitySummary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncActivitySummary",
		sizeof(FConcertSyncActivitySummary),
		alignof(FConcertSyncActivitySummary),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncActivitySummary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncActivitySummary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncActivitySummary()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncActivitySummary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncActivitySummary.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncActivitySummary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncActivitySummary.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertSyncConnectionActivitySummary>() == std::is_polymorphic<FConcertSyncActivitySummary>(), "USTRUCT FConcertSyncConnectionActivitySummary cannot be polymorphic unless super FConcertSyncActivitySummary is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivitySummary;
class UScriptStruct* FConcertSyncConnectionActivitySummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivitySummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivitySummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncConnectionActivitySummary"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivitySummary.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncConnectionActivitySummary>()
{
	return FConcertSyncConnectionActivitySummary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionEventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionEventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionEventType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Summary for a connection activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Summary for a connection activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncConnectionActivitySummary>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::NewProp_ConnectionEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::NewProp_ConnectionEventType_MetaData[] = {
		{ "Comment", "/** The type of connection event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The type of connection event we summarize" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::NewProp_ConnectionEventType = { "ConnectionEventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncConnectionActivitySummary, ConnectionEventType), Z_Construct_UEnum_ConcertSyncCore_EConcertSyncConnectionEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::NewProp_ConnectionEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::NewProp_ConnectionEventType_MetaData)) }; // 4061586501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::NewProp_ConnectionEventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::NewProp_ConnectionEventType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertSyncActivitySummary,
		&NewStructOps,
		"ConcertSyncConnectionActivitySummary",
		sizeof(FConcertSyncConnectionActivitySummary),
		alignof(FConcertSyncConnectionActivitySummary),
		Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivitySummary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivitySummary.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivitySummary.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertSyncLockActivitySummary>() == std::is_polymorphic<FConcertSyncActivitySummary>(), "USTRUCT FConcertSyncLockActivitySummary cannot be polymorphic unless super FConcertSyncActivitySummary is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncLockActivitySummary;
class UScriptStruct* FConcertSyncLockActivitySummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncLockActivitySummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncLockActivitySummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncLockActivitySummary"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncLockActivitySummary.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncLockActivitySummary>()
{
	return FConcertSyncLockActivitySummary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockEventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockEventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LockEventType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryResourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrimaryResourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrimaryPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumResources_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumResources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Summary for a lock activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Summary for a lock activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncLockActivitySummary>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_LockEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_LockEventType_MetaData[] = {
		{ "Comment", "/** The type of lock event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The type of lock event we summarize" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_LockEventType = { "LockEventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncLockActivitySummary, LockEventType), Z_Construct_UEnum_ConcertSyncCore_EConcertSyncLockEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_LockEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_LockEventType_MetaData)) }; // 2045352257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryResourceName_MetaData[] = {
		{ "Comment", "/** The primary resource affected by the lock event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The primary resource affected by the lock event we summarize" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryResourceName = { "PrimaryResourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncLockActivitySummary, PrimaryResourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryResourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryResourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryPackageName_MetaData[] = {
		{ "Comment", "/** The primary package affected by the lock event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The primary package affected by the lock event we summarize" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryPackageName = { "PrimaryPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncLockActivitySummary, PrimaryPackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryPackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_NumResources_MetaData[] = {
		{ "Comment", "/** The total number of resources affected by the lock event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The total number of resources affected by the lock event we summarize" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_NumResources = { "NumResources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncLockActivitySummary, NumResources), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_NumResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_NumResources_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_LockEventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_LockEventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryResourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_PrimaryPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewProp_NumResources,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertSyncActivitySummary,
		&NewStructOps,
		"ConcertSyncLockActivitySummary",
		sizeof(FConcertSyncLockActivitySummary),
		alignof(FConcertSyncLockActivitySummary),
		Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncLockActivitySummary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncLockActivitySummary.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncLockActivitySummary.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertSyncTransactionActivitySummary>() == std::is_polymorphic<FConcertSyncActivitySummary>(), "USTRUCT FConcertSyncTransactionActivitySummary cannot be polymorphic unless super FConcertSyncActivitySummary is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivitySummary;
class UScriptStruct* FConcertSyncTransactionActivitySummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivitySummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivitySummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncTransactionActivitySummary"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivitySummary.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncTransactionActivitySummary>()
{
	return FConcertSyncTransactionActivitySummary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransactionSummaryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionSummaryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransactionSummaryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TransactionTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrimaryObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrimaryPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumActions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Summary for a transaction activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Summary for a transaction activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncTransactionActivitySummary>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionSummaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionSummaryType_MetaData[] = {
		{ "Comment", "/** The type of summary that the transaction event we summarize produced */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The type of summary that the transaction event we summarize produced" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionSummaryType = { "TransactionSummaryType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncTransactionActivitySummary, TransactionSummaryType), Z_Construct_UEnum_ConcertSyncCore_EConcertSyncTransactionActivitySummaryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionSummaryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionSummaryType_MetaData)) }; // 3631545591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionTitle_MetaData[] = {
		{ "Comment", "/** The title of transaction in the transaction event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The title of transaction in the transaction event we summarize" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionTitle = { "TransactionTitle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncTransactionActivitySummary, TransactionTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryObjectName_MetaData[] = {
		{ "Comment", "/** The primary object affected by the transaction event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The primary object affected by the transaction event we summarize" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryObjectName = { "PrimaryObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncTransactionActivitySummary, PrimaryObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryPackageName_MetaData[] = {
		{ "Comment", "/** The primary package affected by the transaction event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The primary package affected by the transaction event we summarize" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryPackageName = { "PrimaryPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncTransactionActivitySummary, PrimaryPackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryPackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NewObjectName_MetaData[] = {
		{ "Comment", "/** The new object name for the event we summarize (if TransactionSummaryType == EConcertSyncTransactionActivitySummaryType::Renamed) */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The new object name for the event we summarize (if TransactionSummaryType == EConcertSyncTransactionActivitySummaryType::Renamed)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NewObjectName = { "NewObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncTransactionActivitySummary, NewObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NewObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NewObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NumActions_MetaData[] = {
		{ "Comment", "/** The total number of actions created by the transaction event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The total number of actions created by the transaction event we summarize" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NumActions = { "NumActions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncTransactionActivitySummary, NumActions), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NumActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NumActions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionSummaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionSummaryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_TransactionTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_PrimaryPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NewObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewProp_NumActions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertSyncActivitySummary,
		&NewStructOps,
		"ConcertSyncTransactionActivitySummary",
		sizeof(FConcertSyncTransactionActivitySummary),
		alignof(FConcertSyncTransactionActivitySummary),
		Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivitySummary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivitySummary.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivitySummary.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertSyncPackageActivitySummary>() == std::is_polymorphic<FConcertSyncActivitySummary>(), "USTRUCT FConcertSyncPackageActivitySummary cannot be polymorphic unless super FConcertSyncActivitySummary is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivitySummary;
class UScriptStruct* FConcertSyncPackageActivitySummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivitySummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivitySummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncPackageActivitySummary"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivitySummary.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncPackageActivitySummary>()
{
	return FConcertSyncPackageActivitySummary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewPackageName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PackageUpdateType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageUpdateType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PackageUpdateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSave_MetaData[];
#endif
		static void NewProp_bAutoSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreSave_MetaData[];
#endif
		static void NewProp_bPreSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Summary for a package activity entry in a Concert Sync Session */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Summary for a package activity entry in a Concert Sync Session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncPackageActivitySummary>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** The package affected by the package event we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The package affected by the package event we summarize" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncPackageActivitySummary, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_NewPackageName_MetaData[] = {
		{ "Comment", "/** The new package name for the event we summarize (if PackageUpdateType == EConcertPackageUpdateType::Renamed) */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The new package name for the event we summarize (if PackageUpdateType == EConcertPackageUpdateType::Renamed)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_NewPackageName = { "NewPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncPackageActivitySummary, NewPackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_NewPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_NewPackageName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageUpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageUpdateType_MetaData[] = {
		{ "Comment", "/** The type of package update we summarize */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "The type of package update we summarize" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageUpdateType = { "PackageUpdateType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncPackageActivitySummary, PackageUpdateType), Z_Construct_UEnum_ConcertSyncCore_EConcertPackageUpdateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageUpdateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageUpdateType_MetaData)) }; // 1910392113
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bAutoSave_MetaData[] = {
		{ "Comment", "/** Are we summarizing an auto-save update? */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Are we summarizing an auto-save update?" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bAutoSave_SetBit(void* Obj)
	{
		((FConcertSyncPackageActivitySummary*)Obj)->bAutoSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bAutoSave = { "bAutoSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertSyncPackageActivitySummary), &Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bAutoSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bAutoSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bAutoSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bPreSave_MetaData[] = {
		{ "Comment", "/** Are we summarizing a pre-save update? */" },
		{ "ModuleRelativePath", "Public/ConcertSyncSessionTypes.h" },
		{ "ToolTip", "Are we summarizing a pre-save update?" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bPreSave_SetBit(void* Obj)
	{
		((FConcertSyncPackageActivitySummary*)Obj)->bPreSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bPreSave = { "bPreSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertSyncPackageActivitySummary), &Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bPreSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bPreSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bPreSave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_NewPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageUpdateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_PackageUpdateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bAutoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewProp_bPreSave,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertSyncActivitySummary,
		&NewStructOps,
		"ConcertSyncPackageActivitySummary",
		sizeof(FConcertSyncPackageActivitySummary),
		alignof(FConcertSyncPackageActivitySummary),
		Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivitySummary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivitySummary.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivitySummary.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSessionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSessionTypes_h_Statics::EnumInfo[] = {
		{ EConcertSyncConnectionEventType_StaticEnum, TEXT("EConcertSyncConnectionEventType"), &Z_Registration_Info_UEnum_EConcertSyncConnectionEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4061586501U) },
		{ EConcertSyncLockEventType_StaticEnum, TEXT("EConcertSyncLockEventType"), &Z_Registration_Info_UEnum_EConcertSyncLockEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2045352257U) },
		{ EConcertSyncActivityEventType_StaticEnum, TEXT("EConcertSyncActivityEventType"), &Z_Registration_Info_UEnum_EConcertSyncActivityEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1719255986U) },
		{ EConcertSyncTransactionActivitySummaryType_StaticEnum, TEXT("EConcertSyncTransactionActivitySummaryType"), &Z_Registration_Info_UEnum_EConcertSyncTransactionActivitySummaryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3631545591U) },
		{ EConcertSyncActivityFlags_StaticEnum, TEXT("EConcertSyncActivityFlags"), &Z_Registration_Info_UEnum_EConcertSyncActivityFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 433794849U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSessionTypes_h_Statics::ScriptStructInfo[] = {
		{ FConcertSyncEndpointData::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncEndpointData_Statics::NewStructOps, TEXT("ConcertSyncEndpointData"), &Z_Registration_Info_UScriptStruct_ConcertSyncEndpointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncEndpointData), 670628056U) },
		{ FConcertSyncEndpointIdAndData::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData_Statics::NewStructOps, TEXT("ConcertSyncEndpointIdAndData"), &Z_Registration_Info_UScriptStruct_ConcertSyncEndpointIdAndData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncEndpointIdAndData), 2744379043U) },
		{ FConcertSyncConnectionEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncConnectionEvent_Statics::NewStructOps, TEXT("ConcertSyncConnectionEvent"), &Z_Registration_Info_UScriptStruct_ConcertSyncConnectionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncConnectionEvent), 923913252U) },
		{ FConcertSyncLockEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncLockEvent_Statics::NewStructOps, TEXT("ConcertSyncLockEvent"), &Z_Registration_Info_UScriptStruct_ConcertSyncLockEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncLockEvent), 68977336U) },
		{ FConcertSyncTransactionEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncTransactionEvent_Statics::NewStructOps, TEXT("ConcertSyncTransactionEvent"), &Z_Registration_Info_UScriptStruct_ConcertSyncTransactionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncTransactionEvent), 2874573932U) },
		{ FConcertSyncPackageEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncPackageEvent_Statics::NewStructOps, TEXT("ConcertSyncPackageEvent"), &Z_Registration_Info_UScriptStruct_ConcertSyncPackageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncPackageEvent), 3625516117U) },
		{ FConcertSyncPackageEventMetaData::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncPackageEventMetaData_Statics::NewStructOps, TEXT("ConcertSyncPackageEventMetaData"), &Z_Registration_Info_UScriptStruct_ConcertSyncPackageEventMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncPackageEventMetaData), 2569680499U) },
		{ FConcertSyncActivity::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncActivity_Statics::NewStructOps, TEXT("ConcertSyncActivity"), &Z_Registration_Info_UScriptStruct_ConcertSyncActivity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncActivity), 2246564962U) },
		{ FConcertSyncConnectionActivity::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncConnectionActivity_Statics::NewStructOps, TEXT("ConcertSyncConnectionActivity"), &Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncConnectionActivity), 3929360432U) },
		{ FConcertSyncLockActivity::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncLockActivity_Statics::NewStructOps, TEXT("ConcertSyncLockActivity"), &Z_Registration_Info_UScriptStruct_ConcertSyncLockActivity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncLockActivity), 724324248U) },
		{ FConcertSyncTransactionActivity::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncTransactionActivity_Statics::NewStructOps, TEXT("ConcertSyncTransactionActivity"), &Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncTransactionActivity), 1611516220U) },
		{ FConcertSyncPackageActivity::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncPackageActivity_Statics::NewStructOps, TEXT("ConcertSyncPackageActivity"), &Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncPackageActivity), 355603272U) },
		{ FConcertSyncActivitySummary::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncActivitySummary_Statics::NewStructOps, TEXT("ConcertSyncActivitySummary"), &Z_Registration_Info_UScriptStruct_ConcertSyncActivitySummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncActivitySummary), 1879161006U) },
		{ FConcertSyncConnectionActivitySummary::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncConnectionActivitySummary_Statics::NewStructOps, TEXT("ConcertSyncConnectionActivitySummary"), &Z_Registration_Info_UScriptStruct_ConcertSyncConnectionActivitySummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncConnectionActivitySummary), 1175799958U) },
		{ FConcertSyncLockActivitySummary::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncLockActivitySummary_Statics::NewStructOps, TEXT("ConcertSyncLockActivitySummary"), &Z_Registration_Info_UScriptStruct_ConcertSyncLockActivitySummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncLockActivitySummary), 3236692068U) },
		{ FConcertSyncTransactionActivitySummary::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncTransactionActivitySummary_Statics::NewStructOps, TEXT("ConcertSyncTransactionActivitySummary"), &Z_Registration_Info_UScriptStruct_ConcertSyncTransactionActivitySummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncTransactionActivitySummary), 1288628133U) },
		{ FConcertSyncPackageActivitySummary::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncPackageActivitySummary_Statics::NewStructOps, TEXT("ConcertSyncPackageActivitySummary"), &Z_Registration_Info_UScriptStruct_ConcertSyncPackageActivitySummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncPackageActivitySummary), 81374277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSessionTypes_h_1919910086(TEXT("/Script/ConcertSyncCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSessionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSessionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSessionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSyncSessionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
