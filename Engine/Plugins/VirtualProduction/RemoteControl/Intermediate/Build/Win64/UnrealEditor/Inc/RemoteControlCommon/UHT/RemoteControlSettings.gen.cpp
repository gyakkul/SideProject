// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_URemoteControlSettings();
	REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_URemoteControlSettings_NoRegister();
	REMOTECONTROLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FRCNetworkAddress();
	REMOTECONTROLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FRCNetworkAddressRange();
	REMOTECONTROLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FRCPassphrase();
	UPackage* Z_Construct_UPackage__Script_RemoteControlCommon();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCNetworkAddress;
class UScriptStruct* FRCNetworkAddress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCNetworkAddress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCNetworkAddress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCNetworkAddress, (UObject*)Z_Construct_UPackage__Script_RemoteControlCommon(), TEXT("RCNetworkAddress"));
	}
	return Z_Registration_Info_UScriptStruct_RCNetworkAddress.OuterSingleton;
}
template<> REMOTECONTROLCOMMON_API UScriptStruct* StaticStruct<FRCNetworkAddress>()
{
	return FRCNetworkAddress::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCNetworkAddress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassA_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClassA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassB_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClassB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassC_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClassC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassD_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClassD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Utility struct to represent IPv4 Network addresses.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Utility struct to represent IPv4 Network addresses." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCNetworkAddress>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassA_MetaData[] = {
		{ "Category", "Network Address" },
		{ "Comment", "/** Denotes the first octet of the IPv4 address (0-255.xxx.xxx.xxx) */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Denotes the first octet of the IPv4 address (0-255.xxx.xxx.xxx)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassA = { "ClassA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCNetworkAddress, ClassA), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassB_MetaData[] = {
		{ "Category", "Network Address" },
		{ "Comment", "/** Denotes the second octet of the IPv4 address (xxx.0-255.xxx.xxx) */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Denotes the second octet of the IPv4 address (xxx.0-255.xxx.xxx)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassB = { "ClassB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCNetworkAddress, ClassB), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassC_MetaData[] = {
		{ "Category", "Network Address" },
		{ "Comment", "/** Denotes the third octet of the IPv4 address (xxx.xxx.0-255.xxx) */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Denotes the third octet of the IPv4 address (xxx.xxx.0-255.xxx)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassC = { "ClassC", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCNetworkAddress, ClassC), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassD_MetaData[] = {
		{ "Category", "Network Address" },
		{ "Comment", "/** Denotes the fourth octet of the IPv4 address (xxx.xxx.xxx.0-255) */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Denotes the fourth octet of the IPv4 address (xxx.xxx.xxx.0-255)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassD = { "ClassD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCNetworkAddress, ClassD), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewProp_ClassD,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlCommon,
		nullptr,
		&NewStructOps,
		"RCNetworkAddress",
		sizeof(FRCNetworkAddress),
		alignof(FRCNetworkAddress),
		Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCNetworkAddress()
	{
		if (!Z_Registration_Info_UScriptStruct_RCNetworkAddress.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCNetworkAddress.InnerSingleton, Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCNetworkAddress.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCNetworkAddressRange;
class UScriptStruct* FRCNetworkAddressRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCNetworkAddressRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCNetworkAddressRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCNetworkAddressRange, (UObject*)Z_Construct_UPackage__Script_RemoteControlCommon(), TEXT("RCNetworkAddressRange"));
	}
	return Z_Registration_Info_UScriptStruct_RCNetworkAddressRange.OuterSingleton;
}
template<> REMOTECONTROLCOMMON_API UScriptStruct* StaticStruct<FRCNetworkAddressRange>()
{
	return FRCNetworkAddressRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpperBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Utility struct to represent range of IPv4 Network addresses.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Utility struct to represent range of IPv4 Network addresses." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCNetworkAddressRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_LowerBound_MetaData[] = {
		{ "Category", "Network Address Range" },
		{ "Comment", "/** Denotes the lower bound IPv4 address. */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Denotes the lower bound IPv4 address." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCNetworkAddressRange, LowerBound), Z_Construct_UScriptStruct_FRCNetworkAddress, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_LowerBound_MetaData)) }; // 1719841569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_UpperBound_MetaData[] = {
		{ "Category", "Network Address Range" },
		{ "Comment", "/** Denotes the upper bound IPv4 address. */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Denotes the upper bound IPv4 address." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCNetworkAddressRange, UpperBound), Z_Construct_UScriptStruct_FRCNetworkAddress, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_UpperBound_MetaData)) }; // 1719841569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewProp_UpperBound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlCommon,
		nullptr,
		&NewStructOps,
		"RCNetworkAddressRange",
		sizeof(FRCNetworkAddressRange),
		alignof(FRCNetworkAddressRange),
		Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCNetworkAddressRange()
	{
		if (!Z_Registration_Info_UScriptStruct_RCNetworkAddressRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCNetworkAddressRange.InnerSingleton, Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCNetworkAddressRange.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPassphrase;
class UScriptStruct* FRCPassphrase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPassphrase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPassphrase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPassphrase, (UObject*)Z_Construct_UPackage__Script_RemoteControlCommon(), TEXT("RCPassphrase"));
	}
	return Z_Registration_Info_UScriptStruct_RCPassphrase.OuterSingleton;
}
template<> REMOTECONTROLCOMMON_API UScriptStruct* StaticStruct<FRCPassphrase>()
{
	return FRCPassphrase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPassphrase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Passphrase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Passphrase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPassphrase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Passphrase Struct\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Passphrase Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPassphrase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Passphrase" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPassphrase, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Passphrase_MetaData[] = {
		{ "Category", "Passphrase" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Passphrase = { "Passphrase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPassphrase, Passphrase), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Passphrase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Passphrase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPassphrase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewProp_Passphrase,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPassphrase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlCommon,
		nullptr,
		&NewStructOps,
		"RCPassphrase",
		sizeof(FRCPassphrase),
		alignof(FRCPassphrase),
		Z_Construct_UScriptStruct_FRCPassphrase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPassphrase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPassphrase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPassphrase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPassphrase()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPassphrase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPassphrase.InnerSingleton, Z_Construct_UScriptStruct_FRCPassphrase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPassphrase.InnerSingleton;
	}
	void URemoteControlSettings::StaticRegisterNativesURemoteControlSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlSettings);
	UClass* Z_Construct_UClass_URemoteControlSettings_NoRegister()
	{
		return URemoteControlSettings::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProtocolsGenerateTransactions_MetaData[];
#endif
		static void NewProp_bProtocolsGenerateTransactions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProtocolsGenerateTransactions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlWebInterfaceBindAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteControlWebInterfaceBindAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlWebInterfacePort_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RemoteControlWebInterfacePort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceWebAppBuildAtStartup_MetaData[];
#endif
		static void NewProp_bForceWebAppBuildAtStartup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceWebAppBuildAtStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWebAppLogRequestDuration_MetaData[];
#endif
		static void NewProp_bWebAppLogRequestDuration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWebAppLogRequestDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartWebServer_MetaData[];
#endif
		static void NewProp_bAutoStartWebServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartWebServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartWebSocketServer_MetaData[];
#endif
		static void NewProp_bAutoStartWebSocketServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartWebSocketServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlHttpServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RemoteControlHttpServerPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlWebsocketServerBindAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteControlWebsocketServerBindAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlWebSocketServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RemoteControlWebSocketServerPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInEditorOnlyWarnings_MetaData[];
#endif
		static void NewProp_bDisplayInEditorOnlyWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInEditorOnlyWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeBindingSplitRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TreeBindingSplitRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRebindingContext_MetaData[];
#endif
		static void NewProp_bUseRebindingContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRebindingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreProtectedCheck_MetaData[];
#endif
		static void NewProp_bIgnoreProtectedCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreProtectedCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreGetterSetterCheck_MetaData[];
#endif
		static void NewProp_bIgnoreGetterSetterCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreGetterSetterCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreWarnings_MetaData[];
#endif
		static void NewProp_bIgnoreWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictServerAccess_MetaData[];
#endif
		static void NewProp_bRestrictServerAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictServerAccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRemotePythonExecution_MetaData[];
#endif
		static void NewProp_bEnableRemotePythonExecution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRemotePythonExecution;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllowlistedClients_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowlistedClients_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowlistedClients;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnforcePassphraseForRemoteClients_MetaData[];
#endif
		static void NewProp_bEnforcePassphraseForRemoteClients_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforcePassphraseForRemoteClients;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Passphrases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Passphrases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Passphrases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPassphraseDisabledWarning_MetaData[];
#endif
		static void NewProp_bShowPassphraseDisabledWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPassphraseDisabledWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSecuritySettingsReviewed_MetaData[];
#endif
		static void NewProp_bSecuritySettingsReviewed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecuritySettingsReviewed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Global remote control settings\n */" },
		{ "IncludePath", "RemoteControlSettings.h" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Global remote control settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bProtocolsGenerateTransactions_MetaData[] = {
		{ "Category", "Remote Control" },
		{ "Comment", "/**\n\x09 * Should transactions be generated for events received through protocols (ie. MIDI, DMX etc.)\n\x09 * Disabling transactions improves performance but will prevent events from being transacted to Multi-User\n\x09 * unless using the Remote Control Interception feature.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Should transactions be generated for events received through protocols (ie. MIDI, DMX etc.)\nDisabling transactions improves performance but will prevent events from being transacted to Multi-User\nunless using the Remote Control Interception feature." },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bProtocolsGenerateTransactions_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bProtocolsGenerateTransactions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bProtocolsGenerateTransactions = { "bProtocolsGenerateTransactions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bProtocolsGenerateTransactions_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bProtocolsGenerateTransactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bProtocolsGenerateTransactions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfaceBindAddress_MetaData[] = {
		{ "Category", "Remote Control Web Interface" },
		{ "Comment", "/** The remote control web app bind address. */" },
		{ "DisplayName", "Remote Control Web Interface bind address" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "The remote control web app bind address." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfaceBindAddress = { "RemoteControlWebInterfaceBindAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlSettings, RemoteControlWebInterfaceBindAddress), METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfaceBindAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfaceBindAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfacePort_MetaData[] = {
		{ "Category", "Remote Control Web Interface" },
		{ "Comment", "/** The remote control web app http port. */" },
		{ "DisplayName", "Remote Control Web Interface http Port" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "The remote control web app http port." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfacePort = { "RemoteControlWebInterfacePort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlSettings, RemoteControlWebInterfacePort), METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfacePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfacePort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bForceWebAppBuildAtStartup_MetaData[] = {
		{ "Category", "Remote Control Web Interface" },
		{ "Comment", "/** Should force a build of the WebApp at startup. */" },
		{ "DisplayName", "Force WebApp build at startup" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Should force a build of the WebApp at startup." },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bForceWebAppBuildAtStartup_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bForceWebAppBuildAtStartup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bForceWebAppBuildAtStartup = { "bForceWebAppBuildAtStartup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bForceWebAppBuildAtStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bForceWebAppBuildAtStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bForceWebAppBuildAtStartup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bWebAppLogRequestDuration_MetaData[] = {
		{ "Category", "Remote Control Web Interface" },
		{ "Comment", "/** Should WebApp log timing. */" },
		{ "DisplayName", "Log WebApp requests handle duration" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Should WebApp log timing." },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bWebAppLogRequestDuration_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bWebAppLogRequestDuration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bWebAppLogRequestDuration = { "bWebAppLogRequestDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bWebAppLogRequestDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bWebAppLogRequestDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bWebAppLogRequestDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebServer_MetaData[] = {
		{ "Category", "Remote Control Web Server" },
		{ "Comment", "/** Whether web server is started automatically. */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Whether web server is started automatically." },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebServer_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bAutoStartWebServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebServer = { "bAutoStartWebServer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebSocketServer_MetaData[] = {
		{ "Category", "Remote Control Web Server" },
		{ "Comment", "/** Whether web socket server is started automatically. */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Whether web socket server is started automatically." },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebSocketServer_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bAutoStartWebSocketServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebSocketServer = { "bAutoStartWebSocketServer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebSocketServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebSocketServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebSocketServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlHttpServerPort_MetaData[] = {
		{ "Category", "Remote Control Web Server" },
		{ "Comment", "/** The web remote control HTTP server's port. */" },
		{ "DisplayName", "Remote Control HTTP Server Port" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "The web remote control HTTP server's port." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlHttpServerPort = { "RemoteControlHttpServerPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlSettings, RemoteControlHttpServerPort), METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlHttpServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlHttpServerPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebsocketServerBindAddress_MetaData[] = {
		{ "Category", "Remote Control Web Server" },
		{ "Comment", "/** The address to bind the websocket server to. 0.0.0.0 will open the connection to everyone on your network, while 127.0.0.1 will only allow local requests to come through.  */" },
		{ "DisplayName", "Remote Control Websocket Bind Address" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "The address to bind the websocket server to. 0.0.0.0 will open the connection to everyone on your network, while 127.0.0.1 will only allow local requests to come through." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebsocketServerBindAddress = { "RemoteControlWebsocketServerBindAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlSettings, RemoteControlWebsocketServerBindAddress), METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebsocketServerBindAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebsocketServerBindAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebSocketServerPort_MetaData[] = {
		{ "Category", "Remote Control Web Server" },
		{ "Comment", "/** The web remote control WebSocket server's port. */" },
		{ "DisplayName", "Remote Control WebSocket Server Port" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "The web remote control WebSocket server's port." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebSocketServerPort = { "RemoteControlWebSocketServerPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlSettings, RemoteControlWebSocketServerPort), METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebSocketServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebSocketServerPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bDisplayInEditorOnlyWarnings_MetaData[] = {
		{ "Category", "Remote Control Preset" },
		{ "Comment", "/** Show a warning icon for exposed editor-only fields. */" },
		{ "DisplayName", "Show a warning when exposing editor-only entities." },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Show a warning icon for exposed editor-only fields." },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bDisplayInEditorOnlyWarnings_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bDisplayInEditorOnlyWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bDisplayInEditorOnlyWarnings = { "bDisplayInEditorOnlyWarnings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bDisplayInEditorOnlyWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bDisplayInEditorOnlyWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bDisplayInEditorOnlyWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_TreeBindingSplitRatio_MetaData[] = {
		{ "Comment", "/** The split widget control ratio between entity tree and details/protocol binding list. */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "The split widget control ratio between entity tree and details/protocol binding list." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_TreeBindingSplitRatio = { "TreeBindingSplitRatio", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlSettings, TreeBindingSplitRatio), METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_TreeBindingSplitRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_TreeBindingSplitRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bUseRebindingContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bUseRebindingContext_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bUseRebindingContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bUseRebindingContext = { "bUseRebindingContext", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bUseRebindingContext_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bUseRebindingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bUseRebindingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreProtectedCheck_MetaData[] = {
		{ "Category", "Remote Control Preset" },
		{ "DisplayName", "Ignore Remote Control Protected Check" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreProtectedCheck_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bIgnoreProtectedCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreProtectedCheck = { "bIgnoreProtectedCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreProtectedCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreProtectedCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreProtectedCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreGetterSetterCheck_MetaData[] = {
		{ "Category", "Remote Control Preset" },
		{ "DisplayName", "Ignore Remote Control Getter/Setter Check" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreGetterSetterCheck_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bIgnoreGetterSetterCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreGetterSetterCheck = { "bIgnoreGetterSetterCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreGetterSetterCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreGetterSetterCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreGetterSetterCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreWarnings_MetaData[] = {
		{ "Category", "Remote Control Preset" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreWarnings_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bIgnoreWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreWarnings = { "bIgnoreWarnings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bRestrictServerAccess_MetaData[] = {
		{ "Category", "Remote Control | Security" },
		{ "Comment", "/** Whether to restrict access to a list of hostname/IPs in the AllowedOrigins setting. */" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Whether to restrict access to a list of hostname/IPs in the AllowedOrigins setting." },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bRestrictServerAccess_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bRestrictServerAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bRestrictServerAccess = { "bRestrictServerAccess", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bRestrictServerAccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bRestrictServerAccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bRestrictServerAccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnableRemotePythonExecution_MetaData[] = {
		{ "Category", "Remote Control | Security" },
		{ "Comment", "/** Enable remote python execution, enabling this could open you open to vulnerabilities if an outside actor has access to your server. */" },
		{ "editCondition", "bRestrictServerAccess" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Enable remote python execution, enabling this could open you open to vulnerabilities if an outside actor has access to your server." },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnableRemotePythonExecution_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bEnableRemotePythonExecution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnableRemotePythonExecution = { "bEnableRemotePythonExecution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnableRemotePythonExecution_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnableRemotePythonExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnableRemotePythonExecution_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowlistedClients_ElementProp = { "AllowlistedClients", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCNetworkAddressRange, METADATA_PARAMS(nullptr, 0) }; // 3833105722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowlistedClients_MetaData[] = {
		{ "Category", "Remote Control | Security" },
		{ "Comment", "/** List of IP Addresses that are allowed to access the Web API without authentication. */" },
		{ "DisplayName", "Range of Allowlisted Clients" },
		{ "EditCondition", "bRestrictServerAccess" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "List of IP Addresses that are allowed to access the Web API without authentication." },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FRCNetworkAddressRange>::Value, "The structure 'FRCNetworkAddressRange' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowlistedClients = { "AllowlistedClients", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlSettings, AllowlistedClients), METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowlistedClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowlistedClients_MetaData)) }; // 3833105722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowedOrigin_MetaData[] = {
		{ "Category", "Remote Control | Security" },
		{ "Comment", "/** \n\x09 * Origin that can make requests to the remote control server. Should contain the hostname or IP of the server making requests to remote control. ie. \"http://yourdomain.com\", or \"*\" to allow all origins. \n\x09 * @Note: This is used to block requests coming from a browser (ie. Coming from a script running on a website), ideally you should use both this setting and AllowListedClients, as a request coming from a websocket client can have an empty Origin.\n\x09 * @Note Supports wildcards (ie. *.yourdomain.com)\n\x09 */" },
		{ "EditCondition", "bRestrictServerAccess" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Origin that can make requests to the remote control server. Should contain the hostname or IP of the server making requests to remote control. ie. \"http://yourdomain.com\", or \"*\" to allow all origins.\n@Note: This is used to block requests coming from a browser (ie. Coming from a script running on a website), ideally you should use both this setting and AllowListedClients, as a request coming from a websocket client can have an empty Origin.\n@Note Supports wildcards (ie. *.yourdomain.com)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowedOrigin = { "AllowedOrigin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlSettings, AllowedOrigin), METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowedOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowedOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnforcePassphraseForRemoteClients_MetaData[] = {
		{ "Category", "Remote Control | Security" },
		{ "Comment", "/**\n\x09 * Controls whether a passphrase should be required when remote control is accessed by a client outside of localhost.\n\x09 */" },
		{ "EditCondition", "bRestrictServerAccess" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Controls whether a passphrase should be required when remote control is accessed by a client outside of localhost." },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnforcePassphraseForRemoteClients_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bEnforcePassphraseForRemoteClients = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnforcePassphraseForRemoteClients = { "bEnforcePassphraseForRemoteClients", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnforcePassphraseForRemoteClients_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnforcePassphraseForRemoteClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnforcePassphraseForRemoteClients_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_Passphrases_Inner = { "Passphrases", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCPassphrase, METADATA_PARAMS(nullptr, 0) }; // 3422520487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_Passphrases_MetaData[] = {
		{ "Category", "Remote Control | Security" },
		{ "Comment", "/** List of passphrases used for accessing remote control outside of localhost. */" },
		{ "DisplayName", "Remote Control Passphrase" },
		{ "EditCondition", "bEnforcePassphraseForRemoteClients" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "List of passphrases used for accessing remote control outside of localhost." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_Passphrases = { "Passphrases", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlSettings, Passphrases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_Passphrases_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_Passphrases_MetaData)) }; // 3422520487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bShowPassphraseDisabledWarning_MetaData[] = {
		{ "Category", "Remote Control | Security" },
		{ "Comment", "/** Whether the User should be warned that Passphrase usage is disabled or now. Initially activated */" },
		{ "DisplayName", "Warn that Passphrase might be disabled" },
		{ "EditCondition", "bRestrictServerAccess" },
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
		{ "ToolTip", "Whether the User should be warned that Passphrase usage is disabled or now. Initially activated" },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bShowPassphraseDisabledWarning_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bShowPassphraseDisabledWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bShowPassphraseDisabledWarning = { "bShowPassphraseDisabledWarning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bShowPassphraseDisabledWarning_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bShowPassphraseDisabledWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bShowPassphraseDisabledWarning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bSecuritySettingsReviewed_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteControlSettings.h" },
	};
#endif
	void Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bSecuritySettingsReviewed_SetBit(void* Obj)
	{
		((URemoteControlSettings*)Obj)->bSecuritySettingsReviewed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bSecuritySettingsReviewed = { "bSecuritySettingsReviewed", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteControlSettings), &Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bSecuritySettingsReviewed_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bSecuritySettingsReviewed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bSecuritySettingsReviewed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bProtocolsGenerateTransactions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfaceBindAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebInterfacePort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bForceWebAppBuildAtStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bWebAppLogRequestDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bAutoStartWebSocketServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlHttpServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebsocketServerBindAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_RemoteControlWebSocketServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bDisplayInEditorOnlyWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_TreeBindingSplitRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bUseRebindingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreProtectedCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreGetterSetterCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bIgnoreWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bRestrictServerAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnableRemotePythonExecution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowlistedClients_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowlistedClients,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_AllowedOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bEnforcePassphraseForRemoteClients,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_Passphrases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_Passphrases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bShowPassphraseDisabledWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlSettings_Statics::NewProp_bSecuritySettingsReviewed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlSettings_Statics::ClassParams = {
		&URemoteControlSettings::StaticClass,
		"RemoteControl",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlSettings()
	{
		if (!Z_Registration_Info_UClass_URemoteControlSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlSettings.OuterSingleton, Z_Construct_UClass_URemoteControlSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlSettings.OuterSingleton;
	}
	template<> REMOTECONTROLCOMMON_API UClass* StaticClass<URemoteControlSettings>()
	{
		return URemoteControlSettings::StaticClass();
	}
	URemoteControlSettings::URemoteControlSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlSettings);
	URemoteControlSettings::~URemoteControlSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_Statics::ScriptStructInfo[] = {
		{ FRCNetworkAddress::StaticStruct, Z_Construct_UScriptStruct_FRCNetworkAddress_Statics::NewStructOps, TEXT("RCNetworkAddress"), &Z_Registration_Info_UScriptStruct_RCNetworkAddress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCNetworkAddress), 1719841569U) },
		{ FRCNetworkAddressRange::StaticStruct, Z_Construct_UScriptStruct_FRCNetworkAddressRange_Statics::NewStructOps, TEXT("RCNetworkAddressRange"), &Z_Registration_Info_UScriptStruct_RCNetworkAddressRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCNetworkAddressRange), 3833105722U) },
		{ FRCPassphrase::StaticStruct, Z_Construct_UScriptStruct_FRCPassphrase_Statics::NewStructOps, TEXT("RCPassphrase"), &Z_Registration_Info_UScriptStruct_RCPassphrase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPassphrase), 3422520487U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlSettings, URemoteControlSettings::StaticClass, TEXT("URemoteControlSettings"), &Z_Registration_Info_UClass_URemoteControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlSettings), 1233055338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_4173523426(TEXT("/Script/RemoteControlCommon"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
