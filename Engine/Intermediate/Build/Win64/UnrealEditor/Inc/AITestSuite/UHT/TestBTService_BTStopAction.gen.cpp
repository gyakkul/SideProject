// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/TestBTService_BTStopAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTService_BTStopAction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_BTStopAction();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_BTStopAction_NoRegister();
	AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming();
	AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestStopAction();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTTestServiceStopTiming;
	static UEnum* EBTTestServiceStopTiming_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBTTestServiceStopTiming.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBTTestServiceStopTiming.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming, (UObject*)Z_Construct_UPackage__Script_AITestSuite(), TEXT("EBTTestServiceStopTiming"));
		}
		return Z_Registration_Info_UEnum_EBTTestServiceStopTiming.OuterSingleton;
	}
	template<> AITESTSUITE_API UEnum* StaticEnum<EBTTestServiceStopTiming>()
	{
		return EBTTestServiceStopTiming_StaticEnum();
	}
	struct Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enumerators[] = {
		{ "EBTTestServiceStopTiming::DuringBecomeRelevant", (int64)EBTTestServiceStopTiming::DuringBecomeRelevant },
		{ "EBTTestServiceStopTiming::DuringTick", (int64)EBTTestServiceStopTiming::DuringTick },
		{ "EBTTestServiceStopTiming::DuringCeaseRelevant", (int64)EBTTestServiceStopTiming::DuringCeaseRelevant },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enum_MetaDataParams[] = {
		{ "DuringBecomeRelevant.Name", "EBTTestServiceStopTiming::DuringBecomeRelevant" },
		{ "DuringCeaseRelevant.Name", "EBTTestServiceStopTiming::DuringCeaseRelevant" },
		{ "DuringTick.Name", "EBTTestServiceStopTiming::DuringTick" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AITestSuite,
		nullptr,
		"EBTTestServiceStopTiming",
		"EBTTestServiceStopTiming",
		Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming()
	{
		if (!Z_Registration_Info_UEnum_EBTTestServiceStopTiming.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTTestServiceStopTiming.InnerSingleton, Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBTTestServiceStopTiming.InnerSingleton;
	}
	void UTestBTService_BTStopAction::StaticRegisterNativesUTestBTService_BTStopAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTService_BTStopAction);
	UClass* Z_Construct_UClass_UTestBTService_BTStopAction_NoRegister()
	{
		return UTestBTService_BTStopAction::StaticClass();
	}
	struct Z_Construct_UClass_UTestBTService_BTStopAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndex;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBTService_BTStopAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_BTStopAction_Statics::Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTService_BTStopAction.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_LogIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_LogIndex = { "LogIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTService_BTStopAction, LogIndex), METADATA_PARAMS(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_LogIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_LogIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming = { "StopTiming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTService_BTStopAction, StopTiming), Z_Construct_UEnum_AITestSuite_EBTTestServiceStopTiming, METADATA_PARAMS(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming_MetaData)) }; // 2801339233
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_BTStopAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction = { "StopAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTService_BTStopAction, StopAction), Z_Construct_UEnum_AITestSuite_EBTTestStopAction, METADATA_PARAMS(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction_MetaData)) }; // 3731464382
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTService_BTStopAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_LogIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopTiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_BTStopAction_Statics::NewProp_StopAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBTService_BTStopAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTService_BTStopAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTService_BTStopAction_Statics::ClassParams = {
		&UTestBTService_BTStopAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestBTService_BTStopAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_BTStopAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBTService_BTStopAction()
	{
		if (!Z_Registration_Info_UClass_UTestBTService_BTStopAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTService_BTStopAction.OuterSingleton, Z_Construct_UClass_UTestBTService_BTStopAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestBTService_BTStopAction.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UTestBTService_BTStopAction>()
	{
		return UTestBTService_BTStopAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTService_BTStopAction);
	UTestBTService_BTStopAction::~UTestBTService_BTStopAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::EnumInfo[] = {
		{ EBTTestServiceStopTiming_StaticEnum, TEXT("EBTTestServiceStopTiming"), &Z_Registration_Info_UEnum_EBTTestServiceStopTiming, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2801339233U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTService_BTStopAction, UTestBTService_BTStopAction::StaticClass, TEXT("UTestBTService_BTStopAction"), &Z_Registration_Info_UClass_UTestBTService_BTStopAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTService_BTStopAction), 2238813681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_4071504983(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_BTStopAction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
