// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CoreSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UGarbageCollectionSettings();
	ENGINE_API UClass* Z_Construct_UClass_UGarbageCollectionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStreamingSettings();
	ENGINE_API UClass* Z_Construct_UClass_UStreamingSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UStreamingSettings::StaticRegisterNativesUStreamingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamingSettings);
	UClass* Z_Construct_UClass_UStreamingSettings_NoRegister()
	{
		return UStreamingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStreamingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingThreadEnabled_MetaData[];
#endif
		static void NewProp_AsyncLoadingThreadEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AsyncLoadingThreadEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarnIfTimeLimitExceeded_MetaData[];
#endif
		static void NewProp_WarnIfTimeLimitExceeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WarnIfTimeLimitExceeded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimitExceededMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimitExceededMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimitExceededMinTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimitExceededMinTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBulkDataSizeForAsyncLoading_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinBulkDataSizeForAsyncLoading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseBackgroundLevelStreaming_MetaData[];
#endif
		static void NewProp_UseBackgroundLevelStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBackgroundLevelStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingUseFullTimeLimit_MetaData[];
#endif
		static void NewProp_AsyncLoadingUseFullTimeLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AsyncLoadingUseFullTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AsyncLoadingTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAsyncLoadingExtraTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAsyncLoadingExtraTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelStreamingActorsUpdateTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityLevelStreamingActorsUpdateExtraTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelStreamingComponentsRegistrationGranularity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingAddPrimitiveGranularity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelStreamingAddPrimitiveGranularity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelStreamingUnregisterComponentsTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelStreamingComponentsUnregistrationGranularity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlushStreamingOnExit_MetaData[];
#endif
		static void NewProp_FlushStreamingOnExit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlushStreamingOnExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventDrivenLoaderEnabled_MetaData[];
#endif
		static void NewProp_EventDrivenLoaderEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EventDrivenLoaderEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Streaming settings.\n */" },
		{ "DisplayName", "Streaming" },
		{ "IncludePath", "Engine/CoreSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Streaming settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.AsyncLoadingThreadEnabled" },
		{ "DisplayName", "Async Loading Thread Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Enables separate thread for package streaming. Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->AsyncLoadingThreadEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled = { "AsyncLoadingThreadEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.WarnIfTimeLimitExceeded" },
		{ "DisplayName", "Warn If Time Limit Has Been Exceeded" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Enables log warning if time limit for time-sliced package streaming has been exceeded." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->WarnIfTimeLimitExceeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded = { "WarnIfTimeLimitExceeded", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.TimeLimitExceededMultiplier" },
		{ "DisplayName", "Time Limit Exceeded Warning Multiplier" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Multiplier for time limit exceeded warning time threshold." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier = { "TimeLimitExceededMultiplier", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMultiplier), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.TimeLimitExceededMinTime" },
		{ "DisplayName", "Minimum Time Limit For Time Limit Exceeded Warning" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Minimum time the time limit exceeded warning will be triggered by." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime = { "TimeLimitExceededMinTime", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMinTime), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading_MetaData[] = {
		{ "Category", "PackageStreaming" },
		{ "ConsoleVariable", "s.MinBulkDataSizeForAsyncLoading" },
		{ "DisplayName", "Minimum Bulk Data Size For Async Loading" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Minimum time the time limit exceeded warning will be triggered by." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading = { "MinBulkDataSizeForAsyncLoading", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, MinBulkDataSizeForAsyncLoading), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.UseBackgroundLevelStreaming" },
		{ "DisplayName", "Use Background Level Streaming" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow background level streaming." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->UseBackgroundLevelStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming = { "UseBackgroundLevelStreaming", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.AsyncLoadingUseFullTimeLimit" },
		{ "DisplayName", "Async Loading Use Full Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to use the entire time limit even if blocked on I/O." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->AsyncLoadingUseFullTimeLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit = { "AsyncLoadingUseFullTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.AsyncLoadingTimeLimit" },
		{ "DisplayName", "Async Loading Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum amount of time to spend doing asynchronous loading (ms per frame)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit = { "AsyncLoadingTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, AsyncLoadingTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.PriorityAsyncLoadingExtraTime" },
		{ "DisplayName", "Priority Async Loading Extra Time" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Additional time to spend asynchronous loading during a high priority load." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime = { "PriorityAsyncLoadingExtraTime", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, PriorityAsyncLoadingExtraTime), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingActorsUpdateTimeLimit" },
		{ "DisplayName", "Actor Initialization Update Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum allowed time to spend for actor registration steps during level streaming (ms per frame)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit = { "LevelStreamingActorsUpdateTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, LevelStreamingActorsUpdateTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.PriorityLevelStreamingActorsUpdateExtraTime" },
		{ "DisplayName", "Priority Actor Initialization Update Extra Time" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Additional time to spend on actor registration steps during a high priority load." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime = { "PriorityLevelStreamingActorsUpdateExtraTime", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, PriorityLevelStreamingActorsUpdateExtraTime), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingComponentsRegistrationGranularity" },
		{ "DisplayName", "Components Registration Granularity" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Batching granularity used to register actor components during level streaming." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity = { "LevelStreamingComponentsRegistrationGranularity", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsRegistrationGranularity), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingAddPrimitiveGranularity_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingAddPrimitiveGranularity" },
		{ "DisplayName", "Added Primitive Granularity" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Batching granularity used to add primitives to scene in parallel when registering actor components during level streaming." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingAddPrimitiveGranularity = { "LevelStreamingAddPrimitiveGranularity", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, LevelStreamingAddPrimitiveGranularity), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingAddPrimitiveGranularity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingAddPrimitiveGranularity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.UnregisterComponentsTimeLimit" },
		{ "DisplayName", "Component Unregister Update Time Limit" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum allowed time to spend while unregistering components during level streaming (ms per frame)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit = { "LevelStreamingUnregisterComponentsTimeLimit", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, LevelStreamingUnregisterComponentsTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ConsoleVariable", "s.LevelStreamingComponentsUnregistrationGranularity" },
		{ "DisplayName", "Components Unregistration Granularity" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Batching granularity used to unregister actor components during level streaming." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity = { "LevelStreamingComponentsUnregistrationGranularity", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsUnregistrationGranularity), METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "s.FlushStreamingOnExit" },
		{ "DisplayName", "Flush Streaming when exiting the application" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If enabled, streaming will be flushed when exiting application, otherwise it will be cancelled." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->FlushStreamingOnExit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit = { "FlushStreamingOnExit", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_MetaData[] = {
		{ "Category", "Deprecated Settings" },
		{ "ConsoleVariable", "s.EventDrivenLoaderEnabled" },
		{ "DisplayName", "Use Event Driven Loader (disabling not recommended)" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Enables the event driven loader in cooked builds (default). Disabling EDL will result in using deprecated loading path." },
	};
#endif
	void Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_SetBit(void* Obj)
	{
		((UStreamingSettings*)Obj)->EventDrivenLoaderEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled = { "EventDrivenLoaderEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamingSettings), &Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingThreadEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_WarnIfTimeLimitExceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_TimeLimitExceededMinTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_MinBulkDataSizeForAsyncLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_UseBackgroundLevelStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingUseFullTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_AsyncLoadingTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityAsyncLoadingExtraTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingActorsUpdateTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_PriorityLevelStreamingActorsUpdateExtraTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsRegistrationGranularity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingAddPrimitiveGranularity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingUnregisterComponentsTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_LevelStreamingComponentsUnregistrationGranularity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_FlushStreamingOnExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingSettings_Statics::NewProp_EventDrivenLoaderEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamingSettings_Statics::ClassParams = {
		&UStreamingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamingSettings()
	{
		if (!Z_Registration_Info_UClass_UStreamingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamingSettings.OuterSingleton, Z_Construct_UClass_UStreamingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStreamingSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStreamingSettings>()
	{
		return UStreamingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamingSettings);
	UStreamingSettings::~UStreamingSettings() {}
	void UGarbageCollectionSettings::StaticRegisterNativesUGarbageCollectionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGarbageCollectionSettings);
	UClass* Z_Construct_UClass_UGarbageCollectionSettings_NoRegister()
	{
		return UGarbageCollectionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGarbageCollectionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenPurgingPendingKillObjects_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenPurgingPendingKillObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlushStreamingOnGC_MetaData[];
#endif
		static void NewProp_FlushStreamingOnGC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlushStreamingOnGC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowParallelGC_MetaData[];
#endif
		static void NewProp_AllowParallelGC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowParallelGC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncrementalBeginDestroyEnabled_MetaData[];
#endif
		static void NewProp_IncrementalBeginDestroyEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncrementalBeginDestroyEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultithreadedDestructionEnabled_MetaData[];
#endif
		static void NewProp_MultithreadedDestructionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MultithreadedDestructionEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateGCClusters_MetaData[];
#endif
		static void NewProp_CreateGCClusters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateGCClusters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetClusteringEnabled_MetaData[];
#endif
		static void NewProp_AssetClusteringEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AssetClusteringEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClusteringEnabled_MetaData[];
#endif
		static void NewProp_ActorClusteringEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ActorClusteringEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintClusteringEnabled_MetaData[];
#endif
		static void NewProp_BlueprintClusteringEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BlueprintClusteringEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseDisregardForGCOnDedicatedServers_MetaData[];
#endif
		static void NewProp_UseDisregardForGCOnDedicatedServers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDisregardForGCOnDedicatedServers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerifyGCObjectNames_MetaData[];
#endif
		static void NewProp_VerifyGCObjectNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VerifyGCObjectNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerifyUObjectsAreNotFGCObjects_MetaData[];
#endif
		static void NewProp_VerifyUObjectsAreNotFGCObjects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VerifyUObjectsAreNotFGCObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingKillEnabled_MetaData[];
#endif
		static void NewProp_PendingKillEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PendingKillEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGCClusterSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinGCClusterSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumRetriesBeforeForcingGC_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumRetriesBeforeForcingGC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsNotConsideredByGC_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectsNotConsideredByGC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeOfPermanentObjectPool_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeOfPermanentObjectPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsInGame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectsInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsInEditor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectsInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGarbageCollectionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for garbage collection.\n*/" },
		{ "DisplayName", "Garbage Collection" },
		{ "IncludePath", "Engine/CoreSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Implements the settings for garbage collection." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "gc.TimeBetweenPurgingPendingKillObjects" },
		{ "DisplayName", "Time Between Purging Pending Kill Objects" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Time in seconds (game time) we should wait between purging object references to objects that are pending kill." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects = { "TimeBetweenPurgingPendingKillObjects", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, TimeBetweenPurgingPendingKillObjects), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "gc.FlushStreamingOnGC" },
		{ "DisplayName", "Flush Streaming On GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If enabled, streaming will be flushed each time garbage collection is triggered." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->FlushStreamingOnGC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC = { "FlushStreamingOnGC", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.AllowParallelGC" },
		{ "DisplayName", "Allow Parallel GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If enabled, garbage collection will use multiple threads." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->AllowParallelGC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC = { "AllowParallelGC", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.IncrementalBeginDestroyEnabled" },
		{ "DisplayName", "Incremental BeginDestroy Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will destroy objects incrementally using time limit each frame." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->IncrementalBeginDestroyEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled = { "IncrementalBeginDestroyEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MultithreadedDestructionEnabled" },
		{ "DisplayName", "Multithreaded Destruction Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will free objects' memory on a worker thread." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->MultithreadedDestructionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled = { "MultithreadedDestructionEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.CreateGCClusters" },
		{ "DisplayName", "Create Garbage Collector UObject Clusters" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will attempt to create clusters of objects for better garbage collection performance." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->CreateGCClusters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters = { "CreateGCClusters", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.AssetClustreringEnabled" },
		{ "DisplayName", "Asset Clustering Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow asset files to create actor clusters for GC." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->AssetClusteringEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled = { "AssetClusteringEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.ActorClusteringEnabled" },
		{ "DisplayName", "Actor Clustering Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow levels to create actor clusters for GC." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->ActorClusteringEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled = { "ActorClusteringEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.BlueprintClusteringEnabled" },
		{ "DisplayName", "Blueprint Clustering Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Whether to allow Blueprint classes to create GC clusters." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->BlueprintClusteringEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled = { "BlueprintClusteringEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.UseDisregardForGCOnDedicatedServers" },
		{ "DisplayName", "Use DisregardForGC On Dedicated Servers" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If false, DisregardForGC will be disabled for dedicated servers." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->UseDisregardForGCOnDedicatedServers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers = { "UseDisregardForGCOnDedicatedServers", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyGCObjectNames_MetaData[] = {
		{ "Category", "Debug" },
		{ "ConsoleVariable", "gc.VerifyGCObjectNames" },
		{ "DisplayName", "Verify FGCObject names" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will verify if all FGCObject-derived classes define GetReferencerName() function overrides." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyGCObjectNames_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->VerifyGCObjectNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyGCObjectNames = { "VerifyGCObjectNames", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyGCObjectNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyGCObjectNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyGCObjectNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects_MetaData[] = {
		{ "Category", "Debug" },
		{ "ConsoleVariable", "gc.VerifyUObjectsAreNotFGCObjects" },
		{ "DisplayName", "Verify UObjects Are Not FGCObjects" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, the engine will throw a warning when it detects a UObject-derived class which also derives from FGCObject or any of its members is derived from FGCObject." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->VerifyUObjectsAreNotFGCObjects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects = { "VerifyUObjectsAreNotFGCObjects", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_PendingKillEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.PendingKillEnabled" },
		{ "DisplayName", "Pending Kill Enabled" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "If true, objects marked as PendingKill will be automatically nulled and destroyed by Garbage Collector." },
	};
#endif
	void Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_PendingKillEnabled_SetBit(void* Obj)
	{
		((UGarbageCollectionSettings*)Obj)->PendingKillEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_PendingKillEnabled = { "PendingKillEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGarbageCollectionSettings), &Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_PendingKillEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_PendingKillEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_PendingKillEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MinGCClusterSize" },
		{ "DisplayName", "Minimum GC Cluster size" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Minimum GC cluster size." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize = { "MinGCClusterSize", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, MinGCClusterSize), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC_MetaData[] = {
		{ "Category", "General" },
		{ "ConsoleVariable", "gc.NumRetriesBeforeForcingGC" },
		{ "DisplayName", "Number Of Retries Before Forcing GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum number of times GC can be skipped if worker threads are currently modifying UObject state. 0 = never force GC" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC = { "NumRetriesBeforeForcingGC", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, NumRetriesBeforeForcingGC), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MaxObjectsNotConsideredByGC" },
		{ "DisplayName", "Maximum Object Count Not Considered By GC" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum Object Count Not Considered By GC. Works only in cooked builds." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC = { "MaxObjectsNotConsideredByGC", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsNotConsideredByGC), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.SizeOfPermanentObjectPool" },
		{ "DisplayName", "Size Of Permanent Object Pool" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Size Of Permanent Object Pool (bytes). Works only in cooked builds." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool = { "SizeOfPermanentObjectPool", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, SizeOfPermanentObjectPool), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MaxObjectsInGame" },
		{ "DisplayName", "Maximum number of UObjects that can exist in cooked game" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum number of UObjects that can exist in cooked game. Keep this as small as possible." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame = { "MaxObjectsInGame", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInGame), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConsoleVariable", "gc.MaxObjectsInEditor" },
		{ "DisplayName", "Maximum number of UObjects that can exist in the editor" },
		{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
		{ "ToolTip", "Maximum number of UObjects that can exist in the editor game. Make sure this can hold enough objects for the editor and commadlets within reasonable limit." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor = { "MaxObjectsInEditor", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInEditor), METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_TimeBetweenPurgingPendingKillObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_FlushStreamingOnGC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AllowParallelGC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_IncrementalBeginDestroyEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MultithreadedDestructionEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_CreateGCClusters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_AssetClusteringEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_ActorClusteringEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_BlueprintClusteringEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_UseDisregardForGCOnDedicatedServers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyGCObjectNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_VerifyUObjectsAreNotFGCObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_PendingKillEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MinGCClusterSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_NumRetriesBeforeForcingGC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsNotConsideredByGC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_SizeOfPermanentObjectPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGarbageCollectionSettings_Statics::NewProp_MaxObjectsInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGarbageCollectionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGarbageCollectionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGarbageCollectionSettings_Statics::ClassParams = {
		&UGarbageCollectionSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGarbageCollectionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGarbageCollectionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGarbageCollectionSettings()
	{
		if (!Z_Registration_Info_UClass_UGarbageCollectionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGarbageCollectionSettings.OuterSingleton, Z_Construct_UClass_UGarbageCollectionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGarbageCollectionSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UGarbageCollectionSettings>()
	{
		return UGarbageCollectionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGarbageCollectionSettings);
	UGarbageCollectionSettings::~UGarbageCollectionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStreamingSettings, UStreamingSettings::StaticClass, TEXT("UStreamingSettings"), &Z_Registration_Info_UClass_UStreamingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamingSettings), 1356306888U) },
		{ Z_Construct_UClass_UGarbageCollectionSettings, UGarbageCollectionSettings::StaticClass, TEXT("UGarbageCollectionSettings"), &Z_Registration_Info_UClass_UGarbageCollectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGarbageCollectionSettings), 1746193890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_455468340(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
