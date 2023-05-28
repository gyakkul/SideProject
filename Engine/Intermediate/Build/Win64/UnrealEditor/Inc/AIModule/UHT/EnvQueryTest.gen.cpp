// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTestClamping();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreEquation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEQSNormalizationType();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEQSNormalizationType;
	static UEnum* EEQSNormalizationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEQSNormalizationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEQSNormalizationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEQSNormalizationType, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEQSNormalizationType"));
		}
		return Z_Registration_Info_UEnum_EEQSNormalizationType.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEQSNormalizationType>()
	{
		return EEQSNormalizationType_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics::Enumerators[] = {
		{ "EEQSNormalizationType::Absolute", (int64)EEQSNormalizationType::Absolute },
		{ "EEQSNormalizationType::RelativeToScores", (int64)EEQSNormalizationType::RelativeToScores },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "// Use 0 as the base of normalization range.\n" },
		{ "Absolute.Name", "EEQSNormalizationType::Absolute" },
		{ "Absolute.ToolTip", "Use 0 as the base of normalization range." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "RelativeToScores.Comment", "// Use lowest item score as the base of normalization range.\n" },
		{ "RelativeToScores.Name", "EEQSNormalizationType::RelativeToScores" },
		{ "RelativeToScores.ToolTip", "Use lowest item score as the base of normalization range." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEQSNormalizationType",
		"EEQSNormalizationType",
		Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEQSNormalizationType()
	{
		if (!Z_Registration_Info_UEnum_EEQSNormalizationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEQSNormalizationType.InnerSingleton, Z_Construct_UEnum_AIModule_EEQSNormalizationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEQSNormalizationType.InnerSingleton;
	}
	void UEnvQueryTest::StaticRegisterNativesUEnvQueryTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest);
	UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister()
	{
		return UEnvQueryTest::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TestOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestPurpose_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestPurpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestComment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestComment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultipleContextFilterOp_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultipleContextFilterOp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultipleContextScoreOp_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultipleContextScoreOp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValueMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatValueMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValueMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatValueMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoringEquation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScoringEquation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMinType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClampMinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMaxType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClampMaxType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalizationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalizationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScoreClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScoreClampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoringFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScoringFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefineReferenceValue_MetaData[];
#endif
		static void NewProp_bDefineReferenceValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefineReferenceValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorkOnFloatValues_MetaData[];
#endif
		static void NewProp_bWorkOnFloatValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorkOnFloatValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryTest.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder_MetaData[] = {
		{ "Comment", "/** Number of test as defined in data asset */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Number of test as defined in data asset" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder = { "TestOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, TestOrder), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** The purpose of this test.  Should it be used for filtering possible results, scoring them, or both? */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "The purpose of this test.  Should it be used for filtering possible results, scoring them, or both?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose = { "TestPurpose", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, TestPurpose), Z_Construct_UEnum_AIModule_EEnvTestPurpose, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose_MetaData)) }; // 1017917835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** Optional comment or explanation about what this test is for.  Useful when the purpose of tests may not be clear,\n\x09  * especially when there are multiple tests of the same type. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Optional comment or explanation about what this test is for.  Useful when the purpose of tests may not be clear,\nespecially when there are multiple tests of the same type." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment = { "TestComment", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, TestComment), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Determines filtering operator when context returns multiple items */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Determines filtering operator when context returns multiple items" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp = { "MultipleContextFilterOp", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, MultipleContextFilterOp), Z_Construct_UEnum_AIModule_EEnvTestFilterOperator, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp_MetaData)) }; // 1101179190
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "/** Determines scoring operator when context returns multiple items */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Determines scoring operator when context returns multiple items" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp = { "MultipleContextScoreOp", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, MultipleContextScoreOp), Z_Construct_UEnum_AIModule_EEnvTestScoreOperator, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp_MetaData)) }; // 1809833517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Does this test filter out results that are below a lower limit, above an upper limit, or both?  Or does it just look for a matching value? */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Does this test filter out results that are below a lower limit, above an upper limit, or both?  Or does it just look for a matching value?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, FilterType), Z_Construct_UEnum_AIModule_EEnvTestFilterType, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType_MetaData)) }; // 1409564529
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Desired boolean value of the test for scoring to occur or filtering test to pass. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Desired boolean value of the test for scoring to occur or filtering test to pass." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, BoolValue), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue_MetaData)) }; // 309611824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Minimum limit (inclusive) of valid values for the raw test value. Lower values will be discarded as invalid. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Minimum limit (inclusive) of valid values for the raw test value. Lower values will be discarded as invalid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin = { "FloatValueMin", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, FloatValueMin), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Maximum limit (inclusive) of valid values for the raw test value. Higher values will be discarded as invalid. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Maximum limit (inclusive) of valid values for the raw test value. Higher values will be discarded as invalid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax = { "FloatValueMax", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, FloatValueMax), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "/** The shape of the curve equation to apply to the normalized score before multiplying by factor. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "The shape of the curve equation to apply to the normalized score before multiplying by factor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation = { "ScoringEquation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, ScoringEquation), Z_Construct_UEnum_AIModule_EEnvTestScoreEquation, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation_MetaData)) }; // 600997327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "/** How should the lower bound for normalization of the raw test value before applying the scoring formula be determined?\n\x09    Should it use the lowest value found (tested), the lower threshold for filtering, or a separate specified normalization minimum? */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "How should the lower bound for normalization of the raw test value before applying the scoring formula be determined?\n          Should it use the lowest value found (tested), the lower threshold for filtering, or a separate specified normalization minimum?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType = { "ClampMinType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, ClampMinType), Z_Construct_UEnum_AIModule_EEnvQueryTestClamping, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType_MetaData)) }; // 3479088029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "/** How should the upper bound for normalization of the raw test value before applying the scoring formula be determined?\n\x09    Should it use the highest value found (tested), the upper threshold for filtering, or a separate specified normalization maximum? */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "How should the upper bound for normalization of the raw test value before applying the scoring formula be determined?\n          Should it use the highest value found (tested), the upper threshold for filtering, or a separate specified normalization maximum?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType = { "ClampMaxType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, ClampMaxType), Z_Construct_UEnum_AIModule_EEnvQueryTestClamping, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType_MetaData)) }; // 3479088029
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "/** Specifies how to determine value span used to normalize scores */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Specifies how to determine value span used to normalize scores" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType = { "NormalizationType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, NormalizationType), Z_Construct_UEnum_AIModule_EEQSNormalizationType, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_MetaData)) }; // 322454353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "/** Minimum value to use to normalize the raw test value before applying scoring formula. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Minimum value to use to normalize the raw test value before applying scoring formula." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin = { "ScoreClampMin", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, ScoreClampMin), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "/** Maximum value to use to normalize the raw test value before applying scoring formula. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Maximum value to use to normalize the raw test value before applying scoring formula." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax = { "ScoreClampMax", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, ScoreClampMax), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor_MetaData[] = {
		{ "Category", "Score" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** The weight (factor) by which to multiply the normalized score after the scoring equation is applied. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "The weight (factor) by which to multiply the normalized score after the scoring equation is applied." },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor = { "ScoringFactor", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, ScoringFactor), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "/** When specified gets used to normalize test's results in such a way that the closer a value is to ReferenceValue\n\x09 *\x09the higher normalized result it will produce. Value farthest from ReferenceValue will be normalized\n\x09 *\x09to 0, and all the other values in between will get normalized linearly with the distance to ReferenceValue. */" },
		{ "EditCondition", "bDefineReferenceValue" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "When specified gets used to normalize test's results in such a way that the closer a value is to ReferenceValue\n    the higher normalized result it will produce. Value farthest from ReferenceValue will be normalized\n    to 0, and all the other values in between will get normalized linearly with the distance to ReferenceValue." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue = { "ReferenceValue", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest, ReferenceValue), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "/** When set to true enables usage of ReferenceValue. It's false by default */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "When set to true enables usage of ReferenceValue. It's false by default" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_SetBit(void* Obj)
	{
		((UEnvQueryTest*)Obj)->bDefineReferenceValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue = { "bDefineReferenceValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvQueryTest), &Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_MetaData[] = {
		{ "Comment", "/** When set, test operates on float values (e.g. distance, with AtLeast, UpTo conditions),\n\x09 *  otherwise it will accept bool values (e.g. visibility, with Equals condition) */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "When set, test operates on float values (e.g. distance, with AtLeast, UpTo conditions),\notherwise it will accept bool values (e.g. visibility, with Equals condition)" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_SetBit(void* Obj)
	{
		((UEnvQueryTest*)Obj)->bWorkOnFloatValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues = { "bWorkOnFloatValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnvQueryTest), &Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Statics::ClassParams = {
		&UEnvQueryTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTest.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest>()
	{
		return UEnvQueryTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest);
	UEnvQueryTest::~UEnvQueryTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_Statics::EnumInfo[] = {
		{ EEQSNormalizationType_StaticEnum, TEXT("EEQSNormalizationType"), &Z_Registration_Info_UEnum_EEQSNormalizationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 322454353U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest, UEnvQueryTest::StaticClass, TEXT("UEnvQueryTest"), &Z_Registration_Info_UClass_UEnvQueryTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest), 2083434435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_59855552(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
