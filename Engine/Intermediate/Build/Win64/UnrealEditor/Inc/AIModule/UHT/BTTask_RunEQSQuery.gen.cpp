// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunEQSQuery() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_RunEQSQuery::StaticRegisterNativesUBTTask_RunEQSQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RunEQSQuery);
	UClass* Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister()
	{
		return UBTTask_RunEQSQuery::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RunEQSQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueryTemplate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RunMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EQSQueryBlackboardKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EQSQueryBlackboardKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBBKey_MetaData[];
#endif
		static void NewProp_bUseBBKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBBKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateBBOnFail_MetaData[];
#endif
		static void NewProp_bUpdateBBOnFail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateBBOnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Run Environment Query System Query task node.\n * Runs the specified environment query when executed.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ToolTip", "Run Environment Query System Query task node.\nRuns the specified environment query when executed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_Inner = { "QueryParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnvNamedValue, METADATA_PARAMS(nullptr, 0) }; // 764008598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_MetaData)) }; // 764008598
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_Inner = { "QueryConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(nullptr, 0) }; // 206899154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig = { "QueryConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_MetaData)) }; // 206899154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode = { "RunMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode_MetaData)) }; // 61795048
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey = { "EQSQueryBlackboardKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, EQSQueryBlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_MetaData[] = {
		{ "Category", "Node" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_SetBit(void* Obj)
	{
		((UBTTask_RunEQSQuery*)Obj)->bUseBBKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey = { "bUseBBKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBTTask_RunEQSQuery), &Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_RunEQSQuery, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest_MetaData)) }; // 104046496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail_SetBit(void* Obj)
	{
		((UBTTask_RunEQSQuery*)Obj)->bUpdateBBOnFail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail = { "bUpdateBBOnFail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBTTask_RunEQSQuery), &Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RunEQSQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::ClassParams = {
		&UBTTask_RunEQSQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RunEQSQuery()
	{
		if (!Z_Registration_Info_UClass_UBTTask_RunEQSQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RunEQSQuery.OuterSingleton, Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_RunEQSQuery.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_RunEQSQuery>()
	{
		return UBTTask_RunEQSQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunEQSQuery);
	UBTTask_RunEQSQuery::~UBTTask_RunEQSQuery() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RunEQSQuery, UBTTask_RunEQSQuery::StaticClass, TEXT("UBTTask_RunEQSQuery"), &Z_Registration_Info_UClass_UBTTask_RunEQSQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RunEQSQuery), 2581964590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_1517416799(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
