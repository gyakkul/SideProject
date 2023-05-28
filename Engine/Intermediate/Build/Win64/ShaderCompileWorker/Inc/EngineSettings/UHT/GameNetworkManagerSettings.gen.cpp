// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameNetworkManagerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameNetworkManagerSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UGameNetworkManagerSettings::StaticRegisterNativesUGameNetworkManagerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameNetworkManagerSettings);
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister()
	{
		return UGameNetworkManagerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameNetworkManagerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDynamicBandwidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinDynamicBandwidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDynamicBandwidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDynamicBandwidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalNetBandwidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNetBandwidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BadPingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BadPingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStandbyCheckingEnabled_MetaData[];
#endif
		static void NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStandbyCheckingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandbyRxCheatTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandbyRxCheatTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandbyTxCheatTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandbyTxCheatTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForRxStandby_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForRxStandby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForTxStandby_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForTxStandby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentForBadPing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentForBadPing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressStandbyWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressStandbyWaitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameNetworkManagerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds the settings for the AGameNetworkManager class.\n */" },
		{ "IncludePath", "GameNetworkManagerSettings.h" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Holds the settings for the AGameNetworkManager class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "Comment", "/** Minimum bandwidth dynamically set per connection. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Minimum bandwidth dynamically set per connection." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth = { "MinDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, MinDynamicBandwidth), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "Comment", "/** Maximum bandwidth dynamically set per connection. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Maximum bandwidth dynamically set per connection." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth = { "MaxDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, MaxDynamicBandwidth), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "Comment", "/** Total available bandwidth for listen server, split dynamically across net connections. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Total available bandwidth for listen server, split dynamically across net connections." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth = { "TotalNetBandwidth", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, TotalNetBandwidth), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The point we determine the server is either delaying packets or has bad upstream. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The point we determine the server is either delaying packets or has bad upstream." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold = { "BadPingThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, BadPingThreshold), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** Used to determine if checking for standby cheats should occur. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Used to determine if checking for standby cheats should occur." },
	};
#endif
	void Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj)
	{
		((UGameNetworkManagerSettings*)Obj)->bIsStandbyCheckingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled = { "bIsStandbyCheckingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGameNetworkManagerSettings), &Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/**  The amount of time without packets before triggering the cheat code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime = { "StandbyRxCheatTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyRxCheatTime), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The amount of time without packets before triggering the cheat code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime = { "StandbyTxCheatTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyTxCheatTime), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The percentage of clients missing RX data before triggering the standby code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients missing RX data before triggering the standby code." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby = { "PercentMissingForRxStandby", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForRxStandby), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The percentage of clients missing TX data before triggering the standby code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients missing TX data before triggering the standby code." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby = { "PercentMissingForTxStandby", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForTxStandby), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The percentage of clients with bad ping before triggering the standby code. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients with bad ping before triggering the standby code." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing = { "PercentForBadPing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentForBadPing), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "Comment", "/** The amount of time to wait before checking a connection for standby issues. */" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time to wait before checking a connection for standby issues." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime = { "JoinInProgressStandbyWaitTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, JoinInProgressStandbyWaitTime), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameNetworkManagerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameNetworkManagerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::ClassParams = {
		&UGameNetworkManagerSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings()
	{
		if (!Z_Registration_Info_UClass_UGameNetworkManagerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameNetworkManagerSettings.OuterSingleton, Z_Construct_UClass_UGameNetworkManagerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameNetworkManagerSettings.OuterSingleton;
	}
	template<> ENGINESETTINGS_API UClass* StaticClass<UGameNetworkManagerSettings>()
	{
		return UGameNetworkManagerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameNetworkManagerSettings);
	UGameNetworkManagerSettings::~UGameNetworkManagerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameNetworkManagerSettings, UGameNetworkManagerSettings::StaticClass, TEXT("UGameNetworkManagerSettings"), &Z_Registration_Info_UClass_UGameNetworkManagerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameNetworkManagerSettings), 2247524172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_3092180088(TEXT("/Script/EngineSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
