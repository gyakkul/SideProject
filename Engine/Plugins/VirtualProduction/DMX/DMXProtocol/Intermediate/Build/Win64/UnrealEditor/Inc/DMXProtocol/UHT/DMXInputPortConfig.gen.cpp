// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IO/DMXInputPortConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXInputPortConfig() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXInputPortConfig();
	UPackage* Z_Construct_UPackage__Script_DMXProtocol();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXPortPriorityStrategy;
	static UEnum* EDMXPortPriorityStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXPortPriorityStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXPortPriorityStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("EDMXPortPriorityStrategy"));
		}
		return Z_Registration_Info_UEnum_EDMXPortPriorityStrategy.OuterSingleton;
	}
	template<> DMXPROTOCOL_API UEnum* StaticEnum<EDMXPortPriorityStrategy>()
	{
		return EDMXPortPriorityStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy_Statics::Enumerators[] = {
		{ "EDMXPortPriorityStrategy::None", (int64)EDMXPortPriorityStrategy::None },
		{ "EDMXPortPriorityStrategy::Equal", (int64)EDMXPortPriorityStrategy::Equal },
		{ "EDMXPortPriorityStrategy::HigherThan", (int64)EDMXPortPriorityStrategy::HigherThan },
		{ "EDMXPortPriorityStrategy::LowerThan", (int64)EDMXPortPriorityStrategy::LowerThan },
		{ "EDMXPortPriorityStrategy::Highest", (int64)EDMXPortPriorityStrategy::Highest },
		{ "EDMXPortPriorityStrategy::Lowest", (int64)EDMXPortPriorityStrategy::Lowest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Strategy for priority system (when receiving packets)\n * \n * Not: Not all protocols have a use for this\n*/" },
		{ "Equal.Comment", "/** Manage the packet only if the priority is equal to the specified value */" },
		{ "Equal.Name", "EDMXPortPriorityStrategy::Equal" },
		{ "Equal.ToolTip", "Manage the packet only if the priority is equal to the specified value" },
		{ "HigherThan.Comment", "/** Manage the packet only if the priority is higher than the specified value */" },
		{ "HigherThan.Name", "EDMXPortPriorityStrategy::HigherThan" },
		{ "HigherThan.ToolTip", "Manage the packet only if the priority is higher than the specified value" },
		{ "Highest.Comment", "/** Manage the packet only if it matches the highest received priority */" },
		{ "Highest.Name", "EDMXPortPriorityStrategy::Highest" },
		{ "Highest.ToolTip", "Manage the packet only if it matches the highest received priority" },
		{ "LowerThan.Comment", "/** Manage the packet only if the priority is lower than the specified value */" },
		{ "LowerThan.Name", "EDMXPortPriorityStrategy::LowerThan" },
		{ "LowerThan.ToolTip", "Manage the packet only if the priority is lower than the specified value" },
		{ "Lowest.Comment", "/** Manage the packet only if it matches the lowest received priority */" },
		{ "Lowest.Name", "EDMXPortPriorityStrategy::Lowest" },
		{ "Lowest.ToolTip", "Manage the packet only if it matches the lowest received priority" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "None.Comment", "/** Always manage the packet */" },
		{ "None.Name", "EDMXPortPriorityStrategy::None" },
		{ "None.ToolTip", "Always manage the packet" },
		{ "ToolTip", "Strategy for priority system (when receiving packets)\n\nNot: Not all protocols have a use for this" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		"EDMXPortPriorityStrategy",
		"EDMXPortPriorityStrategy",
		Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy()
	{
		if (!Z_Registration_Info_UEnum_EDMXPortPriorityStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXPortPriorityStrategy.InnerSingleton, Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXPortPriorityStrategy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXInputPortConfig;
class UScriptStruct* FDMXInputPortConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXInputPortConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXInputPortConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXInputPortConfig, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("DMXInputPortConfig"));
	}
	return Z_Registration_Info_UScriptStruct_DMXInputPortConfig.OuterSingleton;
}
template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<FDMXInputPortConfig>()
{
	return FDMXInputPortConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PortGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Blueprint Configuration of a Port, used in DXM Settings to specify inputs and outputs.\n *\n * Property changes are handled in details customization consistently.\n */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "Blueprint Configuration of a Port, used in DXM Settings to specify inputs and outputs.\n\nProperty changes are handled in details customization consistently." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXInputPortConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortName_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** The name displayed wherever the port can be displayed */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "The name displayed wherever the port can be displayed" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortName = { "PortName", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, PortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ProtocolName_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** DMX Protocol */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "DMX Protocol" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ProtocolName = { "ProtocolName", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, ProtocolName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ProtocolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ProtocolName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_CommunicationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_CommunicationType_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** The type of communication used with this port */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "The type of communication used with this port" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_CommunicationType = { "CommunicationType", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, CommunicationType), Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_CommunicationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_CommunicationType_MetaData)) }; // 1471026857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** Enables 'Auto Complete Device Address', hidden via customization - EditConditionInlineToggle doesn't support Config */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "Enables 'Auto Complete Device Address', hidden via customization - EditConditionInlineToggle doesn't support Config" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_SetBit(void* Obj)
	{
		((FDMXInputPortConfig*)Obj)->bAutoCompleteDeviceAddressEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled = { "bAutoCompleteDeviceAddressEnabled", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDMXInputPortConfig), &Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/**\n\x09 * Searches available Network Interface Card IP Addresses and uses the first match as the 'Network Interface Card IP Address' (both in Editor and Game).\n\x09 *\n\x09 * Supports wildcards, examples:\n\x09 * '192'\n\x09 * '192.*'\n\x09 * '192.168.?.*'.\n\x09 *\n\x09 * If empty or '*' the first best available IP will be selected (not recommended)\n\x09 */" },
		{ "DisplayName", "Auto Complete Network Interface Card IP Address" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "Searches available Network Interface Card IP Addresses and uses the first match as the 'Network Interface Card IP Address' (both in Editor and Game).\n\nSupports wildcards, examples:\n'192'\n'192.*'\n'192.168.?.*'.\n\nIf empty or '*' the first best available IP will be selected (not recommended)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress = { "AutoCompleteDeviceAddress", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, AutoCompleteDeviceAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_DeviceAddress_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** The Network Interface Card's IP Adress, over which DMX is received */" },
		{ "DisplayName", "Network Interface Card IP Address" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "The Network Interface Card's IP Adress, over which DMX is received" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_DeviceAddress = { "DeviceAddress", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, DeviceAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_DeviceAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_DeviceAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_LocalUniverseStart_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** Local Start Universe */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "Local Start Universe" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_LocalUniverseStart = { "LocalUniverseStart", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, LocalUniverseStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_LocalUniverseStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_LocalUniverseStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_NumUniverses_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** Number of Universes */" },
		{ "DisplayName", "Amount of Universes" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "Number of Universes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_NumUniverses = { "NumUniverses", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, NumUniverses), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_NumUniverses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_NumUniverses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ExternUniverseStart_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** \n\x09 * The start address this being transposed to. \n\x09 * E.g. if LocalUniverseStart is 1 and this is 100, Local Universe 1 is sent/received as Universe 100.\n\x09 */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "The start address this being transposed to.\nE.g. if LocalUniverseStart is 1 and this is 100, Local Universe 1 is sent/received as Universe 100." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ExternUniverseStart = { "ExternUniverseStart", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, ExternUniverseStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ExternUniverseStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ExternUniverseStart_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PriorityStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PriorityStrategy_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** How to deal with the priority value */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "How to deal with the priority value" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PriorityStrategy = { "PriorityStrategy", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, PriorityStrategy), Z_Construct_UEnum_DMXProtocol_EDMXPortPriorityStrategy, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PriorityStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PriorityStrategy_MetaData)) }; // 1307883836
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Port Config" },
		{ "Comment", "/** Priority value, can act as a filter or a threshold */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "Priority value, can act as a filter or a threshold" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortGuid_MetaData[] = {
		{ "Category", "Port Config Guid" },
		{ "Comment", "/** \n\x09 * Unique identifier, shared with the port instance.\n\x09 * Note: This needs be BlueprintReadWrite to be accessible to property type customization, but is hidden by customization.\n\x09 */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortConfig.h" },
		{ "ToolTip", "Unique identifier, shared with the port instance.\nNote: This needs be BlueprintReadWrite to be accessible to property type customization, but is hidden by customization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortGuid = { "PortGuid", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortConfig, PortGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ProtocolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_CommunicationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_CommunicationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_bAutoCompleteDeviceAddressEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_AutoCompleteDeviceAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_DeviceAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_LocalUniverseStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_NumUniverses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_ExternUniverseStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PriorityStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PriorityStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewProp_PortGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		&NewStructOps,
		"DMXInputPortConfig",
		sizeof(FDMXInputPortConfig),
		alignof(FDMXInputPortConfig),
		Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXInputPortConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXInputPortConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXInputPortConfig.InnerSingleton, Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXInputPortConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h_Statics::EnumInfo[] = {
		{ EDMXPortPriorityStrategy_StaticEnum, TEXT("EDMXPortPriorityStrategy"), &Z_Registration_Info_UEnum_EDMXPortPriorityStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1307883836U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h_Statics::ScriptStructInfo[] = {
		{ FDMXInputPortConfig::StaticStruct, Z_Construct_UScriptStruct_FDMXInputPortConfig_Statics::NewStructOps, TEXT("DMXInputPortConfig"), &Z_Registration_Info_UScriptStruct_DMXInputPortConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXInputPortConfig), 1689215049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h_1732439379(TEXT("/Script/DMXProtocol"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
