// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IO/DMXOutputPortConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXOutputPortConfig() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortConfig();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress();
	UPackage* Z_Construct_UPackage__Script_DMXProtocol();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOutputPortDestinationAddress;
class UScriptStruct* FDMXOutputPortDestinationAddress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOutputPortDestinationAddress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOutputPortDestinationAddress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("DMXOutputPortDestinationAddress"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOutputPortDestinationAddress.OuterSingleton;
}
template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<FDMXOutputPortDestinationAddress>()
{
	return FDMXOutputPortDestinationAddress::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAddressString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAddressString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The IP address outbound DMX is sent to */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "The IP address outbound DMX is sent to" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOutputPortDestinationAddress>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddressString_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** The IP address outbound DMX is sent to */" },
		{ "DisplayName", "Destination IP Address" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "The IP address outbound DMX is sent to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddressString = { "DestinationAddressString", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortDestinationAddress, DestinationAddressString), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddressString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddressString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddressString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		&NewStructOps,
		"DMXOutputPortDestinationAddress",
		sizeof(FDMXOutputPortDestinationAddress),
		alignof(FDMXOutputPortDestinationAddress),
		Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOutputPortDestinationAddress.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOutputPortDestinationAddress.InnerSingleton, Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOutputPortDestinationAddress.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOutputPortConfig;
class UScriptStruct* FDMXOutputPortConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOutputPortConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOutputPortConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOutputPortConfig, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("DMXOutputPortConfig"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOutputPortConfig.OuterSingleton;
}
template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<FDMXOutputPortConfig>()
{
	return FDMXOutputPortConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PortName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProtocolName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommunicationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CommunicationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompleteDeviceAddressEnabled_MetaData[];
#endif
		static void NewProp_bAutoCompleteDeviceAddressEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompleteDeviceAddressEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteDeviceAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutoCompleteDeviceAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAddress;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationAddresses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAddresses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestinationAddresses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopbackToEngine_MetaData[];
#endif
		static void NewProp_bLoopbackToEngine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopbackToEngine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUniverseStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUniverseStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumUniverses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumUniverses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternUniverseStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExternUniverseStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DelayFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PortGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Blueprint Configuration of a Port, used in DXM Settings to specify inputs and outputs.\n *\n * Property changes are handled in details customization consistently.\n */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "Blueprint Configuration of a Port, used in DXM Settings to specify inputs and outputs.\n\nProperty changes are handled in details customization consistently." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOutputPortConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortName_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** The name displayed wherever the port can be displayed */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "The name displayed wherever the port can be displayed" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortName = { "PortName", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, PortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ProtocolName_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** DMX Protocol */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "DMX Protocol" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ProtocolName = { "ProtocolName", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, ProtocolName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ProtocolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ProtocolName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_CommunicationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_CommunicationType_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** The type of communication used with this port */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "The type of communication used with this port" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_CommunicationType = { "CommunicationType", nullptr, (EPropertyFlags)0x0020080000014005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, CommunicationType), Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_CommunicationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_CommunicationType_MetaData)) }; // 1471026857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** Enables 'Auto Complete Device Address', hidden via customization - EditConditionInlineToggle doesn't support Config */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "Enables 'Auto Complete Device Address', hidden via customization - EditConditionInlineToggle doesn't support Config" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_SetBit(void* Obj)
	{
		((FDMXOutputPortConfig*)Obj)->bAutoCompleteDeviceAddressEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled = { "bAutoCompleteDeviceAddressEnabled", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDMXOutputPortConfig), &Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/**\n\x09 * Searches available Network Interface Card IP Addresses and uses the first match as the 'Network Interface Card IP Address' (both in Editor and Game).\n\x09 *\n\x09 * Supports wildcards, examples:\n\x09 * '192'\n\x09 * '192.*'\n\x09 * '192.168.?.*'..\n\x09 *\n\x09 * If empty or '*' the first best available IP will be selected (not recommended)\n\x09 */" },
		{ "DisplayName", "Auto Complete Network Interface Card IP Address" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "Searches available Network Interface Card IP Addresses and uses the first match as the 'Network Interface Card IP Address' (both in Editor and Game).\n\nSupports wildcards, examples:\n'192'\n'192.*'\n'192.168.?.*'..\n\nIf empty or '*' the first best available IP will be selected (not recommended)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress = { "AutoCompleteDeviceAddress", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, AutoCompleteDeviceAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DeviceAddress_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** The IP address of the network interface card over which outbound DMX is sent */" },
		{ "DisplayName", "Network Interface Card IP Address" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "The IP address of the network interface card over which outbound DMX is sent" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DeviceAddress = { "DeviceAddress", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, DeviceAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DeviceAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DeviceAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddress_MetaData[] = {
		{ "Comment", "/** For Unicast, the IP address outbound DMX is sent to */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "DestinationAddress is deprecated. Please use DestinationAddresses instead." },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "For Unicast, the IP address outbound DMX is sent to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddress = { "DestinationAddress", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, DestinationAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddress_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddresses_Inner = { "DestinationAddresses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress, METADATA_PARAMS(nullptr, 0) }; // 604076494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddresses_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** For Unicast, the IP addresses outbound DMX is sent to */" },
		{ "DisplayName", "Destination IP Address" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "For Unicast, the IP addresses outbound DMX is sent to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddresses = { "DestinationAddresses", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, DestinationAddresses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddresses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddresses_MetaData)) }; // 604076494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bLoopbackToEngine_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** If true, the signals output from this port are input into to the engine. Note, signals input into the engine this way will not be visible in Monitors when monitoring Inputs. */" },
		{ "DisplayName", "Input into Engine" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "If true, the signals output from this port are input into to the engine. Note, signals input into the engine this way will not be visible in Monitors when monitoring Inputs." },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bLoopbackToEngine_SetBit(void* Obj)
	{
		((FDMXOutputPortConfig*)Obj)->bLoopbackToEngine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bLoopbackToEngine = { "bLoopbackToEngine", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDMXOutputPortConfig), &Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bLoopbackToEngine_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bLoopbackToEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bLoopbackToEngine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_LocalUniverseStart_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** Local Start Universe */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "Local Start Universe" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_LocalUniverseStart = { "LocalUniverseStart", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, LocalUniverseStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_LocalUniverseStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_LocalUniverseStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_NumUniverses_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** Number of Universes */" },
		{ "DisplayName", "Amount of Universes" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "Number of Universes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_NumUniverses = { "NumUniverses", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, NumUniverses), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_NumUniverses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_NumUniverses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ExternUniverseStart_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** \n\x09 * The start address this being transposed to. \n\x09 * E.g. if LocalUniverseStart is 1 and this is 100, Local Universe 1 is sent/received as Universe 100.\n\x09 */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "The start address this being transposed to.\nE.g. if LocalUniverseStart is 1 and this is 100, Local Universe 1 is sent/received as Universe 100." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ExternUniverseStart = { "ExternUniverseStart", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, ExternUniverseStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ExternUniverseStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ExternUniverseStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** Priority on which packets are being sent */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "Priority on which packets are being sent" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** The amout by which sending of packets is delayed */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "The amout by which sending of packets is delayed" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DelayFrameRate_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** Framerate of the delay */" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "Framerate of the delay" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DelayFrameRate = { "DelayFrameRate", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, DelayFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DelayFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DelayFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortGuid_MetaData[] = {
		{ "Category", "Port Config Guid" },
		{ "Comment", "/** \n\x09 * Unique identifier, shared with the port instance.\n\x09 * Note: This needs be BlueprintReadWrite to be accessible to property type customization, but is hidden by customization.\n\x09 */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/IO/DMXOutputPortConfig.h" },
		{ "ToolTip", "Unique identifier, shared with the port instance.\nNote: This needs be BlueprintReadWrite to be accessible to property type customization, but is hidden by customization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortGuid = { "PortGuid", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXOutputPortConfig, PortGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ProtocolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_CommunicationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_CommunicationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DeviceAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddresses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DestinationAddresses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_bLoopbackToEngine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_LocalUniverseStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_NumUniverses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_ExternUniverseStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_DelayFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewProp_PortGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		&NewStructOps,
		"DMXOutputPortConfig",
		sizeof(FDMXOutputPortConfig),
		alignof(FDMXOutputPortConfig),
		Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOutputPortConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOutputPortConfig.InnerSingleton, Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOutputPortConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXOutputPortConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXOutputPortConfig_h_Statics::ScriptStructInfo[] = {
		{ FDMXOutputPortDestinationAddress::StaticStruct, Z_Construct_UScriptStruct_FDMXOutputPortDestinationAddress_Statics::NewStructOps, TEXT("DMXOutputPortDestinationAddress"), &Z_Registration_Info_UScriptStruct_DMXOutputPortDestinationAddress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOutputPortDestinationAddress), 604076494U) },
		{ FDMXOutputPortConfig::StaticStruct, Z_Construct_UScriptStruct_FDMXOutputPortConfig_Statics::NewStructOps, TEXT("DMXOutputPortConfig"), &Z_Registration_Info_UScriptStruct_DMXOutputPortConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOutputPortConfig), 70472032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXOutputPortConfig_h_1214366291(TEXT("/Script/DMXProtocol"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXOutputPortConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXOutputPortConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
