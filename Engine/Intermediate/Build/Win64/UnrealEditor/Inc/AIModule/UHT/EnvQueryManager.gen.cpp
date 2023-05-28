// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryManager() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryInstanceCache();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryManagerConfig();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryRequest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig;
class UScriptStruct* FEnvQueryManagerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryManagerConfig, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryManagerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryManagerConfig>()
{
	return FEnvQueryManagerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedTestingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedTestingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTestQueriesUsingBreadth_MetaData[];
#endif
		static void NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestQueriesUsingBreadth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryCountWarningThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningInterval_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_QueryCountWarningInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTimeWarningSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ExecutionTimeWarningSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandlingResultTimeWarningSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HandlingResultTimeWarningSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationTimeWarningSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_GenerationTimeWarningSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper to hold config variables */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Wrapper to hold config variables" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryManagerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_MaxAllowedTestingTime_MetaData[] = {
		{ "Comment", "/** how long are we allowed to test per update, in seconds. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how long are we allowed to test per update, in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_MaxAllowedTestingTime = { "MaxAllowedTestingTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryManagerConfig, MaxAllowedTestingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_MaxAllowedTestingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_MaxAllowedTestingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth_MetaData[] = {
		{ "Comment", "/** whether we update EQS queries based on:\n\x09running a test on one query and move to the next (breadth) - default behavior,\n\x09or test an entire query before moving to the next one (depth). */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "whether we update EQS queries based on:\n      running a test on one query and move to the next (breadth) - default behavior,\n      or test an entire query before moving to the next one (depth)." },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj)
	{
		((FEnvQueryManagerConfig*)Obj)->bTestQueriesUsingBreadth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth = { "bTestQueriesUsingBreadth", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEnvQueryManagerConfig), &Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningThreshold_MetaData[] = {
		{ "Comment", "/** if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningThreshold = { "QueryCountWarningThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryManagerConfig, QueryCountWarningThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningInterval_MetaData[] = {
		{ "Comment", "/** how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session) */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningInterval = { "QueryCountWarningInterval", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryManagerConfig, QueryCountWarningInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_ExecutionTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS execution duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS execution duration (in seconds) before a warning is reported." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_ExecutionTimeWarningSeconds = { "ExecutionTimeWarningSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryManagerConfig, ExecutionTimeWarningSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_ExecutionTimeWarningSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_ExecutionTimeWarningSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_HandlingResultTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_HandlingResultTimeWarningSeconds = { "HandlingResultTimeWarningSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryManagerConfig, HandlingResultTimeWarningSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_HandlingResultTimeWarningSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_HandlingResultTimeWarningSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_GenerationTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS Generator duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS Generator duration (in seconds) before a warning is reported." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_GenerationTimeWarningSeconds = { "GenerationTimeWarningSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryManagerConfig, GenerationTimeWarningSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_GenerationTimeWarningSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_GenerationTimeWarningSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_MaxAllowedTestingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_bTestQueriesUsingBreadth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_QueryCountWarningInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_ExecutionTimeWarningSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_HandlingResultTimeWarningSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewProp_GenerationTimeWarningSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvQueryManagerConfig",
		sizeof(FEnvQueryManagerConfig),
		alignof(FEnvQueryManagerConfig),
		Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryManagerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.InnerSingleton, Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvQueryRequest;
class UScriptStruct* FEnvQueryRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvQueryRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryRequest, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryRequest.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryRequest>()
{
	return FEnvQueryRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnvQueryRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueryTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** wrapper for easy query execution */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "wrapper for easy query execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate_MetaData[] = {
		{ "Comment", "/** query to run */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "query to run" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryRequest, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** querier */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "querier" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryRequest, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "/** world */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "world" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryRequest, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_QueryTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvQueryRequest",
		sizeof(FEnvQueryRequest),
		alignof(FEnvQueryRequest),
		Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_EnvQueryRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvQueryRequest.InnerSingleton, Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnvQueryRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache;
class UScriptStruct* FEnvQueryInstanceCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryInstanceCache, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryInstanceCache"));
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryInstanceCache>()
{
	return FEnvQueryInstanceCache::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Template;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** cache of instances with sorted tests */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "cache of instances with sorted tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryInstanceCache>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template_MetaData[] = {
		{ "Comment", "/** query template, duplicated in manager's world */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "query template, duplicated in manager's world" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryInstanceCache, Template), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewProp_Template,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvQueryInstanceCache",
		sizeof(FEnvQueryInstanceCache),
		alignof(FEnvQueryInstanceCache),
		Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryInstanceCache()
	{
		if (!Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.InnerSingleton, Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache.InnerSingleton;
	}
	DEFINE_FUNCTION(UEnvQueryManager::execRunEQSQuery)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UEnvQuery,Z_Param_QueryTemplate);
		P_GET_OBJECT(UObject,Z_Param_Querier);
		P_GET_PROPERTY(FByteProperty,Z_Param_RunMode);
		P_GET_OBJECT(UClass,Z_Param_WrapperClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnvQueryInstanceBlueprintWrapper**)Z_Param__Result=UEnvQueryManager::RunEQSQuery(Z_Param_WorldContextObject,Z_Param_QueryTemplate,Z_Param_Querier,EEnvQueryRunMode::Type(Z_Param_RunMode),Z_Param_WrapperClass);
		P_NATIVE_END;
	}
	void UEnvQueryManager::StaticRegisterNativesUEnvQueryManager()
	{
		UClass* Class = UEnvQueryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunEQSQuery", &UEnvQueryManager::execRunEQSQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics
	{
		struct EnvQueryManager_eventRunEQSQuery_Parms
		{
			UObject* WorldContextObject;
			UEnvQuery* QueryTemplate;
			UObject* Querier;
			TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
			TSubclassOf<UEnvQueryInstanceBlueprintWrapper>  WrapperClass;
			UEnvQueryInstanceBlueprintWrapper* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Querier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RunMode;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WrapperClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_Querier = { "Querier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, Querier), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_RunMode = { "RunMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(nullptr, 0) }; // 61795048
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WrapperClass = { "WrapperClass", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, WrapperClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, ReturnValue), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_QueryTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_Querier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_RunMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_WrapperClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WrapperClass" },
		{ "Category", "AI|EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryManager, nullptr, "RunEQSQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::EnvQueryManager_eventRunEQSQuery_Parms), Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryManager);
	UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister()
	{
		return UEnvQueryManager::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceCache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceCache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceCache;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalContexts;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GCShieldedWrappers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GCShieldedWrappers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GCShieldedWrappers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedTestingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedTestingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTestQueriesUsingBreadth_MetaData[];
#endif
		static void NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestQueriesUsingBreadth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryCountWarningThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningInterval_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_QueryCountWarningInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTimeWarningSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ExecutionTimeWarningSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandlingResultTimeWarningSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HandlingResultTimeWarningSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationTimeWarningSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_GenerationTimeWarningSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnvQueryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery, "RunEQSQuery" }, // 1811261181
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryManager.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_Inner = { "InstanceCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnvQueryInstanceCache, METADATA_PARAMS(nullptr, 0) }; // 3816500795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_MetaData[] = {
		{ "Comment", "/** cache of instances */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "cache of instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache = { "InstanceCache", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryManager, InstanceCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_MetaData)) }; // 3816500795
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_Inner = { "LocalContexts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_MetaData[] = {
		{ "Comment", "/** local cache of context objects for managing BP based objects */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "local cache of context objects for managing BP based objects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts = { "LocalContexts", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryManager, LocalContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_Inner = { "GCShieldedWrappers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers = { "GCShieldedWrappers", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryManager, GCShieldedWrappers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime_MetaData[] = {
		{ "Comment", "/** how long are we allowed to test per update, in seconds. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how long are we allowed to test per update, in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime = { "MaxAllowedTestingTime", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryManager, MaxAllowedTestingTime), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_MetaData[] = {
		{ "Comment", "/** whether we update EQS queries based on:\n\x09    running a test on one query and move to the next (breadth) - default behavior,\n\x09    or test an entire query before moving to the next one (depth). */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "whether we update EQS queries based on:\n          running a test on one query and move to the next (breadth) - default behavior,\n          or test an entire query before moving to the next one (depth)." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_SetBit(void* Obj)
	{
		((UEnvQueryManager*)Obj)->bTestQueriesUsingBreadth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth = { "bTestQueriesUsingBreadth", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvQueryManager), &Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold_MetaData[] = {
		{ "Comment", "/** if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold = { "QueryCountWarningThreshold", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningThreshold), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval_MetaData[] = {
		{ "Comment", "/** how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session) */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval = { "QueryCountWarningInterval", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningInterval), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_ExecutionTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS execution duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS execution duration (in seconds) before a warning is reported." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_ExecutionTimeWarningSeconds = { "ExecutionTimeWarningSeconds", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryManager, ExecutionTimeWarningSeconds), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_ExecutionTimeWarningSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_ExecutionTimeWarningSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_HandlingResultTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS Query FinishDelegate duration (in seconds) before a warning is reported." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_HandlingResultTimeWarningSeconds = { "HandlingResultTimeWarningSeconds", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryManager, HandlingResultTimeWarningSeconds), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_HandlingResultTimeWarningSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_HandlingResultTimeWarningSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GenerationTimeWarningSeconds_MetaData[] = {
		{ "Comment", "/** Maximum EQS Generator duration (in seconds) before a warning is reported. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
		{ "ToolTip", "Maximum EQS Generator duration (in seconds) before a warning is reported." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GenerationTimeWarningSeconds = { "GenerationTimeWarningSeconds", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryManager, GenerationTimeWarningSeconds), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GenerationTimeWarningSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GenerationTimeWarningSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_InstanceCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_LocalContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GCShieldedWrappers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_MaxAllowedTestingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_bTestQueriesUsingBreadth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_QueryCountWarningInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_ExecutionTimeWarningSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_HandlingResultTimeWarningSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryManager_Statics::NewProp_GenerationTimeWarningSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryManager_Statics::ClassParams = {
		&UEnvQueryManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::PropPointers),
		0,
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryManager()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryManager.OuterSingleton, Z_Construct_UClass_UEnvQueryManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryManager.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryManager>()
	{
		return UEnvQueryManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryManager);
	UEnvQueryManager::~UEnvQueryManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ScriptStructInfo[] = {
		{ FEnvQueryManagerConfig::StaticStruct, Z_Construct_UScriptStruct_FEnvQueryManagerConfig_Statics::NewStructOps, TEXT("EnvQueryManagerConfig"), &Z_Registration_Info_UScriptStruct_EnvQueryManagerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvQueryManagerConfig), 1728795861U) },
		{ FEnvQueryRequest::StaticStruct, Z_Construct_UScriptStruct_FEnvQueryRequest_Statics::NewStructOps, TEXT("EnvQueryRequest"), &Z_Registration_Info_UScriptStruct_EnvQueryRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvQueryRequest), 1293681038U) },
		{ FEnvQueryInstanceCache::StaticStruct, Z_Construct_UScriptStruct_FEnvQueryInstanceCache_Statics::NewStructOps, TEXT("EnvQueryInstanceCache"), &Z_Registration_Info_UScriptStruct_EnvQueryInstanceCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvQueryInstanceCache), 3816500795U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryManager, UEnvQueryManager::StaticClass, TEXT("UEnvQueryManager"), &Z_Registration_Info_UClass_UEnvQueryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryManager), 4217807977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_3212872575(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
