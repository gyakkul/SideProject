// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTest() {}
// Cross Module References
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTask_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTest();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTest_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestBase();
	NETCODEUNITTEST_API UEnum* Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage();
	NETCODEUNITTEST_API UEnum* Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnitTestVerification;
	static UEnum* EUnitTestVerification_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUnitTestVerification.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUnitTestVerification.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification, (UObject*)Z_Construct_UPackage__Script_NetcodeUnitTest(), TEXT("EUnitTestVerification"));
		}
		return Z_Registration_Info_UEnum_EUnitTestVerification.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UEnum* StaticEnum<EUnitTestVerification>()
	{
		return EUnitTestVerification_StaticEnum();
	}
	struct Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification_Statics::Enumerators[] = {
		{ "EUnitTestVerification::Unverified", (int64)EUnitTestVerification::Unverified },
		{ "EUnitTestVerification::VerifiedNotFixed", (int64)EUnitTestVerification::VerifiedNotFixed },
		{ "EUnitTestVerification::VerifiedFixed", (int64)EUnitTestVerification::VerifiedFixed },
		{ "EUnitTestVerification::VerifiedNeedsUpdate", (int64)EUnitTestVerification::VerifiedNeedsUpdate },
		{ "EUnitTestVerification::VerifiedUnreliable", (int64)EUnitTestVerification::VerifiedUnreliable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The verification status of the current unit test - normally its execution completes immediately after positive/negative verification\n */" },
		{ "ModuleRelativePath", "Classes/UnitTest.h" },
		{ "ToolTip", "The verification status of the current unit test - normally its execution completes immediately after positive/negative verification" },
		{ "Unverified.Comment", "/** Unit test is not yet verified */" },
		{ "Unverified.Name", "EUnitTestVerification::Unverified" },
		{ "Unverified.ToolTip", "Unit test is not yet verified" },
		{ "VerifiedFixed.Comment", "/** Unit test is verified as fixed */" },
		{ "VerifiedFixed.Name", "EUnitTestVerification::VerifiedFixed" },
		{ "VerifiedFixed.ToolTip", "Unit test is verified as fixed" },
		{ "VerifiedNeedsUpdate.Comment", "/** Unit test is no longer functioning, needs manual check/update (issue may be fixed, or unit test broken) */" },
		{ "VerifiedNeedsUpdate.Name", "EUnitTestVerification::VerifiedNeedsUpdate" },
		{ "VerifiedNeedsUpdate.ToolTip", "Unit test is no longer functioning, needs manual check/update (issue may be fixed, or unit test broken)" },
		{ "VerifiedNotFixed.Comment", "/** Unit test is verified as not fixed */" },
		{ "VerifiedNotFixed.Name", "EUnitTestVerification::VerifiedNotFixed" },
		{ "VerifiedNotFixed.ToolTip", "Unit test is verified as not fixed" },
		{ "VerifiedUnreliable.Comment", "/** Unit test is verified as having executed unreliably */" },
		{ "VerifiedUnreliable.Name", "EUnitTestVerification::VerifiedUnreliable" },
		{ "VerifiedUnreliable.ToolTip", "Unit test is verified as having executed unreliably" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
		nullptr,
		"EUnitTestVerification",
		"EUnitTestVerification",
		Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification()
	{
		if (!Z_Registration_Info_UEnum_EUnitTestVerification.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnitTestVerification.InnerSingleton, Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUnitTestVerification.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnitTestResetStage;
	static UEnum* EUnitTestResetStage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUnitTestResetStage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUnitTestResetStage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage, (UObject*)Z_Construct_UPackage__Script_NetcodeUnitTest(), TEXT("EUnitTestResetStage"));
		}
		return Z_Registration_Info_UEnum_EUnitTestResetStage.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UEnum* StaticEnum<EUnitTestResetStage>()
	{
		return EUnitTestResetStage_StaticEnum();
	}
	struct Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage_Statics::Enumerators[] = {
		{ "EUnitTestResetStage::None", (int64)EUnitTestResetStage::None },
		{ "EUnitTestResetStage::FullReset", (int64)EUnitTestResetStage::FullReset },
		{ "EUnitTestResetStage::ResetConnection", (int64)EUnitTestResetStage::ResetConnection },
		{ "EUnitTestResetStage::ResetExecute", (int64)EUnitTestResetStage::ResetExecute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The different stages that unit tests can be reset to - a global/non-locally-customizable list, for now\n * NOTE: Stages MUST be sequential! (e.g. ResetConnection implies ResetExecute, FullReset implies both ResetConnection and ResetExecute)\n * NOTE: Apart from checking for 'None', all comparisons should be either <= or >=, to support potential enum additions\n */" },
		{ "FullReset.Comment", "/** Resets the entire unit test, allowing restart from the beginning */" },
		{ "FullReset.Name", "EUnitTestResetStage::FullReset" },
		{ "FullReset.ToolTip", "Resets the entire unit test, allowing restart from the beginning" },
		{ "ModuleRelativePath", "Classes/UnitTest.h" },
		{ "None.Comment", "/** No reset stage */" },
		{ "None.Name", "EUnitTestResetStage::None" },
		{ "None.ToolTip", "No reset stage" },
		{ "ResetConnection.Comment", "/** For ClientUnitTest's, resets the net connection and minimal client - but not the server - allowing a restart from connecting */" },
		{ "ResetConnection.Name", "EUnitTestResetStage::ResetConnection" },
		{ "ResetConnection.ToolTip", "For ClientUnitTest's, resets the net connection and minimal client - but not the server - allowing a restart from connecting" },
		{ "ResetExecute.Comment", "/** Resets unit tests to the point prior to 'ExecuteUnitTest' - usually implemented individually per unit test */" },
		{ "ResetExecute.Name", "EUnitTestResetStage::ResetExecute" },
		{ "ResetExecute.ToolTip", "Resets unit tests to the point prior to 'ExecuteUnitTest' - usually implemented individually per unit test" },
		{ "ToolTip", "The different stages that unit tests can be reset to - a global/non-locally-customizable list, for now\nNOTE: Stages MUST be sequential! (e.g. ResetConnection implies ResetExecute, FullReset implies both ResetConnection and ResetExecute)\nNOTE: Apart from checking for 'None', all comparisons should be either <= or >=, to support potential enum additions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
		nullptr,
		"EUnitTestResetStage",
		"EUnitTestResetStage",
		Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage()
	{
		if (!Z_Registration_Info_UEnum_EUnitTestResetStage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnitTestResetStage.InnerSingleton, Z_Construct_UEnum_NetcodeUnitTest_EUnitTestResetStage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUnitTestResetStage.InnerSingleton;
	}
	void UUnitTest::StaticRegisterNativesUUnitTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitTest);
	UClass* Z_Construct_UClass_UUnitTest_NoRegister()
	{
		return UUnitTest::StaticClass();
	}
	struct Z_Construct_UClass_UUnitTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeakMemoryUsage_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_PeakMemoryUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToPeakMem_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToPeakMem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExecutionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastExecutionTime;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnitTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnitTasks;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerificationState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerificationState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VerificationState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnitTestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all unit tests\n */" },
		{ "IncludePath", "UnitTest.h" },
		{ "ModuleRelativePath", "Classes/UnitTest.h" },
		{ "ToolTip", "Base class for all unit tests" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTest_Statics::NewProp_PeakMemoryUsage_MetaData[] = {
		{ "Comment", "/** Stores stats on the highest-ever reported memory usage, for this unit test - for estimating memory usage */" },
		{ "ModuleRelativePath", "Classes/UnitTest.h" },
		{ "ToolTip", "Stores stats on the highest-ever reported memory usage, for this unit test - for estimating memory usage" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UUnitTest_Statics::NewProp_PeakMemoryUsage = { "PeakMemoryUsage", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTest, PeakMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UUnitTest_Statics::NewProp_PeakMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTest_Statics::NewProp_PeakMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTest_Statics::NewProp_TimeToPeakMem_MetaData[] = {
		{ "Comment", "/** The amount of time it takes to reach 'PeakMemoryUsage' (or within 90% of its value) */" },
		{ "ModuleRelativePath", "Classes/UnitTest.h" },
		{ "ToolTip", "The amount of time it takes to reach 'PeakMemoryUsage' (or within 90% of its value)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUnitTest_Statics::NewProp_TimeToPeakMem = { "TimeToPeakMem", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTest, TimeToPeakMem), METADATA_PARAMS(Z_Construct_UClass_UUnitTest_Statics::NewProp_TimeToPeakMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTest_Statics::NewProp_TimeToPeakMem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTest_Statics::NewProp_LastExecutionTime_MetaData[] = {
		{ "Comment", "/** The amount of time it took to execute the unit test the last time it was run */" },
		{ "ModuleRelativePath", "Classes/UnitTest.h" },
		{ "ToolTip", "The amount of time it took to execute the unit test the last time it was run" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUnitTest_Statics::NewProp_LastExecutionTime = { "LastExecutionTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTest, LastExecutionTime), METADATA_PARAMS(Z_Construct_UClass_UUnitTest_Statics::NewProp_LastExecutionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTest_Statics::NewProp_LastExecutionTime_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnitTest_Statics::NewProp_UnitTasks_Inner = { "UnitTasks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUnitTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTest_Statics::NewProp_UnitTasks_MetaData[] = {
		{ "Comment", "/** UnitTask's which must be run before different stages of the unit test can execute */" },
		{ "ModuleRelativePath", "Classes/UnitTest.h" },
		{ "ToolTip", "UnitTask's which must be run before different stages of the unit test can execute" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnitTest_Statics::NewProp_UnitTasks = { "UnitTasks", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTest, UnitTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnitTest_Statics::NewProp_UnitTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTest_Statics::NewProp_UnitTasks_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUnitTest_Statics::NewProp_VerificationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTest_Statics::NewProp_VerificationState_MetaData[] = {
		{ "Comment", "/** Whether or not the success or failure of the current unit test has been verified */" },
		{ "ModuleRelativePath", "Classes/UnitTest.h" },
		{ "ToolTip", "Whether or not the success or failure of the current unit test has been verified" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUnitTest_Statics::NewProp_VerificationState = { "VerificationState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTest, VerificationState), Z_Construct_UEnum_NetcodeUnitTest_EUnitTestVerification, METADATA_PARAMS(Z_Construct_UClass_UUnitTest_Statics::NewProp_VerificationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTest_Statics::NewProp_VerificationState_MetaData)) }; // 1279835526
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTest_Statics::NewProp_PeakMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTest_Statics::NewProp_TimeToPeakMem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTest_Statics::NewProp_LastExecutionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTest_Statics::NewProp_UnitTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTest_Statics::NewProp_UnitTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTest_Statics::NewProp_VerificationState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTest_Statics::NewProp_VerificationState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitTest_Statics::ClassParams = {
		&UUnitTest::StaticClass,
		"UnitTestStats",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnitTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTest_Statics::PropPointers),
		0,
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UUnitTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitTest()
	{
		if (!Z_Registration_Info_UClass_UUnitTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitTest.OuterSingleton, Z_Construct_UClass_UUnitTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnitTest.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UUnitTest>()
	{
		return UUnitTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitTest);
	UUnitTest::~UUnitTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_Statics::EnumInfo[] = {
		{ EUnitTestVerification_StaticEnum, TEXT("EUnitTestVerification"), &Z_Registration_Info_UEnum_EUnitTestVerification, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1279835526U) },
		{ EUnitTestResetStage_StaticEnum, TEXT("EUnitTestResetStage"), &Z_Registration_Info_UEnum_EUnitTestResetStage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1929006276U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnitTest, UUnitTest::StaticClass, TEXT("UUnitTest"), &Z_Registration_Info_UClass_UUnitTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitTest), 422205729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_1916606292(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
