// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationPerformaceHelper();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationPerformaceHelper_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister();
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonMethod();
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling();
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComparisonMethod;
	static UEnum* EComparisonMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EComparisonMethod"));
		}
		return Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EComparisonMethod>()
	{
		return EComparisonMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enumerators[] = {
		{ "EComparisonMethod::Equal_To", (int64)EComparisonMethod::Equal_To },
		{ "EComparisonMethod::Not_Equal_To", (int64)EComparisonMethod::Not_Equal_To },
		{ "EComparisonMethod::Greater_Than_Or_Equal_To", (int64)EComparisonMethod::Greater_Than_Or_Equal_To },
		{ "EComparisonMethod::Less_Than_Or_Equal_To", (int64)EComparisonMethod::Less_Than_Or_Equal_To },
		{ "EComparisonMethod::Greater_Than", (int64)EComparisonMethod::Greater_Than },
		{ "EComparisonMethod::Less_Than", (int64)EComparisonMethod::Less_Than },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equal_To.Name", "EComparisonMethod::Equal_To" },
		{ "Greater_Than.Name", "EComparisonMethod::Greater_Than" },
		{ "Greater_Than_Or_Equal_To.Name", "EComparisonMethod::Greater_Than_Or_Equal_To" },
		{ "Less_Than.Name", "EComparisonMethod::Less_Than" },
		{ "Less_Than_Or_Equal_To.Name", "EComparisonMethod::Less_Than_Or_Equal_To" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "Not_Equal_To.Name", "EComparisonMethod::Not_Equal_To" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		"EComparisonMethod",
		"EComparisonMethod",
		Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonMethod()
	{
		if (!Z_Registration_Info_UEnum_EComparisonMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComparisonMethod.InnerSingleton, Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComparisonMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execEndStatsFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndStatsFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execBeginStatsFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RecordName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginStatsFile(Z_Param_RecordName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execTriggerGPUTraceIfRecordFallsBelowBudget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerGPUTraceIfRecordFallsBelowBudget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execStopCPUProfiling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCPUProfiling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execStartCPUProfiling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCPUProfiling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execIsCurrentRecordWithinRenderThreadBudget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinRenderThreadBudget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execIsCurrentRecordWithinGameThreadBudget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinGameThreadBudget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execIsCurrentRecordWithinGPUBudget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinGPUBudget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execOnAllTestsComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAllTestsComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execOnBeginTests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginTests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execWriteLogFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CaptureDir);
		P_GET_PROPERTY(FStrProperty,Z_Param_CaptureExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteLogFile(Z_Param_CaptureDir,Z_Param_CaptureExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execEndRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execBeginRecording)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RecordName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InGPUBudget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRenderThreadBudget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InGameThreadBudget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginRecording(Z_Param_RecordName,Z_Param_InGPUBudget,Z_Param_InRenderThreadBudget,Z_Param_InGameThreadBudget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execEndRecordingBaseline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndRecordingBaseline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execBeginRecordingBaseline)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RecordName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginRecordingBaseline(Z_Param_RecordName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execSample)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sample(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationPerformaceHelper::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	void UAutomationPerformaceHelper::StaticRegisterNativesUAutomationPerformaceHelper()
	{
		UClass* Class = UAutomationPerformaceHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginRecording", &UAutomationPerformaceHelper::execBeginRecording },
			{ "BeginRecordingBaseline", &UAutomationPerformaceHelper::execBeginRecordingBaseline },
			{ "BeginStatsFile", &UAutomationPerformaceHelper::execBeginStatsFile },
			{ "EndRecording", &UAutomationPerformaceHelper::execEndRecording },
			{ "EndRecordingBaseline", &UAutomationPerformaceHelper::execEndRecordingBaseline },
			{ "EndStatsFile", &UAutomationPerformaceHelper::execEndStatsFile },
			{ "IsCurrentRecordWithinGameThreadBudget", &UAutomationPerformaceHelper::execIsCurrentRecordWithinGameThreadBudget },
			{ "IsCurrentRecordWithinGPUBudget", &UAutomationPerformaceHelper::execIsCurrentRecordWithinGPUBudget },
			{ "IsCurrentRecordWithinRenderThreadBudget", &UAutomationPerformaceHelper::execIsCurrentRecordWithinRenderThreadBudget },
			{ "IsRecording", &UAutomationPerformaceHelper::execIsRecording },
			{ "OnAllTestsComplete", &UAutomationPerformaceHelper::execOnAllTestsComplete },
			{ "OnBeginTests", &UAutomationPerformaceHelper::execOnBeginTests },
			{ "Sample", &UAutomationPerformaceHelper::execSample },
			{ "StartCPUProfiling", &UAutomationPerformaceHelper::execStartCPUProfiling },
			{ "StopCPUProfiling", &UAutomationPerformaceHelper::execStopCPUProfiling },
			{ "Tick", &UAutomationPerformaceHelper::execTick },
			{ "TriggerGPUTraceIfRecordFallsBelowBudget", &UAutomationPerformaceHelper::execTriggerGPUTraceIfRecordFallsBelowBudget },
			{ "WriteLogFile", &UAutomationPerformaceHelper::execWriteLogFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics
	{
		struct AutomationPerformaceHelper_eventBeginRecording_Parms
		{
			FString RecordName;
			float InGPUBudget;
			float InRenderThreadBudget;
			float InGameThreadBudget;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecordName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InGPUBudget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRenderThreadBudget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InGameThreadBudget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_RecordName = { "RecordName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecording_Parms, RecordName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InGPUBudget = { "InGPUBudget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecording_Parms, InGPUBudget), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InRenderThreadBudget = { "InRenderThreadBudget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecording_Parms, InRenderThreadBudget), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InGameThreadBudget = { "InGameThreadBudget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecording_Parms, InGameThreadBudget), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_RecordName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InGPUBudget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InRenderThreadBudget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InGameThreadBudget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Begins recording a new named performance stats record. We start by recording the baseline. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Begins recording a new named performance stats record. We start by recording the baseline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "BeginRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::AutomationPerformaceHelper_eventBeginRecording_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics
	{
		struct AutomationPerformaceHelper_eventBeginRecordingBaseline_Parms
		{
			FString RecordName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecordName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::NewProp_RecordName = { "RecordName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecordingBaseline_Parms, RecordName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::NewProp_RecordName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Begins recording a new named performance stats record. We start by recording the baseline */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Begins recording a new named performance stats record. We start by recording the baseline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "BeginRecordingBaseline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::AutomationPerformaceHelper_eventBeginRecordingBaseline_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics
	{
		struct AutomationPerformaceHelper_eventBeginStatsFile_Parms
		{
			FString RecordName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecordName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::NewProp_RecordName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::NewProp_RecordName = { "RecordName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginStatsFile_Parms, RecordName), METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::NewProp_RecordName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::NewProp_RecordName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::NewProp_RecordName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Begins recording stats to a file. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Begins recording stats to a file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "BeginStatsFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::AutomationPerformaceHelper_eventBeginStatsFile_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Stops recording performance stats. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Stops recording performance stats." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "EndRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Stops recording the baseline and moves to the main record. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Stops recording the baseline and moves to the main record." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "EndRecordingBaseline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Ends recording stats to a file. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Ends recording stats to a file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "EndStatsFile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics
	{
		struct AutomationPerformaceHelper_eventIsCurrentRecordWithinGameThreadBudget_Parms
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
	void Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationPerformaceHelper_eventIsCurrentRecordWithinGameThreadBudget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationPerformaceHelper_eventIsCurrentRecordWithinGameThreadBudget_Parms), &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "IsCurrentRecordWithinGameThreadBudget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::AutomationPerformaceHelper_eventIsCurrentRecordWithinGameThreadBudget_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics
	{
		struct AutomationPerformaceHelper_eventIsCurrentRecordWithinGPUBudget_Parms
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
	void Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationPerformaceHelper_eventIsCurrentRecordWithinGPUBudget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationPerformaceHelper_eventIsCurrentRecordWithinGPUBudget_Parms), &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "IsCurrentRecordWithinGPUBudget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::AutomationPerformaceHelper_eventIsCurrentRecordWithinGPUBudget_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics
	{
		struct AutomationPerformaceHelper_eventIsCurrentRecordWithinRenderThreadBudget_Parms
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
	void Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationPerformaceHelper_eventIsCurrentRecordWithinRenderThreadBudget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationPerformaceHelper_eventIsCurrentRecordWithinRenderThreadBudget_Parms), &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "IsCurrentRecordWithinRenderThreadBudget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::AutomationPerformaceHelper_eventIsCurrentRecordWithinRenderThreadBudget_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics
	{
		struct AutomationPerformaceHelper_eventIsRecording_Parms
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
	void Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationPerformaceHelper_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationPerformaceHelper_eventIsRecording_Parms), &Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Returns true if this stats tracker is currently recording performance stats. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Returns true if this stats tracker is currently recording performance stats." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "IsRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::AutomationPerformaceHelper_eventIsRecording_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Does any final work needed as all tests are complete. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Does any final work needed as all tests are complete." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "OnAllTestsComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Does any init work across all tests.. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Does any init work across all tests.." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "OnBeginTests", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics
	{
		struct AutomationPerformaceHelper_eventSample_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventSample_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Adds a sample to the stats counters for the current performance stats record. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Adds a sample to the stats counters for the current performance stats record." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "Sample", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::AutomationPerformaceHelper_eventSample_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_Sample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Communicates with external profiler to being a CPU capture. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Communicates with external profiler to being a CPU capture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "StartCPUProfiling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Communicates with external profiler to end a CPU capture. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Communicates with external profiler to end a CPU capture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "StopCPUProfiling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics
	{
		struct AutomationPerformaceHelper_eventTick_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "//Begin basic stat recording\n" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Begin basic stat recording" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "Tick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::AutomationPerformaceHelper_eventTick_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Will trigger a GPU trace next time the current test falls below GPU budget. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Will trigger a GPU trace next time the current test falls below GPU budget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "TriggerGPUTraceIfRecordFallsBelowBudget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics
	{
		struct AutomationPerformaceHelper_eventWriteLogFile_Parms
		{
			FString CaptureDir;
			FString CaptureExtension;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CaptureDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CaptureExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureDir = { "CaptureDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventWriteLogFile_Parms, CaptureDir), METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureExtension = { "CaptureExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationPerformaceHelper_eventWriteLogFile_Parms, CaptureExtension), METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureExtension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Writes the current set of performance stats records to a csv file in the profiling directory. An additional directory and an extension override can also be used. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Writes the current set of performance stats records to a csv file in the profiling directory. An additional directory and an extension override can also be used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "WriteLogFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::AutomationPerformaceHelper_eventWriteLogFile_Parms), Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationPerformaceHelper);
	UClass* Z_Construct_UClass_UAutomationPerformaceHelper_NoRegister()
	{
		return UAutomationPerformaceHelper::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationPerformaceHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationPerformaceHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutomationPerformaceHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording, "BeginRecording" }, // 813286689
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline, "BeginRecordingBaseline" }, // 2875275463
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile, "BeginStatsFile" }, // 2027700341
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording, "EndRecording" }, // 4132658074
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline, "EndRecordingBaseline" }, // 408784681
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile, "EndStatsFile" }, // 2614476046
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget, "IsCurrentRecordWithinGameThreadBudget" }, // 1709802832
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget, "IsCurrentRecordWithinGPUBudget" }, // 822808531
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget, "IsCurrentRecordWithinRenderThreadBudget" }, // 4283621543
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording, "IsRecording" }, // 2408686913
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete, "OnAllTestsComplete" }, // 2225171308
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests, "OnBeginTests" }, // 772610447
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_Sample, "Sample" }, // 2691403659
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling, "StartCPUProfiling" }, // 4118001439
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling, "StopCPUProfiling" }, // 3370308645
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_Tick, "Tick" }, // 2832461898
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget, "TriggerGPUTraceIfRecordFallsBelowBudget" }, // 1820486445
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile, "WriteLogFile" }, // 3728125193
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationPerformaceHelper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Class for use with functional tests which provides various performance measuring features. \n * Recording of basic, unintrusive performance stats.\n * Automatic captures using external CPU and GPU profilers.\n * Triggering and ending of writing full stats to a file.\n*/" },
		{ "IncludePath", "FunctionalTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Class for use with functional tests which provides various performance measuring features.\nRecording of basic, unintrusive performance stats.\nAutomatic captures using external CPU and GPU profilers.\nTriggering and ending of writing full stats to a file." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationPerformaceHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationPerformaceHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationPerformaceHelper_Statics::ClassParams = {
		&UAutomationPerformaceHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationPerformaceHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationPerformaceHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationPerformaceHelper()
	{
		if (!Z_Registration_Info_UClass_UAutomationPerformaceHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationPerformaceHelper.OuterSingleton, Z_Construct_UClass_UAutomationPerformaceHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomationPerformaceHelper.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UAutomationPerformaceHelper>()
	{
		return UAutomationPerformaceHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationPerformaceHelper);
	UAutomationPerformaceHelper::~UAutomationPerformaceHelper() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFunctionalTestResult;
	static UEnum* EFunctionalTestResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EFunctionalTestResult"));
		}
		return Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EFunctionalTestResult>()
	{
		return EFunctionalTestResult_StaticEnum();
	}
	struct Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enumerators[] = {
		{ "EFunctionalTestResult::Default", (int64)EFunctionalTestResult::Default },
		{ "EFunctionalTestResult::Invalid", (int64)EFunctionalTestResult::Invalid },
		{ "EFunctionalTestResult::Error", (int64)EFunctionalTestResult::Error },
		{ "EFunctionalTestResult::Running", (int64)EFunctionalTestResult::Running },
		{ "EFunctionalTestResult::Failed", (int64)EFunctionalTestResult::Failed },
		{ "EFunctionalTestResult::Succeeded", (int64)EFunctionalTestResult::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/**\n\x09 * When finishing a test if you use Default, you're not explicitly stating if the test passed or failed.\n\x09 * Instead you're instead allowing any tested assertions to have decided that for you.  Even if you do\n\x09 * explicitly log success, it can be overturned by errors that occurred during the test.\n\x09 */" },
		{ "Default.Name", "EFunctionalTestResult::Default" },
		{ "Default.ToolTip", "When finishing a test if you use Default, you're not explicitly stating if the test passed or failed.\nInstead you're instead allowing any tested assertions to have decided that for you.  Even if you do\nexplicitly log success, it can be overturned by errors that occurred during the test." },
		{ "Error.Name", "EFunctionalTestResult::Error" },
		{ "Failed.Name", "EFunctionalTestResult::Failed" },
		{ "Invalid.Name", "EFunctionalTestResult::Invalid" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "Running.Name", "EFunctionalTestResult::Running" },
		{ "Succeeded.Name", "EFunctionalTestResult::Succeeded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		"EFunctionalTestResult",
		"EFunctionalTestResult",
		Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult()
	{
		if (!Z_Registration_Info_UEnum_EFunctionalTestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFunctionalTestResult.InnerSingleton, Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFunctionalTestResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFunctionalTestLogHandling;
	static UEnum* EFunctionalTestLogHandling_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EFunctionalTestLogHandling"));
		}
		return Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EFunctionalTestLogHandling>()
	{
		return EFunctionalTestLogHandling_StaticEnum();
	}
	struct Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enumerators[] = {
		{ "EFunctionalTestLogHandling::ProjectDefault", (int64)EFunctionalTestLogHandling::ProjectDefault },
		{ "EFunctionalTestLogHandling::OutputIsError", (int64)EFunctionalTestLogHandling::OutputIsError },
		{ "EFunctionalTestLogHandling::OutputIgnored", (int64)EFunctionalTestLogHandling::OutputIgnored },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "OutputIgnored.Name", "EFunctionalTestLogHandling::OutputIgnored" },
		{ "OutputIsError.Name", "EFunctionalTestLogHandling::OutputIsError" },
		{ "ProjectDefault.Comment", "/**\n\x09 * How do log categories affect rest results. ProjectDefault can be set in DefaultEngine.ini\n\x09 * but individual tests can override that\n\x09 */" },
		{ "ProjectDefault.Name", "EFunctionalTestLogHandling::ProjectDefault" },
		{ "ProjectDefault.ToolTip", "How do log categories affect rest results. ProjectDefault can be set in DefaultEngine.ini\nbut individual tests can override that" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		"EFunctionalTestLogHandling",
		"EFunctionalTestLogHandling",
		Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling()
	{
		if (!Z_Registration_Info_UEnum_EFunctionalTestLogHandling.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFunctionalTestLogHandling.InnerSingleton, Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFunctionalTestLogHandling.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting, nullptr, "FunctionalTestEventSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFunctionalTestEventSignature_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestEventSignature)
{
	FunctionalTestEventSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AFunctionalTest::execIsReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReady_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execRegisterAutoDestroyActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterAutoDestroyActor(Z_Param_ActorToAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execGetCurrentRerunReason)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentRerunReason();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAddRerun)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRerun(Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execSetTimeLimit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeLimit);
		P_GET_ENUM(EFunctionalTestResult,Z_Param_ResultWhenTimeRunsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeLimit(Z_Param_NewTimeLimit,EFunctionalTestResult(Z_Param_ResultWhenTimeRunsOut));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execLogMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execFinishTest)
	{
		P_GET_ENUM(EFunctionalTestResult,Z_Param_TestResult);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishTest(EFunctionalTestResult(Z_Param_TestResult),Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAddError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddError(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAddWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWarning(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_TraceQueryResults)
	{
		P_GET_OBJECT(UTraceQueryTestResults,Z_Param_Actual);
		P_GET_OBJECT(UTraceQueryTestResults,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_TraceQueryResults(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_String)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Actual);
		P_GET_PROPERTY(FStrProperty,Z_Param_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_String(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_String)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Actual);
		P_GET_PROPERTY(FStrProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_String(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Matrix)
	{
		P_GET_STRUCT(FMatrix,Z_Param_Actual);
		P_GET_STRUCT(FMatrix,Z_Param_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Matrix(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Matrix)
	{
		P_GET_STRUCT(FMatrix,Z_Param_Actual);
		P_GET_STRUCT(FMatrix,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Matrix(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Quat)
	{
		P_GET_STRUCT(FQuat,Z_Param_Actual);
		P_GET_STRUCT(FQuat,Z_Param_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Quat(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Quat)
	{
		P_GET_STRUCT(FQuat,Z_Param_Actual);
		P_GET_STRUCT(FQuat,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Quat(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Plane)
	{
		P_GET_STRUCT(FPlane,Z_Param_Actual);
		P_GET_STRUCT(FPlane,Z_Param_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Plane(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Plane)
	{
		P_GET_STRUCT(FPlane,Z_Param_Actual);
		P_GET_STRUCT(FPlane,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Plane(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Vector4)
	{
		P_GET_STRUCT(FVector4,Z_Param_Actual);
		P_GET_STRUCT(FVector4,Z_Param_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Vector4(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Vector4)
	{
		P_GET_STRUCT(FVector4,Z_Param_Actual);
		P_GET_STRUCT(FVector4,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Vector4(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Box2D)
	{
		P_GET_STRUCT(FBox2D,Z_Param_Actual);
		P_GET_STRUCT(FBox2D,Z_Param_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Box2D(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Box2D)
	{
		P_GET_STRUCT(FBox2D,Z_Param_Actual);
		P_GET_STRUCT(FBox2D,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Box2D(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Vector2D)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Actual);
		P_GET_STRUCT(FVector2D,Z_Param_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Vector2D(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Vector2D)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Actual);
		P_GET_STRUCT(FVector2D,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Vector2D(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Vector)
	{
		P_GET_STRUCT(FVector,Z_Param_Actual);
		P_GET_STRUCT(FVector,Z_Param_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Vector(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Vector)
	{
		P_GET_STRUCT(FVector,Z_Param_Actual);
		P_GET_STRUCT(FVector,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Vector(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Rotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_Actual);
		P_GET_STRUCT(FRotator,Z_Param_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Rotator(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Rotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_Actual);
		P_GET_STRUCT(FRotator,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Rotator(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Transform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Actual);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NotExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Transform(Z_Param_Out_Actual,Z_Param_Out_NotExpected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Object)
	{
		P_GET_OBJECT(UObject,Z_Param_Actual);
		P_GET_OBJECT(UObject,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Object(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Name)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Actual);
		P_GET_PROPERTY(FNameProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Name(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Int)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Actual);
		P_GET_PROPERTY(FIntProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Int(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Bool)
	{
		P_GET_UBOOL(Z_Param_Actual);
		P_GET_UBOOL(Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Bool(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Double)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Actual);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Double(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Float)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Actual);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Float(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Transform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Actual);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertEqual_Transform(Z_Param_Out_Actual,Z_Param_Out_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertValue_DateTime)
	{
		P_GET_STRUCT(FDateTime,Z_Param_Actual);
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe);
		P_GET_STRUCT(FDateTime,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertValue_DateTime(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertValue_Double)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Actual);
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertValue_Double(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertValue_Float)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Actual);
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertValue_Float(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertValue_Int)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Actual);
		P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe);
		P_GET_PROPERTY(FIntProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_What);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertValue_Int(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertIsValid)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertIsValid(Z_Param_Object,Z_Param_Message,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertFalse)
	{
		P_GET_UBOOL(Z_Param_Condition);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertFalse(Z_Param_Condition,Z_Param_Message,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFunctionalTest::execAssertTrue)
	{
		P_GET_UBOOL(Z_Param_Condition);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AssertTrue(Z_Param_Condition,Z_Param_Message,Z_Param_ContextObject);
		P_NATIVE_END;
	}
	struct FunctionalTest_eventDebugGatherRelevantActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
	struct FunctionalTest_eventIsReady_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		FunctionalTest_eventIsReady_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms
	{
		EFunctionalTestResult TestResult;
		FString ReturnValue;
	};
	struct FunctionalTest_eventOnWantsReRunCheck_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		FunctionalTest_eventOnWantsReRunCheck_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_AFunctionalTest_DebugGatherRelevantActors = FName(TEXT("DebugGatherRelevantActors"));
	TArray<AActor*> AFunctionalTest::DebugGatherRelevantActors() const
	{
		FunctionalTest_eventDebugGatherRelevantActors_Parms Parms;
		const_cast<AFunctionalTest*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_DebugGatherRelevantActors),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFunctionalTest_IsReady = FName(TEXT("IsReady"));
	bool AFunctionalTest::IsReady()
	{
		FunctionalTest_eventIsReady_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_IsReady),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFunctionalTest_OnAdditionalTestFinishedMessageRequest = FName(TEXT("OnAdditionalTestFinishedMessageRequest"));
	FString AFunctionalTest::OnAdditionalTestFinishedMessageRequest(EFunctionalTestResult TestResult) const
	{
		FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms Parms;
		Parms.TestResult=TestResult;
		const_cast<AFunctionalTest*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_OnAdditionalTestFinishedMessageRequest),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFunctionalTest_OnWantsReRunCheck = FName(TEXT("OnWantsReRunCheck"));
	bool AFunctionalTest::OnWantsReRunCheck() const
	{
		FunctionalTest_eventOnWantsReRunCheck_Parms Parms;
		const_cast<AFunctionalTest*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_OnWantsReRunCheck),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFunctionalTest_ReceivePrepareTest = FName(TEXT("ReceivePrepareTest"));
	void AFunctionalTest::ReceivePrepareTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_ReceivePrepareTest),NULL);
	}
	static FName NAME_AFunctionalTest_ReceiveStartTest = FName(TEXT("ReceiveStartTest"));
	void AFunctionalTest::ReceiveStartTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_ReceiveStartTest),NULL);
	}
	void AFunctionalTest::StaticRegisterNativesAFunctionalTest()
	{
		UClass* Class = AFunctionalTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddError", &AFunctionalTest::execAddError },
			{ "AddRerun", &AFunctionalTest::execAddRerun },
			{ "AddWarning", &AFunctionalTest::execAddWarning },
			{ "AssertEqual_Bool", &AFunctionalTest::execAssertEqual_Bool },
			{ "AssertEqual_Box2D", &AFunctionalTest::execAssertEqual_Box2D },
			{ "AssertEqual_Double", &AFunctionalTest::execAssertEqual_Double },
			{ "AssertEqual_Float", &AFunctionalTest::execAssertEqual_Float },
			{ "AssertEqual_Int", &AFunctionalTest::execAssertEqual_Int },
			{ "AssertEqual_Matrix", &AFunctionalTest::execAssertEqual_Matrix },
			{ "AssertEqual_Name", &AFunctionalTest::execAssertEqual_Name },
			{ "AssertEqual_Object", &AFunctionalTest::execAssertEqual_Object },
			{ "AssertEqual_Plane", &AFunctionalTest::execAssertEqual_Plane },
			{ "AssertEqual_Quat", &AFunctionalTest::execAssertEqual_Quat },
			{ "AssertEqual_Rotator", &AFunctionalTest::execAssertEqual_Rotator },
			{ "AssertEqual_String", &AFunctionalTest::execAssertEqual_String },
			{ "AssertEqual_TraceQueryResults", &AFunctionalTest::execAssertEqual_TraceQueryResults },
			{ "AssertEqual_Transform", &AFunctionalTest::execAssertEqual_Transform },
			{ "AssertEqual_Vector", &AFunctionalTest::execAssertEqual_Vector },
			{ "AssertEqual_Vector2D", &AFunctionalTest::execAssertEqual_Vector2D },
			{ "AssertEqual_Vector4", &AFunctionalTest::execAssertEqual_Vector4 },
			{ "AssertFalse", &AFunctionalTest::execAssertFalse },
			{ "AssertIsValid", &AFunctionalTest::execAssertIsValid },
			{ "AssertNotEqual_Box2D", &AFunctionalTest::execAssertNotEqual_Box2D },
			{ "AssertNotEqual_Matrix", &AFunctionalTest::execAssertNotEqual_Matrix },
			{ "AssertNotEqual_Plane", &AFunctionalTest::execAssertNotEqual_Plane },
			{ "AssertNotEqual_Quat", &AFunctionalTest::execAssertNotEqual_Quat },
			{ "AssertNotEqual_Rotator", &AFunctionalTest::execAssertNotEqual_Rotator },
			{ "AssertNotEqual_String", &AFunctionalTest::execAssertNotEqual_String },
			{ "AssertNotEqual_Transform", &AFunctionalTest::execAssertNotEqual_Transform },
			{ "AssertNotEqual_Vector", &AFunctionalTest::execAssertNotEqual_Vector },
			{ "AssertNotEqual_Vector2D", &AFunctionalTest::execAssertNotEqual_Vector2D },
			{ "AssertNotEqual_Vector4", &AFunctionalTest::execAssertNotEqual_Vector4 },
			{ "AssertTrue", &AFunctionalTest::execAssertTrue },
			{ "AssertValue_DateTime", &AFunctionalTest::execAssertValue_DateTime },
			{ "AssertValue_Double", &AFunctionalTest::execAssertValue_Double },
			{ "AssertValue_Float", &AFunctionalTest::execAssertValue_Float },
			{ "AssertValue_Int", &AFunctionalTest::execAssertValue_Int },
			{ "FinishTest", &AFunctionalTest::execFinishTest },
			{ "GetCurrentRerunReason", &AFunctionalTest::execGetCurrentRerunReason },
			{ "IsEnabled", &AFunctionalTest::execIsEnabled },
			{ "IsReady", &AFunctionalTest::execIsReady },
			{ "IsRunning", &AFunctionalTest::execIsRunning },
			{ "LogMessage", &AFunctionalTest::execLogMessage },
			{ "RegisterAutoDestroyActor", &AFunctionalTest::execRegisterAutoDestroyActor },
			{ "SetTimeLimit", &AFunctionalTest::execSetTimeLimit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFunctionalTest_AddError_Statics
	{
		struct FunctionalTest_eventAddError_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AddError_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AddError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAddError_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AddError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AddError_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AddError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reporting" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AddError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AddError", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::FunctionalTest_eventAddError_Parms), Z_Construct_UFunction_AFunctionalTest_AddError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AddError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AddError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics
	{
		struct FunctionalTest_eventAddRerun_Parms
		{
			FName Reason;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAddRerun_Parms, Reason), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Causes the test to be rerun for a specific named reason. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Causes the test to be rerun for a specific named reason." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AddRerun", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::FunctionalTest_eventAddRerun_Parms), Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AddRerun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics
	{
		struct FunctionalTest_eventAddWarning_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAddWarning_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reporting" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AddWarning", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::FunctionalTest_eventAddWarning_Parms), Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AddWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics
	{
		struct FunctionalTest_eventAssertEqual_Bool_Parms
		{
			bool Actual;
			bool Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static void NewProp_Actual_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Actual;
		static void NewProp_Expected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Actual_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Bool_Parms*)Obj)->Actual = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Actual_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Expected_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Bool_Parms*)Obj)->Expected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Expected_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Bool_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Bool_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Bool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two bools are equal\n\x09* @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Bool)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two bools are equal\n@param What   A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Bool", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::FunctionalTest_eventAssertEqual_Bool_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics
	{
		struct FunctionalTest_eventAssertEqual_Box2D_Parms
		{
			FBox2D Actual;
			FBox2D Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, Actual), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, Expected), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Box2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Box2D_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two two-component boxes are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Box2D)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two two-component boxes are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Box2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::FunctionalTest_eventAssertEqual_Box2D_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics
	{
		struct FunctionalTest_eventAssertEqual_Double_Parms
		{
			double Actual;
			double Expected;
			FString What;
			double Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Actual;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Double_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Double_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two double are equal within tolerance between two doubles.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} within Tolerance for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Double)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two double are equal within tolerance between two doubles.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} within Tolerance for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Double", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::FunctionalTest_eventAssertEqual_Double_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics
	{
		struct FunctionalTest_eventAssertEqual_Float_Parms
		{
			float Actual;
			float Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Float_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Float_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two floats are equal within tolerance between two floats.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} within Tolerance for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Float)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two floats are equal within tolerance between two floats.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} within Tolerance for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Float", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::FunctionalTest_eventAssertEqual_Float_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics
	{
		struct FunctionalTest_eventAssertEqual_Int_Parms
		{
			int32 Actual;
			int32 Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Int_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Int_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Int_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Int_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Int_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Int_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two ints are equal\n\x09* @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Integer)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two ints are equal\n@param What   A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Int", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::FunctionalTest_eventAssertEqual_Int_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct FunctionalTest_eventAssertEqual_Matrix_Parms
		{
			FMatrix Actual;
			FMatrix Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, Actual), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, Expected), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Matrix_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Matrix_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two 4x4 matrices are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Matrix)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two 4x4 matrices are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Matrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::FunctionalTest_eventAssertEqual_Matrix_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics
	{
		struct FunctionalTest_eventAssertEqual_Name_Parms
		{
			FName Actual;
			FName Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Actual;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Name_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Name_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Name_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Name_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Name_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Name_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two FNames are equal\n\x09* @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (FName)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two FNames are equal\n@param What   A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Name", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::FunctionalTest_eventAssertEqual_Name_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics
	{
		struct FunctionalTest_eventAssertEqual_Object_Parms
		{
			UObject* Actual;
			UObject* Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Object_Parms, Actual), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Object_Parms, Expected), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Object_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Object_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Object_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Object_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two Objects are equal\n\x09* @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Object)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two Objects are equal\n@param What   A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Object", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::FunctionalTest_eventAssertEqual_Object_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics
	{
		struct FunctionalTest_eventAssertEqual_Plane_Parms
		{
			FPlane Actual;
			FPlane Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, Actual), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, Expected), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Plane_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Plane_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two planes are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Plane)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two planes are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Plane", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::FunctionalTest_eventAssertEqual_Plane_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics
	{
		struct FunctionalTest_eventAssertEqual_Quat_Parms
		{
			FQuat Actual;
			FQuat Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, Actual), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, Expected), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Quat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Quat_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two quats are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Quat)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two quats are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Quat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::FunctionalTest_eventAssertEqual_Quat_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics
	{
		struct FunctionalTest_eventAssertEqual_Rotator_Parms
		{
			FRotator Actual;
			FRotator Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, Actual), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, Expected), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Rotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Rotator_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that the component angles of two rotators are all equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Rotator)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that the component angles of two rotators are all equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Rotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::FunctionalTest_eventAssertEqual_Rotator_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics
	{
		struct FunctionalTest_eventAssertEqual_String_Parms
		{
			FString Actual;
			FString Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_String_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_String_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_String_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_String_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_String_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_String_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two Strings are equal.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (String)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two Strings are equal.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_String", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::FunctionalTest_eventAssertEqual_String_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics
	{
		struct FunctionalTest_eventAssertEqual_TraceQueryResults_Parms
		{
			const UTraceQueryTestResults* Actual;
			const UTraceQueryTestResults* Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actual_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expected_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Actual_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms, Actual), Z_Construct_UClass_UTraceQueryTestResults_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Actual_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Actual_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Expected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms, Expected), Z_Construct_UClass_UTraceQueryTestResults_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Expected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Expected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_TraceQueryResults_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two TraceQueryResults are equal.\n\x09* @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (TraceQuery)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two TraceQueryResults are equal.\n@param What   A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_TraceQueryResults", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::FunctionalTest_eventAssertEqual_TraceQueryResults_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics
	{
		struct FunctionalTest_eventAssertEqual_Transform_Parms
		{
			FTransform Actual;
			FTransform Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actual_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expected_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Actual_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, Actual), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Actual_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Actual_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Expected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, Expected), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Expected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Expected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Transform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Transform_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two transforms are (components memberwise - translation, rotation, scale) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Transform)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two transforms are (components memberwise - translation, rotation, scale) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Transform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::FunctionalTest_eventAssertEqual_Transform_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics
	{
		struct FunctionalTest_eventAssertEqual_Vector_Parms
		{
			FVector Actual;
			FVector Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, Actual), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, Expected), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Vector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Vector_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two vectors are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Vector)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two vectors are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Vector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::FunctionalTest_eventAssertEqual_Vector_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics
	{
		struct FunctionalTest_eventAssertEqual_Vector2D_Parms
		{
			FVector2D Actual;
			FVector2D Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, Actual), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, Expected), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Vector2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Vector2D_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two two-component vectors are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Vector2D)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two two-component vectors are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Vector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::FunctionalTest_eventAssertEqual_Vector2D_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics
	{
		struct FunctionalTest_eventAssertEqual_Vector4_Parms
		{
			FVector4 Actual;
			FVector4 Expected;
			FString What;
			float Tolerance;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, Actual), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, Expected), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_What_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertEqual_Vector4_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Vector4_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two four-component vectors are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Vector4)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two four-component vectors are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Vector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::FunctionalTest_eventAssertEqual_Vector4_Parms), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics
	{
		struct FunctionalTest_eventAssertFalse_Parms
		{
			bool Condition;
			FString Message;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertFalse_Parms*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertFalse_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertFalse_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertFalse_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertFalse_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertFalse_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that a boolean value is false.\n\x09 * @param Message\x09The message to display if the assert fails (\"Assertion Failed: 'Message' for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that a boolean value is false.\n@param Message       The message to display if the assert fails (\"Assertion Failed: 'Message' for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertFalse", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::FunctionalTest_eventAssertFalse_Parms), Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertFalse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics
	{
		struct FunctionalTest_eventAssertIsValid_Parms
		{
			UObject* Object;
			FString Message;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertIsValid_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertIsValid_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertIsValid_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertIsValid_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that a UObject is valid\n\x09 * @param Message\x09The message to display if the object is invalid (\"Invalid object: 'Message' for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that a UObject is valid\n@param Message       The message to display if the object is invalid (\"Invalid object: 'Message' for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertIsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::FunctionalTest_eventAssertIsValid_Parms), Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics
	{
		struct FunctionalTest_eventAssertNotEqual_Box2D_Parms
		{
			FBox2D Actual;
			FBox2D NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Box2D_Parms, Actual), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Box2D_Parms, NotExpected), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Box2D_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Box2D_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_Box2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Box2D_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two two-component boxes are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Box2D)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two two-component boxes are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Box2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::FunctionalTest_eventAssertNotEqual_Box2D_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct FunctionalTest_eventAssertNotEqual_Matrix_Parms
		{
			FMatrix Actual;
			FMatrix NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Matrix_Parms, Actual), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Matrix_Parms, NotExpected), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Matrix_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Matrix_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_Matrix_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Matrix_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two 4x4 matrices are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Matrix)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two 4x4 matrices are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Matrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::FunctionalTest_eventAssertNotEqual_Matrix_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics
	{
		struct FunctionalTest_eventAssertNotEqual_Plane_Parms
		{
			FPlane Actual;
			FPlane NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Plane_Parms, Actual), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Plane_Parms, NotExpected), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Plane_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Plane_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_Plane_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Plane_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two planes are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Plane)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two planes are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Plane", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::FunctionalTest_eventAssertNotEqual_Plane_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics
	{
		struct FunctionalTest_eventAssertNotEqual_Quat_Parms
		{
			FQuat Actual;
			FQuat NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Quat_Parms, Actual), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Quat_Parms, NotExpected), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Quat_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Quat_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_Quat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Quat_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two quats are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Quat)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two quats are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Quat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::FunctionalTest_eventAssertNotEqual_Quat_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics
	{
		struct FunctionalTest_eventAssertNotEqual_Rotator_Parms
		{
			FRotator Actual;
			FRotator NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Rotator_Parms, Actual), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Rotator_Parms, NotExpected), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Rotator_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Rotator_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_Rotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Rotator_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that the component angles of two rotators are all not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Rotator)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that the component angles of two rotators are all not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Rotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::FunctionalTest_eventAssertNotEqual_Rotator_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics
	{
		struct FunctionalTest_eventAssertNotEqual_String_Parms
		{
			FString Actual;
			FString NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_String_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_String_Parms, NotExpected), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_String_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_String_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_String_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_String_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two Strings are not equal.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (String)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two Strings are not equal.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_String", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::FunctionalTest_eventAssertNotEqual_String_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics
	{
		struct FunctionalTest_eventAssertNotEqual_Transform_Parms
		{
			FTransform Actual;
			FTransform NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actual_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotExpected_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_Actual_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Transform_Parms, Actual), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_Actual_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_Actual_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_NotExpected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Transform_Parms, NotExpected), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_NotExpected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_NotExpected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Transform_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Transform_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_Transform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Transform_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two transforms are (components memberwise - translation, rotation, scale) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Transform)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two transforms are (components memberwise - translation, rotation, scale) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Transform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::FunctionalTest_eventAssertNotEqual_Transform_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics
	{
		struct FunctionalTest_eventAssertNotEqual_Vector_Parms
		{
			FVector Actual;
			FVector NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector_Parms, Actual), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector_Parms, NotExpected), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_Vector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Vector_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two vectors are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Vector)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two vectors are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Vector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::FunctionalTest_eventAssertNotEqual_Vector_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics
	{
		struct FunctionalTest_eventAssertNotEqual_Vector2D_Parms
		{
			FVector2D Actual;
			FVector2D NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector2D_Parms, Actual), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector2D_Parms, NotExpected), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector2D_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector2D_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_Vector2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Vector2D_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two two-component vectors are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Vector2D)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two two-component vectors are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Vector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::FunctionalTest_eventAssertNotEqual_Vector2D_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics
	{
		struct FunctionalTest_eventAssertNotEqual_Vector4_Parms
		{
			FVector4 Actual;
			FVector4 NotExpected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector4_Parms, Actual), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector4_Parms, NotExpected), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector4_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector4_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertNotEqual_Vector4_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Vector4_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_NotExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two four-component vectors are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Vector4)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two four-component vectors are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Vector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::FunctionalTest_eventAssertNotEqual_Vector4_Parms), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics
	{
		struct FunctionalTest_eventAssertTrue_Parms
		{
			bool Condition;
			FString Message;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertTrue_Parms*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertTrue_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertTrue_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertTrue_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertTrue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertTrue_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that a boolean value is true.\n\x09 * @param Message\x09The message to display if the assert fails (\"Assertion Failed: 'Message' for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that a boolean value is true.\n@param Message       The message to display if the assert fails (\"Assertion Failed: 'Message' for context ''\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertTrue", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::FunctionalTest_eventAssertTrue_Parms), Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics
	{
		struct FunctionalTest_eventAssertValue_DateTime_Parms
		{
			FDateTime Actual;
			EComparisonMethod ShouldBe;
			FDateTime Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShouldBe_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShouldBe;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, Actual), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ShouldBe_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, ShouldBe), Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, METADATA_PARAMS(nullptr, 0) }; // 675370964
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, Expected), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertValue_DateTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertValue_DateTime_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ShouldBe_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ShouldBe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert on a relationship between two DateTimes.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Value (DateTime)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert on a relationship between two DateTimes.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertValue_DateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::FunctionalTest_eventAssertValue_DateTime_Parms), Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics
	{
		struct FunctionalTest_eventAssertValue_Double_Parms
		{
			double Actual;
			EComparisonMethod ShouldBe;
			double Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Actual;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShouldBe_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShouldBe;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ShouldBe_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, ShouldBe), Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, METADATA_PARAMS(nullptr, 0) }; // 675370964
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertValue_Double_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertValue_Double_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ShouldBe_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ShouldBe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert on a relationship between two doubles.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Value (Double)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert on a relationship between two doubles.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertValue_Double", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::FunctionalTest_eventAssertValue_Double_Parms), Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertValue_Double()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics
	{
		struct FunctionalTest_eventAssertValue_Float_Parms
		{
			float Actual;
			EComparisonMethod ShouldBe;
			float Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShouldBe_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShouldBe;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ShouldBe_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, ShouldBe), Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, METADATA_PARAMS(nullptr, 0) }; // 675370964
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertValue_Float_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertValue_Float_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ShouldBe_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ShouldBe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert on a relationship between two floats.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Value (Float)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert on a relationship between two floats.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertValue_Float", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::FunctionalTest_eventAssertValue_Float_Parms), Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertValue_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics
	{
		struct FunctionalTest_eventAssertValue_Int_Parms
		{
			int32 Actual;
			EComparisonMethod ShouldBe;
			int32 Expected;
			FString What;
			const UObject* ContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Actual;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShouldBe_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShouldBe;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Expected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_What;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ShouldBe_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, ShouldBe), Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, METADATA_PARAMS(nullptr, 0) }; // 675370964
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, What), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_What_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_What_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ContextObject_MetaData)) };
	void Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventAssertValue_Int_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventAssertValue_Int_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_Actual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ShouldBe_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ShouldBe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_Expected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_What,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert on a relationship between two integers.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Value (Integer)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert on a relationship between two integers.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertValue_Int", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::FunctionalTest_eventAssertValue_Int_Parms), Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_AssertValue_Int()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventDebugGatherRelevantActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Used by debug drawing to gather actors this test is using and point at them on the level to better understand test's setup */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Used by debug drawing to gather actors this test is using and point at them on the level to better understand test's setup" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "DebugGatherRelevantActors", nullptr, nullptr, sizeof(FunctionalTest_eventDebugGatherRelevantActors_Parms), Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics
	{
		struct FunctionalTest_eventFinishTest_Parms
		{
			EFunctionalTestResult TestResult;
			FString Message;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TestResult;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_TestResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_TestResult = { "TestResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventFinishTest_Parms, TestResult), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(nullptr, 0) }; // 3652079907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventFinishTest_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_TestResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_TestResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "FinishTest", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::FunctionalTest_eventFinishTest_Parms), Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_FinishTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics
	{
		struct FunctionalTest_eventGetCurrentRerunReason_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventGetCurrentRerunReason_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Returns the current re-run reason if we're in a named re-run. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Returns the current re-run reason if we're in a named re-run." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "GetCurrentRerunReason", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::FunctionalTest_eventGetCurrentRerunReason_Parms), Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics
	{
		struct FunctionalTest_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventIsEnabled_Parms), &Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::FunctionalTest_eventIsEnabled_Parms), Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_IsReady_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventIsReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventIsReady_Parms), &Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * IsReady() is called once per frame after a test is run, until it returns true.  You should use this function to\n\x09 * delay Start being called on the test until preconditions are met.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "IsReady() is called once per frame after a test is run, until it returns true.  You should use this function to\ndelay Start being called on the test until preconditions are met." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "IsReady", nullptr, nullptr, sizeof(FunctionalTest_eventIsReady_Parms), Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_IsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics
	{
		struct FunctionalTest_eventIsRunning_Parms
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
	void Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventIsRunning_Parms), &Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "// AActor interface end\n" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "AActor interface end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "IsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::FunctionalTest_eventIsRunning_Parms), Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics
	{
		struct FunctionalTest_eventLogMessage_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventLogMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "LogMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::FunctionalTest_eventLogMessage_Parms), Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_LogMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TestResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_TestResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_TestResult = { "TestResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms, TestResult), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(nullptr, 0) }; // 3652079907
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_TestResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_TestResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "OnAdditionalTestFinishedMessageRequest", nullptr, nullptr, sizeof(FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms), Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTest_eventOnWantsReRunCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTest_eventOnWantsReRunCheck_Parms), &Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** retrieves information whether test wants to have another run just after finishing */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "retrieves information whether test wants to have another run just after finishing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "OnWantsReRunCheck", nullptr, nullptr, sizeof(FunctionalTest_eventOnWantsReRunCheck_Parms), Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Prepare Test is fired once the test starts up, before the test IsReady() and thus before Start Test is called.\n\x09 * So if there's some initial conditions or setup that you might need for your IsReady() check, you might want\n\x09 * to do that here.\n\x09 */" },
		{ "DisplayName", "Prepare Test" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Prepare Test is fired once the test starts up, before the test IsReady() and thus before Start Test is called.\nSo if there's some initial conditions or setup that you might need for your IsReady() check, you might want\nto do that here." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "ReceivePrepareTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called once the IsReady() check for the test returns true.  After that happens the test has Officially started,\n\x09 * and it will begin receiving Ticks in the blueprint.\n\x09 */" },
		{ "DisplayName", "Start Test" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Called once the IsReady() check for the test returns true.  After that happens the test has Officially started,\nand it will begin receiving Ticks in the blueprint." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "ReceiveStartTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics
	{
		struct FunctionalTest_eventRegisterAutoDestroyActor_Parms
		{
			AActor* ActorToAutoDestroy;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToAutoDestroy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::NewProp_ActorToAutoDestroy = { "ActorToAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventRegisterAutoDestroyActor_Parms, ActorToAutoDestroy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::NewProp_ActorToAutoDestroy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development" },
		{ "Comment", "/** Actors registered this way will be automatically destroyed (by limiting their lifespan)\n\x09 *\x09on test finish */" },
		{ "Keywords", "Delete" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Actors registered this way will be automatically destroyed (by limiting their lifespan)\n    on test finish" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "RegisterAutoDestroyActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::FunctionalTest_eventRegisterAutoDestroyActor_Parms), Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics
	{
		struct FunctionalTest_eventSetTimeLimit_Parms
		{
			float NewTimeLimit;
			EFunctionalTestResult ResultWhenTimeRunsOut;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTimeLimit;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResultWhenTimeRunsOut_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultWhenTimeRunsOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_NewTimeLimit = { "NewTimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventSetTimeLimit_Parms, NewTimeLimit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_ResultWhenTimeRunsOut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_ResultWhenTimeRunsOut = { "ResultWhenTimeRunsOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTest_eventSetTimeLimit_Parms, ResultWhenTimeRunsOut), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(nullptr, 0) }; // 3652079907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_NewTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_ResultWhenTimeRunsOut_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_ResultWhenTimeRunsOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "SetTimeLimit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::FunctionalTest_eventSetTimeLimit_Parms), Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFunctionalTest_SetTimeLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionalTest);
	UClass* Z_Construct_UClass_AFunctionalTest_NoRegister()
	{
		return AFunctionalTest::StaticClass();
	}
	struct Z_Construct_UClass_AFunctionalTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogErrorHandling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogErrorHandling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LogErrorHandling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogWarningHandling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogWarningHandling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LogWarningHandling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObservationPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObservationPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomNumbersStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomNumbersStream;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreparationTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreparationTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimesUpMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TimesUpMessage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimesUpResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimesUpResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimesUpResult;
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AutoDestroyActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoDestroyActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoDestroyActors;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TestName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[];
#endif
		static void NewProp_bIsRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFunctionalTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFunctionalTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFunctionalTest_AddError, "AddError" }, // 291889411
		{ &Z_Construct_UFunction_AFunctionalTest_AddRerun, "AddRerun" }, // 1710897784
		{ &Z_Construct_UFunction_AFunctionalTest_AddWarning, "AddWarning" }, // 1509401163
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool, "AssertEqual_Bool" }, // 3797601818
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D, "AssertEqual_Box2D" }, // 1905195367
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double, "AssertEqual_Double" }, // 1902502558
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float, "AssertEqual_Float" }, // 1193057296
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int, "AssertEqual_Int" }, // 3404860720
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix, "AssertEqual_Matrix" }, // 2241180181
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name, "AssertEqual_Name" }, // 353981216
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object, "AssertEqual_Object" }, // 2798487051
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane, "AssertEqual_Plane" }, // 2347965234
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat, "AssertEqual_Quat" }, // 3063327508
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator, "AssertEqual_Rotator" }, // 3326902745
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_String, "AssertEqual_String" }, // 1144975626
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults, "AssertEqual_TraceQueryResults" }, // 3391319888
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform, "AssertEqual_Transform" }, // 891135690
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector, "AssertEqual_Vector" }, // 684670592
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D, "AssertEqual_Vector2D" }, // 1597125465
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4, "AssertEqual_Vector4" }, // 1790575850
		{ &Z_Construct_UFunction_AFunctionalTest_AssertFalse, "AssertFalse" }, // 3677770912
		{ &Z_Construct_UFunction_AFunctionalTest_AssertIsValid, "AssertIsValid" }, // 871944501
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D, "AssertNotEqual_Box2D" }, // 3760025898
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix, "AssertNotEqual_Matrix" }, // 2307369145
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane, "AssertNotEqual_Plane" }, // 3005313556
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat, "AssertNotEqual_Quat" }, // 1187189178
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator, "AssertNotEqual_Rotator" }, // 1538910193
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String, "AssertNotEqual_String" }, // 2458778424
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform, "AssertNotEqual_Transform" }, // 1683058804
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector, "AssertNotEqual_Vector" }, // 2017053496
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D, "AssertNotEqual_Vector2D" }, // 889606249
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4, "AssertNotEqual_Vector4" }, // 36794755
		{ &Z_Construct_UFunction_AFunctionalTest_AssertTrue, "AssertTrue" }, // 3449703468
		{ &Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime, "AssertValue_DateTime" }, // 2669360574
		{ &Z_Construct_UFunction_AFunctionalTest_AssertValue_Double, "AssertValue_Double" }, // 816909123
		{ &Z_Construct_UFunction_AFunctionalTest_AssertValue_Float, "AssertValue_Float" }, // 3167678694
		{ &Z_Construct_UFunction_AFunctionalTest_AssertValue_Int, "AssertValue_Int" }, // 3326555199
		{ &Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors, "DebugGatherRelevantActors" }, // 4148580989
		{ &Z_Construct_UFunction_AFunctionalTest_FinishTest, "FinishTest" }, // 1580412646
		{ &Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason, "GetCurrentRerunReason" }, // 2124078230
		{ &Z_Construct_UFunction_AFunctionalTest_IsEnabled, "IsEnabled" }, // 3361516002
		{ &Z_Construct_UFunction_AFunctionalTest_IsReady, "IsReady" }, // 2278171887
		{ &Z_Construct_UFunction_AFunctionalTest_IsRunning, "IsRunning" }, // 1923212253
		{ &Z_Construct_UFunction_AFunctionalTest_LogMessage, "LogMessage" }, // 3805458601
		{ &Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest, "OnAdditionalTestFinishedMessageRequest" }, // 4108118913
		{ &Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck, "OnWantsReRunCheck" }, // 942658505
		{ &Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest, "ReceivePrepareTest" }, // 3544002610
		{ &Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest, "ReceiveStartTest" }, // 2967233372
		{ &Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor, "RegisterAutoDestroyActor" }, // 3134243228
		{ &Z_Construct_UFunction_AFunctionalTest_SetTimeLimit, "SetTimeLimit" }, // 2333866684
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "FunctionalTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestLabel_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestLabel = { "TestLabel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, TestLabel), METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * The author is the group or person responsible for the test.  Generally you should use a group name\n\x09 * like 'Editor Team' or 'Rendering Team'.  When a test fails it may not be obvious who should investigate\n\x09 * so this provides a associate responsible groups with tests.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The author is the group or person responsible for the test.  Generally you should use a group name\nlike 'Editor Team' or 'Rendering Team'.  When a test fails it may not be obvious who should investigate\nso this provides a associate responsible groups with tests." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, Author), METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * A description of the test, like what is this test trying to determine.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "A description of the test, like what is this test trying to determine." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, Description), METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * Allows a test to be disabled.  If a test is disabled, it will not appear in the set of\n\x09 * runnable tests (after saving the map).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ScriptName", "IsEnabledValue" },
		{ "ToolTip", "Allows a test to be disabled.  If a test is disabled, it will not appear in the set of\nrunnable tests (after saving the map)." },
	};
