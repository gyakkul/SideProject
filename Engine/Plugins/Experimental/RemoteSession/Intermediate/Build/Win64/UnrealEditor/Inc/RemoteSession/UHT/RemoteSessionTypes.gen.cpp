// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteSessionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteSessionTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionSettings();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionSettings_NoRegister();
	REMOTESESSION_API UEnum* Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange();
	REMOTESESSION_API UEnum* Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode();
	REMOTESESSION_API UEnum* Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange();
	REMOTESESSION_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteSessionChannelInfo();
	UPackage* Z_Construct_UPackage__Script_RemoteSession();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemoteSessionChannelMode;
	static UEnum* ERemoteSessionChannelMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemoteSessionChannelMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemoteSessionChannelMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode, (UObject*)Z_Construct_UPackage__Script_RemoteSession(), TEXT("ERemoteSessionChannelMode"));
		}
		return Z_Registration_Info_UEnum_ERemoteSessionChannelMode.OuterSingleton;
	}
	template<> REMOTESESSION_API UEnum* StaticEnum<ERemoteSessionChannelMode>()
	{
		return ERemoteSessionChannelMode_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode_Statics::Enumerators[] = {
		{ "ERemoteSessionChannelMode::Unknown", (int64)ERemoteSessionChannelMode::Unknown },
		{ "ERemoteSessionChannelMode::Read", (int64)ERemoteSessionChannelMode::Read },
		{ "ERemoteSessionChannelMode::Write", (int64)ERemoteSessionChannelMode::Write },
		{ "ERemoteSessionChannelMode::MaxValue", (int64)ERemoteSessionChannelMode::MaxValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode_Statics::Enum_MetaDataParams[] = {
		{ "MaxValue.Name", "ERemoteSessionChannelMode::MaxValue" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "Read.Name", "ERemoteSessionChannelMode::Read" },
		{ "Unknown.Name", "ERemoteSessionChannelMode::Unknown" },
		{ "Write.Name", "ERemoteSessionChannelMode::Write" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteSession,
		nullptr,
		"ERemoteSessionChannelMode",
		"ERemoteSessionChannelMode",
		Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode()
	{
		if (!Z_Registration_Info_UEnum_ERemoteSessionChannelMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemoteSessionChannelMode.InnerSingleton, Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemoteSessionChannelMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemoteSessionChannelChange;
	static UEnum* ERemoteSessionChannelChange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemoteSessionChannelChange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemoteSessionChannelChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange, (UObject*)Z_Construct_UPackage__Script_RemoteSession(), TEXT("ERemoteSessionChannelChange"));
		}
		return Z_Registration_Info_UEnum_ERemoteSessionChannelChange.OuterSingleton;
	}
	template<> REMOTESESSION_API UEnum* StaticEnum<ERemoteSessionChannelChange>()
	{
		return ERemoteSessionChannelChange_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange_Statics::Enumerators[] = {
		{ "ERemoteSessionChannelChange::Created", (int64)ERemoteSessionChannelChange::Created },
		{ "ERemoteSessionChannelChange::Destroyed", (int64)ERemoteSessionChannelChange::Destroyed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange_Statics::Enum_MetaDataParams[] = {
		{ "Created.Name", "ERemoteSessionChannelChange::Created" },
		{ "Destroyed.Name", "ERemoteSessionChannelChange::Destroyed" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteSession,
		nullptr,
		"ERemoteSessionChannelChange",
		"ERemoteSessionChannelChange",
		Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange()
	{
		if (!Z_Registration_Info_UEnum_ERemoteSessionChannelChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemoteSessionChannelChange.InnerSingleton, Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelChange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemoteSessionChannelChange.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemoteSessionConnectionChange;
	static UEnum* ERemoteSessionConnectionChange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemoteSessionConnectionChange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemoteSessionConnectionChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange, (UObject*)Z_Construct_UPackage__Script_RemoteSession(), TEXT("ERemoteSessionConnectionChange"));
		}
		return Z_Registration_Info_UEnum_ERemoteSessionConnectionChange.OuterSingleton;
	}
	template<> REMOTESESSION_API UEnum* StaticEnum<ERemoteSessionConnectionChange>()
	{
		return ERemoteSessionConnectionChange_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange_Statics::Enumerators[] = {
		{ "ERemoteSessionConnectionChange::Connected", (int64)ERemoteSessionConnectionChange::Connected },
		{ "ERemoteSessionConnectionChange::Disconnected", (int64)ERemoteSessionConnectionChange::Disconnected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange_Statics::Enum_MetaDataParams[] = {
		{ "Connected.Name", "ERemoteSessionConnectionChange::Connected" },
		{ "Disconnected.Name", "ERemoteSessionConnectionChange::Disconnected" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteSession,
		nullptr,
		"ERemoteSessionConnectionChange",
		"ERemoteSessionConnectionChange",
		Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange()
	{
		if (!Z_Registration_Info_UEnum_ERemoteSessionConnectionChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemoteSessionConnectionChange.InnerSingleton, Z_Construct_UEnum_RemoteSession_ERemoteSessionConnectionChange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemoteSessionConnectionChange.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteSessionChannelInfo;
class UScriptStruct* FRemoteSessionChannelInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteSessionChannelInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteSessionChannelInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteSessionChannelInfo, (UObject*)Z_Construct_UPackage__Script_RemoteSession(), TEXT("RemoteSessionChannelInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteSessionChannelInfo.OuterSingleton;
}
template<> REMOTESESSION_API UScriptStruct* StaticStruct<FRemoteSessionChannelInfo>()
{
	return FRemoteSessionChannelInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteSessionChannelInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteSessionChannelInfo, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Mode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteSessionChannelInfo, Mode), Z_Construct_UEnum_RemoteSession_ERemoteSessionChannelMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Mode_MetaData)) }; // 1838574550
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewProp_Mode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteSession,
		nullptr,
		&NewStructOps,
		"RemoteSessionChannelInfo",
		sizeof(FRemoteSessionChannelInfo),
		alignof(FRemoteSessionChannelInfo),
		Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteSessionChannelInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteSessionChannelInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteSessionChannelInfo.InnerSingleton, Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteSessionChannelInfo.InnerSingleton;
	}
	void URemoteSessionSettings::StaticRegisterNativesURemoteSessionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteSessionSettings);
	UClass* Z_Construct_UClass_URemoteSessionSettings_NoRegister()
	{
		return URemoteSessionSettings::StaticClass();
	}
	struct Z_Construct_UClass_URemoteSessionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HostPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionTimeoutWhenDebugging_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionTimeoutWhenDebugging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PingTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInShipping_MetaData[];
#endif
		static void NewProp_bAllowInShipping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInShipping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoHostWithPIE_MetaData[];
#endif
		static void NewProp_bAutoHostWithPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoHostWithPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoHostWithGame_MetaData[];
#endif
		static void NewProp_bAutoHostWithGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoHostWithGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedChannels;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeniedChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeniedChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeniedChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteSessionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteSession,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Asset Management framework, which can be used to discover, load, and audit game-specific asset types */" },
		{ "IncludePath", "RemoteSessionTypes.h" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Settings for the Asset Management framework, which can be used to discover, load, and audit game-specific asset types" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_HostPort_MetaData[] = {
		{ "Comment", "/* Port that the host will listen on */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Port that the host will listen on" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_HostPort = { "HostPort", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionSettings, HostPort), METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_HostPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_HostPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeout_MetaData[] = {
		{ "Comment", "/* Time until a connection will timeout  */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Time until a connection will timeout" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeout = { "ConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionSettings, ConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeoutWhenDebugging_MetaData[] = {
		{ "Comment", "/* Time until a connection will timeout when a debugger is attached  */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Time until a connection will timeout when a debugger is attached" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeoutWhenDebugging = { "ConnectionTimeoutWhenDebugging", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionSettings, ConnectionTimeoutWhenDebugging), METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeoutWhenDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeoutWhenDebugging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_PingTime_MetaData[] = {
		{ "Comment", "/* Time between pings  */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Time between pings" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_PingTime = { "PingTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionSettings, PingTime), METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_PingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_PingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAllowInShipping_MetaData[] = {
		{ "Comment", "/* Whether RemoteSession is functional in a shipping build */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Whether RemoteSession is functional in a shipping build" },
	};
#endif
	void Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAllowInShipping_SetBit(void* Obj)
	{
		((URemoteSessionSettings*)Obj)->bAllowInShipping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAllowInShipping = { "bAllowInShipping", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteSessionSettings), &Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAllowInShipping_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAllowInShipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAllowInShipping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithPIE_MetaData[] = {
		{ "Comment", "/* Does PIE automatically start hosting a session? */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Does PIE automatically start hosting a session?" },
	};
#endif
	void Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithPIE_SetBit(void* Obj)
	{
		((URemoteSessionSettings*)Obj)->bAutoHostWithPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithPIE = { "bAutoHostWithPIE", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteSessionSettings), &Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithGame_MetaData[] = {
		{ "Comment", "/* Does launching a game automatically host a session? */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Does launching a game automatically host a session?" },
	};
#endif
	void Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithGame_SetBit(void* Obj)
	{
		((URemoteSessionSettings*)Obj)->bAutoHostWithGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithGame = { "bAutoHostWithGame", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteSessionSettings), &Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ImageQuality_MetaData[] = {
		{ "Comment", "/* Image quality (1-100) */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Image quality (1-100)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ImageQuality = { "ImageQuality", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionSettings, ImageQuality), METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ImageQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ImageQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Comment", "/* Framerate of images from the host (will be min of this value and the actual framerate of the game */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Framerate of images from the host (will be min of this value and the actual framerate of the game" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionSettings, FrameRate), METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_FrameRate_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_AllowedChannels_Inner = { "AllowedChannels", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_AllowedChannels_MetaData[] = {
		{ "Comment", "/* Restrict remote session to these channels. If empty all registered channels are available */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Restrict remote session to these channels. If empty all registered channels are available" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_AllowedChannels = { "AllowedChannels", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionSettings, AllowedChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_AllowedChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_AllowedChannels_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_DeniedChannels_Inner = { "DeniedChannels", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_DeniedChannels_MetaData[] = {
		{ "Comment", "/* Don't allow these channels to be used */" },
		{ "ModuleRelativePath", "Public/RemoteSessionTypes.h" },
		{ "ToolTip", "Don't allow these channels to be used" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_DeniedChannels = { "DeniedChannels", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionSettings, DeniedChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_DeniedChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_DeniedChannels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteSessionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_HostPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ConnectionTimeoutWhenDebugging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_PingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAllowInShipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_bAutoHostWithGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_ImageQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_AllowedChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_AllowedChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_DeniedChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionSettings_Statics::NewProp_DeniedChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteSessionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteSessionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteSessionSettings_Statics::ClassParams = {
		&URemoteSessionSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteSessionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteSessionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteSessionSettings()
	{
		if (!Z_Registration_Info_UClass_URemoteSessionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteSessionSettings.OuterSingleton, Z_Construct_UClass_URemoteSessionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteSessionSettings.OuterSingleton;
	}
	template<> REMOTESESSION_API UClass* StaticClass<URemoteSessionSettings>()
	{
		return URemoteSessionSettings::StaticClass();
	}
	URemoteSessionSettings::URemoteSessionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteSessionSettings);
	URemoteSessionSettings::~URemoteSessionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics::EnumInfo[] = {
		{ ERemoteSessionChannelMode_StaticEnum, TEXT("ERemoteSessionChannelMode"), &Z_Registration_Info_UEnum_ERemoteSessionChannelMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1838574550U) },
		{ ERemoteSessionChannelChange_StaticEnum, TEXT("ERemoteSessionChannelChange"), &Z_Registration_Info_UEnum_ERemoteSessionChannelChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2558228860U) },
		{ ERemoteSessionConnectionChange_StaticEnum, TEXT("ERemoteSessionConnectionChange"), &Z_Registration_Info_UEnum_ERemoteSessionConnectionChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1743208743U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics::ScriptStructInfo[] = {
		{ FRemoteSessionChannelInfo::StaticStruct, Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics::NewStructOps, TEXT("RemoteSessionChannelInfo"), &Z_Registration_Info_UScriptStruct_RemoteSessionChannelInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteSessionChannelInfo), 2450350850U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteSessionSettings, URemoteSessionSettings::StaticClass, TEXT("URemoteSessionSettings"), &Z_Registration_Info_UClass_URemoteSessionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteSessionSettings), 2428626416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_3768101856(TEXT("/Script/RemoteSession"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
