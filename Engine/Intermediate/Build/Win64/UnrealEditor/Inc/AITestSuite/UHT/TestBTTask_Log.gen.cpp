// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/TestBTTask_Log.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_Log() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_Log();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_Log_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	void UTestBTTask_Log::StaticRegisterNativesUTestBTTask_Log()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_Log);
	UClass* Z_Construct_UClass_UTestBTTask_Log_NoRegister()
	{
		return UTestBTTask_Log::StaticClass();
	}
	struct Z_Construct_UClass_UTestBTTask_Log_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogFinished_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionTicks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogTickIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogTickIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogResult_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBTTask_Log_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_Log_Statics::Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_Log.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogIndex = { "LogIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_Log, LogIndex), METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogFinished_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogFinished = { "LogFinished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_Log, LogFinished), METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogFinished_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_ExecutionTicks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_ExecutionTicks = { "ExecutionTicks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_Log, ExecutionTicks), METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_ExecutionTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_ExecutionTicks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogTickIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogTickIndex = { "LogTickIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_Log, LogTickIndex), METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogTickIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogTickIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_Log.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogResult = { "LogResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_Log, LogResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogResult_MetaData)) }; // 2843222845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_Log_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_ExecutionTicks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogTickIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_Log_Statics::NewProp_LogResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBTTask_Log_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_Log>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_Log_Statics::ClassParams = {
		&UTestBTTask_Log::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestBTTask_Log_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_Log_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_Log_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBTTask_Log()
	{
		if (!Z_Registration_Info_UClass_UTestBTTask_Log.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_Log.OuterSingleton, Z_Construct_UClass_UTestBTTask_Log_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestBTTask_Log.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_Log>()
	{
		return UTestBTTask_Log::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_Log);
	UTestBTTask_Log::~UTestBTTask_Log() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_Log, UTestBTTask_Log::StaticClass, TEXT("UTestBTTask_Log"), &Z_Registration_Info_UClass_UTestBTTask_Log, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_Log), 3442813714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_3035635454(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_Log_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
