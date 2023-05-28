// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTypes() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTypes();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTypes_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIParamType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvDirection();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvOverlapShape();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryParam();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTestClamping();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTrace();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestCost();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreEquation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestWeight();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTraceShape();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvOverlapData();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestPurpose;
	static UEnum* EEnvTestPurpose_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestPurpose, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestPurpose"));
		}
		return Z_Registration_Info_UEnum_EEnvTestPurpose.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestPurpose::Type>()
	{
		return EEnvTestPurpose_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enumerators[] = {
		{ "EEnvTestPurpose::Filter", (int64)EEnvTestPurpose::Filter },
		{ "EEnvTestPurpose::Score", (int64)EEnvTestPurpose::Score },
		{ "EEnvTestPurpose::FilterAndScore", (int64)EEnvTestPurpose::FilterAndScore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enum_MetaDataParams[] = {
		{ "Filter.DisplayName", "Filter Only" },
		{ "Filter.Name", "EEnvTestPurpose::Filter" },
		{ "FilterAndScore.DisplayName", "Filter and Score" },
		{ "FilterAndScore.Name", "EEnvTestPurpose::FilterAndScore" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Score.DisplayName", "Score Only" },
		{ "Score.Name", "EEnvTestPurpose::Score" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTestPurpose",
		"EEnvTestPurpose::Type",
		Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestPurpose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestPurpose.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestPurpose_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTestPurpose.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestFilterType;
	static UEnum* EEnvTestFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterType, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestFilterType"));
		}
		return Z_Registration_Info_UEnum_EEnvTestFilterType.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestFilterType::Type>()
	{
		return EEnvTestFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enumerators[] = {
		{ "EEnvTestFilterType::Minimum", (int64)EEnvTestFilterType::Minimum },
		{ "EEnvTestFilterType::Maximum", (int64)EEnvTestFilterType::Maximum },
		{ "EEnvTestFilterType::Range", (int64)EEnvTestFilterType::Range },
		{ "EEnvTestFilterType::Match", (int64)EEnvTestFilterType::Match },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enum_MetaDataParams[] = {
		{ "Match.Comment", "/** For Boolean tests. */" },
		{ "Match.Name", "EEnvTestFilterType::Match" },
		{ "Match.ToolTip", "For Boolean tests." },
		{ "Maximum.Comment", "/** For numeric tests. */" },
		{ "Maximum.Name", "EEnvTestFilterType::Maximum" },
		{ "Maximum.ToolTip", "For numeric tests." },
		{ "Minimum.Comment", "/** For numeric tests. */" },
		{ "Minimum.Name", "EEnvTestFilterType::Minimum" },
		{ "Minimum.ToolTip", "For numeric tests." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Range.Comment", "/** For numeric tests. */" },
		{ "Range.Name", "EEnvTestFilterType::Range" },
		{ "Range.ToolTip", "For numeric tests." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTestFilterType",
		"EEnvTestFilterType::Type",
		Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestFilterType.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTestFilterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestScoreEquation;
	static UEnum* EEnvTestScoreEquation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestScoreEquation"));
		}
		return Z_Registration_Info_UEnum_EEnvTestScoreEquation.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestScoreEquation::Type>()
	{
		return EEnvTestScoreEquation_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enumerators[] = {
		{ "EEnvTestScoreEquation::Linear", (int64)EEnvTestScoreEquation::Linear },
		{ "EEnvTestScoreEquation::Square", (int64)EEnvTestScoreEquation::Square },
		{ "EEnvTestScoreEquation::InverseLinear", (int64)EEnvTestScoreEquation::InverseLinear },
		{ "EEnvTestScoreEquation::SquareRoot", (int64)EEnvTestScoreEquation::SquareRoot },
		{ "EEnvTestScoreEquation::Constant", (int64)EEnvTestScoreEquation::Constant },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enum_MetaDataParams[] = {
		{ "Constant.Name", "EEnvTestScoreEquation::Constant" },
		{ "InverseLinear.Name", "EEnvTestScoreEquation::InverseLinear" },
		{ "Linear.Name", "EEnvTestScoreEquation::Linear" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Square.Name", "EEnvTestScoreEquation::Square" },
		{ "SquareRoot.Name", "EEnvTestScoreEquation::SquareRoot" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTestScoreEquation",
		"EEnvTestScoreEquation::Type",
		Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreEquation()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestScoreEquation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestScoreEquation.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestScoreEquation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTestScoreEquation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestWeight;
	static UEnum* EEnvTestWeight_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestWeight, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestWeight"));
		}
		return Z_Registration_Info_UEnum_EEnvTestWeight.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestWeight::Type>()
	{
		return EEnvTestWeight_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enumerators[] = {
		{ "EEnvTestWeight::None", (int64)EEnvTestWeight::None },
		{ "EEnvTestWeight::Square", (int64)EEnvTestWeight::Square },
		{ "EEnvTestWeight::Inverse", (int64)EEnvTestWeight::Inverse },
		{ "EEnvTestWeight::Unused", (int64)EEnvTestWeight::Unused },
		{ "EEnvTestWeight::Constant", (int64)EEnvTestWeight::Constant },
		{ "EEnvTestWeight::Skip", (int64)EEnvTestWeight::Skip },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enum_MetaDataParams[] = {
		{ "Constant.Name", "EEnvTestWeight::Constant" },
		{ "Inverse.Name", "EEnvTestWeight::Inverse" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "None.Name", "EEnvTestWeight::None" },
		{ "Skip.DisplayName", "Do not weight" },
		{ "Skip.Name", "EEnvTestWeight::Skip" },
		{ "Square.Name", "EEnvTestWeight::Square" },
		{ "Unused.Hidden", "" },
		{ "Unused.Name", "EEnvTestWeight::Unused" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTestWeight",
		"EEnvTestWeight::Type",
		Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestWeight()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestWeight.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestWeight_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTestWeight.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestCost;
	static UEnum* EEnvTestCost_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestCost, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestCost"));
		}
		return Z_Registration_Info_UEnum_EEnvTestCost.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestCost::Type>()
	{
		return EEnvTestCost_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTestCost_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enumerators[] = {
		{ "EEnvTestCost::Low", (int64)EEnvTestCost::Low },
		{ "EEnvTestCost::Medium", (int64)EEnvTestCost::Medium },
		{ "EEnvTestCost::High", (int64)EEnvTestCost::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enum_MetaDataParams[] = {
		{ "High.Comment", "/** Really expensive calls (e.g. visibility traces, pathfinding).  */" },
		{ "High.Name", "EEnvTestCost::High" },
		{ "High.ToolTip", "Really expensive calls (e.g. visibility traces, pathfinding)." },
		{ "Low.Comment", "/** Reading data, math operations (e.g. distance). */" },
		{ "Low.Name", "EEnvTestCost::Low" },
		{ "Low.ToolTip", "Reading data, math operations (e.g. distance)." },
		{ "Medium.Comment", "/** Processing data from multiple sources (e.g. fire tickets). */" },
		{ "Medium.Name", "EEnvTestCost::Medium" },
		{ "Medium.ToolTip", "Processing data from multiple sources (e.g. fire tickets)." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTestCost",
		"EEnvTestCost::Type",
		Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestCost()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestCost.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestCost.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestCost_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTestCost.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestFilterOperator;
	static UEnum* EEnvTestFilterOperator_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestFilterOperator"));
		}
		return Z_Registration_Info_UEnum_EEnvTestFilterOperator.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestFilterOperator::Type>()
	{
		return EEnvTestFilterOperator_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enumerators[] = {
		{ "EEnvTestFilterOperator::AllPass", (int64)EEnvTestFilterOperator::AllPass },
		{ "EEnvTestFilterOperator::AnyPass", (int64)EEnvTestFilterOperator::AnyPass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enum_MetaDataParams[] = {
		{ "AllPass.Name", "EEnvTestFilterOperator::AllPass" },
		{ "AllPass.Tooltip", "All contexts must pass condition" },
		{ "AnyPass.Name", "EEnvTestFilterOperator::AnyPass" },
		{ "AnyPass.Tooltip", "At least one context must pass condition" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTestFilterOperator",
		"EEnvTestFilterOperator::Type",
		Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterOperator()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestFilterOperator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestFilterOperator.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestFilterOperator_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTestFilterOperator.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestScoreOperator;
	static UEnum* EEnvTestScoreOperator_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestScoreOperator"));
		}
		return Z_Registration_Info_UEnum_EEnvTestScoreOperator.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestScoreOperator::Type>()
	{
		return EEnvTestScoreOperator_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enumerators[] = {
		{ "EEnvTestScoreOperator::AverageScore", (int64)EEnvTestScoreOperator::AverageScore },
		{ "EEnvTestScoreOperator::MinScore", (int64)EEnvTestScoreOperator::MinScore },
		{ "EEnvTestScoreOperator::MaxScore", (int64)EEnvTestScoreOperator::MaxScore },
		{ "EEnvTestScoreOperator::Multiply", (int64)EEnvTestScoreOperator::Multiply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enum_MetaDataParams[] = {
		{ "AverageScore.Name", "EEnvTestScoreOperator::AverageScore" },
		{ "AverageScore.Tooltip", "Use average score from all contexts" },
		{ "MaxScore.Name", "EEnvTestScoreOperator::MaxScore" },
		{ "MaxScore.Tooltip", "Use maximum score from all contexts" },
		{ "MinScore.Name", "EEnvTestScoreOperator::MinScore" },
		{ "MinScore.Tooltip", "Use minimum score from all contexts" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Multiply.Name", "EEnvTestScoreOperator::Multiply" },
		{ "Multiply.Tooltip", "Multiply scores from all contexts" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTestScoreOperator",
		"EEnvTestScoreOperator::Type",
		Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreOperator()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestScoreOperator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestScoreOperator.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestScoreOperator_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTestScoreOperator.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryStatus;
	static UEnum* EEnvQueryStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryStatus, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryStatus"));
		}
		return Z_Registration_Info_UEnum_EEnvQueryStatus.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryStatus::Type>()
	{
		return EEnvQueryStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enumerators[] = {
		{ "EEnvQueryStatus::Processing", (int64)EEnvQueryStatus::Processing },
		{ "EEnvQueryStatus::Success", (int64)EEnvQueryStatus::Success },
		{ "EEnvQueryStatus::Failed", (int64)EEnvQueryStatus::Failed },
		{ "EEnvQueryStatus::Aborted", (int64)EEnvQueryStatus::Aborted },
		{ "EEnvQueryStatus::OwnerLost", (int64)EEnvQueryStatus::OwnerLost },
		{ "EEnvQueryStatus::MissingParam", (int64)EEnvQueryStatus::MissingParam },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enum_MetaDataParams[] = {
		{ "Aborted.Name", "EEnvQueryStatus::Aborted" },
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EEnvQueryStatus::Failed" },
		{ "MissingParam.Name", "EEnvQueryStatus::MissingParam" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "OwnerLost.Name", "EEnvQueryStatus::OwnerLost" },
		{ "Processing.Name", "EEnvQueryStatus::Processing" },
		{ "Success.Name", "EEnvQueryStatus::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvQueryStatus",
		"EEnvQueryStatus::Type",
		Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryStatus.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvQueryStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryRunMode;
	static UEnum* EEnvQueryRunMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryRunMode, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryRunMode"));
		}
		return Z_Registration_Info_UEnum_EEnvQueryRunMode.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryRunMode::Type>()
	{
		return EEnvQueryRunMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enumerators[] = {
		{ "EEnvQueryRunMode::SingleResult", (int64)EEnvQueryRunMode::SingleResult },
		{ "EEnvQueryRunMode::RandomBest5Pct", (int64)EEnvQueryRunMode::RandomBest5Pct },
		{ "EEnvQueryRunMode::RandomBest25Pct", (int64)EEnvQueryRunMode::RandomBest25Pct },
		{ "EEnvQueryRunMode::AllMatching", (int64)EEnvQueryRunMode::AllMatching },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enum_MetaDataParams[] = {
		{ "AllMatching.Name", "EEnvQueryRunMode::AllMatching" },
		{ "AllMatching.Tooltip", "Get all items that match conditions" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "RandomBest25Pct.DisplayName", "Single Random Item from Best 25%" },
		{ "RandomBest25Pct.Name", "EEnvQueryRunMode::RandomBest25Pct" },
		{ "RandomBest25Pct.Tooltip", "Pick random item with score 75% .. 100% of max" },
		{ "RandomBest5Pct.DisplayName", "Single Random Item from Best 5%" },
		{ "RandomBest5Pct.Name", "EEnvQueryRunMode::RandomBest5Pct" },
		{ "RandomBest5Pct.Tooltip", "Pick random item with score 95% .. 100% of max" },
		{ "SingleResult.DisplayName", "Single Best Item" },
		{ "SingleResult.Name", "EEnvQueryRunMode::SingleResult" },
		{ "SingleResult.Tooltip", "Pick first item with the best score" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvQueryRunMode",
		"EEnvQueryRunMode::Type",
		Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryRunMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryRunMode.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryRunMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvQueryRunMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryParam;
	static UEnum* EEnvQueryParam_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryParam, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryParam"));
		}
		return Z_Registration_Info_UEnum_EEnvQueryParam.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryParam::Type>()
	{
		return EEnvQueryParam_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enumerators[] = {
		{ "EEnvQueryParam::Float", (int64)EEnvQueryParam::Float },
		{ "EEnvQueryParam::Int", (int64)EEnvQueryParam::Int },
		{ "EEnvQueryParam::Bool", (int64)EEnvQueryParam::Bool },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "EEnvQueryParam::Bool" },
		{ "Float.Name", "EEnvQueryParam::Float" },
		{ "Int.Name", "EEnvQueryParam::Int" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvQueryParam",
		"EEnvQueryParam::Type",
		Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryParam()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryParam.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryParam_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvQueryParam.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIParamType;
	static UEnum* EAIParamType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIParamType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIParamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAIParamType, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EAIParamType"));
		}
		return Z_Registration_Info_UEnum_EAIParamType.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAIParamType>()
	{
		return EAIParamType_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EAIParamType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enumerators[] = {
		{ "EAIParamType::Float", (int64)EAIParamType::Float },
		{ "EAIParamType::Int", (int64)EAIParamType::Int },
		{ "EAIParamType::Bool", (int64)EAIParamType::Bool },
		{ "EAIParamType::MAX", (int64)EAIParamType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "EAIParamType::Bool" },
		{ "Float.Name", "EAIParamType::Float" },
		{ "Int.Name", "EAIParamType::Int" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EAIParamType::MAX" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EAIParamType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EAIParamType",
		"EAIParamType",
		Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAIParamType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EAIParamType()
	{
		if (!Z_Registration_Info_UEnum_EAIParamType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIParamType.InnerSingleton, Z_Construct_UEnum_AIModule_EAIParamType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIParamType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryTrace;
	static UEnum* EEnvQueryTrace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTrace, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryTrace"));
		}
		return Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryTrace::Type>()
	{
		return EEnvQueryTrace_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enumerators[] = {
		{ "EEnvQueryTrace::None", (int64)EEnvQueryTrace::None },
		{ "EEnvQueryTrace::Navigation", (int64)EEnvQueryTrace::Navigation },
		{ "EEnvQueryTrace::GeometryByChannel", (int64)EEnvQueryTrace::GeometryByChannel },
		{ "EEnvQueryTrace::GeometryByProfile", (int64)EEnvQueryTrace::GeometryByProfile },
		{ "EEnvQueryTrace::NavigationOverLedges", (int64)EEnvQueryTrace::NavigationOverLedges },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enum_MetaDataParams[] = {
		{ "GeometryByChannel.Name", "EEnvQueryTrace::GeometryByChannel" },
		{ "GeometryByProfile.Name", "EEnvQueryTrace::GeometryByProfile" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Navigation.Name", "EEnvQueryTrace::Navigation" },
		{ "NavigationOverLedges.Name", "EEnvQueryTrace::NavigationOverLedges" },
		{ "None.Name", "EEnvQueryTrace::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvQueryTrace",
		"EEnvQueryTrace::Type",
		Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTrace()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryTrace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryTrace.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryTrace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvQueryTrace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTraceShape;
	static UEnum* EEnvTraceShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTraceShape, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTraceShape"));
		}
		return Z_Registration_Info_UEnum_EEnvTraceShape.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTraceShape::Type>()
	{
		return EEnvTraceShape_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enumerators[] = {
		{ "EEnvTraceShape::Line", (int64)EEnvTraceShape::Line },
		{ "EEnvTraceShape::Box", (int64)EEnvTraceShape::Box },
		{ "EEnvTraceShape::Sphere", (int64)EEnvTraceShape::Sphere },
		{ "EEnvTraceShape::Capsule", (int64)EEnvTraceShape::Capsule },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enum_MetaDataParams[] = {
		{ "Box.Name", "EEnvTraceShape::Box" },
		{ "Capsule.Name", "EEnvTraceShape::Capsule" },
		{ "Line.Name", "EEnvTraceShape::Line" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Sphere.Name", "EEnvTraceShape::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTraceShape",
		"EEnvTraceShape::Type",
		Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTraceShape()
	{
		if (!Z_Registration_Info_UEnum_EEnvTraceShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTraceShape.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTraceShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTraceShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvOverlapShape;
	static UEnum* EEnvOverlapShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvOverlapShape, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvOverlapShape"));
		}
		return Z_Registration_Info_UEnum_EEnvOverlapShape.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvOverlapShape::Type>()
	{
		return EEnvOverlapShape_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enumerators[] = {
		{ "EEnvOverlapShape::Box", (int64)EEnvOverlapShape::Box },
		{ "EEnvOverlapShape::Sphere", (int64)EEnvOverlapShape::Sphere },
		{ "EEnvOverlapShape::Capsule", (int64)EEnvOverlapShape::Capsule },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enum_MetaDataParams[] = {
		{ "Box.Name", "EEnvOverlapShape::Box" },
		{ "Capsule.Name", "EEnvOverlapShape::Capsule" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Sphere.Name", "EEnvOverlapShape::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvOverlapShape",
		"EEnvOverlapShape::Type",
		Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvOverlapShape()
	{
		if (!Z_Registration_Info_UEnum_EEnvOverlapShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvOverlapShape.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvOverlapShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvOverlapShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvDirection;
	static UEnum* EEnvDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvDirection, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvDirection"));
		}
		return Z_Registration_Info_UEnum_EEnvDirection.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvDirection::Type>()
	{
		return EEnvDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enumerators[] = {
		{ "EEnvDirection::TwoPoints", (int64)EEnvDirection::TwoPoints },
		{ "EEnvDirection::Rotation", (int64)EEnvDirection::Rotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Rotation.Name", "EEnvDirection::Rotation" },
		{ "Rotation.ToolTip", "Context's rotation will be used as a direction." },
		{ "ScriptName", "EnvDirectionType" },
		{ "TwoPoints.DisplayName", "Two Points" },
		{ "TwoPoints.Name", "EEnvDirection::TwoPoints" },
		{ "TwoPoints.ToolTip", "Direction from location of one context to another." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvDirection",
		"EEnvDirection::Type",
		Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvDirection()
	{
		if (!Z_Registration_Info_UEnum_EEnvDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvDirection.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryTestClamping;
	static UEnum* EEnvQueryTestClamping_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryTestClamping"));
		}
		return Z_Registration_Info_UEnum_EEnvQueryTestClamping.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryTestClamping::Type>()
	{
		return EEnvQueryTestClamping_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enumerators[] = {
		{ "EEnvQueryTestClamping::None", (int64)EEnvQueryTestClamping::None },
		{ "EEnvQueryTestClamping::SpecifiedValue", (int64)EEnvQueryTestClamping::SpecifiedValue },
		{ "EEnvQueryTestClamping::FilterThreshold", (int64)EEnvQueryTestClamping::FilterThreshold },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enum_MetaDataParams[] = {
		{ "FilterThreshold.Comment", "/** Clamp to test's filter threshold. */" },
		{ "FilterThreshold.Name", "EEnvQueryTestClamping::FilterThreshold" },
		{ "FilterThreshold.ToolTip", "Clamp to test's filter threshold." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "None.Name", "EEnvQueryTestClamping::None" },
		{ "SpecifiedValue.Comment", "/** Clamp to value specified in test. */" },
		{ "SpecifiedValue.Name", "EEnvQueryTestClamping::SpecifiedValue" },
		{ "SpecifiedValue.ToolTip", "Clamp to value specified in test." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvQueryTestClamping",
		"EEnvQueryTestClamping::Type",
		Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTestClamping()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryTestClamping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryTestClamping.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryTestClamping_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvQueryTestClamping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvNamedValue;
class UScriptStruct* FEnvNamedValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvNamedValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvNamedValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvNamedValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvNamedValue"));
	}
	return Z_Registration_Info_UScriptStruct_EnvNamedValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvNamedValue>()
{
	return FEnvNamedValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnvNamedValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParamType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvNamedValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvNamedValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "Param" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvNamedValue, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType_MetaData[] = {
		{ "Category", "Param" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvNamedValue, ParamType), Z_Construct_UEnum_AIModule_EAIParamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType_MetaData)) }; // 3721689903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Param" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvNamedValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvNamedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_ParamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvNamedValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvNamedValue",
		sizeof(FEnvNamedValue),
		alignof(FEnvNamedValue),
		Z_Construct_UScriptStruct_FEnvNamedValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvNamedValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EnvNamedValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvNamedValue.InnerSingleton, Z_Construct_UScriptStruct_FEnvNamedValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnvNamedValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvDirection;
class UScriptStruct* FEnvDirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvDirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvDirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvDirection, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvDirection"));
	}
	return Z_Registration_Info_UScriptStruct_EnvDirection.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvDirection>()
{
	return FEnvDirection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnvDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineFrom_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LineFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTo_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LineTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DirMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvDirection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvDirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvDirection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineFrom_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "/** line: start context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "line: start context" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineFrom = { "LineFrom", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvDirection, LineFrom), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineFrom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineTo_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "/** line: finish context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "line: finish context" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineTo = { "LineTo", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvDirection, LineTo), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineTo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "/** rotation: direction context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "rotation: direction context" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvDirection, Rotation), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_DirMode_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "/** defines direction of second line used by test */" },
		{ "DisplayName", "Mode" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "defines direction of second line used by test" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_DirMode = { "DirMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvDirection, DirMode), Z_Construct_UEnum_AIModule_EEnvDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_DirMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_DirMode_MetaData)) }; // 2244747739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_LineTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvDirection_Statics::NewProp_DirMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvDirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvDirection",
		sizeof(FEnvDirection),
		alignof(FEnvDirection),
		Z_Construct_UScriptStruct_FEnvDirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvDirection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvDirection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvDirection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection()
	{
		if (!Z_Registration_Info_UScriptStruct_EnvDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvDirection.InnerSingleton, Z_Construct_UScriptStruct_FEnvDirection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnvDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvTraceData;
class UScriptStruct* FEnvTraceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvTraceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvTraceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvTraceData, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvTraceData"));
	}
	return Z_Registration_Info_UScriptStruct_EnvTraceData.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvTraceData>()
{
	return FEnvTraceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnvTraceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VersionNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationFilter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NavigationFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectDown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProjectionVerticalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProjectionVerticalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SerializedChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TraceProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceShape_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyBlockingHits_MetaData[];
#endif
		static void NewProp_bOnlyBlockingHits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyBlockingHits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanTraceOnNavMesh_MetaData[];
#endif
		static void NewProp_bCanTraceOnNavMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTraceOnNavMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanTraceOnGeometry_MetaData[];
#endif
		static void NewProp_bCanTraceOnGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTraceOnGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDisableTrace_MetaData[];
#endif
		static void NewProp_bCanDisableTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDisableTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanProjectDown_MetaData[];
#endif
		static void NewProp_bCanProjectDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanProjectDown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvTraceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_VersionNum_MetaData[] = {
		{ "Comment", "/** version number for updates */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "version number for updates" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_VersionNum = { "VersionNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, VersionNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_VersionNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_VersionNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_NavigationFilter_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** navigation filter for tracing */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "navigation filter for tracing" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_NavigationFilter = { "NavigationFilter", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, NavigationFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_NavigationFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_NavigationFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectDown_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** search height: below point */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "search height: below point" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectDown = { "ProjectDown", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, ProjectDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectUp_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** search height: above point */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "search height: above point" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectUp = { "ProjectUp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, ProjectUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentX_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for trace" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentX = { "ExtentX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, ExtentX), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentY_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for trace" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentY = { "ExtentY", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, ExtentY), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentZ_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for trace" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentZ = { "ExtentZ", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, ExtentZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_PostProjectionVerticalOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** this value will be added to resulting location's Z axis. Can be useful when \n\x09 *\x09projecting points to navigation since navmesh is just an approximation of level \n\x09 *\x09geometry and items may end up being under collide-able geometry which would \n\x09 *\x09""for example falsify visibility tests.*/" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "this value will be added to resulting location's Z axis. Can be useful when\n    projecting points to navigation since navmesh is just an approximation of level\n    geometry and items may end up being under collide-able geometry which would\n    for example falsify visibility tests." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_PostProjectionVerticalOffset = { "PostProjectionVerticalOffset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, PostProjectionVerticalOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_PostProjectionVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_PostProjectionVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** geometry trace channel */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "geometry trace channel" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceChannel_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_SerializedChannel_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** geometry trace channel for serialization purposes */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "geometry trace channel for serialization purposes" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_SerializedChannel = { "SerializedChannel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, SerializedChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_SerializedChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_SerializedChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceProfileName_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** geometry trace profile */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "geometry trace profile" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceProfileName = { "TraceProfileName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, TraceProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceShape_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** shape used for geometry tracing */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape used for geometry tracing" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceShape = { "TraceShape", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, TraceShape), Z_Construct_UEnum_AIModule_EEnvTraceShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceShape_MetaData)) }; // 4157834257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceMode_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** shape used for geometry tracing */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape used for geometry tracing" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceMode = { "TraceMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvTraceData, TraceMode), Z_Construct_UEnum_AIModule_EEnvQueryTrace, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceMode_MetaData)) }; // 461632333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, trace will run on complex collisions */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, trace will run on complex collisions" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((FEnvTraceData*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, trace will look only for blocking hits */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, trace will look only for blocking hits" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits_SetBit(void* Obj)
	{
		((FEnvTraceData*)Obj)->bOnlyBlockingHits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits = { "bOnlyBlockingHits", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, editor will allow picking navmesh trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, editor will allow picking navmesh trace" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh_SetBit(void* Obj)
	{
		((FEnvTraceData*)Obj)->bCanTraceOnNavMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh = { "bCanTraceOnNavMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, editor will allow picking geometry trace */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, editor will allow picking geometry trace" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry_SetBit(void* Obj)
	{
		((FEnvTraceData*)Obj)->bCanTraceOnGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry = { "bCanTraceOnGeometry", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, editor will allow  */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, editor will allow" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace_SetBit(void* Obj)
	{
		((FEnvTraceData*)Obj)->bCanDisableTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace = { "bCanDisableTrace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** if set, editor show height up/down properties for projection */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, editor show height up/down properties for projection" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown_SetBit(void* Obj)
	{
		((FEnvTraceData*)Obj)->bCanProjectDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown = { "bCanProjectDown", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEnvTraceData), &Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvTraceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_VersionNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_NavigationFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ProjectUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_ExtentZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_PostProjectionVerticalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_SerializedChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_TraceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bOnlyBlockingHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnNavMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanTraceOnGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanDisableTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewProp_bCanProjectDown,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvTraceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvTraceData",
		sizeof(FEnvTraceData),
		alignof(FEnvTraceData),
		Z_Construct_UScriptStruct_FEnvTraceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvTraceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvTraceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData()
	{
		if (!Z_Registration_Info_UScriptStruct_EnvTraceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvTraceData.InnerSingleton, Z_Construct_UScriptStruct_FEnvTraceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnvTraceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvOverlapData;
class UScriptStruct* FEnvOverlapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvOverlapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvOverlapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvOverlapData, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvOverlapData"));
	}
	return Z_Registration_Info_UScriptStruct_EnvOverlapData.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvOverlapData>()
{
	return FEnvOverlapData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnvOverlapData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtentZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapShape_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyBlockingHits_MetaData[];
#endif
		static void NewProp_bOnlyBlockingHits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyBlockingHits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverlapComplex_MetaData[];
#endif
		static void NewProp_bOverlapComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverlapComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipOverlapQuerier_MetaData[];
#endif
		static void NewProp_bSkipOverlapQuerier_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipOverlapQuerier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvOverlapData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentX_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for overlap" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentX = { "ExtentX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvOverlapData, ExtentX), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentY_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for overlap" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentY = { "ExtentY", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvOverlapData, ExtentY), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentZ_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** shape parameter for overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape parameter for overlap" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentZ = { "ExtentZ", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvOverlapData, ExtentZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ShapeOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "Tooltip", "Offset from the item location at which to test the overlap.  For example, you may need to offset vertically to avoid overlaps with flat ground." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ShapeOffset = { "ShapeOffset", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvOverlapData, ShapeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ShapeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ShapeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapChannel_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** geometry trace channel used for overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "geometry trace channel used for overlap" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapChannel = { "OverlapChannel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvOverlapData, OverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapShape_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** shape used for geometry overlap */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "shape used for geometry overlap" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapShape = { "OverlapShape", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvOverlapData, OverlapShape), Z_Construct_UEnum_AIModule_EEnvOverlapShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapShape_MetaData)) }; // 851909583
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** if set, overlap will look only for blocking hits */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, overlap will look only for blocking hits" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits_SetBit(void* Obj)
	{
		((FEnvOverlapData*)Obj)->bOnlyBlockingHits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits = { "bOnlyBlockingHits", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEnvOverlapData), &Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** if set, overlap will run on complex collisions */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, overlap will run on complex collisions" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex_SetBit(void* Obj)
	{
		((FEnvOverlapData*)Obj)->bOverlapComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex = { "bOverlapComplex", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEnvOverlapData), &Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier_MetaData[] = {
		{ "Category", "Overlap" },
		{ "Comment", "/** if set, overlap will skip querier context hits */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "if set, overlap will skip querier context hits" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier_SetBit(void* Obj)
	{
		((FEnvOverlapData*)Obj)->bSkipOverlapQuerier = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier = { "bSkipOverlapQuerier", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEnvOverlapData), &Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvOverlapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ExtentZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_ShapeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_OverlapShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOnlyBlockingHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bOverlapComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewProp_bSkipOverlapQuerier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvOverlapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvOverlapData",
		sizeof(FEnvOverlapData),
		alignof(FEnvOverlapData),
		Z_Construct_UScriptStruct_FEnvOverlapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvOverlapData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvOverlapData()
	{
		if (!Z_Registration_Info_UScriptStruct_EnvOverlapData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvOverlapData.InnerSingleton, Z_Construct_UScriptStruct_FEnvOverlapData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnvOverlapData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvQueryResult;
class UScriptStruct* FEnvQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryResult, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_EnvQueryResult.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEnvQueryResult>()
{
	return FEnvQueryResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnvQueryResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "EQS" },
		{ "Comment", "/** type of generated items */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "type of generated items" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryResult, ItemType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryItemType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_OptionIndex_MetaData[] = {
		{ "Category", "EQS" },
		{ "Comment", "/** index of query option, that generated items */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "index of query option, that generated items" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryResult, OptionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_OptionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_OptionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_QueryID_MetaData[] = {
		{ "Category", "EQS" },
		{ "Comment", "/** instance ID */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "instance ID" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_QueryID = { "QueryID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvQueryResult, QueryID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_QueryID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_QueryID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvQueryResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewProp_QueryID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvQueryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EnvQueryResult",
		sizeof(FEnvQueryResult),
		alignof(FEnvQueryResult),
		Z_Construct_UScriptStruct_FEnvQueryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvQueryResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryResult()
	{
		if (!Z_Registration_Info_UScriptStruct_EnvQueryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FEnvQueryResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnvQueryResult.InnerSingleton;
	}
	void UEnvQueryTypes::StaticRegisterNativesUEnvQueryTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTypes);
	UClass* Z_Construct_UClass_UEnvQueryTypes_NoRegister()
	{
		return UEnvQueryTypes::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryTypes.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTypes_Statics::ClassParams = {
		&UEnvQueryTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTypes()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTypes.OuterSingleton, Z_Construct_UClass_UEnvQueryTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTypes.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTypes>()
	{
		return UEnvQueryTypes::StaticClass();
	}
	UEnvQueryTypes::UEnvQueryTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTypes);
	UEnvQueryTypes::~UEnvQueryTypes() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDynamicParam;
class UScriptStruct* FAIDynamicParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDynamicParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDynamicParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDynamicParam, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDynamicParam"));
	}
	return Z_Registration_Info_UScriptStruct_AIDynamicParam.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDynamicParam>()
{
	return FAIDynamicParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIDynamicParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParamType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BBKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDynamicParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDynamicParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDynamicParam, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDynamicParam, ParamType), Z_Construct_UEnum_AIModule_EAIParamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType_MetaData)) }; // 3721689903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDynamicParam, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_BBKey_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_BBKey = { "BBKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDynamicParam, BBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_BBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_BBKey_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDynamicParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_ParamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewProp_BBKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDynamicParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIDynamicParam",
		sizeof(FAIDynamicParam),
		alignof(FAIDynamicParam),
		Z_Construct_UScriptStruct_FAIDynamicParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDynamicParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AIDynamicParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDynamicParam.InnerSingleton, Z_Construct_UScriptStruct_FAIDynamicParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIDynamicParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest;
class UScriptStruct* FEQSParametrizedQueryExecutionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EQSParametrizedQueryExecutionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FEQSParametrizedQueryExecutionRequest>()
{
	return FEQSParametrizedQueryExecutionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueryTemplate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EQSQueryBlackboardKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EQSQueryBlackboardKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RunMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBBKeyForQueryTemplate_MetaData[];
#endif
		static void NewProp_bUseBBKeyForQueryTemplate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBBKeyForQueryTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEQSParametrizedQueryExecutionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryTemplate_MetaData[] = {
		{ "Category", "Node" },
		{ "EditCondition", "!bUseBBKeyForQueryTemplate" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryTemplate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig_Inner = { "QueryConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(nullptr, 0) }; // 206899154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig = { "QueryConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, QueryConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig_MetaData)) }; // 206899154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_EQSQueryBlackboardKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key storing an EQS query template */" },
		{ "EditCondition", "bUseBBKeyForQueryTemplate" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "blackboard key storing an EQS query template" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_EQSQueryBlackboardKey = { "EQSQueryBlackboardKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, EQSQueryBlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_EQSQueryBlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_EQSQueryBlackboardKey_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_RunMode_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** determines which item will be stored (All = only first matching) */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
		{ "ToolTip", "determines which item will be stored (All = only first matching)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_RunMode = { "RunMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEQSParametrizedQueryExecutionRequest, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_RunMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_RunMode_MetaData)) }; // 61795048
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate_MetaData[] = {
		{ "Category", "Node" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate_SetBit(void* Obj)
	{
		((FEQSParametrizedQueryExecutionRequest*)Obj)->bUseBBKeyForQueryTemplate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate = { "bUseBBKeyForQueryTemplate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEQSParametrizedQueryExecutionRequest), &Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_QueryConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_EQSQueryBlackboardKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_RunMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewProp_bUseBBKeyForQueryTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"EQSParametrizedQueryExecutionRequest",
		sizeof(FEQSParametrizedQueryExecutionRequest),
		alignof(FEQSParametrizedQueryExecutionRequest),
		Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.InnerSingleton, Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::EnumInfo[] = {
		{ EEnvTestPurpose_StaticEnum, TEXT("EEnvTestPurpose"), &Z_Registration_Info_UEnum_EEnvTestPurpose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1017917835U) },
		{ EEnvTestFilterType_StaticEnum, TEXT("EEnvTestFilterType"), &Z_Registration_Info_UEnum_EEnvTestFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1409564529U) },
		{ EEnvTestScoreEquation_StaticEnum, TEXT("EEnvTestScoreEquation"), &Z_Registration_Info_UEnum_EEnvTestScoreEquation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 600997327U) },
		{ EEnvTestWeight_StaticEnum, TEXT("EEnvTestWeight"), &Z_Registration_Info_UEnum_EEnvTestWeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1847770608U) },
		{ EEnvTestCost_StaticEnum, TEXT("EEnvTestCost"), &Z_Registration_Info_UEnum_EEnvTestCost, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3208496250U) },
		{ EEnvTestFilterOperator_StaticEnum, TEXT("EEnvTestFilterOperator"), &Z_Registration_Info_UEnum_EEnvTestFilterOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1101179190U) },
		{ EEnvTestScoreOperator_StaticEnum, TEXT("EEnvTestScoreOperator"), &Z_Registration_Info_UEnum_EEnvTestScoreOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1809833517U) },
		{ EEnvQueryStatus_StaticEnum, TEXT("EEnvQueryStatus"), &Z_Registration_Info_UEnum_EEnvQueryStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3316766208U) },
		{ EEnvQueryRunMode_StaticEnum, TEXT("EEnvQueryRunMode"), &Z_Registration_Info_UEnum_EEnvQueryRunMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 61795048U) },
		{ EEnvQueryParam_StaticEnum, TEXT("EEnvQueryParam"), &Z_Registration_Info_UEnum_EEnvQueryParam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3720710147U) },
		{ EAIParamType_StaticEnum, TEXT("EAIParamType"), &Z_Registration_Info_UEnum_EAIParamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3721689903U) },
		{ EEnvQueryTrace_StaticEnum, TEXT("EEnvQueryTrace"), &Z_Registration_Info_UEnum_EEnvQueryTrace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 461632333U) },
		{ EEnvTraceShape_StaticEnum, TEXT("EEnvTraceShape"), &Z_Registration_Info_UEnum_EEnvTraceShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4157834257U) },
		{ EEnvOverlapShape_StaticEnum, TEXT("EEnvOverlapShape"), &Z_Registration_Info_UEnum_EEnvOverlapShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 851909583U) },
		{ EEnvDirection_StaticEnum, TEXT("EEnvDirection"), &Z_Registration_Info_UEnum_EEnvDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2244747739U) },
		{ EEnvQueryTestClamping_StaticEnum, TEXT("EEnvQueryTestClamping"), &Z_Registration_Info_UEnum_EEnvQueryTestClamping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3479088029U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ScriptStructInfo[] = {
		{ FEnvNamedValue::StaticStruct, Z_Construct_UScriptStruct_FEnvNamedValue_Statics::NewStructOps, TEXT("EnvNamedValue"), &Z_Registration_Info_UScriptStruct_EnvNamedValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvNamedValue), 764008598U) },
		{ FEnvDirection::StaticStruct, Z_Construct_UScriptStruct_FEnvDirection_Statics::NewStructOps, TEXT("EnvDirection"), &Z_Registration_Info_UScriptStruct_EnvDirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvDirection), 3711099915U) },
		{ FEnvTraceData::StaticStruct, Z_Construct_UScriptStruct_FEnvTraceData_Statics::NewStructOps, TEXT("EnvTraceData"), &Z_Registration_Info_UScriptStruct_EnvTraceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvTraceData), 3505047610U) },
		{ FEnvOverlapData::StaticStruct, Z_Construct_UScriptStruct_FEnvOverlapData_Statics::NewStructOps, TEXT("EnvOverlapData"), &Z_Registration_Info_UScriptStruct_EnvOverlapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvOverlapData), 739169525U) },
		{ FEnvQueryResult::StaticStruct, Z_Construct_UScriptStruct_FEnvQueryResult_Statics::NewStructOps, TEXT("EnvQueryResult"), &Z_Registration_Info_UScriptStruct_EnvQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvQueryResult), 897379277U) },
		{ FAIDynamicParam::StaticStruct, Z_Construct_UScriptStruct_FAIDynamicParam_Statics::NewStructOps, TEXT("AIDynamicParam"), &Z_Registration_Info_UScriptStruct_AIDynamicParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDynamicParam), 206899154U) },
		{ FEQSParametrizedQueryExecutionRequest::StaticStruct, Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest_Statics::NewStructOps, TEXT("EQSParametrizedQueryExecutionRequest"), &Z_Registration_Info_UScriptStruct_EQSParametrizedQueryExecutionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEQSParametrizedQueryExecutionRequest), 104046496U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTypes, UEnvQueryTypes::StaticClass, TEXT("UEnvQueryTypes"), &Z_Registration_Info_UClass_UEnvQueryTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTypes), 332225852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_3322281550(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
