// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorUtilityTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORTESTS_API UClass* Z_Construct_UClass_UEditorUtilityTest();
	EDITORTESTS_API UClass* Z_Construct_UClass_UEditorUtilityTest_NoRegister();
	EDITORTESTS_API UEnum* Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult();
	EDITORTESTS_API UFunction* Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature();
	EDITORTESTS_API UFunction* Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EditorTests();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditorUtilityTestResult;
	static UEnum* EEditorUtilityTestResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEditorUtilityTestResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEditorUtilityTestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult, (UObject*)Z_Construct_UPackage__Script_EditorTests(), TEXT("EEditorUtilityTestResult"));
		}
		return Z_Registration_Info_UEnum_EEditorUtilityTestResult.OuterSingleton;
	}
	template<> EDITORTESTS_API UEnum* StaticEnum<EEditorUtilityTestResult>()
	{
		return EEditorUtilityTestResult_StaticEnum();
	}
	struct Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult_Statics::Enumerators[] = {
		{ "EEditorUtilityTestResult::Default", (int64)EEditorUtilityTestResult::Default },
		{ "EEditorUtilityTestResult::Invalid", (int64)EEditorUtilityTestResult::Invalid },
		{ "EEditorUtilityTestResult::Preparing", (int64)EEditorUtilityTestResult::Preparing },
		{ "EEditorUtilityTestResult::Running", (int64)EEditorUtilityTestResult::Running },
		{ "EEditorUtilityTestResult::Failed", (int64)EEditorUtilityTestResult::Failed },
		{ "EEditorUtilityTestResult::Succeeded", (int64)EEditorUtilityTestResult::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/**\n\x09 * When finishing a test if you use Default, you're not explicitly stating if the test passed or failed.\n\x09 * Instead you're allowing any reported failure to have decided that for you. Even if you do\n\x09 * explicitly set as a success, it can be overturned by errors that occurred during the test.\n\x09 */" },
		{ "Default.Name", "EEditorUtilityTestResult::Default" },
		{ "Default.ToolTip", "When finishing a test if you use Default, you're not explicitly stating if the test passed or failed.\nInstead you're allowing any reported failure to have decided that for you. Even if you do\nexplicitly set as a success, it can be overturned by errors that occurred during the test." },
		{ "Failed.Name", "EEditorUtilityTestResult::Failed" },
		{ "Invalid.Name", "EEditorUtilityTestResult::Invalid" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "Preparing.Name", "EEditorUtilityTestResult::Preparing" },
		{ "Running.Name", "EEditorUtilityTestResult::Running" },
		{ "Succeeded.Name", "EEditorUtilityTestResult::Succeeded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EditorTests,
		nullptr,
		"EEditorUtilityTestResult",
		"EEditorUtilityTestResult",
		Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult()
	{
		if (!Z_Registration_Info_UEnum_EEditorUtilityTestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditorUtilityTestResult.InnerSingleton, Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEditorUtilityTestResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EditorTests, nullptr, "EditorUtilityTestEventSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEditorUtilityTestEventSignature_DelegateWrapper(const FMulticastScriptDelegate& EditorUtilityTestEventSignature)
{
	EditorUtilityTestEventSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics
	{
		struct _Script_EditorTests_eventEditorUtilityTestFinishedSignature_Parms
		{
			EEditorUtilityTestResult TestState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TestState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::NewProp_TestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::NewProp_TestState = { "TestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EditorTests_eventEditorUtilityTestFinishedSignature_Parms, TestState), Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult, METADATA_PARAMS(nullptr, 0) }; // 2667642682
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::NewProp_TestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::NewProp_TestState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EditorTests, nullptr, "EditorUtilityTestFinishedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::_Script_EditorTests_eventEditorUtilityTestFinishedSignature_Parms), Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEditorUtilityTestFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& EditorUtilityTestFinishedSignature, EEditorUtilityTestResult TestState)
{
	struct _Script_EditorTests_eventEditorUtilityTestFinishedSignature_Parms
	{
		EEditorUtilityTestResult TestState;
	};
	_Script_EditorTests_eventEditorUtilityTestFinishedSignature_Parms Parms;
	Parms.TestState=TestState;
	EditorUtilityTestFinishedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEditorUtilityTest::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEditorUtilityTestResult*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execExpectFalse)
	{
		P_GET_UBOOL(Z_Param_Condition);
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExpectFalse(Z_Param_Condition,Z_Param_ErrorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execExpectTrue)
	{
		P_GET_UBOOL(Z_Param_Condition);
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExpectTrue(Z_Param_Condition,Z_Param_ErrorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execAddInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInfo(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execAddWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWarning(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execAddError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddError(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execFinishTest)
	{
		P_GET_ENUM(EEditorUtilityTestResult,Z_Param_TestState);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishTest(EEditorUtilityTestResult(Z_Param_TestState),Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execStartTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTest_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execFinishPrepareTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishPrepareTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execPrepareTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareTest_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTest::execRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Run();
		P_NATIVE_END;
	}
	struct EditorUtilityTest_eventReceiveFinishedTest_Parms
	{
		EEditorUtilityTestResult TestState;
		EEditorUtilityTestResult FinalState;
	};
	static FName NAME_UEditorUtilityTest_PrepareTest = FName(TEXT("PrepareTest"));
	void UEditorUtilityTest::PrepareTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorUtilityTest_PrepareTest),NULL);
	}
	static FName NAME_UEditorUtilityTest_ReceiveFinishedTest = FName(TEXT("ReceiveFinishedTest"));
	void UEditorUtilityTest::ReceiveFinishedTest(EEditorUtilityTestResult TestState, EEditorUtilityTestResult& FinalState)
	{
		EditorUtilityTest_eventReceiveFinishedTest_Parms Parms;
		Parms.TestState=TestState;
		Parms.FinalState=FinalState;
		ProcessEvent(FindFunctionChecked(NAME_UEditorUtilityTest_ReceiveFinishedTest),&Parms);
		FinalState=Parms.FinalState;
	}
	static FName NAME_UEditorUtilityTest_StartTest = FName(TEXT("StartTest"));
	void UEditorUtilityTest::StartTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorUtilityTest_StartTest),NULL);
	}
	void UEditorUtilityTest::StaticRegisterNativesUEditorUtilityTest()
	{
		UClass* Class = UEditorUtilityTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddError", &UEditorUtilityTest::execAddError },
			{ "AddInfo", &UEditorUtilityTest::execAddInfo },
			{ "AddWarning", &UEditorUtilityTest::execAddWarning },
			{ "ExpectFalse", &UEditorUtilityTest::execExpectFalse },
			{ "ExpectTrue", &UEditorUtilityTest::execExpectTrue },
			{ "FinishPrepareTest", &UEditorUtilityTest::execFinishPrepareTest },
			{ "FinishTest", &UEditorUtilityTest::execFinishTest },
			{ "GetState", &UEditorUtilityTest::execGetState },
			{ "IsRunning", &UEditorUtilityTest::execIsRunning },
			{ "PrepareTest", &UEditorUtilityTest::execPrepareTest },
			{ "Run", &UEditorUtilityTest::execRun },
			{ "StartTest", &UEditorUtilityTest::execStartTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics
	{
		struct EditorUtilityTest_eventAddError_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventAddError_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Add Error */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Add Error" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "AddError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::EditorUtilityTest_eventAddError_Parms), Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_AddError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_AddError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics
	{
		struct EditorUtilityTest_eventAddInfo_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventAddInfo_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Add Info */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Add Info" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "AddInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::EditorUtilityTest_eventAddInfo_Parms), Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_AddInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_AddInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics
	{
		struct EditorUtilityTest_eventAddWarning_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventAddWarning_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Add Warning */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Add Warning" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "AddWarning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::EditorUtilityTest_eventAddWarning_Parms), Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_AddWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_AddWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics
	{
		struct EditorUtilityTest_eventExpectFalse_Parms
		{
			bool Condition;
			FString ErrorMessage;
		};
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((EditorUtilityTest_eventExpectFalse_Parms*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilityTest_eventExpectFalse_Parms), &Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventExpectFalse_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ErrorMessage" },
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Add error if expected condition is true */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Add error if expected condition is true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "ExpectFalse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::EditorUtilityTest_eventExpectFalse_Parms), Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics
	{
		struct EditorUtilityTest_eventExpectTrue_Parms
		{
			bool Condition;
			FString ErrorMessage;
		};
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((EditorUtilityTest_eventExpectTrue_Parms*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilityTest_eventExpectTrue_Parms), &Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventExpectTrue_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ErrorMessage" },
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Add error if expected condition is false */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Add error if expected condition is false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "ExpectTrue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::EditorUtilityTest_eventExpectTrue_Parms), Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_FinishPrepareTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_FinishPrepareTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Tell the blueprint VM to start the test (to use at the end of Prepare Test event). */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Tell the blueprint VM to start the test (to use at the end of Prepare Test event)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_FinishPrepareTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "FinishPrepareTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_FinishPrepareTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_FinishPrepareTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_FinishPrepareTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_FinishPrepareTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics
	{
		struct EditorUtilityTest_eventFinishTest_Parms
		{
			EEditorUtilityTestResult TestState;
			FString Message;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TestState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::NewProp_TestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::NewProp_TestState = { "TestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventFinishTest_Parms, TestState), Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult, METADATA_PARAMS(nullptr, 0) }; // 2667642682
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventFinishTest_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::NewProp_TestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::NewProp_TestState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Message" },
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Tell the VM the test is finished with specify state. */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Tell the VM the test is finished with specify state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "FinishTest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::EditorUtilityTest_eventFinishTest_Parms), Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_FinishTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_FinishTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics
	{
		struct EditorUtilityTest_eventGetState_Parms
		{
			EEditorUtilityTestResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult, METADATA_PARAMS(nullptr, 0) }; // 2667642682
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Get test state */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Get test state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "GetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::EditorUtilityTest_eventGetState_Parms), Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics
	{
		struct EditorUtilityTest_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUtilityTest_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilityTest_eventIsRunning_Parms), &Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Is test ruuning */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Is test ruuning" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "IsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::EditorUtilityTest_eventIsRunning_Parms), Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_PrepareTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_PrepareTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Use to setup test before running, must call FinishPrepareTest at the end to actual start the test. */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Use to setup test before running, must call FinishPrepareTest at the end to actual start the test." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_PrepareTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "PrepareTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_PrepareTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_PrepareTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_PrepareTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_PrepareTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TestState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FinalState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FinalState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::NewProp_TestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::NewProp_TestState = { "TestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventReceiveFinishedTest_Parms, TestState), Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult, METADATA_PARAMS(nullptr, 0) }; // 2667642682
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::NewProp_FinalState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::NewProp_FinalState = { "FinalState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTest_eventReceiveFinishedTest_Parms, FinalState), Z_Construct_UEnum_EditorTests_EEditorUtilityTestResult, METADATA_PARAMS(nullptr, 0) }; // 2667642682
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::NewProp_TestState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::NewProp_TestState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::NewProp_FinalState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::NewProp_FinalState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Use to add clean up steps, the call is blocking. */" },
		{ "DisplayName", "Finished Test" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Use to add clean up steps, the call is blocking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "ReceiveFinishedTest", nullptr, nullptr, sizeof(EditorUtilityTest_eventReceiveFinishedTest_Parms), Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_Run_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_Run_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Blueprint Utility Editor entry point */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Blueprint Utility Editor entry point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "Run", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_Run_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_Run_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_Run()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_Run_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTest_StartTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTest_StartTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Utility Test" },
		{ "Comment", "/** Actual run the test, must call FinishTest at then end of test with a state to signify the test is done. */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Actual run the test, must call FinishTest at then end of test with a state to signify the test is done." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTest_StartTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTest, nullptr, "StartTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTest_StartTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTest_StartTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTest_StartTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTest_StartTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityTest);
	UClass* Z_Construct_UClass_UEditorUtilityTest_NoRegister()
	{
		return UEditorUtilityTest::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTestPrepare_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestPrepare;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTestStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTestFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreparationTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreparationTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUtilityTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorUtilityTest_AddError, "AddError" }, // 2505637119
		{ &Z_Construct_UFunction_UEditorUtilityTest_AddInfo, "AddInfo" }, // 3841530700
		{ &Z_Construct_UFunction_UEditorUtilityTest_AddWarning, "AddWarning" }, // 2396747654
		{ &Z_Construct_UFunction_UEditorUtilityTest_ExpectFalse, "ExpectFalse" }, // 773081199
		{ &Z_Construct_UFunction_UEditorUtilityTest_ExpectTrue, "ExpectTrue" }, // 3056629177
		{ &Z_Construct_UFunction_UEditorUtilityTest_FinishPrepareTest, "FinishPrepareTest" }, // 2561908379
		{ &Z_Construct_UFunction_UEditorUtilityTest_FinishTest, "FinishTest" }, // 3017527135
		{ &Z_Construct_UFunction_UEditorUtilityTest_GetState, "GetState" }, // 2564499212
		{ &Z_Construct_UFunction_UEditorUtilityTest_IsRunning, "IsRunning" }, // 4017296326
		{ &Z_Construct_UFunction_UEditorUtilityTest_PrepareTest, "PrepareTest" }, // 1359690243
		{ &Z_Construct_UFunction_UEditorUtilityTest_ReceiveFinishedTest, "ReceiveFinishedTest" }, // 3783083277
		{ &Z_Construct_UFunction_UEditorUtilityTest_Run, "Run" }, // 280554760
		{ &Z_Construct_UFunction_UEditorUtilityTest_StartTest, "StartTest" }, // 3401554430
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorUtilityTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestPrepare_MetaData[] = {
		{ "Comment", "/** Called when the test is ready to prepare */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Called when the test is ready to prepare" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestPrepare = { "OnTestPrepare", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityTest, OnTestPrepare), Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestPrepare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestPrepare_MetaData)) }; // 3106925348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestStart_MetaData[] = {
		{ "Comment", "/** Called when the test is started */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Called when the test is started" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestStart = { "OnTestStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityTest, OnTestStart), Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestStart_MetaData)) }; // 3106925348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestFinished_MetaData[] = {
		{ "Comment", "/** Called when the test is finished. Use it to clean up */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Called when the test is finished. Use it to clean up" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestFinished = { "OnTestFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityTest, OnTestFinished), Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestFinished_MetaData)) }; // 4089210940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "/**\n\x09 * The owner is the group or person responsible for the test. Generally you should use a group name\n\x09 * like 'Editor' or 'Rendering'. When a test fails it may not be obvious who should investigate\n\x09 * so this provides a associate responsible groups with tests.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The owner is the group or person responsible for the test. Generally you should use a group name\nlike 'Editor' or 'Rendering'. When a test fails it may not be obvious who should investigate\nso this provides a associate responsible groups with tests." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityTest, Owner), METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "/** A description of the test, like what is this test trying to determine. */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "A description of the test, like what is this test trying to determine." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityTest, Description), METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_PreparationTimeLimit_MetaData[] = {
		{ "Category", "Timeout" },
		{ "Comment", "/** The Test's time limit for preparation, this is the time it has to trigger IsReadyToStart(). '0' means no limit. */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "The Test's time limit for preparation, this is the time it has to trigger IsReadyToStart(). '0' means no limit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_PreparationTimeLimit = { "PreparationTimeLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityTest, PreparationTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_PreparationTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_PreparationTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_TimeLimit_MetaData[] = {
		{ "Category", "Timeout" },
		{ "Comment", "/** Test's total run time limit. '0' means no limit */" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTest.h" },
		{ "ToolTip", "Test's total run time limit. '0' means no limit" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityTest, TimeLimit), METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_TimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_TimeLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUtilityTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestPrepare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_OnTestFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_PreparationTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTest_Statics::NewProp_TimeLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityTest_Statics::ClassParams = {
		&UEditorUtilityTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorUtilityTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTest_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityTest()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityTest.OuterSingleton, Z_Construct_UClass_UEditorUtilityTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityTest.OuterSingleton;
	}
	template<> EDITORTESTS_API UClass* StaticClass<UEditorUtilityTest>()
	{
		return UEditorUtilityTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityTest);
	UEditorUtilityTest::~UEditorUtilityTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_Statics::EnumInfo[] = {
		{ EEditorUtilityTestResult_StaticEnum, TEXT("EEditorUtilityTestResult"), &Z_Registration_Info_UEnum_EEditorUtilityTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2667642682U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityTest, UEditorUtilityTest::StaticClass, TEXT("UEditorUtilityTest"), &Z_Registration_Info_UClass_UEditorUtilityTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityTest), 2413143466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_1465642903(TEXT("/Script/EditorTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
