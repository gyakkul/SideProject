// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertMessageData.h"
#include "ConcertSettings.h"
#include "ConcertVersion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertMessageData() {}
// Cross Module References
	CONCERT_API UEnum* Z_Construct_UEnum_Concert_EConcertCompressionDetails();
	CONCERT_API UEnum* Z_Construct_UEnum_Concert_EConcertPayloadCompressionType();
	CONCERT_API UEnum* Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod();
	CONCERT_API UEnum* Z_Construct_UEnum_Concert_EConcertServerFlags();
	CONCERT_API UEnum* Z_Construct_UEnum_Concert_EConcertSessionState();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertByteArray();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientInfo();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertInstanceInfo();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertServerInfo();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionClientInfo();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionFilter();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionInfo();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSerializedPayload();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSettings();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionVersionInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UPackage* Z_Construct_UPackage__Script_Concert();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertServerFlags;
	static UEnum* EConcertServerFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertServerFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertServerFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Concert_EConcertServerFlags, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("EConcertServerFlags"));
		}
		return Z_Registration_Info_UEnum_EConcertServerFlags.OuterSingleton;
	}
	template<> CONCERT_API UEnum* StaticEnum<EConcertServerFlags>()
	{
		return EConcertServerFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_Concert_EConcertServerFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Concert_EConcertServerFlags_Statics::Enumerators[] = {
		{ "EConcertServerFlags::None", (int64)EConcertServerFlags::None },
		{ "EConcertServerFlags::IgnoreSessionRequirement", (int64)EConcertServerFlags::IgnoreSessionRequirement },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Concert_EConcertServerFlags_Statics::Enum_MetaDataParams[] = {
		{ "IgnoreSessionRequirement.Comment", "//The server will ignore the session requirement when someone try to join a session\n" },
		{ "IgnoreSessionRequirement.Name", "EConcertServerFlags::IgnoreSessionRequirement" },
		{ "IgnoreSessionRequirement.ToolTip", "The server will ignore the session requirement when someone try to join a session" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "None.Name", "EConcertServerFlags::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Concert_EConcertServerFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		"EConcertServerFlags",
		"EConcertServerFlags",
		Z_Construct_UEnum_Concert_EConcertServerFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertServerFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Concert_EConcertServerFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertServerFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Concert_EConcertServerFlags()
	{
		if (!Z_Registration_Info_UEnum_EConcertServerFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertServerFlags.InnerSingleton, Z_Construct_UEnum_Concert_EConcertServerFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertServerFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertSessionState;
	static UEnum* EConcertSessionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertSessionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertSessionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Concert_EConcertSessionState, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("EConcertSessionState"));
		}
		return Z_Registration_Info_UEnum_EConcertSessionState.OuterSingleton;
	}
	template<> CONCERT_API UEnum* StaticEnum<EConcertSessionState>()
	{
		return EConcertSessionState_StaticEnum();
	}
	struct Z_Construct_UEnum_Concert_EConcertSessionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Concert_EConcertSessionState_Statics::Enumerators[] = {
		{ "EConcertSessionState::Normal", (int64)EConcertSessionState::Normal },
		{ "EConcertSessionState::Transient", (int64)EConcertSessionState::Transient },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Concert_EConcertSessionState_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "Normal.Comment", "/** Session is a normal state and can be joined. */" },
		{ "Normal.Name", "EConcertSessionState::Normal" },
		{ "Normal.ToolTip", "Session is a normal state and can be joined." },
		{ "Transient.Comment", "/** Session is in a transient state and cannot be joined. */" },
		{ "Transient.Name", "EConcertSessionState::Transient" },
		{ "Transient.ToolTip", "Session is in a transient state and cannot be joined." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Concert_EConcertSessionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		"EConcertSessionState",
		"EConcertSessionState",
		Z_Construct_UEnum_Concert_EConcertSessionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertSessionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Concert_EConcertSessionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertSessionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Concert_EConcertSessionState()
	{
		if (!Z_Registration_Info_UEnum_EConcertSessionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertSessionState.InnerSingleton, Z_Construct_UEnum_Concert_EConcertSessionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertSessionState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertPayloadCompressionType;
	static UEnum* EConcertPayloadCompressionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertPayloadCompressionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertPayloadCompressionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Concert_EConcertPayloadCompressionType, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("EConcertPayloadCompressionType"));
		}
		return Z_Registration_Info_UEnum_EConcertPayloadCompressionType.OuterSingleton;
	}
	template<> CONCERT_API UEnum* StaticEnum<EConcertPayloadCompressionType>()
	{
		return EConcertPayloadCompressionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Concert_EConcertPayloadCompressionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Concert_EConcertPayloadCompressionType_Statics::Enumerators[] = {
		{ "EConcertPayloadCompressionType::None", (int64)EConcertPayloadCompressionType::None },
		{ "EConcertPayloadCompressionType::Heuristic", (int64)EConcertPayloadCompressionType::Heuristic },
		{ "EConcertPayloadCompressionType::Always", (int64)EConcertPayloadCompressionType::Always },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Concert_EConcertPayloadCompressionType_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "// The serialized data will always be compressed.\n" },
		{ "Always.Name", "EConcertPayloadCompressionType::Always" },
		{ "Always.ToolTip", "The serialized data will always be compressed." },
		{ "Heuristic.Comment", "// The serialized data will be compressed based on struct size.\n" },
		{ "Heuristic.Name", "EConcertPayloadCompressionType::Heuristic" },
		{ "Heuristic.ToolTip", "The serialized data will be compressed based on struct size." },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "None.Comment", "// The serialized data will not be compressed.\n" },
		{ "None.Name", "EConcertPayloadCompressionType::None" },
		{ "None.ToolTip", "The serialized data will not be compressed." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Concert_EConcertPayloadCompressionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		"EConcertPayloadCompressionType",
		"EConcertPayloadCompressionType",
		Z_Construct_UEnum_Concert_EConcertPayloadCompressionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertPayloadCompressionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Concert_EConcertPayloadCompressionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertPayloadCompressionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Concert_EConcertPayloadCompressionType()
	{
		if (!Z_Registration_Info_UEnum_EConcertPayloadCompressionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertPayloadCompressionType.InnerSingleton, Z_Construct_UEnum_Concert_EConcertPayloadCompressionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertPayloadCompressionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertCompressionDetails;
	static UEnum* EConcertCompressionDetails_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertCompressionDetails.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertCompressionDetails.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Concert_EConcertCompressionDetails, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("EConcertCompressionDetails"));
		}
		return Z_Registration_Info_UEnum_EConcertCompressionDetails.OuterSingleton;
	}
	template<> CONCERT_API UEnum* StaticEnum<EConcertCompressionDetails>()
	{
		return EConcertCompressionDetails_StaticEnum();
	}
	struct Z_Construct_UEnum_Concert_EConcertCompressionDetails_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Concert_EConcertCompressionDetails_Statics::Enumerators[] = {
		{ "EConcertCompressionDetails::Uncompressed", (int64)EConcertCompressionDetails::Uncompressed },
		{ "EConcertCompressionDetails::Compressed", (int64)EConcertCompressionDetails::Compressed },
		{ "EConcertCompressionDetails::CompressWithOodle", (int64)EConcertCompressionDetails::CompressWithOodle },
		{ "EConcertCompressionDetails::CompressForSpeed", (int64)EConcertCompressionDetails::CompressForSpeed },
		{ "EConcertCompressionDetails::CompressForSize", (int64)EConcertCompressionDetails::CompressForSize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Concert_EConcertCompressionDetails_Statics::Enum_MetaDataParams[] = {
		{ "Compressed.Comment", "/** The package data (the body) is written in a single compressed block. The value 1 represents the original format. Still used to store small packages.*/" },
		{ "Compressed.Name", "EConcertCompressionDetails::Compressed" },
		{ "Compressed.ToolTip", "The package data (the body) is written in a single compressed block. The value 1 represents the original format. Still used to store small packages." },
		{ "CompressForSize.Comment", "/** Compress for smaller sizes. */" },
		{ "CompressForSize.Name", "EConcertCompressionDetails::CompressForSize" },
		{ "CompressForSize.ToolTip", "Compress for smaller sizes." },
		{ "CompressForSpeed.Comment", "/** Compress for speed. */" },
		{ "CompressForSpeed.Name", "EConcertCompressionDetails::CompressForSpeed" },
		{ "CompressForSpeed.ToolTip", "Compress for speed." },
		{ "CompressWithOodle.Comment", "/** If compression is enabled and this bit is set then oodle compression is used for the package data. */" },
		{ "CompressWithOodle.Name", "EConcertCompressionDetails::CompressWithOodle" },
		{ "CompressWithOodle.ToolTip", "If compression is enabled and this bit is set then oodle compression is used for the package data." },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "Uncompressed.Comment", "/** The package data (the body) is written uncompressed. */" },
		{ "Uncompressed.Name", "EConcertCompressionDetails::Uncompressed" },
		{ "Uncompressed.ToolTip", "The package data (the body) is written uncompressed." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Concert_EConcertCompressionDetails_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		"EConcertCompressionDetails",
		"EConcertCompressionDetails",
		Z_Construct_UEnum_Concert_EConcertCompressionDetails_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertCompressionDetails_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Concert_EConcertCompressionDetails_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertCompressionDetails_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Concert_EConcertCompressionDetails()
	{
		if (!Z_Registration_Info_UEnum_EConcertCompressionDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertCompressionDetails.InnerSingleton, Z_Construct_UEnum_Concert_EConcertCompressionDetails_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertCompressionDetails.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertPayloadSerializationMethod;
	static UEnum* EConcertPayloadSerializationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertPayloadSerializationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertPayloadSerializationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("EConcertPayloadSerializationMethod"));
		}
		return Z_Registration_Info_UEnum_EConcertPayloadSerializationMethod.OuterSingleton;
	}
	template<> CONCERT_API UEnum* StaticEnum<EConcertPayloadSerializationMethod>()
	{
		return EConcertPayloadSerializationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod_Statics::Enumerators[] = {
		{ "EConcertPayloadSerializationMethod::Standard", (int64)EConcertPayloadSerializationMethod::Standard },
		{ "EConcertPayloadSerializationMethod::Cbor", (int64)EConcertPayloadSerializationMethod::Cbor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod_Statics::Enum_MetaDataParams[] = {
		{ "Cbor.Comment", "// The data will be serialized using Cbor method.\n" },
		{ "Cbor.Name", "EConcertPayloadSerializationMethod::Cbor" },
		{ "Cbor.ToolTip", "The data will be serialized using Cbor method." },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "Standard.Comment", "// The data will be serialized using standard platform method.\n" },
		{ "Standard.Name", "EConcertPayloadSerializationMethod::Standard" },
		{ "Standard.ToolTip", "The data will be serialized using standard platform method." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		"EConcertPayloadSerializationMethod",
		"EConcertPayloadSerializationMethod",
		Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod()
	{
		if (!Z_Registration_Info_UEnum_EConcertPayloadSerializationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertPayloadSerializationMethod.InnerSingleton, Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertPayloadSerializationMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertInstanceInfo;
class UScriptStruct* FConcertInstanceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertInstanceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertInstanceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertInstanceInfo, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertInstanceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertInstanceInfo.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertInstanceInfo>()
{
	return FConcertInstanceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds info on an instance communicating through concert */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds info on an instance communicating through concert" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertInstanceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Instance Info" },
		{ "Comment", "/** Holds the instance identifier. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the instance identifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertInstanceInfo, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Category", "Instance Info" },
		{ "Comment", "/** Holds the instance name. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the instance name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertInstanceInfo, InstanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceType_MetaData[] = {
		{ "Category", "Instance Info" },
		{ "Comment", "/** Holds the instance type (Editor, Game, Server, etc). */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the instance type (Editor, Game, Server, etc)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertInstanceInfo, InstanceType), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewProp_InstanceType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertInstanceInfo",
		sizeof(FConcertInstanceInfo),
		alignof(FConcertInstanceInfo),
		Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertInstanceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertInstanceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertInstanceInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertInstanceInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertServerInfo;
class UScriptStruct* FConcertServerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertServerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertServerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertServerInfo, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertServerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertServerInfo.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertServerInfo>()
{
	return FConcertServerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertServerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdminEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdminEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ServerFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds info on a Concert server */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds info on a Concert server" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertServerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_AdminEndpointId_MetaData[] = {
		{ "Comment", "/** Server endpoint for performing administration tasks (FConcertAdmin_X messages) */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Server endpoint for performing administration tasks (FConcertAdmin_X messages)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_AdminEndpointId = { "AdminEndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerInfo, AdminEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_AdminEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_AdminEndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerInfo, ServerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_InstanceInfo_MetaData[] = {
		{ "Category", "Server Info" },
		{ "Comment", "/** Basic server information */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Basic server information" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_InstanceInfo = { "InstanceInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerInfo, InstanceInfo), Z_Construct_UScriptStruct_FConcertInstanceInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_InstanceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_InstanceInfo_MetaData)) }; // 2616197512
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerFlags_MetaData[] = {
		{ "Category", "Server Info" },
		{ "Comment", "/** Contains information on the server settings */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Contains information on the server settings" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerFlags = { "ServerFlags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerInfo, ServerFlags), Z_Construct_UEnum_Concert_EConcertServerFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerFlags_MetaData)) }; // 2964862200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertServerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_AdminEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_InstanceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewProp_ServerFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertServerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertServerInfo",
		sizeof(FConcertServerInfo),
		alignof(FConcertServerInfo),
		Z_Construct_UScriptStruct_FConcertServerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertServerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertServerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertServerInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertServerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertServerInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientInfo;
class UScriptStruct* FConcertClientInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientInfo, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertClientInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientInfo.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertClientInfo>()
{
	return FConcertClientInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesktopAvatarActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DesktopAvatarActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRAvatarActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VRAvatarActorClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasEditorData_MetaData[];
#endif
		static void NewProp_bHasEditorData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEditorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresCookedData_MetaData[];
#endif
		static void NewProp_bRequiresCookedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresCookedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds info on a client connected through concert */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds info on a client connected through concert" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_InstanceInfo_MetaData[] = {
		{ "Category", "Client Info" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_InstanceInfo = { "InstanceInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientInfo, InstanceInfo), Z_Construct_UScriptStruct_FConcertInstanceInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_InstanceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_InstanceInfo_MetaData)) }; // 2616197512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the name of the device that the instance is running on. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the name of the device that the instance is running on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_PlatformName_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the name of the platform that the instance is running on. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the name of the platform that the instance is running on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientInfo, PlatformName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_PlatformName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the name of the user that owns this instance. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the name of the user that owns this instance." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientInfo, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the display name of the user that owns this instance. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the display name of the user that owns this instance." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_AvatarColor_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the color of the user avatar in a session. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the color of the user avatar in a session." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_AvatarColor = { "AvatarColor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientInfo, AvatarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_AvatarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_AvatarColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DesktopAvatarActorClass_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the string representation of the desktop actor class to be used as the avatar for a representation of a client */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the string representation of the desktop actor class to be used as the avatar for a representation of a client" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DesktopAvatarActorClass = { "DesktopAvatarActorClass", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientInfo, DesktopAvatarActorClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DesktopAvatarActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DesktopAvatarActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_VRAvatarActorClass_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds the string representation of the VR actor class to be used as the avatar for a representation of a client */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds the string representation of the VR actor class to be used as the avatar for a representation of a client" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_VRAvatarActorClass = { "VRAvatarActorClass", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientInfo, VRAvatarActorClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_VRAvatarActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_VRAvatarActorClass_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** Holds an array of tags that can be used for grouping and categorizing. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds an array of tags that can be used for grouping and categorizing." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientInfo, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bHasEditorData_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** True if this instance was built with editor-data */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "True if this instance was built with editor-data" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bHasEditorData_SetBit(void* Obj)
	{
		((FConcertClientInfo*)Obj)->bHasEditorData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bHasEditorData = { "bHasEditorData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertClientInfo), &Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bHasEditorData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bHasEditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bHasEditorData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bRequiresCookedData_MetaData[] = {
		{ "Category", "Client Info" },
		{ "Comment", "/** True if this platform requires cooked data */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "True if this platform requires cooked data" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bRequiresCookedData_SetBit(void* Obj)
	{
		((FConcertClientInfo*)Obj)->bRequiresCookedData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bRequiresCookedData = { "bRequiresCookedData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertClientInfo), &Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bRequiresCookedData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bRequiresCookedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bRequiresCookedData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_InstanceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_PlatformName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_AvatarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_DesktopAvatarActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_VRAvatarActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bHasEditorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewProp_bRequiresCookedData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertClientInfo",
		sizeof(FConcertClientInfo),
		alignof(FConcertClientInfo),
		Z_Construct_UScriptStruct_FConcertClientInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSessionClientInfo;
class UScriptStruct* FConcertSessionClientInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSessionClientInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSessionClientInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSessionClientInfo, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertSessionClientInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSessionClientInfo.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertSessionClientInfo>()
{
	return FConcertSessionClientInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds information on session client */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds information on session client" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSessionClientInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientEndpointId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientEndpointId = { "ClientEndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionClientInfo, ClientEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientEndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientInfo_MetaData[] = {
		{ "Category", "Client Info" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientInfo = { "ClientInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionClientInfo, ClientInfo), Z_Construct_UScriptStruct_FConcertClientInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientInfo_MetaData)) }; // 3625590877
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewProp_ClientInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertSessionClientInfo",
		sizeof(FConcertSessionClientInfo),
		alignof(FConcertSessionClientInfo),
		Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionClientInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSessionClientInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSessionClientInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSessionClientInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSessionInfo;
class UScriptStruct* FConcertSessionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSessionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSessionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSessionInfo, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertSessionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSessionInfo.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertSessionInfo>()
{
	return FConcertSessionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSessionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerInstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerInstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerInstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerInstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerUserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerUserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerDeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerDeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VersionInfos;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastModifiedTicks_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LastModifiedTicks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds info on a session */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds info on a session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSessionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerInstanceId_MetaData[] = {
		{ "Category", "Session Info" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerInstanceId = { "ServerInstanceId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, ServerInstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerInstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerEndpointId_MetaData[] = {
		{ "Category", "Session Info" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerEndpointId = { "ServerEndpointId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, ServerEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerEndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerInstanceId_MetaData[] = {
		{ "Category", "Session Info" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerInstanceId = { "OwnerInstanceId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, OwnerInstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerInstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Session Info" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionName_MetaData[] = {
		{ "Category", "Session Info" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerUserName_MetaData[] = {
		{ "Category", "Session Info" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerUserName = { "OwnerUserName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, OwnerUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerUserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerDeviceName_MetaData[] = {
		{ "Category", "Session Info" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerDeviceName = { "OwnerDeviceName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, OwnerDeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerDeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerDeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Session Info" },
		{ "Comment", "/** Settings pertaining to project, change list number etc */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Settings pertaining to project, change list number etc" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, Settings), Z_Construct_UScriptStruct_FConcertSessionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_Settings_MetaData)) }; // 2384793603
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_VersionInfos_Inner = { "VersionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConcertSessionVersionInfo, METADATA_PARAMS(nullptr, 0) }; // 1164273605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_VersionInfos_MetaData[] = {
		{ "Comment", "/** Version information for this session. This is set during creation, and updated each time the session is restored */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Version information for this session. This is set during creation, and updated each time the session is restored" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_VersionInfos = { "VersionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, VersionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_VersionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_VersionInfos_MetaData)) }; // 1164273605
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** Current state of the session used to determine joinability by clients. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Current state of the session used to determine joinability by clients." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, State), Z_Construct_UEnum_Concert_EConcertSessionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_State_MetaData)) }; // 1080870966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_LastModifiedTicks_MetaData[] = {
		{ "Category", "Session Info" },
		{ "Comment", "/**\n\x09 * The last time the session directory was modified in local time.\n\x09 * \n\x09 * Stored in ticks instead of FDateTime because FDateTime is not serialized properly by FStructSerializer::Serialize and FStructDeserializer::Deserialize.\n\x09 * These functions are used for packing data when sent across the network. The issue is that in UObject/NoExportTypes.h FDateTime does not expose Ticks as UProperty;\n\x09 * doing this would be the 'proper' fix but it may cause instability this late into 5.1 dev.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "The last time the session directory was modified in local time.\n\nStored in ticks instead of FDateTime because FDateTime is not serialized properly by FStructSerializer::Serialize and FStructDeserializer::Deserialize.\nThese functions are used for packing data when sent across the network. The issue is that in UObject/NoExportTypes.h FDateTime does not expose Ticks as UProperty;\ndoing this would be the 'proper' fix but it may cause instability this late into 5.1 dev." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_LastModifiedTicks = { "LastModifiedTicks", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionInfo, LastModifiedTicks), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_LastModifiedTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_LastModifiedTicks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_ServerEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerInstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerUserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_OwnerDeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_VersionInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_VersionInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewProp_LastModifiedTicks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertSessionInfo",
		sizeof(FConcertSessionInfo),
		alignof(FConcertSessionInfo),
		Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSessionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSessionInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSessionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSessionFilter;
class UScriptStruct* FConcertSessionFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSessionFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSessionFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSessionFilter, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertSessionFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSessionFilter.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertSessionFilter>()
{
	return FConcertSessionFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSessionFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityIdLowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ActivityIdLowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityIdUpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ActivityIdUpperBound;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ActivityIdsToExclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityIdsToExclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivityIdsToExclude;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ActivityIdsToInclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityIdsToInclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivityIdsToInclude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyLiveData_MetaData[];
#endif
		static void NewProp_bOnlyLiveData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyLiveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMetaDataOnly_MetaData[];
#endif
		static void NewProp_bMetaDataOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMetaDataOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeIgnoredActivities_MetaData[];
#endif
		static void NewProp_bIncludeIgnoredActivities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeIgnoredActivities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds filter rules used when migrating session data */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Holds filter rules used when migrating session data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSessionFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdLowerBound_MetaData[] = {
		{ "Comment", "/** The lower-bound (inclusive) of activity IDs to include (unless explicitly excluded via ActivityIdsToExclude) */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "The lower-bound (inclusive) of activity IDs to include (unless explicitly excluded via ActivityIdsToExclude)" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdLowerBound = { "ActivityIdLowerBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionFilter, ActivityIdLowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdLowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdLowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdUpperBound_MetaData[] = {
		{ "Comment", "/** The upper-bound (inclusive) of activity IDs to include (unless explicitly excluded via ActivityIdsToExclude) */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "The upper-bound (inclusive) of activity IDs to include (unless explicitly excluded via ActivityIdsToExclude)" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdUpperBound = { "ActivityIdUpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionFilter, ActivityIdUpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdUpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdUpperBound_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToExclude_Inner = { "ActivityIdsToExclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToExclude_MetaData[] = {
		{ "Comment", "/** Activity IDs to explicitly exclude, even if inside of the bounded-range specified above */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Activity IDs to explicitly exclude, even if inside of the bounded-range specified above" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToExclude = { "ActivityIdsToExclude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionFilter, ActivityIdsToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToExclude_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToInclude_Inner = { "ActivityIdsToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToInclude_MetaData[] = {
		{ "Comment", "/** Activity IDs to explicitly include, even if outside of the bounded-range specified above (takes precedence over ActivityIdsToExclude) */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Activity IDs to explicitly include, even if outside of the bounded-range specified above (takes precedence over ActivityIdsToExclude)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToInclude = { "ActivityIdsToInclude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionFilter, ActivityIdsToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToInclude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bOnlyLiveData_MetaData[] = {
		{ "Comment", "/** True if only live data should be included (live transactions and head package revisions) */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "True if only live data should be included (live transactions and head package revisions)" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bOnlyLiveData_SetBit(void* Obj)
	{
		((FConcertSessionFilter*)Obj)->bOnlyLiveData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bOnlyLiveData = { "bOnlyLiveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertSessionFilter), &Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bOnlyLiveData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bOnlyLiveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bOnlyLiveData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bMetaDataOnly_MetaData[] = {
		{ "Comment", "/** True to export the activity summaries without the package/transaction data to look at the log rather than replaying the activities. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "True to export the activity summaries without the package/transaction data to look at the log rather than replaying the activities." },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bMetaDataOnly_SetBit(void* Obj)
	{
		((FConcertSessionFilter*)Obj)->bMetaDataOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bMetaDataOnly = { "bMetaDataOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertSessionFilter), &Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bMetaDataOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bMetaDataOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bMetaDataOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bIncludeIgnoredActivities_MetaData[] = {
		{ "Comment", "/** True to include ignored activities */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "True to include ignored activities" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bIncludeIgnoredActivities_SetBit(void* Obj)
	{
		((FConcertSessionFilter*)Obj)->bIncludeIgnoredActivities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bIncludeIgnoredActivities = { "bIncludeIgnoredActivities", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertSessionFilter), &Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bIncludeIgnoredActivities_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bIncludeIgnoredActivities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bIncludeIgnoredActivities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdLowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdUpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToExclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToExclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_ActivityIdsToInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bOnlyLiveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bMetaDataOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewProp_bIncludeIgnoredActivities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertSessionFilter",
		sizeof(FConcertSessionFilter),
		alignof(FConcertSessionFilter),
		Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSessionFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSessionFilter.InnerSingleton, Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSessionFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertByteArray;
class UScriptStruct* FConcertByteArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertByteArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertByteArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertByteArray, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertByteArray"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertByteArray.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertByteArray>()
{
	return FConcertByteArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertByteArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertByteArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertByteArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertByteArray>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertByteArray_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertByteArray_Statics::NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertByteArray_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertByteArray, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertByteArray_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertByteArray_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertByteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertByteArray_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertByteArray_Statics::NewProp_Bytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertByteArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertByteArray",
		sizeof(FConcertByteArray),
		alignof(FConcertByteArray),
		Z_Construct_UScriptStruct_FConcertByteArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertByteArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertByteArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertByteArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertByteArray()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertByteArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertByteArray.InnerSingleton, Z_Construct_UScriptStruct_FConcertByteArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertByteArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSessionSerializedPayload;
class UScriptStruct* FConcertSessionSerializedPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSessionSerializedPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSessionSerializedPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertSessionSerializedPayload"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSessionSerializedPayload.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertSessionSerializedPayload>()
{
	return FConcertSessionSerializedPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PayloadTypeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SerializationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SerializationMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PayloadCompressionDetails_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadCompressionDetails_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PayloadCompressionDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PayloadSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadBytes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSessionSerializedPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadTypeName_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** The typename of the user-defined payload. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "The typename of the user-defined payload." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadTypeName = { "PayloadTypeName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionSerializedPayload, PayloadTypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadTypeName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_SerializationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_SerializationMethod_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Specifies the serialization method used to pack the data */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Specifies the serialization method used to pack the data" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_SerializationMethod = { "SerializationMethod", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionSerializedPayload, SerializationMethod), Z_Construct_UEnum_Concert_EConcertPayloadSerializationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_SerializationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_SerializationMethod_MetaData)) }; // 4192501752
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadCompressionDetails_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadCompressionDetails_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Indicates how the serialized payload has been compressed. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "Indicates how the serialized payload has been compressed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadCompressionDetails = { "PayloadCompressionDetails", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionSerializedPayload, PayloadCompressionDetails), Z_Construct_UEnum_Concert_EConcertCompressionDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadCompressionDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadCompressionDetails_MetaData)) }; // 1391458512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadSize_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** The uncompressed size of the user-defined payload data. */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "The uncompressed size of the user-defined payload data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadSize = { "PayloadSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionSerializedPayload, PayloadSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadBytes_MetaData[] = {
		{ "Comment", "/** The data of the user-defined payload (potentially stored as compressed binary for compact transfer). */" },
		{ "ModuleRelativePath", "Public/ConcertMessageData.h" },
		{ "ToolTip", "The data of the user-defined payload (potentially stored as compressed binary for compact transfer)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadBytes = { "PayloadBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionSerializedPayload, PayloadBytes), Z_Construct_UScriptStruct_FConcertByteArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadBytes_MetaData)) }; // 3392847132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_SerializationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_SerializationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadCompressionDetails_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadCompressionDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewProp_PayloadBytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertSessionSerializedPayload",
		sizeof(FConcertSessionSerializedPayload),
		alignof(FConcertSessionSerializedPayload),
		Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSerializedPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSessionSerializedPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSessionSerializedPayload.InnerSingleton, Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSessionSerializedPayload.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_Statics::EnumInfo[] = {
		{ EConcertServerFlags_StaticEnum, TEXT("EConcertServerFlags"), &Z_Registration_Info_UEnum_EConcertServerFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2964862200U) },
		{ EConcertSessionState_StaticEnum, TEXT("EConcertSessionState"), &Z_Registration_Info_UEnum_EConcertSessionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1080870966U) },
		{ EConcertPayloadCompressionType_StaticEnum, TEXT("EConcertPayloadCompressionType"), &Z_Registration_Info_UEnum_EConcertPayloadCompressionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 792876801U) },
		{ EConcertCompressionDetails_StaticEnum, TEXT("EConcertCompressionDetails"), &Z_Registration_Info_UEnum_EConcertCompressionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1391458512U) },
		{ EConcertPayloadSerializationMethod_StaticEnum, TEXT("EConcertPayloadSerializationMethod"), &Z_Registration_Info_UEnum_EConcertPayloadSerializationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4192501752U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_Statics::ScriptStructInfo[] = {
		{ FConcertInstanceInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics::NewStructOps, TEXT("ConcertInstanceInfo"), &Z_Registration_Info_UScriptStruct_ConcertInstanceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertInstanceInfo), 2616197512U) },
		{ FConcertServerInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertServerInfo_Statics::NewStructOps, TEXT("ConcertServerInfo"), &Z_Registration_Info_UScriptStruct_ConcertServerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertServerInfo), 2076166448U) },
		{ FConcertClientInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertClientInfo_Statics::NewStructOps, TEXT("ConcertClientInfo"), &Z_Registration_Info_UScriptStruct_ConcertClientInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientInfo), 3625590877U) },
		{ FConcertSessionClientInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics::NewStructOps, TEXT("ConcertSessionClientInfo"), &Z_Registration_Info_UScriptStruct_ConcertSessionClientInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSessionClientInfo), 2103458102U) },
		{ FConcertSessionInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertSessionInfo_Statics::NewStructOps, TEXT("ConcertSessionInfo"), &Z_Registration_Info_UScriptStruct_ConcertSessionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSessionInfo), 2047289997U) },
		{ FConcertSessionFilter::StaticStruct, Z_Construct_UScriptStruct_FConcertSessionFilter_Statics::NewStructOps, TEXT("ConcertSessionFilter"), &Z_Registration_Info_UScriptStruct_ConcertSessionFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSessionFilter), 2009661584U) },
		{ FConcertByteArray::StaticStruct, Z_Construct_UScriptStruct_FConcertByteArray_Statics::NewStructOps, TEXT("ConcertByteArray"), &Z_Registration_Info_UScriptStruct_ConcertByteArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertByteArray), 3392847132U) },
		{ FConcertSessionSerializedPayload::StaticStruct, Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics::NewStructOps, TEXT("ConcertSessionSerializedPayload"), &Z_Registration_Info_UScriptStruct_ConcertSessionSerializedPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSessionSerializedPayload), 661764570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_3370598687(TEXT("/Script/Concert"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
