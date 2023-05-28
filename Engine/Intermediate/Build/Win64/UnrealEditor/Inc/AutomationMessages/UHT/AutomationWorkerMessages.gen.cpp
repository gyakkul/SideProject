// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationWorkerMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationWorkerMessages() {}
// Cross Module References
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerResetTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStopTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline();
	AUTOMATIONTEST_API UEnum* Z_Construct_UEnum_AutomationTest_EAutomationState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationExecutionEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_AutomationMessages();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers;
class UScriptStruct* FAutomationWorkerFindWorkers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkers"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerFindWorkers>()
{
	return FAutomationWorkerFindWorkers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Changelist_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Changelist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProcessName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is published to find automation workers.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is published to find automation workers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkers>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the change list number to find workers for. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the change list number to find workers for." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist = { "Changelist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, Changelist), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The name of the game. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The name of the game." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, GameName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The name of the process. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The name of the process." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName = { "ProcessName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, ProcessName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the session identifier to find workers for. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the session identifier to find workers for." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_Changelist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_GameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_ProcessName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewProp_SessionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerFindWorkers",
		sizeof(FAutomationWorkerFindWorkers),
		alignof(FAutomationWorkerFindWorkers),
		Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse;
class UScriptStruct* FAutomationWorkerFindWorkersResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkersResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerFindWorkersResponse>()
{
	return FAutomationWorkerFindWorkersResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSVersionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSVersionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GPUName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPUModelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CPUModelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RAMInGB_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RAMInGB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderModeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderModeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RHIName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RHIName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent in response to FAutomationWorkerFindWorkers.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in response to FAutomationWorkerFindWorkers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkersResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the device that the worker is running on. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the device that the worker is running on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the worker's application instance. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the worker's application instance." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, InstanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the platform that the worker is running on. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the platform that the worker is running on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the operating system version. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the operating system version." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName = { "OSVersionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, OSVersionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the device model. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the device model." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, ModelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the GPU. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the GPU." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName = { "GPUName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, GPUName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the CPU model. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the CPU model." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName = { "CPUModelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, CPUModelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the amount of RAM this device has in gigabytes. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the amount of RAM this device has in gigabytes." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB = { "RAMInGB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RAMInGB), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the current render mode. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the current render mode." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName = { "RenderModeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RenderModeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the worker's application session identifier. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the worker's application session identifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RHIName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the current RHI. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the current RHI." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RHIName = { "RHIName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RHIName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RHIName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RHIName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_InstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_OSVersionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_ModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_GPUName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_CPUModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RAMInGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RenderModeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewProp_RHIName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerFindWorkersResponse",
		sizeof(FAutomationWorkerFindWorkersResponse),
		alignof(FAutomationWorkerFindWorkersResponse),
		Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline;
class UScriptStruct* FAutomationWorkerWorkerOffline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerWorkerOffline"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerWorkerOffline>()
{
	return FAutomationWorkerWorkerOffline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that notifies automation controllers that a worker went off-line.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that notifies automation controllers that a worker went off-line." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerWorkerOffline>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerWorkerOffline",
		sizeof(FAutomationWorkerWorkerOffline),
		alignof(FAutomationWorkerWorkerOffline),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerPing;
class UScriptStruct* FAutomationWorkerPing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerPing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPing, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPing"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPing.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerPing>()
{
	return FAutomationWorkerPing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPing>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerPing",
		sizeof(FAutomationWorkerPing),
		alignof(FAutomationWorkerPing),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerPing.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerPing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerResetTests;
class UScriptStruct* FAutomationWorkerResetTests::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerResetTests.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerResetTests.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerResetTests, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerResetTests"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerResetTests.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerResetTests>()
{
	return FAutomationWorkerResetTests::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerResetTests>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerResetTests",
		sizeof(FAutomationWorkerResetTests),
		alignof(FAutomationWorkerResetTests),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerResetTests()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerResetTests.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerResetTests.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerResetTests.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests;
class UScriptStruct* FAutomationWorkerStopTests::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerStopTests, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerStopTests"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerStopTests>()
{
	return FAutomationWorkerStopTests::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*/" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerStopTests>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerStopTests",
		sizeof(FAutomationWorkerStopTests),
		alignof(FAutomationWorkerStopTests),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerStopTests()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerPong;
class UScriptStruct* FAutomationWorkerPong::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPong.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerPong.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPong, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPong"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPong.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerPong>()
{
	return FAutomationWorkerPong::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPong>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerPong",
		sizeof(FAutomationWorkerPong),
		alignof(FAutomationWorkerPong),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPong.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerPong.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerPong.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests;
class UScriptStruct* FAutomationWorkerRequestTests::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTests"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRequestTests>()
{
	return FAutomationWorkerRequestTests::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperDirectoryIncluded_MetaData[];
#endif
		static void NewProp_DeveloperDirectoryIncluded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DeveloperDirectoryIncluded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedTestFlags_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RequestedTestFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for requesting available automation tests from a worker.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message for requesting available automation tests from a worker." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTests>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether the developer directory should be included. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the developer directory should be included." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_SetBit(void* Obj)
	{
		((FAutomationWorkerRequestTests*)Obj)->DeveloperDirectoryIncluded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded = { "DeveloperDirectoryIncluded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationWorkerRequestTests), &Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating which tests we'd like to request. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds a flag indicating which tests we'd like to request." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags = { "RequestedTestFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRequestTests, RequestedTestFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_DeveloperDirectoryIncluded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewProp_RequestedTestFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRequestTests",
		sizeof(FAutomationWorkerRequestTests),
		alignof(FAutomationWorkerRequestTests),
		Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply;
class UScriptStruct* FAutomationWorkerSingleTestReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerSingleTestReply"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerSingleTestReply>()
{
	return FAutomationWorkerSingleTestReply::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullTestPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileLine_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceFileLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OpenCommand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestFlags_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TestFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumParticipantsRequired_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumParticipantsRequired;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A single test reply, used by FAutomationWorkerRequestTestsReplyComplete\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "A single test reply, used by FAutomationWorkerRequestTestsReplyComplete" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerSingleTestReply>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath = { "FullTestPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, FullTestPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter = { "TestParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile = { "SourceFile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, SourceFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine = { "SourceFileLine", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, SourceFileLine), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand = { "OpenCommand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, OpenCommand), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags = { "TestFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired = { "NumParticipantsRequired", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, NumParticipantsRequired), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_FullTestPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_SourceFileLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_OpenCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_TestFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewProp_NumParticipantsRequired,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerSingleTestReply",
		sizeof(FAutomationWorkerSingleTestReply),
		alignof(FAutomationWorkerSingleTestReply),
		Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete;
class UScriptStruct* FAutomationWorkerRequestTestsReplyComplete::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTestsReplyComplete"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRequestTestsReplyComplete>()
{
	return FAutomationWorkerRequestTestsReplyComplete::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns list of all tests\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Returns list of all tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReplyComplete>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply, METADATA_PARAMS(nullptr, 0) }; // 575787216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRequestTestsReplyComplete, Tests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_MetaData)) }; // 575787216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewProp_Tests,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRequestTestsReplyComplete",
		sizeof(FAutomationWorkerRequestTestsReplyComplete),
		alignof(FAutomationWorkerRequestTestsReplyComplete),
		Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests;
class UScriptStruct* FAutomationWorkerRunTests::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTests, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTests"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRunTests>()
{
	return FAutomationWorkerRunTests::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeautifiedTestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BeautifiedTestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullTestPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendAnalytics_MetaData[];
#endif
		static void NewProp_bSendAnalytics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendAnalytics;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message to request the running of automation tests on a worker.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message to request the running of automation tests on a worker." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRunTests>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount = { "ExecutionCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, ExecutionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex = { "RoleIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, RoleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the test to run. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the test to run." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName_MetaData[] = {
		{ "Comment", "/** Holds the name of the test to run. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the name of the test to run." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName = { "BeautifiedTestName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, BeautifiedTestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_FullTestPath_MetaData[] = {
		{ "Comment", "/** Holds the full test path of the test to run. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Holds the full test path of the test to run." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_FullTestPath = { "FullTestPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, FullTestPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_FullTestPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_FullTestPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_MetaData[] = {
		{ "Comment", "/** If true, send results to analytics when complete */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "If true, send results to analytics when complete" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_SetBit(void* Obj)
	{
		((FAutomationWorkerRunTests*)Obj)->bSendAnalytics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics = { "bSendAnalytics", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationWorkerRunTests), &Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_ExecutionCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_RoleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_TestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_BeautifiedTestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_FullTestPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewProp_bSendAnalytics,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRunTests",
		sizeof(FAutomationWorkerRunTests),
		alignof(FAutomationWorkerRunTests),
		Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply;
class UScriptStruct* FAutomationWorkerRunTestsReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTestsReply"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRunTestsReply>()
{
	return FAutomationWorkerRunTestsReply::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningTotal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WarningTotal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTotal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorTotal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent in response to FAutomationWorkerRunTests.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in response to FAutomationWorkerRunTests." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRunTestsReply>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomationExecutionEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal = { "WarningTotal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, WarningTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal = { "ErrorTotal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, ErrorTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount = { "ExecutionCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, ExecutionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, State), Z_Construct_UEnum_AutomationTest_EAutomationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State_MetaData)) }; // 4153134487
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_TestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_WarningTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ErrorTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_ExecutionCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewProp_State,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRunTestsReply",
		sizeof(FAutomationWorkerRunTestsReply),
		alignof(FAutomationWorkerRunTestsReply),
		Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand;
class UScriptStruct* FAutomationWorkerRequestNextNetworkCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestNextNetworkCommand"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerRequestNextNetworkCommand>()
{
	return FAutomationWorkerRequestNextNetworkCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestNextNetworkCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount = { "ExecutionCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerRequestNextNetworkCommand, ExecutionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewProp_ExecutionCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerRequestNextNetworkCommand",
		sizeof(FAutomationWorkerRequestNextNetworkCommand),
		alignof(FAutomationWorkerRequestNextNetworkCommand),
		Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply;
class UScriptStruct* FAutomationWorkerNextNetworkCommandReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerNextNetworkCommandReply"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerNextNetworkCommandReply>()
{
	return FAutomationWorkerNextNetworkCommandReply::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerNextNetworkCommandReply>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerNextNetworkCommandReply",
		sizeof(FAutomationWorkerNextNetworkCommandReply),
		alignof(FAutomationWorkerNextNetworkCommandReply),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata;
class UScriptStruct* FAutomationScreenshotMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationScreenshotMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationScreenshotMetadata>()
{
	return FAutomationScreenshotMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenShotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenShotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Commit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rhi_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Rhi;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureLevel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FeatureLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStereo_MetaData[];
#endif
		static void NewProp_bIsStereo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStereo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vendor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Vendor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdapterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdapterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdapterInternalDriverVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdapterInternalDriverVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdapterUserDriverVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdapterUserDriverVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueDeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResolutionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ViewDistanceQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AntiAliasingQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShadowQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIlluminationQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalIlluminationQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReflectionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PostProcessQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectsQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EffectsQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FoliageQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShadingQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasComparisonRules_MetaData[];
#endif
		static void NewProp_bHasComparisonRules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasComparisonRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceRed_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceRed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceGreen_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceGreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceBlue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceBlue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceMinBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceMinBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceMaxBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ToleranceMaxBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAntiAliasing_MetaData[];
#endif
		static void NewProp_bIgnoreAntiAliasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreColors_MetaData[];
#endif
		static void NewProp_bIgnoreColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationScreenshotMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ScreenShotName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ScreenShotName = { "ScreenShotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ScreenShotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ScreenShotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ScreenShotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Notes), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit = { "Commit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Commit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "// RHI Details\n" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "RHI Details" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi = { "Rhi", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Rhi), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel = { "FeatureLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, FeatureLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_SetBit(void* Obj)
	{
		((FAutomationScreenshotMetadata*)Obj)->bIsStereo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo = { "bIsStereo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "// Hardware Details\n" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Hardware Details" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor = { "Vendor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Vendor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName = { "AdapterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion = { "AdapterInternalDriverVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterInternalDriverVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion = { "AdapterUserDriverVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterUserDriverVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId = { "UniqueDeviceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, UniqueDeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "// Quality Levels\n" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Quality Levels" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality = { "ResolutionQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ResolutionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality = { "ViewDistanceQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ViewDistanceQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality = { "AntiAliasingQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AntiAliasingQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality = { "ShadowQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ShadowQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_GlobalIlluminationQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_GlobalIlluminationQuality = { "GlobalIlluminationQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, GlobalIlluminationQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_GlobalIlluminationQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_GlobalIlluminationQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ReflectionQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ReflectionQuality = { "ReflectionQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ReflectionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ReflectionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ReflectionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality = { "PostProcessQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, PostProcessQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality = { "TextureQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, TextureQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality = { "EffectsQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, EffectsQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality = { "FoliageQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, FoliageQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadingQuality_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadingQuality = { "ShadingQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ShadingQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadingQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "// Comparison Requests\n" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Comparison Requests" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_SetBit(void* Obj)
	{
		((FAutomationScreenshotMetadata*)Obj)->bHasComparisonRules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules = { "bHasComparisonRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed = { "ToleranceRed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceRed), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen = { "ToleranceGreen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceGreen), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue = { "ToleranceBlue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceBlue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha = { "ToleranceAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceAlpha), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness = { "ToleranceMinBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceMinBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness = { "ToleranceMaxBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceMaxBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError = { "MaximumLocalError", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, MaximumLocalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError = { "MaximumGlobalError", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, MaximumGlobalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_SetBit(void* Obj)
	{
		((FAutomationScreenshotMetadata*)Obj)->bIgnoreAntiAliasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing = { "bIgnoreAntiAliasing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_SetBit(void* Obj)
	{
		((FAutomationScreenshotMetadata*)Obj)->bIgnoreColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors = { "bIgnoreColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationScreenshotMetadata), &Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ScreenShotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Notes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Commit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Rhi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FeatureLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIsStereo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_Vendor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterInternalDriverVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AdapterUserDriverVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_UniqueDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ResolutionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ViewDistanceQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_AntiAliasingQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadowQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_GlobalIlluminationQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ReflectionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_PostProcessQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_TextureQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_EffectsQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_FoliageQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ShadingQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bHasComparisonRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceRed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceGreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceBlue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMinBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_ToleranceMaxBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumLocalError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_MaximumGlobalError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreAntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewProp_bIgnoreColors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationScreenshotMetadata",
		sizeof(FAutomationScreenshotMetadata),
		alignof(FAutomationScreenshotMetadata),
		Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.InnerSingleton, Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage;
class UScriptStruct* FAutomationWorkerScreenImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerScreenImage"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerScreenImage>()
{
	return FAutomationWorkerScreenImage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenImage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenImage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScreenImage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrameTrace_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameTrace_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenShotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenShotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent in containing a screen shot run during performance test.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in containing a screen shot run during performance test." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerScreenImage>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_Inner = { "ScreenImage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The screen shot data. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The screen shot data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage = { "ScreenImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, ScreenImage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace_Inner = { "FrameTrace", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The frame trace data. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The frame trace data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace = { "FrameTrace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, FrameTrace), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The screen shot name. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The screen shot name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName = { "ScreenShotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, ScreenShotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, Metadata), Z_Construct_UScriptStruct_FAutomationScreenshotMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata_MetaData)) }; // 1570573647
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_FrameTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_ScreenShotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewProp_Metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerScreenImage",
		sizeof(FAutomationWorkerScreenImage),
		alignof(FAutomationWorkerScreenImage),
		Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults;
class UScriptStruct* FAutomationWorkerImageComparisonResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerImageComparisonResults"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerImageComparisonResults>()
{
	return FAutomationWorkerImageComparisonResults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNew_MetaData[];
#endif
		static void NewProp_bNew_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNew;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimilar_MetaData[];
#endif
		static void NewProp_bSimilar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimilar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLocalDifference_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxLocalDifference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDifference_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_GlobalDifference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent in containing a screen shot run during performance test.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that is sent in containing a screen shot run during performance test." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerImageComparisonResults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The unique id for the comparison. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The unique id for the comparison." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Was this a new image we've never seen before and have no ground truth for? */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Was this a new image we've never seen before and have no ground truth for?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_SetBit(void* Obj)
	{
		((FAutomationWorkerImageComparisonResults*)Obj)->bNew = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew = { "bNew", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationWorkerImageComparisonResults), &Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Were the images similar?  If they're not you should log an error. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Were the images similar?  If they're not you should log an error." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_SetBit(void* Obj)
	{
		((FAutomationWorkerImageComparisonResults*)Obj)->bSimilar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar = { "bSimilar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationWorkerImageComparisonResults), &Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference = { "MaxLocalDifference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, MaxLocalDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference = { "GlobalDifference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, GlobalDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bNew,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_bSimilar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_MaxLocalDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_GlobalDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewProp_ErrorMessage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerImageComparisonResults",
		sizeof(FAutomationWorkerImageComparisonResults),
		alignof(FAutomationWorkerImageComparisonResults),
		Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest;
class UScriptStruct* FAutomationWorkerTestDataRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTestDataRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerTestDataRequest>()
{
	return FAutomationWorkerTestDataRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataPlatform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataTestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that handles both storing and requesting ground truth data.\n * for the first time this test is run, it might need to store things, or get things.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that handles both storing and requesting ground truth data.\nfor the first time this test is run, it might need to store things, or get things." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The category of the data, this is purely to bucket and separate the ground truth data we store into different directories. */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "The category of the data, this is purely to bucket and separate the ground truth data we store into different directories." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform = { "DataPlatform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataPlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName = { "DataTestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataTestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, JsonData), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataTestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_DataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewProp_JsonData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerTestDataRequest",
		sizeof(FAutomationWorkerTestDataRequest),
		alignof(FAutomationWorkerTestDataRequest),
		Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse;
class UScriptStruct* FAutomationWorkerTestDataResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTestDataResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerTestDataResponse>()
{
	return FAutomationWorkerTestDataResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsNew_MetaData[];
#endif
		static void NewProp_bIsNew_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNew;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that responds to TestDataRequests.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that responds to TestDataRequests." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataResponse, JsonData), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_SetBit(void* Obj)
	{
		((FAutomationWorkerTestDataResponse*)Obj)->bIsNew = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew = { "bIsNew", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationWorkerTestDataResponse), &Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_JsonData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewProp_bIsNew,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerTestDataResponse",
		sizeof(FAutomationWorkerTestDataResponse),
		alignof(FAutomationWorkerTestDataResponse),
		Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest;
class UScriptStruct* FAutomationWorkerPerformanceDataRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPerformanceDataRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerPerformanceDataRequest>()
{
	return FAutomationWorkerPerformanceDataRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardware_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hardware;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DataPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message to request the performance data for this hardware.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message to request the performance data for this hardware." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware = { "Hardware", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, Hardware), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_Inner = { "DataPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints = { "DataPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, DataPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_Hardware,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_TestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewProp_DataPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerPerformanceDataRequest",
		sizeof(FAutomationWorkerPerformanceDataRequest),
		alignof(FAutomationWorkerPerformanceDataRequest),
		Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse;
class UScriptStruct* FAutomationWorkerPerformanceDataResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPerformanceDataResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerPerformanceDataResponse>()
{
	return FAutomationWorkerPerformanceDataResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that responds to PerformanceDataRequest.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that responds to PerformanceDataRequest." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FAutomationWorkerPerformanceDataResponse*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationWorkerPerformanceDataResponse), &Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataResponse, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewProp_ErrorMessage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerPerformanceDataResponse",
		sizeof(FAutomationWorkerPerformanceDataResponse),
		alignof(FAutomationWorkerPerformanceDataResponse),
		Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem;
class UScriptStruct* FAutomationWorkerTelemetryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTelemetryItem"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerTelemetryItem>()
{
	return FAutomationWorkerTelemetryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Measurement_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Measurement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that contains telemetry data point.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that contains telemetry data point." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTelemetryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_DataPoint_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_DataPoint = { "DataPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTelemetryItem, DataPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_DataPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_DataPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Measurement_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Measurement = { "Measurement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTelemetryItem, Measurement), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Measurement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Measurement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTelemetryItem, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Context_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_DataPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Measurement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewProp_Context,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerTelemetryItem",
		sizeof(FAutomationWorkerTelemetryItem),
		alignof(FAutomationWorkerTelemetryItem),
		Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData;
class UScriptStruct* FAutomationWorkerTelemetryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData, (UObject*)Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTelemetryData"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.OuterSingleton;
}
template<> AUTOMATIONMESSAGES_API UScriptStruct* StaticStruct<FAutomationWorkerTelemetryData>()
{
	return FAutomationWorkerTelemetryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Storage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Storage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that contains telemetry data.\n */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
		{ "ToolTip", "Implements a message that contains telemetry data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTelemetryData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Storage_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Storage = { "Storage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTelemetryData, Storage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Storage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTelemetryData, Configuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Configuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTelemetryData, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_TestName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTelemetryData, TestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_TestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_TestName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem, METADATA_PARAMS(nullptr, 0) }; // 1112075629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationWorkerTelemetryData, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items_MetaData)) }; // 1112075629
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Storage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Configuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_TestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewProp_Items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
		nullptr,
		&NewStructOps,
		"AutomationWorkerTelemetryData",
		sizeof(FAutomationWorkerTelemetryData),
		alignof(FAutomationWorkerTelemetryData),
		Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h_Statics::ScriptStructInfo[] = {
		{ FAutomationWorkerFindWorkers::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_Statics::NewStructOps, TEXT("AutomationWorkerFindWorkers"), &Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerFindWorkers), 3616484826U) },
		{ FAutomationWorkerFindWorkersResponse::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_Statics::NewStructOps, TEXT("AutomationWorkerFindWorkersResponse"), &Z_Registration_Info_UScriptStruct_AutomationWorkerFindWorkersResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerFindWorkersResponse), 3985030395U) },
		{ FAutomationWorkerWorkerOffline::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_Statics::NewStructOps, TEXT("AutomationWorkerWorkerOffline"), &Z_Registration_Info_UScriptStruct_AutomationWorkerWorkerOffline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerWorkerOffline), 2937369780U) },
		{ FAutomationWorkerPing::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerPing_Statics::NewStructOps, TEXT("AutomationWorkerPing"), &Z_Registration_Info_UScriptStruct_AutomationWorkerPing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerPing), 246781904U) },
		{ FAutomationWorkerResetTests::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerResetTests_Statics::NewStructOps, TEXT("AutomationWorkerResetTests"), &Z_Registration_Info_UScriptStruct_AutomationWorkerResetTests, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerResetTests), 498739533U) },
		{ FAutomationWorkerStopTests::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerStopTests_Statics::NewStructOps, TEXT("AutomationWorkerStopTests"), &Z_Registration_Info_UScriptStruct_AutomationWorkerStopTests, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerStopTests), 946238458U) },
		{ FAutomationWorkerPong::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerPong_Statics::NewStructOps, TEXT("AutomationWorkerPong"), &Z_Registration_Info_UScriptStruct_AutomationWorkerPong, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerPong), 3195951720U) },
		{ FAutomationWorkerRequestTests::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_Statics::NewStructOps, TEXT("AutomationWorkerRequestTests"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTests, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRequestTests), 1349259919U) },
		{ FAutomationWorkerSingleTestReply::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_Statics::NewStructOps, TEXT("AutomationWorkerSingleTestReply"), &Z_Registration_Info_UScriptStruct_AutomationWorkerSingleTestReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerSingleTestReply), 575787216U) },
		{ FAutomationWorkerRequestTestsReplyComplete::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_Statics::NewStructOps, TEXT("AutomationWorkerRequestTestsReplyComplete"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRequestTestsReplyComplete, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRequestTestsReplyComplete), 1878525297U) },
		{ FAutomationWorkerRunTests::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRunTests_Statics::NewStructOps, TEXT("AutomationWorkerRunTests"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRunTests, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRunTests), 667315168U) },
		{ FAutomationWorkerRunTestsReply::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_Statics::NewStructOps, TEXT("AutomationWorkerRunTestsReply"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRunTestsReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRunTestsReply), 3979410167U) },
		{ FAutomationWorkerRequestNextNetworkCommand::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_Statics::NewStructOps, TEXT("AutomationWorkerRequestNextNetworkCommand"), &Z_Registration_Info_UScriptStruct_AutomationWorkerRequestNextNetworkCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerRequestNextNetworkCommand), 1761972763U) },
		{ FAutomationWorkerNextNetworkCommandReply::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_Statics::NewStructOps, TEXT("AutomationWorkerNextNetworkCommandReply"), &Z_Registration_Info_UScriptStruct_AutomationWorkerNextNetworkCommandReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerNextNetworkCommandReply), 794251430U) },
		{ FAutomationScreenshotMetadata::StaticStruct, Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_Statics::NewStructOps, TEXT("AutomationScreenshotMetadata"), &Z_Registration_Info_UScriptStruct_AutomationScreenshotMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationScreenshotMetadata), 1570573647U) },
		{ FAutomationWorkerScreenImage::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_Statics::NewStructOps, TEXT("AutomationWorkerScreenImage"), &Z_Registration_Info_UScriptStruct_AutomationWorkerScreenImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerScreenImage), 1332510146U) },
		{ FAutomationWorkerImageComparisonResults::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_Statics::NewStructOps, TEXT("AutomationWorkerImageComparisonResults"), &Z_Registration_Info_UScriptStruct_AutomationWorkerImageComparisonResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerImageComparisonResults), 3629879772U) },
		{ FAutomationWorkerTestDataRequest::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_Statics::NewStructOps, TEXT("AutomationWorkerTestDataRequest"), &Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerTestDataRequest), 2035981864U) },
		{ FAutomationWorkerTestDataResponse::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_Statics::NewStructOps, TEXT("AutomationWorkerTestDataResponse"), &Z_Registration_Info_UScriptStruct_AutomationWorkerTestDataResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerTestDataResponse), 1304355760U) },
		{ FAutomationWorkerPerformanceDataRequest::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_Statics::NewStructOps, TEXT("AutomationWorkerPerformanceDataRequest"), &Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerPerformanceDataRequest), 894629424U) },
		{ FAutomationWorkerPerformanceDataResponse::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_Statics::NewStructOps, TEXT("AutomationWorkerPerformanceDataResponse"), &Z_Registration_Info_UScriptStruct_AutomationWorkerPerformanceDataResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerPerformanceDataResponse), 4075926580U) },
		{ FAutomationWorkerTelemetryItem::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryItem_Statics::NewStructOps, TEXT("AutomationWorkerTelemetryItem"), &Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerTelemetryItem), 1112075629U) },
		{ FAutomationWorkerTelemetryData::StaticStruct, Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData_Statics::NewStructOps, TEXT("AutomationWorkerTelemetryData"), &Z_Registration_Info_UScriptStruct_AutomationWorkerTelemetryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWorkerTelemetryData), 1462194957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h_957506476(TEXT("/Script/AutomationMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationMessages_Public_AutomationWorkerMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