#endif
	void Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((AFunctionalTest*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AFunctionalTest), &Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * Determines how LogErrors are handled during this test.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ScriptName", "LogErrorHandling" },
		{ "ToolTip", "Determines how LogErrors are handled during this test." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling = { "LogErrorHandling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, LogErrorHandling), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling_MetaData)) }; // 3995854911
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * Determines how LogWarnings are handled during this test.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ScriptName", "LogWarningHandling" },
		{ "ToolTip", "Determines how LogWarnings are handled during this test." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling = { "LogWarningHandling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, LogWarningHandling), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling_MetaData)) }; // 3995854911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_ObservationPoint_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * Allows you to specify another actor to view the test from.  Usually this is a camera you place\n\x09 * in the map to observe the test.  Not useful when running on a build farm, but provides a handy\n\x09 * way to observe the test from a different location than you place the functional test actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Allows you to specify another actor to view the test from.  Usually this is a camera you place\nin the map to observe the test.  Not useful when running on a build farm, but provides a handy\nway to observe the test from a different location than you place the functional test actor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_ObservationPoint = { "ObservationPoint", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, ObservationPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_ObservationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_ObservationPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RandomNumbersStream_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * A random number stream that you can use during testing.  This number stream will be consistent\n\x09 * every time the test is run.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "A random number stream that you can use during testing.  This number stream will be consistent\nevery time the test is run." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RandomNumbersStream = { "RandomNumbersStream", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, RandomNumbersStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RandomNumbersStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RandomNumbersStream_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, Result), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result_MetaData)) }; // 3652079907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_PreparationTimeLimit_MetaData[] = {
		{ "Category", "Timeout" },
		{ "Comment", "/** The Test's time limit for preparation, this is the time it has to return true when checking IsReady(). '0' means no limit. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "The Test's time limit for preparation, this is the time it has to return true when checking IsReady(). '0' means no limit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_PreparationTimeLimit = { "PreparationTimeLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, PreparationTimeLimit), METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_PreparationTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_PreparationTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimeLimit_MetaData[] = {
		{ "Category", "Timeout" },
		{ "Comment", "/** Test's time limit. '0' means no limit */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Test's time limit. '0' means no limit" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, TimeLimit), METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpMessage_MetaData[] = {
		{ "Category", "Timeout" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpMessage = { "TimesUpMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, TimesUpMessage), METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpMessage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult_MetaData[] = {
		{ "Category", "Timeout" },
		{ "Comment", "/** If test is limited by time this is the result that will be returned when time runs out */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "If test is limited by time this is the result that will be returned when time runs out" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult = { "TimesUpResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, TimesUpResult), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult_MetaData)) }; // 3652079907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestPrepare_MetaData[] = {
		{ "Comment", "/** Called when the test is ready to prepare */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Called when the test is ready to prepare" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestPrepare = { "OnTestPrepare", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, OnTestPrepare), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestPrepare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestPrepare_MetaData)) }; // 3142850737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestStart_MetaData[] = {
		{ "Comment", "/** Called when the test is started */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Called when the test is started" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestStart = { "OnTestStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, OnTestStart), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestStart_MetaData)) }; // 3142850737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestFinished_MetaData[] = {
		{ "Comment", "/** Called when the test is finished. Use it to clean up */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Called when the test is finished. Use it to clean up" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestFinished = { "OnTestFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, OnTestFinished), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestFinished_MetaData)) }; // 3142850737
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors_Inner = { "AutoDestroyActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors = { "AutoDestroyActors", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, AutoDestroyActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RenderComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RenderComp = { "RenderComp", nullptr, (EPropertyFlags)0x0014000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, RenderComp), Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RenderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RenderComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0014000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, TestName), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning_MetaData[] = {
		{ "Comment", "// AG TEMP - solving a compile issue in a temp way to unblock the bui.d\n" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "AG TEMP - solving a compile issue in a temp way to unblock the bui.d" },
	};
#endif
	void Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning_SetBit(void* Obj)
	{
		((AFunctionalTest*)Obj)->bIsRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFunctionalTest), &Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TotalTime_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFunctionalTest, TotalTime), METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TotalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TotalTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFunctionalTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Author,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_ObservationPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RandomNumbersStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_PreparationTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestPrepare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RenderComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TotalTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFunctionalTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalTest_Statics::ClassParams = {
		&AFunctionalTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFunctionalTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFunctionalTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFunctionalTest()
	{
		if (!Z_Registration_Info_UClass_AFunctionalTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionalTest.OuterSingleton, Z_Construct_UClass_AFunctionalTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFunctionalTest.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalTest>()
	{
		return AFunctionalTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalTest);
	AFunctionalTest::~AFunctionalTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::EnumInfo[] = {
		{ EComparisonMethod_StaticEnum, TEXT("EComparisonMethod"), &Z_Registration_Info_UEnum_EComparisonMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 675370964U) },
		{ EFunctionalTestResult_StaticEnum, TEXT("EFunctionalTestResult"), &Z_Registration_Info_UEnum_EFunctionalTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3652079907U) },
		{ EFunctionalTestLogHandling_StaticEnum, TEXT("EFunctionalTestLogHandling"), &Z_Registration_Info_UEnum_EFunctionalTestLogHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3995854911U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationPerformaceHelper, UAutomationPerformaceHelper::StaticClass, TEXT("UAutomationPerformaceHelper"), &Z_Registration_Info_UClass_UAutomationPerformaceHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationPerformaceHelper), 944337201U) },
		{ Z_Construct_UClass_AFunctionalTest, AFunctionalTest::StaticClass, TEXT("AFunctionalTest"), &Z_Registration_Info_UClass_AFunctionalTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionalTest), 4024519887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_3173007177(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
