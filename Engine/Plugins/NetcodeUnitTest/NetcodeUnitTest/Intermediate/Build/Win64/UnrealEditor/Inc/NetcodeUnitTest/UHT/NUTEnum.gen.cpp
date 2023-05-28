// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NUTEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNUTEnum() {}
// Cross Module References
	NETCODEUNITTEST_API UEnum* Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMinClientFlags;
	static UEnum* EMinClientFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMinClientFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMinClientFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags, (UObject*)Z_Construct_UPackage__Script_NetcodeUnitTest(), TEXT("EMinClientFlags"));
		}
		return Z_Registration_Info_UEnum_EMinClientFlags.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UEnum* StaticEnum<EMinClientFlags>()
	{
		return EMinClientFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags_Statics::Enumerators[] = {
		{ "EMinClientFlags::None", (int64)EMinClientFlags::None },
		{ "EMinClientFlags::AcceptActors", (int64)EMinClientFlags::AcceptActors },
		{ "EMinClientFlags::AcceptRPCs", (int64)EMinClientFlags::AcceptRPCs },
		{ "EMinClientFlags::SendRPCs", (int64)EMinClientFlags::SendRPCs },
		{ "EMinClientFlags::AcceptRepNotifies", (int64)EMinClientFlags::AcceptRepNotifies },
		{ "EMinClientFlags::SkipControlJoin", (int64)EMinClientFlags::SkipControlJoin },
		{ "EMinClientFlags::BeaconConnect", (int64)EMinClientFlags::BeaconConnect },
		{ "EMinClientFlags::NotifyNetActors", (int64)EMinClientFlags::NotifyNetActors },
		{ "EMinClientFlags::NotifyProcessNetEvent", (int64)EMinClientFlags::NotifyProcessNetEvent },
		{ "EMinClientFlags::DumpReceivedRaw", (int64)EMinClientFlags::DumpReceivedRaw },
		{ "EMinClientFlags::DumpSendRaw", (int64)EMinClientFlags::DumpSendRaw },
		{ "EMinClientFlags::DumpReceivedRPC", (int64)EMinClientFlags::DumpReceivedRPC },
		{ "EMinClientFlags::DumpSendRPC", (int64)EMinClientFlags::DumpSendRPC },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags_Statics::Enum_MetaDataParams[] = {
		{ "AcceptActors.Comment", "/** Minimal-client netcode functionality */" },
		{ "AcceptActors.Name", "EMinClientFlags::AcceptActors" },
		{ "AcceptActors.ToolTip", "Minimal-client netcode functionality" },
		{ "AcceptRepNotifies.Comment", "// Whether or not to allow RPC sending (NOT blocked by default, @todo JohnB: Add send hook)\n" },
		{ "AcceptRepNotifies.Name", "EMinClientFlags::AcceptRepNotifies" },
		{ "AcceptRepNotifies.ToolTip", "Whether or not to allow RPC sending (NOT blocked by default, @todo JohnB: Add send hook)" },
		{ "AcceptRPCs.Comment", "// Whether or not to accept actor channels (acts as allowlist-only with NotifyAllowNetActor)\n" },
		{ "AcceptRPCs.Name", "EMinClientFlags::AcceptRPCs" },
		{ "AcceptRPCs.ToolTip", "Whether or not to accept actor channels (acts as allowlist-only with NotifyAllowNetActor)" },
		{ "BeaconConnect.Comment", "// Whether or not to skip sending NMT_Join upon connect (or NMT_BeaconJoin for beacons)\n" },
		{ "BeaconConnect.Name", "EMinClientFlags::BeaconConnect" },
		{ "BeaconConnect.ToolTip", "Whether or not to skip sending NMT_Join upon connect (or NMT_BeaconJoin for beacons)" },
		{ "Comment", "/**\n * Flags for configuring the minimal client, what parts of the netcode should be enabled etc.\n */" },
		{ "DumpReceivedRaw.Comment", "/** Debugging */" },
		{ "DumpReceivedRaw.Name", "EMinClientFlags::DumpReceivedRaw" },
		{ "DumpReceivedRaw.ToolTip", "Debugging" },
		{ "DumpReceivedRPC.Comment", "// Whether or not to also hex-dump the raw packet sends to the log/log-window\n" },
		{ "DumpReceivedRPC.Name", "EMinClientFlags::DumpReceivedRPC" },
		{ "DumpReceivedRPC.ToolTip", "Whether or not to also hex-dump the raw packet sends to the log/log-window" },
		{ "DumpSendRaw.Comment", "// Whether or not to also hex-dump the raw packet receives to the log/log-window\n" },
		{ "DumpSendRaw.Name", "EMinClientFlags::DumpSendRaw" },
		{ "DumpSendRaw.ToolTip", "Whether or not to also hex-dump the raw packet receives to the log/log-window" },
		{ "DumpSendRPC.Comment", "// Whether or not to dump RPC receives (with LogNetTraffic, detects ProcessEvent RPC fail)\n" },
		{ "DumpSendRPC.Name", "EMinClientFlags::DumpSendRPC" },
		{ "DumpSendRPC.ToolTip", "Whether or not to dump RPC receives (with LogNetTraffic, detects ProcessEvent RPC fail)" },
		{ "ModuleRelativePath", "Public/NUTEnum.h" },
		{ "None.Name", "EMinClientFlags::None" },
		{ "NotifyNetActors.Comment", "/** Minimal-client events */" },
		{ "NotifyNetActors.Name", "EMinClientFlags::NotifyNetActors" },
		{ "NotifyNetActors.ToolTip", "Minimal-client events" },
		{ "NotifyProcessNetEvent.Comment", "// Whether or not to trigger a 'NotifyNetActor' event, AFTER creation of actor channel actor\n" },
		{ "NotifyProcessNetEvent.Name", "EMinClientFlags::NotifyProcessNetEvent" },
		{ "NotifyProcessNetEvent.ToolTip", "Whether or not to trigger a 'NotifyNetActor' event, AFTER creation of actor channel actor" },
		{ "SendRPCs.Comment", "// Whether or not to accept execution of any actor RPC's (they are all blocked by default)\n" },
		{ "SendRPCs.Name", "EMinClientFlags::SendRPCs" },
		{ "SendRPCs.ToolTip", "Whether or not to accept execution of any actor RPC's (they are all blocked by default)" },
		{ "SkipControlJoin.Comment", "// Whether or not to accept execution of RepNotify's on Actors (blocked by default)\n" },
		{ "SkipControlJoin.Name", "EMinClientFlags::SkipControlJoin" },
		{ "SkipControlJoin.ToolTip", "Whether or not to accept execution of RepNotify's on Actors (blocked by default)" },
		{ "ToolTip", "Flags for configuring the minimal client, what parts of the netcode should be enabled etc." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
		nullptr,
		"EMinClientFlags",
		"EMinClientFlags",
		Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags()
	{
		if (!Z_Registration_Info_UEnum_EMinClientFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMinClientFlags.InnerSingleton, Z_Construct_UEnum_NetcodeUnitTest_EMinClientFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMinClientFlags.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Public_NUTEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Public_NUTEnum_h_Statics::EnumInfo[] = {
		{ EMinClientFlags_StaticEnum, TEXT("EMinClientFlags"), &Z_Registration_Info_UEnum_EMinClientFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3102864983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Public_NUTEnum_h_3433847324(TEXT("/Script/NetcodeUnitTest"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Public_NUTEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Public_NUTEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
