// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/TestBTStopAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTStopAction() {}
// Cross Module References
	AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBTTestStopAction();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTTestStopAction;
	static UEnum* EBTTestStopAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBTTestStopAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBTTestStopAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AITestSuite_EBTTestStopAction, (UObject*)Z_Construct_UPackage__Script_AITestSuite(), TEXT("EBTTestStopAction"));
		}
		return Z_Registration_Info_UEnum_EBTTestStopAction.OuterSingleton;
	}
	template<> AITESTSUITE_API UEnum* StaticEnum<EBTTestStopAction>()
	{
		return EBTTestStopAction_StaticEnum();
	}
	struct Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enumerators[] = {
		{ "EBTTestStopAction::StopTree", (int64)EBTTestStopAction::StopTree },
		{ "EBTTestStopAction::UnInitialize", (int64)EBTTestStopAction::UnInitialize },
		{ "EBTTestStopAction::Cleanup", (int64)EBTTestStopAction::Cleanup },
		{ "EBTTestStopAction::RestartTree", (int64)EBTTestStopAction::RestartTree },
		{ "EBTTestStopAction::StartTree", (int64)EBTTestStopAction::StartTree },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enum_MetaDataParams[] = {
		{ "Cleanup.Name", "EBTTestStopAction::Cleanup" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTStopAction.h" },
		{ "RestartTree.Name", "EBTTestStopAction::RestartTree" },
		{ "StartTree.Name", "EBTTestStopAction::StartTree" },
		{ "StopTree.Name", "EBTTestStopAction::StopTree" },
		{ "UnInitialize.Name", "EBTTestStopAction::UnInitialize" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AITestSuite,
		nullptr,
		"EBTTestStopAction",
		"EBTTestStopAction",
		Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AITestSuite_EBTTestStopAction()
	{
		if (!Z_Registration_Info_UEnum_EBTTestStopAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTTestStopAction.InnerSingleton, Z_Construct_UEnum_AITestSuite_EBTTestStopAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBTTestStopAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h_Statics::EnumInfo[] = {
		{ EBTTestStopAction_StaticEnum, TEXT("EBTTestStopAction"), &Z_Registration_Info_UEnum_EBTTestStopAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3731464382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h_2631704222(TEXT("/Script/AITestSuite"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
