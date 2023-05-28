// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorPlayNetworkEmulationSettings() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkEmulationPacketSettings;
class UScriptStruct* FNetworkEmulationPacketSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkEmulationPacketSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkEmulationPacketSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("NetworkEmulationPacketSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkEmulationPacketSettings.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FNetworkEmulationPacketSettings>()
{
	return FNetworkEmulationPacketSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLatency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLatency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacketLossPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PacketLossPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkEmulationPacketSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MinLatency_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "0" },
		{ "Comment", "// Minimum latency to add to packets\n" },
		{ "DisplayName", "Minimum Latency" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
		{ "ToolTip", "Minimum latency to add to packets" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MinLatency = { "MinLatency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkEmulationPacketSettings, MinLatency), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MinLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MinLatency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MaxLatency_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum latency to add to packets. We use a random value between the minimum and maximum (when 0 = always the minimum value)\n" },
		{ "DisplayName", "Maximum Latency" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
		{ "ToolTip", "Maximum latency to add to packets. We use a random value between the minimum and maximum (when 0 = always the minimum value)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MaxLatency = { "MaxLatency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkEmulationPacketSettings, MaxLatency), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MaxLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MaxLatency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_PacketLossPercentage_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "// Ratio of packets to randomly drop (0 = none, 100 = all)\n" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
		{ "ToolTip", "Ratio of packets to randomly drop (0 = none, 100 = all)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_PacketLossPercentage = { "PacketLossPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkEmulationPacketSettings, PacketLossPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_PacketLossPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_PacketLossPercentage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MinLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_MaxLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewProp_PacketLossPercentage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"NetworkEmulationPacketSettings",
		sizeof(FNetworkEmulationPacketSettings),
		alignof(FNetworkEmulationPacketSettings),
		Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NetworkEmulationPacketSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkEmulationPacketSettings.InnerSingleton, Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetworkEmulationPacketSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_NetworkEmulationTarget;
	static UEnum* NetworkEmulationTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_NetworkEmulationTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_NetworkEmulationTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("NetworkEmulationTarget"));
		}
		return Z_Registration_Info_UEnum_NetworkEmulationTarget.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<NetworkEmulationTarget>()
	{
		return NetworkEmulationTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget_Statics::Enumerators[] = {
		{ "NetworkEmulationTarget::Server", (int64)NetworkEmulationTarget::Server },
		{ "NetworkEmulationTarget::Client", (int64)NetworkEmulationTarget::Client },
		{ "NetworkEmulationTarget::Any", (int64)NetworkEmulationTarget::Any },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget_Statics::Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "Everyone" },
		{ "Any.Name", "NetworkEmulationTarget::Any" },
		{ "Client.DisplayName", "Clients Only" },
		{ "Client.Name", "NetworkEmulationTarget::Client" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
		{ "Server.DisplayName", "Server Only" },
		{ "Server.Name", "NetworkEmulationTarget::Server" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"NetworkEmulationTarget",
		"NetworkEmulationTarget",
		Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget()
	{
		if (!Z_Registration_Info_UEnum_NetworkEmulationTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_NetworkEmulationTarget.InnerSingleton, Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_NetworkEmulationTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelEditorPlayNetworkEmulationSettings;
class UScriptStruct* FLevelEditorPlayNetworkEmulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelEditorPlayNetworkEmulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelEditorPlayNetworkEmulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("LevelEditorPlayNetworkEmulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LevelEditorPlayNetworkEmulationSettings.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLevelEditorPlayNetworkEmulationSettings>()
{
	return FLevelEditorPlayNetworkEmulationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsNetworkEmulationEnabled_MetaData[];
#endif
		static void NewProp_bIsNetworkEmulationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNetworkEmulationEnabled;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EmulationTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmulationTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmulationTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutPackets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPackets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPackets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelEditorPlayNetworkEmulationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_bIsNetworkEmulationEnabled_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "Comment", "// When true will apply the emulation settings when launching the game\n" },
		{ "DisplayName", "Enable Network Emulation" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
		{ "ToolTip", "When true will apply the emulation settings when launching the game" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_bIsNetworkEmulationEnabled_SetBit(void* Obj)
	{
		((FLevelEditorPlayNetworkEmulationSettings*)Obj)->bIsNetworkEmulationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_bIsNetworkEmulationEnabled = { "bIsNetworkEmulationEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelEditorPlayNetworkEmulationSettings), &Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_bIsNetworkEmulationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_bIsNetworkEmulationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_bIsNetworkEmulationEnabled_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_EmulationTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_EmulationTarget_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "DisplayName", "Emulation Target" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_EmulationTarget = { "EmulationTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorPlayNetworkEmulationSettings, EmulationTarget), Z_Construct_UEnum_UnrealEd_NetworkEmulationTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_EmulationTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_EmulationTarget_MetaData)) }; // 4202167701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_CurrentProfile_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "Comment", "// The profile name of the settings currently applied\n" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
		{ "ToolTip", "The profile name of the settings currently applied" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_CurrentProfile = { "CurrentProfile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorPlayNetworkEmulationSettings, CurrentProfile), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_CurrentProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_CurrentProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_OutPackets_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "Comment", "// Settings that add latency and packet loss to all outgoing packets\n" },
		{ "DisplayName", "Outgoing traffic" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
		{ "ToolTip", "Settings that add latency and packet loss to all outgoing packets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_OutPackets = { "OutPackets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorPlayNetworkEmulationSettings, OutPackets), Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_OutPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_OutPackets_MetaData)) }; // 792693071
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_InPackets_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "Comment", "// Settings that add latency and packet loss to all incoming packets\n" },
		{ "DisplayName", "Incoming traffic" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h" },
		{ "ToolTip", "Settings that add latency and packet loss to all incoming packets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_InPackets = { "InPackets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelEditorPlayNetworkEmulationSettings, InPackets), Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_InPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_InPackets_MetaData)) }; // 792693071
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_bIsNetworkEmulationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_EmulationTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_EmulationTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_CurrentProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_OutPackets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewProp_InPackets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"LevelEditorPlayNetworkEmulationSettings",
		sizeof(FLevelEditorPlayNetworkEmulationSettings),
		alignof(FLevelEditorPlayNetworkEmulationSettings),
		Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelEditorPlayNetworkEmulationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelEditorPlayNetworkEmulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelEditorPlayNetworkEmulationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_Statics::EnumInfo[] = {
		{ NetworkEmulationTarget_StaticEnum, TEXT("NetworkEmulationTarget"), &Z_Registration_Info_UEnum_NetworkEmulationTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4202167701U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_Statics::ScriptStructInfo[] = {
		{ FNetworkEmulationPacketSettings::StaticStruct, Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics::NewStructOps, TEXT("NetworkEmulationPacketSettings"), &Z_Registration_Info_UScriptStruct_NetworkEmulationPacketSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkEmulationPacketSettings), 792693071U) },
		{ FLevelEditorPlayNetworkEmulationSettings::StaticStruct, Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics::NewStructOps, TEXT("LevelEditorPlayNetworkEmulationSettings"), &Z_Registration_Info_UScriptStruct_LevelEditorPlayNetworkEmulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelEditorPlayNetworkEmulationSettings), 365664605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_3104645449(TEXT("/Script/UnrealEd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
