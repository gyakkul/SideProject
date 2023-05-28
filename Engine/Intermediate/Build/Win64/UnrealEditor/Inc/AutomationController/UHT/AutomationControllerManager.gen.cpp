// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AutomationControllerManager.h"
#include "../Private/AutomationDeviceClusterManager.h"
#include "IAutomationReport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationControllerManager() {}
// Cross Module References
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationDeviceInfo();
	AUTOMATIONTEST_API UEnum* Z_Construct_UEnum_AutomationTest_EAutomationState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationExecutionEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	UPackage* Z_Construct_UPackage__Script_AutomationController();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedTestResult;
class UScriptStruct* FAutomatedTestResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedTestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestResult, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestResult"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestResult.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestResult>()
{
	return FAutomatedTestResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedTestResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullTestPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceInstance_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceInstance_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warnings_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Warnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Errors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Artifacts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Artifacts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Artifacts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName = { "TestDisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, TestDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath = { "FullTestPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, FullTestPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, State), Z_Construct_UEnum_AutomationTest_EAutomationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_MetaData)) }; // 4153134487
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance_Inner = { "DeviceInstance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance = { "DeviceInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, DeviceInstance), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DateTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DateTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomationExecutionEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings = { "Warnings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, Warnings), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, Errors), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_Inner = { "Artifacts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomationArtifact, METADATA_PARAMS(nullptr, 0) }; // 3385969037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts = { "Artifacts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestResult, Artifacts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_MetaData)) }; // 3385969037
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_TestDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_FullTestPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DeviceInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_DateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Warnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Errors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewProp_Artifacts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomatedTestResult",
		sizeof(FAutomatedTestResult),
		alignof(FAutomatedTestResult),
		Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedTestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedTestResult.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedTestResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedTestPassResults;
class UScriptStruct* FAutomatedTestPassResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestPassResults, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestPassResults"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestPassResults>()
{
	return FAutomatedTestPassResults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Devices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Devices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Devices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReportCreatedOn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReportCreatedOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Succeeded_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Succeeded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SucceededWithWarnings_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SucceededWithWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Failed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotRun_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NotRun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProcess_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonExported_MetaData[];
#endif
		static void NewProp_ComparisonExported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ComparisonExported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonExportDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComparisonExportDirectory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestPassResults>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices_Inner = { "Devices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomationDeviceInfo, METADATA_PARAMS(nullptr, 0) }; // 1716535817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices = { "Devices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, Devices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices_MetaData)) }; // 1716535817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn = { "ReportCreatedOn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, ReportCreatedOn), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, Succeeded), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings = { "SucceededWithWarnings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, SucceededWithWarnings), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, Failed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun = { "NotRun", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, NotRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_InProcess_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_InProcess = { "InProcess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, InProcess), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_InProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_InProcess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, TotalDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_SetBit(void* Obj)
	{
		((FAutomatedTestPassResults*)Obj)->ComparisonExported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported = { "ComparisonExported", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomatedTestPassResults), &Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory = { "ComparisonExportDirectory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, ComparisonExportDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomatedTestResult, METADATA_PARAMS(nullptr, 0) }; // 2897464978
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_MetaData[] = {
		{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, Tests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_MetaData)) }; // 2897464978
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Devices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ReportCreatedOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Succeeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_SucceededWithWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Failed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_NotRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_InProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_TotalDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExportDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_Tests,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomatedTestPassResults",
		sizeof(FAutomatedTestPassResults),
		alignof(FAutomatedTestPassResults),
		Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedTestPassResults.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_Statics::ScriptStructInfo[] = {
		{ FAutomatedTestResult::StaticStruct, Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewStructOps, TEXT("AutomatedTestResult"), &Z_Registration_Info_UScriptStruct_AutomatedTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedTestResult), 2897464978U) },
		{ FAutomatedTestPassResults::StaticStruct, Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewStructOps, TEXT("AutomatedTestPassResults"), &Z_Registration_Info_UScriptStruct_AutomatedTestPassResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedTestPassResults), 2308572939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_2558120835(TEXT("/Script/AutomationController"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
