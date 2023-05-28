// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationState() {}
// Cross Module References
	AUTOMATIONTEST_API UEnum* Z_Construct_UEnum_AutomationTest_EAutomationState();
	UPackage* Z_Construct_UPackage__Script_AutomationTest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutomationState;
	static UEnum* EAutomationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutomationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutomationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutomationTest_EAutomationState, (UObject*)Z_Construct_UPackage__Script_AutomationTest(), TEXT("EAutomationState"));
		}
		return Z_Registration_Info_UEnum_EAutomationState.OuterSingleton;
	}
	template<> AUTOMATIONTEST_API UEnum* StaticEnum<EAutomationState>()
	{
		return EAutomationState_StaticEnum();
	}
	struct Z_Construct_UEnum_AutomationTest_EAutomationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AutomationTest_EAutomationState_Statics::Enumerators[] = {
		{ "EAutomationState::NotRun", (int64)EAutomationState::NotRun },
		{ "EAutomationState::InProcess", (int64)EAutomationState::InProcess },
		{ "EAutomationState::Fail", (int64)EAutomationState::Fail },
		{ "EAutomationState::Success", (int64)EAutomationState::Success },
		{ "EAutomationState::Skipped", (int64)EAutomationState::Skipped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AutomationTest_EAutomationState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration of unit test status for special dialog */" },
		{ "Fail.Comment", "// Automation test is running now\n" },
		{ "Fail.Name", "EAutomationState::Fail" },
		{ "Fail.ToolTip", "Automation test is running now" },
		{ "InProcess.Comment", "// Automation test was not run\n" },
		{ "InProcess.Name", "EAutomationState::InProcess" },
		{ "InProcess.ToolTip", "Automation test was not run" },
		{ "ModuleRelativePath", "Public/AutomationState.h" },
		{ "NotRun.Name", "EAutomationState::NotRun" },
		{ "Skipped.Comment", "// Automation test was run and succeeded\n" },
		{ "Skipped.Name", "EAutomationState::Skipped" },
		{ "Skipped.ToolTip", "Automation test was run and succeeded" },
		{ "Success.Comment", "// Automation test was run and failed\n" },
		{ "Success.Name", "EAutomationState::Success" },
		{ "Success.ToolTip", "Automation test was run and failed" },
		{ "ToolTip", "Enumeration of unit test status for special dialog" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutomationTest_EAutomationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AutomationTest,
		nullptr,
		"EAutomationState",
		"EAutomationState",
		Z_Construct_UEnum_AutomationTest_EAutomationState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationTest_EAutomationState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AutomationTest_EAutomationState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationTest_EAutomationState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AutomationTest_EAutomationState()
	{
		if (!Z_Registration_Info_UEnum_EAutomationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutomationState.InnerSingleton, Z_Construct_UEnum_AutomationTest_EAutomationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutomationState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationState_h_Statics::EnumInfo[] = {
		{ EAutomationState_StaticEnum, TEXT("EAutomationState"), &Z_Registration_Info_UEnum_EAutomationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4153134487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationState_h_4199644855(TEXT("/Script/AutomationTest"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
