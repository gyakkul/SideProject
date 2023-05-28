// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/TestBTTask_BTStopAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTTask_BTStopAction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_BTStopAction();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTTask_BTStopAction_NoRegister();
	AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestStopAction();
	AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTTestTaskStopTiming;
	static UEnum* EBTTestTaskStopTiming_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBTTestTaskStopTiming.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBTTestTaskStopTiming.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming, (UObject*)Z_Construct_UPackage__Script_AITestSuite(), TEXT("EBTTestTaskStopTiming"));
		}
		return Z_Registration_Info_UEnum_EBTTestTaskStopTiming.OuterSingleton;
	}
	template<> AITESTSUITE_API UEnum* StaticEnum<EBTTestTaskStopTiming>()
	{
		return EBTTestTaskStopTiming_StaticEnum();
	}
	struct Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enumerators[] = {
		{ "EBTTestTaskStopTiming::DuringExecute", (int64)EBTTestTaskStopTiming::DuringExecute },
		{ "EBTTestTaskStopTiming::DuringTick", (int64)EBTTestTaskStopTiming::DuringTick },
		{ "EBTTestTaskStopTiming::DuringAbort", (int64)EBTTestTaskStopTiming::DuringAbort },
		{ "EBTTestTaskStopTiming::DuringFinish", (int64)EBTTestTaskStopTiming::DuringFinish },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enum_MetaDataParams[] = {
		{ "DuringAbort.Name", "EBTTestTaskStopTiming::DuringAbort" },
		{ "DuringExecute.Name", "EBTTestTaskStopTiming::DuringExecute" },
		{ "DuringFinish.Name", "EBTTestTaskStopTiming::DuringFinish" },
		{ "DuringTick.Name", "EBTTestTaskStopTiming::DuringTick" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AITestSuite,
		nullptr,
		"EBTTestTaskStopTiming",
		"EBTTestTaskStopTiming",
		Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming()
	{
		if (!Z_Registration_Info_UEnum_EBTTestTaskStopTiming.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTTestTaskStopTiming.InnerSingleton, Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBTTestTaskStopTiming.InnerSingleton;
	}
	void UTestBTTask_BTStopAction::StaticRegisterNativesUTestBTTask_BTStopAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTTask_BTStopAction);
	UClass* Z_Construct_UClass_UTestBTTask_BTStopAction_NoRegister()
	{
		return UTestBTTask_BTStopAction::StaticClass();
	}
	struct Z_Construct_UClass_UTestBTTask_BTStopAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StopTiming_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopTiming_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StopTiming;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StopAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StopAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogResult_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTTask_BTStopAction.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming = { "StopTiming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_BTStopAction, StopTiming), Z_Construct_UEnum_AITestSuite_EBTTestTaskStopTiming, METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming_MetaData)) }; // 1417065023
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction = { "StopAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_BTStopAction, StopAction), Z_Construct_UEnum_AITestSuite_EBTTestStopAction, METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction_MetaData)) }; // 3731464382
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogIndex = { "LogIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_BTStopAction, LogIndex), METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTTask_BTStopAction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogResult = { "LogResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTTask_BTStopAction, LogResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogResult_MetaData)) }; // 2843222845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopTiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_StopAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::NewProp_LogResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTTask_BTStopAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::ClassParams = {
		&UTestBTTask_BTStopAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBTTask_BTStopAction()
	{
		if (!Z_Registration_Info_UClass_UTestBTTask_BTStopAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTTask_BTStopAction.OuterSingleton, Z_Construct_UClass_UTestBTTask_BTStopAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestBTTask_BTStopAction.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UTestBTTask_BTStopAction>()
	{
		return UTestBTTask_BTStopAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTTask_BTStopAction);
	UTestBTTask_BTStopAction::~UTestBTTask_BTStopAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::EnumInfo[] = {
		{ EBTTestTaskStopTiming_StaticEnum, TEXT("EBTTestTaskStopTiming"), &Z_Registration_Info_UEnum_EBTTestTaskStopTiming, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1417065023U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTTask_BTStopAction, UTestBTTask_BTStopAction::StaticClass, TEXT("UTestBTTask_BTStopAction"), &Z_Registration_Info_UClass_UTestBTTask_BTStopAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTTask_BTStopAction), 752558377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_2384733330(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_BTStopAction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
