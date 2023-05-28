// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Avoidance/MassAvoidanceFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassAvoidanceFragments() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassNavigationEdgesFragment();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References

static_assert(std::is_polymorphic<FMassMovingAvoidanceParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassMovingAvoidanceParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMovingAvoidanceParameters;
class UScriptStruct* FMassMovingAvoidanceParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMovingAvoidanceParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMovingAvoidanceParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassMovingAvoidanceParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassMovingAvoidanceParameters.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassMovingAvoidanceParameters>()
{
	return FMassMovingAvoidanceParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleDetectionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleDetectionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOfPathDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOfPathDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOfPathDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOfPathDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOfPathAvoidanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOfPathAvoidanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOfPathAvoidanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOfPathAvoidanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingObstacleAvoidanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingObstacleAvoidanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticObstacleClearanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticObstacleClearanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeparationRadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SeparationRadiusScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleSeparationStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleSeparationStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleSeparationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleSeparationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentSeparationStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentSeparationStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentSeparationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentSeparationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictiveAvoidanceTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictiveAvoidanceTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictiveAvoidanceRadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictiveAvoidanceRadiusScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictiveAvoidanceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictiveAvoidanceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstaclePredictiveAvoidanceStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstaclePredictiveAvoidanceStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentPredictiveAvoidanceStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentPredictiveAvoidanceStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMovingAvoidanceParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleDetectionDistance_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The distance at which neighbour agents are detected. Range: 200...600 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "The distance at which neighbour agents are detected. Range: 200...600" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleDetectionDistance = { "ObstacleDetectionDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, ObstacleDetectionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleDetectionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleDetectionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathDuration_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The time the agent is considered to be near the start of the path when starting to move. Range: 0..3 */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "The time the agent is considered to be near the start of the path when starting to move. Range: 0..3" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathDuration = { "StartOfPathDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, StartOfPathDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathDuration_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The time the agent is considered to be near the end of the path when approaching end. Range: 0..3 */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "The time the agent is considered to be near the end of the path when approaching end. Range: 0..3" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathDuration = { "EndOfPathDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, EndOfPathDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathAvoidanceScale_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to tune down the avoidance at the start of the path. Range: 0..1. */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "How much to tune down the avoidance at the start of the path. Range: 0..1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathAvoidanceScale = { "StartOfPathAvoidanceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, StartOfPathAvoidanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathAvoidanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathAvoidanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathAvoidanceScale_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to tune down the avoidance towards the end of the path. Range: 0..1 */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "How much to tune down the avoidance towards the end of the path. Range: 0..1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathAvoidanceScale = { "EndOfPathAvoidanceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, EndOfPathAvoidanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathAvoidanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathAvoidanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StandingObstacleAvoidanceScale_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to tune down the avoidance when an obstacle is standing. This allows the agents to pass through standing agents more easily. Range: 0..1 */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "How much to tune down the avoidance when an obstacle is standing. This allows the agents to pass through standing agents more easily. Range: 0..1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StandingObstacleAvoidanceScale = { "StandingObstacleAvoidanceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, StandingObstacleAvoidanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StandingObstacleAvoidanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StandingObstacleAvoidanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StaticObstacleClearanceScale_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Agent radius scale for avoiding static obstacles near wall. If the clarance between obstacle and wall is less than the scaled radius, the agent will not try to move through the gap. Range: 0..1 */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Agent radius scale for avoiding static obstacles near wall. If the clarance between obstacle and wall is less than the scaled radius, the agent will not try to move through the gap. Range: 0..1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StaticObstacleClearanceScale = { "StaticObstacleClearanceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, StaticObstacleClearanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StaticObstacleClearanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StaticObstacleClearanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_SeparationRadiusScale_MetaData[] = {
		{ "Category", "Separation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Agent radius scale for separation. Making it smaller makes the separation softer. Range: 0.8..1 */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Agent radius scale for separation. Making it smaller makes the separation softer. Range: 0.8..1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_SeparationRadiusScale = { "SeparationRadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, SeparationRadiusScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_SeparationRadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_SeparationRadiusScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationStiffness_MetaData[] = {
		{ "Category", "Separation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Separation force stiffness between agents and obstacles. Range: 100..500 N/cm */" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Separation force stiffness between agents and obstacles. Range: 100..500 N/cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationStiffness = { "ObstacleSeparationStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, ObstacleSeparationStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationDistance_MetaData[] = {
		{ "Category", "Separation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Separation force effect distance. The actual observed separation distance will be smaller. Range: 0..100 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Separation force effect distance. The actual observed separation distance will be smaller. Range: 0..100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationDistance = { "ObstacleSeparationDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, ObstacleSeparationDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationStiffness_MetaData[] = {
		{ "Category", "Separation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Environment separation force stiffness between agents and walls. Range: 200..1000 N/cm */" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Environment separation force stiffness between agents and walls. Range: 200..1000 N/cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationStiffness = { "EnvironmentSeparationStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, EnvironmentSeparationStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationDistance_MetaData[] = {
		{ "Category", "Separation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Environment separation force effect distance. The actual observed separation distance will be smaller. Range: 0..200 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Environment separation force effect distance. The actual observed separation distance will be smaller. Range: 0..200" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationDistance = { "EnvironmentSeparationDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, EnvironmentSeparationDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceTime_MetaData[] = {
		{ "Category", "Predictive Avoidance" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** How far in the future the agent reacts to collisions. Range: 1..3, Indoor humans 1.4, outdoor humans 2.4 (seconds). */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "How far in the future the agent reacts to collisions. Range: 1..3, Indoor humans 1.4, outdoor humans 2.4 (seconds)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceTime = { "PredictiveAvoidanceTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, PredictiveAvoidanceTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceRadiusScale_MetaData[] = {
		{ "Category", "Predictive Avoidance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Agent radius scale for anticipatory avoidance. Making the scale smaller makes the agent more eager to squeeze through other agents. Range: 0.5..1 */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Agent radius scale for anticipatory avoidance. Making the scale smaller makes the agent more eager to squeeze through other agents. Range: 0.5..1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceRadiusScale = { "PredictiveAvoidanceRadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, PredictiveAvoidanceRadiusScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceRadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceRadiusScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceDistance_MetaData[] = {
		{ "Category", "Predictive Avoidance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Predictive avoidance force effect distance. The avoidance force is applied at the point in future where the agents are closest. The actual observed separation distance will be smaller. Range: 0..200 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Predictive avoidance force effect distance. The avoidance force is applied at the point in future where the agents are closest. The actual observed separation distance will be smaller. Range: 0..200" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceDistance = { "PredictiveAvoidanceDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, PredictiveAvoidanceDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstaclePredictiveAvoidanceStiffness_MetaData[] = {
		{ "Category", "Predictive Avoidance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Predictive avoidance force stiffness between agents and obstacles. Range: 400..1000 N/cm */" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Predictive avoidance force stiffness between agents and obstacles. Range: 400..1000 N/cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstaclePredictiveAvoidanceStiffness = { "ObstaclePredictiveAvoidanceStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, ObstaclePredictiveAvoidanceStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstaclePredictiveAvoidanceStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstaclePredictiveAvoidanceStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentPredictiveAvoidanceStiffness_MetaData[] = {
		{ "Category", "Predictive Avoidance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Predictive avoidance force stiffness between agents and walls. Range: 400..1000 N/cm */" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Predictive avoidance force stiffness between agents and walls. Range: 400..1000 N/cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentPredictiveAvoidanceStiffness = { "EnvironmentPredictiveAvoidanceStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingAvoidanceParameters, EnvironmentPredictiveAvoidanceStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentPredictiveAvoidanceStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentPredictiveAvoidanceStiffness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleDetectionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StartOfPathAvoidanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EndOfPathAvoidanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StandingObstacleAvoidanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_StaticObstacleClearanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_SeparationRadiusScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstacleSeparationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentSeparationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceRadiusScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_PredictiveAvoidanceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_ObstaclePredictiveAvoidanceStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewProp_EnvironmentPredictiveAvoidanceStiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassMovingAvoidanceParameters",
		sizeof(FMassMovingAvoidanceParameters),
		alignof(FMassMovingAvoidanceParameters),
		Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassMovingAvoidanceParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMovingAvoidanceParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassMovingAvoidanceParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassStandingAvoidanceParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassStandingAvoidanceParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStandingAvoidanceParameters;
class UScriptStruct* FMassStandingAvoidanceParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStandingAvoidanceParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStandingAvoidanceParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassStandingAvoidanceParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassStandingAvoidanceParameters.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassStandingAvoidanceParameters>()
{
	return FMassStandingAvoidanceParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostObstacleDetectionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostObstacleDetectionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostToTargetMaxDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostToTargetMaxDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostSteeringReactionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostSteeringReactionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostStandSlowdownRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostStandSlowdownRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostMaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostMaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostMaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostMaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostVelocityDampingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostVelocityDampingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostSeparationRadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostSeparationRadiusScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostSeparationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostSeparationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostSeparationStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GhostSeparationStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingObstacleAvoidanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovingObstacleAvoidanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingObstacleDirectionalScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovingObstacleDirectionalScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingObstaclePersonalSpaceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovingObstaclePersonalSpaceScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStandingAvoidanceParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostObstacleDetectionDistance_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The distance at which neighbour agents are detected when updating the ghost. */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "The distance at which neighbour agents are detected when updating the ghost." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostObstacleDetectionDistance = { "GhostObstacleDetectionDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostObstacleDetectionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostObstacleDetectionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostObstacleDetectionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostToTargetMaxDeviation_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How far the ghost can deviate from the target location. */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "How far the ghost can deviate from the target location." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostToTargetMaxDeviation = { "GhostToTargetMaxDeviation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostToTargetMaxDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostToTargetMaxDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostToTargetMaxDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSteeringReactionTime_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/**  */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSteeringReactionTime = { "GhostSteeringReactionTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostSteeringReactionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSteeringReactionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSteeringReactionTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostStandSlowdownRadius_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The steering will slow down when the ghost is closer than this distance to the target. Range: 5..50 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "The steering will slow down when the ghost is closer than this distance to the target. Range: 5..50" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostStandSlowdownRadius = { "GhostStandSlowdownRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostStandSlowdownRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostStandSlowdownRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostStandSlowdownRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxSpeed_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Mas speed the ghost can move. */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Mas speed the ghost can move." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxSpeed = { "GhostMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostMaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxAcceleration_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max acceleration of the ghost. Making this larger than the agent speed will make the ghost react quickly.  */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Max acceleration of the ghost. Making this larger than the agent speed will make the ghost react quickly." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxAcceleration = { "GhostMaxAcceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostMaxAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostVelocityDampingTime_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How quickly the ghost speed goes to zero. The smaller the value, the more the movement is dampened. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "How quickly the ghost speed goes to zero. The smaller the value, the more the movement is dampened." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostVelocityDampingTime = { "GhostVelocityDampingTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostVelocityDampingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostVelocityDampingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostVelocityDampingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationRadiusScale_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Agent radius scale for separation. Making it smaller makes the separation softer. Range: 0.8..1 */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Agent radius scale for separation. Making it smaller makes the separation softer. Range: 0.8..1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationRadiusScale = { "GhostSeparationRadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostSeparationRadiusScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationRadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationRadiusScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationDistance_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationDistance = { "GhostSeparationDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostSeparationDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationStiffness_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "N/cm" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationStiffness = { "GhostSeparationStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, GhostSeparationStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleAvoidanceScale_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Much much avoidance is scaled for moving obstacles. Range: 1..5. */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "Much much avoidance is scaled for moving obstacles. Range: 1..5." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleAvoidanceScale = { "MovingObstacleAvoidanceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, MovingObstacleAvoidanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleAvoidanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleAvoidanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleDirectionalScale_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much the ghost avoidance is tuned down when the moving obstacle is moving away from the ghost. Range: 0..1 */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "How much the ghost avoidance is tuned down when the moving obstacle is moving away from the ghost. Range: 0..1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleDirectionalScale = { "MovingObstacleDirectionalScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, MovingObstacleDirectionalScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleDirectionalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleDirectionalScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstaclePersonalSpaceScale_MetaData[] = {
		{ "Category", "Ghost" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much extra space is preserved in front of moving obstacles (relative to their size). Range: 1..5 */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
		{ "ToolTip", "How much extra space is preserved in front of moving obstacles (relative to their size). Range: 1..5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstaclePersonalSpaceScale = { "MovingObstaclePersonalSpaceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingAvoidanceParameters, MovingObstaclePersonalSpaceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstaclePersonalSpaceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstaclePersonalSpaceScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostObstacleDetectionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostToTargetMaxDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSteeringReactionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostStandSlowdownRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostMaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostVelocityDampingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationRadiusScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_GhostSeparationStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleAvoidanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstacleDirectionalScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewProp_MovingObstaclePersonalSpaceScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassStandingAvoidanceParameters",
		sizeof(FMassStandingAvoidanceParameters),
		alignof(FMassStandingAvoidanceParameters),
		Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStandingAvoidanceParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStandingAvoidanceParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStandingAvoidanceParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassNavigationEdgesFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassNavigationEdgesFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassNavigationEdgesFragment;
class UScriptStruct* FMassNavigationEdgesFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassNavigationEdgesFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassNavigationEdgesFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassNavigationEdgesFragment, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassNavigationEdgesFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassNavigationEdgesFragment.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassNavigationEdgesFragment>()
{
	return FMassNavigationEdgesFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassNavigationEdgesFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassNavigationEdgesFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassNavigationEdgesFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassNavigationEdgesFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassNavigationEdgesFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassNavigationEdgesFragment",
		sizeof(FMassNavigationEdgesFragment),
		alignof(FMassNavigationEdgesFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassNavigationEdgesFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassNavigationEdgesFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassNavigationEdgesFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassNavigationEdgesFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassNavigationEdgesFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassNavigationEdgesFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassNavigationEdgesFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassMovingAvoidanceParameters::StaticStruct, Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters_Statics::NewStructOps, TEXT("MassMovingAvoidanceParameters"), &Z_Registration_Info_UScriptStruct_MassMovingAvoidanceParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMovingAvoidanceParameters), 2416075870U) },
		{ FMassStandingAvoidanceParameters::StaticStruct, Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters_Statics::NewStructOps, TEXT("MassStandingAvoidanceParameters"), &Z_Registration_Info_UScriptStruct_MassStandingAvoidanceParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStandingAvoidanceParameters), 212539898U) },
		{ FMassNavigationEdgesFragment::StaticStruct, Z_Construct_UScriptStruct_FMassNavigationEdgesFragment_Statics::NewStructOps, TEXT("MassNavigationEdgesFragment"), &Z_Registration_Info_UScriptStruct_MassNavigationEdgesFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassNavigationEdgesFragment), 395671859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceFragments_h_2847053849(TEXT("/Script/MassNavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
