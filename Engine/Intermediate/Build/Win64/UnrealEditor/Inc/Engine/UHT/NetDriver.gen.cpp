// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDriver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChannelDefinition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPacketSimulationSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PacketSimulationSettings;
class UScriptStruct* FPacketSimulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PacketSimulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PacketSimulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPacketSimulationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PacketSimulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PacketSimulationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPacketSimulationSettings>()
{
	return FPacketSimulationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktLoss_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktLoss;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktLossMaxSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktLossMaxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktLossMinSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktLossMinSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktDup_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktDup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktLag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktLagVariance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktLagVariance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktLagMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktLagMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktLagMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktLagMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktIncomingLagMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktIncomingLagMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktIncomingLagMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktIncomingLagMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktIncomingLoss_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktIncomingLoss;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PktJitter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PktJitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds the packet simulation settings in one place */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Holds the packet simulation settings in one place" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPacketSimulationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause calls to FlushNet to drop packets.\n\x09 * Value is treated as % of packets dropped (i.e. 0 = None, 100 = All).\n\x09 * No general pattern / ordering is guaranteed.\n\x09 * Clamped between 0 and 100.\n\x09 *\n\x09 * Works with all other settings.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to drop packets.\nValue is treated as % of packets dropped (i.e. 0 = None, 100 = All).\nNo general pattern / ordering is guaranteed.\nClamped between 0 and 100.\n\nWorks with all other settings." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss = { "PktLoss", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLoss), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09* Sets the maximum size of packets in bytes that will be dropped\n\x09* according to the PktLoss setting. Default is INT_MAX.\n\x09*\n\x09* Works with all other settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Sets the maximum size of packets in bytes that will be dropped\naccording to the PktLoss setting. Default is INT_MAX.\n\nWorks with all other settings." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize = { "PktLossMaxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLossMaxSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09* Sets the minimum size of packets in bytes that will be dropped\n\x09* according to the PktLoss setting. Default is 0.\n\x09*\n\x09* Works with all other settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Sets the minimum size of packets in bytes that will be dropped\naccording to the PktLoss setting. Default is 0.\n\nWorks with all other settings." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize = { "PktLossMinSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLossMinSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause calls to FlushNet to change ordering of packets at random.\n\x09 * Value is treated as a bool (i.e. 0 = False, anything else = True).\n\x09 * This works by randomly selecting packets to be delayed until a subsequent call to FlushNet.\n\x09 *\n\x09 * Takes precedence over PktDup and PktLag.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to change ordering of packets at random.\nValue is treated as a bool (i.e. 0 = False, anything else = True).\nThis works by randomly selecting packets to be delayed until a subsequent call to FlushNet.\n\nTakes precedence over PktDup and PktLag." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder = { "PktOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause calls to FlushNet to duplicate packets.\n\x09 * Value is treated as % of packets duplicated (i.e. 0 = None, 100 = All).\n\x09 * No general pattern / ordering is guaranteed.\n\x09 * Clamped between 0 and 100.\n\x09 *\n\x09 * Cannot be used with PktOrder or PktLag.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to duplicate packets.\nValue is treated as % of packets duplicated (i.e. 0 = None, 100 = All).\nNo general pattern / ordering is guaranteed.\nClamped between 0 and 100.\n\nCannot be used with PktOrder or PktLag." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup = { "PktDup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktDup), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause calls to FlushNet to delay packets.\n\x09 * Value is treated as millisecond lag.\n\x09 *\n\x09 * Cannot be used with PktOrder.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause calls to FlushNet to delay packets.\nValue is treated as millisecond lag.\n\nCannot be used with PktOrder." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag = { "PktLag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLag), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * When set, will cause PktLag to use variable lag instead of constant.\n\x09 * Value is treated as millisecond lag range (e.g. -GivenVariance <= 0 <= GivenVariance).\n\x09 *\n\x09 * Can only be used when PktLag is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "When set, will cause PktLag to use variable lag instead of constant.\nValue is treated as millisecond lag range (e.g. -GivenVariance <= 0 <= GivenVariance).\n\nCan only be used when PktLag is enabled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance = { "PktLagVariance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLagVariance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMin_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * If set lag values will randomly fluctuate between Min and Max.\n\x09 * Ignored if PktLag value is set\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "If set lag values will randomly fluctuate between Min and Max.\nIgnored if PktLag value is set" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMin = { "PktLagMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLagMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMax_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMax = { "PktLagMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLagMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMin_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * Set a value to add a minimum delay in milliseconds to incoming\n\x09 * packets before they are processed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Set a value to add a minimum delay in milliseconds to incoming\npackets before they are processed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMin = { "PktIncomingLagMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktIncomingLagMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMax_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * The maximum delay in milliseconds to add to incoming\n\x09 * packets before they are processed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The maximum delay in milliseconds to add to incoming\npackets before they are processed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMax = { "PktIncomingLagMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktIncomingLagMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLoss_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * The ratio of incoming packets that will be dropped\n\x09 * to simulate packet loss\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The ratio of incoming packets that will be dropped\nto simulate packet loss" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLoss = { "PktIncomingLoss", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktIncomingLoss), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLoss_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktJitter_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Comment", "/**\n\x09 * Causes sent packets to have a variable latency that fluctuates from [PktLagMin] to [PktLagMin+PktJitter]\n\x09 * Note that this will cause packet loss on the receiving end.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Causes sent packets to have a variable latency that fluctuates from [PktLagMin] to [PktLagMin+PktJitter]\nNote that this will cause packet loss on the receiving end." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktJitter = { "PktJitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktJitter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktJitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLoss,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMaxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLossMinSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktDup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktLagMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLagMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktIncomingLoss,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewProp_PktJitter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PacketSimulationSettings",
		sizeof(FPacketSimulationSettings),
		alignof(FPacketSimulationSettings),
		Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPacketSimulationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PacketSimulationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PacketSimulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PacketSimulationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChannelDefinition;
class UScriptStruct* FChannelDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChannelDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ChannelDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ChannelDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChannelDefinition>()
{
	return FChannelDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChannelDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ChannelClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticChannelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickOnCreate_MetaData[];
#endif
		static void NewProp_bTickOnCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickOnCreate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bServerOpen_MetaData[];
#endif
		static void NewProp_bServerOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientOpen_MetaData[];
#endif
		static void NewProp_bClientOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialServer_MetaData[];
#endif
		static void NewProp_bInitialServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialClient_MetaData[];
#endif
		static void NewProp_bInitialClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to specify properties of a channel type */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify properties of a channel type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelDefinition, ChannelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "// Channel type identifier\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel type identifier" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelDefinition, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass_MetaData[] = {
		{ "Comment", "// UClass name used to create the UChannel\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "UClass name used to create the UChannel" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass = { "ChannelClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelDefinition, ChannelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex_MetaData[] = {
		{ "Comment", "// UClass used to create the UChannel\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "UClass used to create the UChannel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex = { "StaticChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelDefinition, StaticChannelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_MetaData[] = {
		{ "Comment", "// Channel always uses this index, INDEX_NONE if dynamically chosen\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel always uses this index, INDEX_NONE if dynamically chosen" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bTickOnCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate = { "bTickOnCreate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_MetaData[] = {
		{ "Comment", "// Whether to immediately begin ticking the channel after creation\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Whether to immediately begin ticking the channel after creation" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bServerOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen = { "bServerOpen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_MetaData[] = {
		{ "Comment", "// Channel opened by the server\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel opened by the server" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bClientOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen = { "bClientOpen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_MetaData[] = {
		{ "Comment", "// Channel opened by the client\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel opened by the client" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bInitialServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer = { "bInitialServer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_MetaData[] = {
		{ "Comment", "// Channel created on server when connection is established\n" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Channel created on server when connection is established" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_SetBit(void* Obj)
	{
		((FChannelDefinition*)Obj)->bInitialClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient = { "bInitialClient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FChannelDefinition), &Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_ChannelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_StaticChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ChannelDefinition",
		sizeof(FChannelDefinition),
		alignof(FChannelDefinition),
		Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChannelDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ChannelDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChannelDefinition.InnerSingleton, Z_Construct_UScriptStruct_FChannelDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChannelDefinition.InnerSingleton;
	}
	void UNetDriver::StaticRegisterNativesUNetDriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetDriver);
	UClass* Z_Construct_UClass_UNetDriver_NoRegister()
	{
		return UNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetConnectionClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NetConnectionClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationDriverClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReplicationDriverClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationBridgeClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReplicationBridgeClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDownloadSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDownloadSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampListenServerTickRate_MetaData[];
#endif
		static void NewProp_bClampListenServerTickRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampListenServerTickRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetServerMaxTickRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NetServerMaxTickRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNetTickRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNetTickRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInternetClientRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInternetClientRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClientRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClientRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerTravelPause_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerTravelPause;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPrioritySeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnPrioritySeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelevantTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RelevantTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeepAliveTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialConnectTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialConnectTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectionTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutMultiplierForUnoptimizedBuilds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerConnection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ServerConnection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClientConnections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientConnections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyDisconnectedTrackingTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RecentlyDisconnectedTrackingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPackage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldPackage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetConnectionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_NetConnectionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationDriverClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ReplicationDriverClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationBridgeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ReplicationBridgeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetDriverName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NetDriverName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelDefinitions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelDefinitionMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelDefinitionMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDefinitionMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChannelDefinitionMap;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorChannelPool_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorChannelPool_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorChannelPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoTimeouts_MetaData[];
#endif
		static void NewProp_bNoTimeouts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoTimeouts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeverApplyNetworkEmulationSettings_MetaData[];
#endif
		static void NewProp_bNeverApplyNetworkEmulationSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverApplyNetworkEmulationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicationDriver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/NetDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName_MetaData[] = {
		{ "Comment", "/** Used to specify the class to use for connections */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify the class to use for connections" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName = { "NetConnectionClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, NetConnectionClassName), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName = { "ReplicationDriverClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ReplicationDriverClassName), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClassName_MetaData[] = {
		{ "Comment", "/** Used to specify the class to use for ReplicationBridge */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify the class to use for ReplicationBridge" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClassName = { "ReplicationBridgeClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ReplicationBridgeClassName), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize = { "MaxDownloadSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, MaxDownloadSize), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	void Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_SetBit(void* Obj)
	{
		((UNetDriver*)Obj)->bClampListenServerTickRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate = { "bClampListenServerTickRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNetDriver), &Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate = { "NetServerMaxTickRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, NetServerMaxTickRate), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxNetTickRate_MetaData[] = {
		{ "Comment", "/** Limit tick rate of replication to allow very high frame rates to still replicate data. A value less or equal to zero means use the engine tick rate. A value greater than zero will clamp the net tick rate to this value.  */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Limit tick rate of replication to allow very high frame rates to still replicate data. A value less or equal to zero means use the engine tick rate. A value greater than zero will clamp the net tick rate to this value." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxNetTickRate = { "MaxNetTickRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, MaxNetTickRate), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxNetTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxNetTickRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate = { "MaxInternetClientRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, MaxInternetClientRate), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate = { "MaxClientRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, MaxClientRate), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause_MetaData[] = {
		{ "Comment", "/** Amount of time a server will wait before traveling to next map, gives clients time to receive final RPCs on existing level @see NextSwitchCountdown */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Amount of time a server will wait before traveling to next map, gives clients time to receive final RPCs on existing level @see NextSwitchCountdown" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause = { "ServerTravelPause", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ServerTravelPause), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds = { "SpawnPrioritySeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, SpawnPrioritySeconds), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout = { "RelevantTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, RelevantTimeout), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime = { "KeepAliveTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, KeepAliveTime), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout_MetaData[] = {
		{ "Comment", "/** Amount of time to wait for a new net connection to be established before destroying the connection */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Amount of time to wait for a new net connection to be established before destroying the connection" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout = { "InitialConnectTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, InitialConnectTimeout), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout_MetaData[] = {
		{ "Comment", "/** \n\x09 * Amount of time to wait before considering an established connection timed out.  \n\x09 * Typically shorter than the time to wait on a new connection because this connection\n\x09 * should already have been setup and any interruption should be trapped quicker.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Amount of time to wait before considering an established connection timed out.\nTypically shorter than the time to wait on a new connection because this connection\nshould already have been setup and any interruption should be trapped quicker." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout = { "ConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData[] = {
		{ "Comment", "/**\n\x09* A multiplier that is applied to the above values when we are running with unoptimized builds (debug)\n\x09* or data (uncooked). This allows us to retain normal timeout behavior while debugging without resorting\n\x09* to the nuclear 'notimeouts' option or bumping the values above. If ==0 multiplier = 1\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "A multiplier that is applied to the above values when we are running with unoptimized builds (debug)\nor data (uncooked). This allows us to retain normal timeout behavior while debugging without resorting\nto the nuclear 'notimeouts' option or bumping the values above. If ==0 multiplier = 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds = { "TimeoutMultiplierForUnoptimizedBuilds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, TimeoutMultiplierForUnoptimizedBuilds), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection_MetaData[] = {
		{ "Comment", "/** Connection to the server (this net driver is a client) */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Connection to the server (this net driver is a client)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection = { "ServerConnection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ServerConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_Inner = { "ClientConnections", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_MetaData[] = {
		{ "Comment", "/** Array of connections to clients (this net driver is a host) - unsorted, and ordering changes depending on actor replication */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Array of connections to clients (this net driver is a host) - unsorted, and ordering changes depending on actor replication" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections = { "ClientConnections", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ClientConnections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime_MetaData[] = {
		{ "Comment", "/** The amount of time, in seconds, that recently disconnected clients should be tracked */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The amount of time, in seconds, that recently disconnected clients should be tracked" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime = { "RecentlyDisconnectedTrackingTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, RecentlyDisconnectedTrackingTime), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "/** World this net driver is associated with */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "World this net driver is associated with" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage = { "WorldPackage", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, WorldPackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass_MetaData[] = {
		{ "Comment", "/** The loaded UClass of the net connection type to use */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "The loaded UClass of the net connection type to use" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass = { "NetConnectionClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, NetConnectionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass = { "ReplicationDriverClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ReplicationDriverClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClass = { "ReplicationBridgeClass", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ReplicationBridgeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName_MetaData[] = {
		{ "Comment", "/** Used to specify the net driver to filter actors with (NAME_None || NAME_GameNetDriver is the default net driver) */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify the net driver to filter actors with (NAME_None || NAME_GameNetDriver is the default net driver)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName = { "NetDriverName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, NetDriverName), METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_Inner = { "ChannelDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChannelDefinition, METADATA_PARAMS(nullptr, 0) }; // 2838880684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_MetaData[] = {
		{ "Comment", "/** Used to specify available channel types and their associated UClass */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used to specify available channel types and their associated UClass" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions = { "ChannelDefinitions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ChannelDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_MetaData)) }; // 2838880684
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_ValueProp = { "ChannelDefinitionMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FChannelDefinition, METADATA_PARAMS(nullptr, 0) }; // 2838880684
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_Key_KeyProp = { "ChannelDefinitionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_MetaData[] = {
		{ "Comment", "/** Used for faster lookup of channel definitions by name. */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "Used for faster lookup of channel definitions by name." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap = { "ChannelDefinitionMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ChannelDefinitionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_MetaData)) }; // 2838880684
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_Inner = { "ActorChannelPool", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_MetaData[] = {
		{ "Comment", "/** List of channels that were previously used and can be used again */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "List of channels that were previously used and can be used again" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool = { "ActorChannelPool", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ActorChannelPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, ignore timeouts completely.  Should be used only in development\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "If true, ignore timeouts completely.  Should be used only in development" },
	};
#endif
	void Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_SetBit(void* Obj)
	{
		((UNetDriver*)Obj)->bNoTimeouts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts = { "bNoTimeouts", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNetDriver), &Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true this NetDriver will not apply the network emulation settings that simulate\n\x09 * latency and packet loss in non-shippable builds\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
		{ "ToolTip", "If true this NetDriver will not apply the network emulation settings that simulate\nlatency and packet loss in non-shippable builds" },
	};
#endif
	void Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings_SetBit(void* Obj)
	{
		((UNetDriver*)Obj)->bNeverApplyNetworkEmulationSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings = { "bNeverApplyNetworkEmulationSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNetDriver), &Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver = { "ReplicationDriver", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetDriver, ReplicationDriver), Z_Construct_UClass_UReplicationDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxDownloadSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetServerMaxTickRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxNetTickRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxInternetClientRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_MaxClientRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerTravelPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_SpawnPrioritySeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_RelevantTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_KeepAliveTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_InitialConnectTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ConnectionTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_TimeoutMultiplierForUnoptimizedBuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ServerConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ClientConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_RecentlyDisconnectedTrackingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_WorldPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetConnectionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriverClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationBridgeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_NetDriverName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ChannelDefinitionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ActorChannelPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriver_Statics::NewProp_ReplicationDriver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetDriver_Statics::ClassParams = {
		&UNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::PropPointers),
		0,
		0x000800ADu,
		METADATA_PARAMS(Z_Construct_UClass_UNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetDriver()
	{
		if (!Z_Registration_Info_UClass_UNetDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetDriver.OuterSingleton, Z_Construct_UClass_UNetDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetDriver.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNetDriver>()
	{
		return UNetDriver::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNetDriver)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ScriptStructInfo[] = {
		{ FPacketSimulationSettings::StaticStruct, Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewStructOps, TEXT("PacketSimulationSettings"), &Z_Registration_Info_UScriptStruct_PacketSimulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPacketSimulationSettings), 3715858840U) },
		{ FChannelDefinition::StaticStruct, Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewStructOps, TEXT("ChannelDefinition"), &Z_Registration_Info_UScriptStruct_ChannelDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChannelDefinition), 2838880684U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetDriver, UNetDriver::StaticClass, TEXT("UNetDriver"), &Z_Registration_Info_UClass_UNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetDriver), 460299104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_3608587513(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
